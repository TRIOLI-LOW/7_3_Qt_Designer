#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>



namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    QString name_host ;
    QString name_db;
    QString login;
    QString pass;
    uint port;
    bool ok;
    Ui::Dialog *ui;
};

#endif // DIALOG_H
