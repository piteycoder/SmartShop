#ifndef SEARCHPRODUCTAREA_H
#define SEARCHPRODUCTAREA_H

#include <QWidget>
#include <QButtonGroup>
#include <QAbstractButton>
#include <QLabel>
#include <QLineEdit>
#include <QRadioButton>
#include <QVBoxLayout>
#include <QDialog>
#include <QPushButton>

class SearchProductArea : public QDialog // ma być QWidget
{
    Q_OBJECT
public:
    explicit SearchProductArea(QWidget *parent = nullptr);

private:
    QVBoxLayout* _layout = new QVBoxLayout;
    QButtonGroup* _radio_btns = new QButtonGroup;
    QLineEdit* _searched_value = new QLineEdit;
    QLabel* _label = new QLabel("Wyszukiwanie po:");
    QPushButton* _search = new QPushButton("Szukaj");

private:
    void radiobuttons_setup();
    void layout_setup();

signals:

};

#endif // SEARCHPRODUCTAREA_H
