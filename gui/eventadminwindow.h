#ifndef EVENTADMINWINDOW_H
#define EVENTADMINWINDOW_H

#include <QDialog>

namespace Ui {
class EventAdminWindow;
}

class EventAdminWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EventAdminWindow(QWidget *parent = 0);
    ~EventAdminWindow();

private slots:
    void on_activeEventButton_released();

    void on_backButton_released();

    void on_addUsersButton_released();

    void on_addActsButton_released();

    void on_deactEventButton_released();

    void on_listActsButton_released();

    void on_listUsersButton_clicked();


private:
    Ui::EventAdminWindow *ui;
    void change_button_status(bool status);


};

#endif // EVENTADMINWINDOW_H
