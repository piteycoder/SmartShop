#include "product.h"

Product::Product()
{
    _id=0, _vat=0, _in_stock=0;
    _name="product", _barcode="";
    _price_net=0.0, _price_brt=0.0;
}

Product::Product(int id, QString name, QString barcode, double price_net, int vat, double price_brt, int stock)
{
    _id=id, _name=name, _barcode=barcode, _price_net=price_net;
    _vat=vat, _price_brt=price_brt, _in_stock=stock;
}
