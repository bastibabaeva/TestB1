#ifndef FILE_H
#define FILE_H
#include <QFileSystemWatcher>
#include <QString>

class File: public QFileSystemWatcher
{
    QString nameOfFile;
    qint32 sizeOfFile;
    QString pathOfFile;
    bool existOfFile;
public:
    File();
    void getNameOfFile(QString nameOfFile);
    void getSizeOfFile(QString nameOfFile);
    void getPathOfFile(QString nameOfFile);
    bool getExistOfFile(QString nameOfFile);
    update();
};
#endif // FILE_H
