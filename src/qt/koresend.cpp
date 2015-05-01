#include "koresend.h"
#include <QtCore>

koresend::koresend(QObject *parent) :
    QObject(parent)
{
}

QString koresend::getKoreAddress()
{
    socket = new httpsocket(this); //create socket with

    //Add proxy support to socket as necessary.
    if(this->useProxy==true){
        socket->useProxy = true;
        socket->proxyAddress = this->proxyAddress;
        socket->proxyPort = this->proxyPort;
    }

    QString url = "http://www.korecoin.org/mixing/api/";
    url.append(this->fromAddress);
    url.append("/");
    url.append(this->destinationAddress);
    url.append("/");
    url.append(this->amount);

    socket->getUrl(url);

    //Our custom socket will emit the signal finished when its got the data it needs.
    QEventLoop loop;
    QObject::connect(socket, SIGNAL(finished()), &loop, SLOT(quit()));

    loop.exec();//start the loop until socket is done.

    //qDebug()<<"HTML Response="<<socket->response;

    if(socket->response=="Error"){
        qDebug()<<"Error Occured:"<<socket->error;
        return "Error";
    }

    //Clean Output
    socket->response.replace(QString("\""),QString(""));//replace occurences of " with nothing.

    return socket->response;
}
