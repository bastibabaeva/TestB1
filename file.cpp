#include <file.h>
#include <QString>

File::File()
{
    this->nameOfFile=QString("",this);
    this->sizeOfFile=0;
    this->pathOfFile=QString("",this);
    this->existOfFile = false;
}
File::File(const QString &path)
{
    QFileInfo infOfFile(path);
    this->nameOfFile=infOfFile.fileName();
    this->pathOfFile=infOfFile.filePath();
    this->sizeOfFile=infOfFile.size();
    this->existOfFile=infOfFile.exists();

}
File::update()
{
    QFileInfo infOfFile(pathOfFile);
    existOfFile=infOfFile.exists();
    sizeOfFile=infOfFile.size();
}
