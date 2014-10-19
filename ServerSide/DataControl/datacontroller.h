#ifndef DATACONTROLLER_H
#define DATACONTROLLER_H

#include <QtCore>
#include <QDebug>
#include <QFile>

#include "../common/student.h"
#include "../common/contentmanager.h"
#include "../common/administrator.h"
#include "PersistImp.h"

class dataController: public PersistImp
{
public:
    dataController();

    //API
    bool verifyUser(QString userID, QString &userName, QString &role);

};

#endif // DATACONTROLLER_H