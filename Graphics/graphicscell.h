#ifndef GRAPHICSCELL_H
#define GRAPHICSCELL_H

#include <QColor>
#include <QGraphicsItem>
#include "fieldcell.h"

class GraphicsCell: public QGraphicsItem, public FieldCell
{
public:
    GraphicsCell();
    GraphicsCell(bool state);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    static void setCellSize(unsigned int _cellSizeX, unsigned int _cellSizeY);
    static unsigned int getCellSizeX();
    static unsigned int getCellSizeY();
    //GraphicsCell* createClone(int shiftX, int shiftY);
protected:
//    void mousePressEvent(QGraphicsSceneMouseEvent *event);
//    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
private:
    static unsigned int cellSizeX;
    static unsigned int cellSizeY;
};

#endif // GRAPHICSCELL_H
