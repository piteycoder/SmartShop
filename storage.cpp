#include "storage.h"

Storage::Storage(QWidget *parent) : QWidget(parent)
{
    Storage::showFullScreen();
    Storage::showMaximized();
    screen_setup();
}

Storage::Storage(const QSize&& size)
{
    this->resize(size.width(), size.height());
}

Storage::~Storage()
{
    delete _scroll_layout;
    delete _product_table;
}

void Storage::screen_setup()
{
    _search_area = new SearchProductArea();
    _search_area->show();

    /*_scroll_layout = new QHBoxLayout(this);
    _product_table = new QScrollArea(this);
    _text = new QLabel("TEST");
    QPushButton* button = new QPushButton("TROLO");
    _scroll_layout->addWidget(_text);
    _scroll_layout->addWidget(button);
    setLayout(_scroll_layout);*/
}

void Storage::search_area_setup()
{
    _search_area = new SearchProductArea();
}
