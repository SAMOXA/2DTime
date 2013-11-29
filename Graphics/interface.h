#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>
#include <QtUiTools>
#include <QGraphicsView>

#include "grid.h"
#include "field.h"
#include "graphicscell.h"

namespace Ui {
class Interface;
}

class Interface : public QWidget
{
    Q_OBJECT

public:
    explicit Interface(unsigned int cellSizeX, unsigned int cellSizeY,
                       unsigned int cellCountX, unsigned int cellCountY,
                       QWidget *parent = 0);
    ~Interface();

    void updateField(Field& field);

private:
    Ui::Interface* ui;
    QGraphicsView* gameField;
    QGraphicsView* timeTree;
    QGraphicsScene gameFieldScene;
    QGraphicsScene timeTreeScene;
    GraphicsCell*** m_field;
    unsigned int cellSizeX;
    unsigned int cellSizeY;
    unsigned int cellCountX;
    unsigned int cellCountY;
};

#endif // INTERFACE_H
