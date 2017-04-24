#include "gui/activitysearch.h"
#include "ui_activitysearch.h"
#include "gui/activitywindow.h"
#include "gui/listactivities.h"
ActivitySearch::ActivitySearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ActivitySearch)
{
    ui->setupUi(this);

}

ActivitySearch::~ActivitySearch()
{
    delete ui;
}

void ActivitySearch::on_listWidget_itemClicked(QListWidgetItem *item)
{
    ActivityWindow la;
    this->hide();
    la.setModal(true);
    la.exec();
    this->show();
}

void ActivitySearch::on_back_released()
{
    ListActivities la;
    this->hide();
    la.setModal(true);
    la.exec();
    this->show();
}
