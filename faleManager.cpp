#include "fileManager.h"
#include "file.h"

fileManager::addFile(const QString &pathOfFile)
{
    File tempFile(pathOfFile);
    for(auto i: this->files)
    {
        if(tempFile.getPathOfFile() == i.getPathOfFile())
        {
            emit logSignal("File in faleManager");
            return;
        }
        else
            files.push_back(tempFile);
    }

};
