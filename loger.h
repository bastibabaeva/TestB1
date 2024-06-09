#ifndef LOGER_H
#define LOGER_H

#include <QString>
#include <QObject>

class Loger: public QObject
{
    Q_OBJECT

public slots:
    virtual void logMessage(const QString &message)=0;
};
#endif // LOGER_H
