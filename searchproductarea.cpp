#include "searchproductarea.h"

SearchProductArea::SearchProductArea(QWidget *parent) : QDialog(parent)
{
    radiobuttons_setup();
    layout_setup();
}

void SearchProductArea::radiobuttons_setup()
{
    QList<QString> label_names = {"Numer produktu", "Nazwa", "Kod kreskowy"};
    for (const QString& name : label_names)
        _radio_btns->addButton(new QRadioButton(name));
}

void SearchProductArea::layout_setup()
{
    _layout->addWidget(_label);
    for(const auto& btn : _radio_btns->buttons()){
        _layout->addWidget(btn);
        if(btn->text() == "Numer produktu")
            btn->setChecked(true);
    }
    _layout->addWidget(_searched_value);
    _layout->addWidget(_search);
    setLayout(_layout);
    setWindowTitle("Wyszukiwanie produktu");
}
