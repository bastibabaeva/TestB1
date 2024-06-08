#ifndef FILE_H
#define FILE_H
#include <QFileSystemWatcher>
#include <QString>
#include <QFile>
#include <QFileInfo>

class File:
{
    QString nameOfFile;
    qint32 sizeOfFile;
    QString pathOfFile;
    bool existOfFile;
public:
    File();
    //File();
    QString getNameOfFile(){return nameOfFile;}
    qint32 getSizeOfFile(){return sizeOfFile;}
    QString getPathOfFile(){return pathOfFile;}
    bool getExistOfFile(){return existOfFile;}
    void update();
};
#endif // FILE_H
