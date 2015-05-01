#ifndef KORESEND_H
#define KORESEND_H

#include <QObject>
#include "httpsocket.h"

class koresend : public QObject
{
    Q_OBJECT
public:
    explicit koresend(QObject *parent = 0);
    QString fromAddress;
    QString destinationAddress;
    QString amount;
    QString getKoreAddress(); //returns the kore address assuming object variables set correctly.
    bool useProxy;
    QString proxyAddress;
    int proxyPort;
signals:

public slots:

private:
    httpsocket *socket;
};

#endif // KORESEND_H
