#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>

class Product
{
public:
    Product();
    Product(int id, QString name, QString barcode, double price_net, int vat, double price_brt, int stock);
    void set_id(int id) {_id = id;}
    void set_name(QString name) {_name = name;}
    void set_barcode(QString barcode) {_barcode = barcode;}
    void set_price_net(double price_net) {_price_net = price_net;}
    void set_vat(int vat) {_vat = vat;}
    void set_price_brt(double price_brt) {_price_brt = price_brt;}
    void set_stock(int stock) {_in_stock = stock;}
    bool operator<(const Product& other) {return _id < other._id;}

private:
    int _id, _vat, _in_stock;
    QString _name, _barcode;
    double _price_net, _price_brt;
};

#endif // PRODUCT_H
