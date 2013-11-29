#ifndef EVENTCONTROLLER_H
#define EVENTCONTROLLER_H

#include <QObject>
#include "field.h"

class EventController : public QObject
{
    Q_OBJECT
public:
    explicit EventController(QObject *parent = 0);
private:
    unsigned int currentTime;
    Field m_field;

signals:
    void timeChanged(unsigned int newTime);
    void fieldChanged(Field& newField);
public slots:
    void setNewTime(unsigned int time);
    void setNewField(Field& field);
};

#endif // EVENTCONTROLLER_H
