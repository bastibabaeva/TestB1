#ifndef CONSOLELOGER_H
#define CONSOLELOGER_H
#include <QObject>
#include <QDebug>
#include "loger.h"

class Console: public Loger
{
public:
    void logMessage(const QString&message){
        qDebug<<message<<Qt::endl;
    }

}
#endif // CONSOLELOGER_H
