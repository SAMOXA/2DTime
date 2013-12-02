#ifndef GRID_H
#define GRID_H

#include <QColor>
#include <QGraphicsItem>

class Grid : public QGraphicsItem
{
public:
    Grid(const QColor &color, int cellSizeX, int cellSizeY, unsigned int cellCountX, unsigned int cellCountY);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
protected:

private:
    int cellSizeX;
    int cellSizeY;
    unsigned int cellCountX;
    unsigned int cellCountY;
    QColor color;
};

#endif // GRID_H
