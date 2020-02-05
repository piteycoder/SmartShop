#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QLayout>
#include <QPushButton>

#include "storage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void react();

private:
    void main_window_setup(QMainWindow* window);
    Ui::MainWindow *ui;
    QWidget* central_widget;
    Storage* additional = nullptr;
    QVBoxLayout* layout;
    QList<QPushButton*> buttons;
    QList<QString> button_names = {"Przegląd kartoteki", "Dodaj towary",
                                   "Usuń towary", "Odczyt kasy", "Ładowanie kas",
                                   "Statystyki", "Wyjdź"};
};
#endif // MAINWINDOW_H
