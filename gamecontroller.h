#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include <QObject>
#include "field.h"

class GameController : public QObject
{
    Q_OBJECT
public:
    explicit GameController(QObject *parent = 0);
signals:
    void doneUpdateField(Field* newField);
public slots:
    void updateField(Field* oldField);
};

#endif // GAMECONTROLLER_H
