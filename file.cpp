#include <file.h>
#include <QString>

File::File()
{
    this->nameOfFile=QString("",this);
    this->sizeOfFile=0;
    this->pathOfFile=QString("",this);
    this->existOfFile = false;
}
File::update()
{
    QFileInfo infOfFile(path);
    existOfFile=infOfFile.exists();
    sizeOfFile=infOfFile.size();
}
