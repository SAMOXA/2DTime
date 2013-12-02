#include "customview.h"

void CustomView::wheelEvent(QWheelEvent* event)
{
    QMatrix matrix;
    if(event->delta() > 0){
        zoomFactor += 0.1;
    }else{
        zoomFactor -= 0.1;
        if(zoomFactor <= 0){
            zoomFactor = 0.1;
        }
    }
    matrix.scale(zoomFactor, zoomFactor);
    matrix.rotate(0);
    setMatrix(matrix);
}

void CustomView::keyReleaseEvent(QKeyEvent* event)
{
    if(event->key() == Qt::Key_M){
        if(sliding == false){
            setDragMode(QGraphicsView::ScrollHandDrag);
            setInteractive(false);
            sliding = true;
        }else{
            setDragMode(QGraphicsView::RubberBandDrag);
            setInteractive(true);
            sliding = false;
        }
        event->accept();
    }else{
        QGraphicsView::keyReleaseEvent(event);
    }
    update();
}
