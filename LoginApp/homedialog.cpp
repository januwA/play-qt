#include "homedialog.h"
#include "ui_homedialog.h"

HomeDialog::HomeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HomeDialog)
{
    ui->setupUi(this);
}

HomeDialog::~HomeDialog()
{
    delete ui;
}

void HomeDialog::setWelcomeText(QString text)
{
    ui->label->setText(text);
}
