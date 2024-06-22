#include "fileManager.h"
#include "file.h"
#include <QString>


fileManager::FileManager(Loger *lg)
{
    if(lg)
    {
        this->loger=lg;
        connect(this, &FileManager::log_signal, this, &Loger::logMessage);
    }
}
void fileManager::addFile(const QString &pathOfFile)
{
    qDebug() << "path of file: " << pathOfFile << Qt::endl;
    File tempFile(pathOfFile);
    for(auto i: this->files)
    {
        if(tempFile.getPathOfFile() == i.getPathOfFile())
        {
            emit logSignal("File in fileManager");
            return;
        }
        else
            files.push_back(tempFile);
    }
}
void fileManager::checkFileChanges(const QString&newFile, File&oldFile)
{
    if(newFile.exists()==newFile.getExistOfFile())
    {
        if(newFile.size()==newFile.getSizeOfFile())
        {
            return;
        }

        else
        {
            qDebug<<"Size of new file: "<<newFile<<"Size of old file: "<<oldFile.getSizeOfFile();
        }
    }
    else
    {
        if(!oldFile.getExistOfFile())
        {
            qDebug<<"Size new file exist: "<<newFile.size();
        }
        else
            qDebug<<"new file not exist: ";
    }
}
