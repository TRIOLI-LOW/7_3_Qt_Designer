#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    name_db = ui->ed_name_db->text();
    name_host = ui->ed_name_host->text();
    login = ui->ed_login->text();
    pass = ui->ed_pass->text();
    port = ui->ed_port->value();
 // Не знаю на сколько это правильно...
}

Dialog::~Dialog()
{
    delete ui;
}
