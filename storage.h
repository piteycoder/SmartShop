#ifndef STORAGE_H
#define STORAGE_H

#include <QWidget>
#include <QScrollArea>
#include <QSize>
#include <QBoxLayout>
#include <QLabel>
#include <QPushButton>

#include "product.h"
#include "searchproductarea.h"

class Storage : public QWidget
{
    Q_OBJECT
public:
    explicit Storage(QWidget *parent = nullptr);
    Storage(const QSize&& size);
    ~Storage();

private:
    void screen_setup();
    void search_area_setup();

private:
    // SEARCH AREA WIDGET
    SearchProductArea* _search_area = nullptr;

    QScrollArea* _product_table = nullptr;
    QHBoxLayout* _scroll_layout = nullptr;
    QLabel* _text = nullptr;

signals:

};

#endif // STORAGE_H
