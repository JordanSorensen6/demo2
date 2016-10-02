#ifndef MODELCLASS_H
#define MODELCLASS_H

#include <QObject>

class ModelClass : public QObject
{
    Q_OBJECT
public:
    explicit ModelClass(QObject *parent = 0);

signals:

public slots:
};

#endif // MODELCLASS_H