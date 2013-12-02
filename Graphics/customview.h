#ifndef CUSTOMVIEW_H
#define CUSTOMVIEW_H

#include <QGraphicsView>
#include <QWheelEvent>
#include <QGraphicsSceneMouseEvent>

class CustomView : public QGraphicsView
{
public:
    CustomView():zoomFactor(50.0){}
protected:
#ifndef QT_NO_WHEELEVENT
    void wheelEvent(QWheelEvent *);
#endif
    void keyReleaseEvent(QKeyEvent *event);
private:
    float zoomFactor;
    bool sliding;
};

#endif // CUSTOMVIEW_H
