#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "file.h"
#include "loger.h"
#include <QObject>
#include <QVector>

class fileManager: public QObject
{
    Q_OBJECT
private:
    QVector<File> files;
    Loger *loger;
public:
    fileManeger(Loger *loger);
    void addFile(const QString &pathOfFile);
    void checkFileChanges(const QString &currentFile, File &oldFile);
signals:
    void logSignal(const QString &str);

};

#endif // FILEMANAGER_H
