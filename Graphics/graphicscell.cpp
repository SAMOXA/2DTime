#include "graphicscell.h"
#include <QtWidgets>

unsigned int GraphicsCell::cellSizeX = 10;
unsigned int GraphicsCell::cellSizeY = 10;

GraphicsCell::GraphicsCell()
{
    setFlags(ItemIsSelectable);
}

GraphicsCell::GraphicsCell(bool state):FieldCell(state)
{
    setFlags(ItemIsSelectable);
}

QRectF GraphicsCell::boundingRect() const
{
    return QRectF(QPoint(0,0), QSizeF(cellSizeX, cellSizeY));
}

void GraphicsCell::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
    Q_UNUSED(widget);
    QColor fillColor = (option->state & QStyle::State_Selected) ? color.dark(150) : color;
    if (option->state & QStyle::State_MouseOver)
        fillColor = fillColor.light(125);
    painter->setPen(Qt::PenStyle::NoPen);
    if(isAlive()){
        painter->setBrush(QBrush(color));
    }else{
        painter->setBrush(QBrush(Qt::black));
    }
    painter->drawRect(QRectF(QPoint(0,0), QSizeF(cellSizeX, cellSizeY)));
}

void GraphicsCell::setCellSize(unsigned int _cellSizeX, unsigned int _cellSizeY)
{
    GraphicsCell::cellSizeX = _cellSizeX;
    GraphicsCell::cellSizeY = _cellSizeY;
}

unsigned int GraphicsCell::getCellSizeX()
{
    return GraphicsCell::cellSizeX;
}

unsigned int GraphicsCell::getCellSizeY()
{
    return GraphicsCell::cellSizeY;
}

void GraphicsCell::mouseReleaseEvent(QGraphicsSceneMouseEvent* event)
{
    Q_UNUSED(event);
    if(isAlive()){
        dead();
    }else{
        born();
    }
    QGraphicsItem::update();
}
