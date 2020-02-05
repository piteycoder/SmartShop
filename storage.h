#ifndef STORAGE_H
#define STORAGE_H

#include <QDialog>
#include <QScrollArea>
#include <QSize>

#include "product.h"

class Storage : public QDialog
{
    Q_OBJECT
public:
    explicit Storage(QWidget *parent = nullptr);
    Storage(const QSize&& size);


private:
    QScrollArea* product_table = new QScrollArea(this);

signals:

};

#endif // STORAGE_H
