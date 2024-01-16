#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    name_db = ui->ed_name_db->toPlainText();
    name_host = ui->ed_name_host->toPlainText();
    login = ui->ed_login->toPlainText();
    pass = ui->ed_pass->toPlainText();
    port = ui->ed_port->toPlainText().toUInt(&ok);
 // Не знаю на сколько это правильно...
}

Dialog::~Dialog()
{
    delete ui;
}
