<?php

/**
 * @file
 *  Migrations for vih_short_course_commerce.
 */

class VIHEmployees extends VIHMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import employees from CSV file.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'vih_employees') . '/import/employees.csv', $this->csvcolumns(), array('header_rows' => 1), $this->fields());

    $this->destination = new MigrateDestinationNode('employee');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')
      ->defaultValue('panopoly_wysiwyg_text');
    $this->addFieldMapping('field_info', 'info');
    $this->addFieldMapping('field_info:format')
      ->defaultValue('panopoly_wysiwyg_text');
    $this->addFieldMapping('field_vih_email', 'email');

    // Images
    $this->addFieldMapping('field_featured_image', 'all_images');
    $this->addFieldMapping('field_featured_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_featured_image:source_dir')
      ->defaultValue(drupal_get_path('module', 'vih_employees') . '/import/images');

    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('language', 'language');
  }

  function csvcolumns() {
    $columns[0] = array('id', 'Id');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('body', 'Body');
    $columns[3] = array('info', 'Info');
    $columns[4] = array('email', 'Email');
    $columns[5] = array('images', 'Picture');
    /*
    $columns[5] = array('images', 'Images');
    $columns[6] = array('hexadecimal', 'Hexadecimal');
    */
    return $columns;
  }

  function fields() {
    return array(
      'all_images' => 'An array of images, populated during prepareRow().',
    );
  }

  function prepareRow($row) {
    $row->all_images = explode(', ', $row->images);
    $row->uid = 1;
    $row->language = LANGUAGE_NONE;
  }
}

class VIHEmployeesContext extends VIHMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import employees context from CSV file.');
    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'vih_employees') . '/import/employees_context.csv', $this->csvcolumns(), array('header_rows' => 1), $this->fields());

    $this->destination = new MigrateDestinationNode('employee_context');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')
      ->defaultValue('panopoly_wysiwyg_text');

    // Link with breweries, based on the ID
    $this->addFieldMapping('field_employee_reference', 'teacher_reference')
      ->sourceMigration('VIHEmployees');

    // Images
    $this->addFieldMapping('field_featured_image', 'all_images');
    $this->addFieldMapping('field_featured_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_featured_image:source_dir')
      ->defaultValue(drupal_get_path('module', 'vih_employees') . '/import/images');

    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('language', 'language');
  }

  function csvcolumns() {
    $columns[0] = array('id', 'Id');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('body', 'Body');
    $columns[3] = array('teacher_reference', 'Teacherreference');
    $columns[4] = array('images', 'Picture');

    return $columns;
  }

  function fields() {
    return array(
      'all_images' => 'An array of images, populated during prepareRow().',
    );
  }

  function prepareRow($row) {
    $row->all_images = explode(', ', $row->images);
    $row->uid = 1;
    $row->language = LANGUAGE_NONE;
  }
}
