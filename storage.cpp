#include "storage.h"

Storage::Storage(QWidget *parent) : QDialog(parent)
{

}

Storage::Storage(const QSize&& size)
{
    this->resize(size.width(), size.height());
}
