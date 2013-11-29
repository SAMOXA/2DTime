#include "grid.h"
#include <QtWidgets>

Grid::Grid(const QColor& _color, int sizeX, int sizeY,
           unsigned int countX, unsigned int countY)
    : cellSizeX(sizeX), cellSizeY(sizeY), cellCountX(countX), cellCountY(countY), color(_color)
{
    //setZValue((cellSizeX + cellSizeY) % 2);
    //setFlags(ItemIsSelectable | ItemIsMovable);
    setAcceptHoverEvents(true);
}

QRectF Grid::boundingRect() const
{
    return QRectF(QPoint(0,0), QSizeF(cellSizeX*cellCountX+(cellCountX-1), cellSizeY*cellCountX+(cellCountX-1)));
}

void Grid::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
    Q_UNUSED(widget);
    QColor fillColor = (option->state & QStyle::State_Selected) ? color.dark(150) : color;
    if (option->state & QStyle::State_MouseOver)
        fillColor = fillColor.light(125);
    painter->setPen(QPen(color));
    unsigned int leftBound = cellSizeX*cellCountX+(cellCountX-1);
    unsigned int bottomBound = cellSizeY*cellCountX+(cellCountX-1);
    QPoint p1;
    p1.setY(0);
    QPoint p2;
    p2.setY(bottomBound);
    for(unsigned int i=0;i<cellCountX+1;++i){
        p1.setX(i*cellSizeX+i);
        p2.setX(i*cellSizeX+i);
        painter->drawLine(p1, p2);
    }
    p1.setX(0);
    p2.setY(leftBound);
    for(unsigned int i=0;i<cellCountX+1;++i){
        p1.setY(i*cellSizeY+i);
        p2.setY(i*cellSizeY+i);
        painter->drawLine(p1, p2);
    }
}

//void Grid::mousePressEvent(QGraphicsSceneMouseEvent* event)
//{
//    QGraphicsItem::mousePressEvent(event);
//    update();
//}

//void Grid::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
//{
//    QGraphicsItem::mouseMoveEvent(event);
//    update();
//}

//void Grid::mouseReleaseEvent(QGraphicsSceneMouseEvent* event)
//{
//    QGraphicsItem::mouseReleaseEvent(event);
//    update();
//}
