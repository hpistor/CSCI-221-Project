#include "gui/activitywindow.h"
#include "ui_activitywindow.h"
#include "gui/checkinwindow.h"

ActivityWindow::ActivityWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ActivityWindow)
{
    ui->setupUi(this);
}

ActivityWindow::~ActivityWindow()
{
    delete ui;
}

void ActivityWindow::on_QR_released()
{
    CheckInWindow la;
    this->hide();
    la.setModal(true);
    la.exec();
    this->show();
}
