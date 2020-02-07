#ifndef SEARCHPRODUCTAREA_H
#define SEARCHPRODUCTAREA_H

#include <QWidget>
#include <QButtonGroup>
#include <QAbstractButton>
#include <QLabel>
#include <QLineEdit>
#include <QRadioButton>
#include <QVBoxLayout>

class SearchProductArea : public QWidget
{
    Q_OBJECT
public:
    explicit SearchProductArea(QWidget *parent = nullptr);

private:
    QButtonGroup* _radio_btns = new QButtonGroup(this);
    QLineEdit* _searched_value = new QLineEdit(this);
    QLabel* _labels = nullptr;
    QRadioButton* _searched_type = nullptr;
    QVBoxLayout* layout = new QVBoxLayout(this);

signals:

};

#endif // SEARCHPRODUCTAREA_H
