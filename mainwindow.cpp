#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    main_window_setup(this);
}

MainWindow::~MainWindow()
{
    delete layout;
    delete central_widget;
    delete ui;
}

void MainWindow::main_window_setup(QMainWindow* window)
{
    int w_width=300, w_height=300;
    window->setFixedSize(QSize(w_width, w_height));
    central_widget = new QWidget(window);
    layout = new QVBoxLayout(central_widget);
    for (int i=0; i < button_names.size(); ++i){
        buttons.append(new QPushButton(button_names[i]));
        buttons[i]->setFixedSize(QSize(w_width-20, (w_height/button_names.size())));
        buttons[i]->setStyleSheet("font: bold;font-size: 20px;");
        QObject::connect(buttons[i], SIGNAL(clicked()), window, SLOT(react()));
        layout->addWidget(buttons[i]);
    }
    central_widget->setLayout(layout);
    setCentralWidget(central_widget);
}

void MainWindow::react(){
    QObject* clicked = QObject::sender();
    int i;
    for(i=0; clicked!=buttons[i];++i){}
    switch(i){
    case 0: {additional = new Storage(QSize(1000, 1000));}
        break;
    case 1: // uruchom przyjęcia
        break;
    case 2: // uruchom zdjęcia
        break;
    case 3: // uruchom odczyt kas
        break;
    case 4: // uruchom ładowanie danych do kas
        break;
    case 5: // uruchom statystyki
        break;
    case 6: QApplication::quit();
        break;
    }
    if(additional){
        additional->exec();
        delete additional;
    }
}
