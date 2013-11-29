#include "interface.h"
#include "ui_interface.h"

#include <iostream>

Interface::Interface(unsigned int _cellSizeX, unsigned int _cellSizeY,
                     unsigned int _cellCountX, unsigned int _cellCountY,
                     QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Interface),
    cellSizeX(_cellSizeX), cellSizeY(_cellSizeY), cellCountX(_cellCountX), cellCountY(_cellCountY)
{
    QUiLoader loader;
    QFile file("Graphics/interface.ui");
    file.open(QFile::ReadOnly);
    QWidget *formWidget = loader.load(&file, this);
    file.close();
    gameField = formWidget->findChild<QGraphicsView*>("gameField");
    timeTree = formWidget->findChild<QGraphicsView*>("timeTree");
    ui->setupUi(formWidget);
    QGraphicsItem *item = new Grid(QColor(Qt::red), cellSizeX, cellSizeY, cellCountX, cellCountY);
    item->setPos(QPointF(0, 0));
    gameFieldScene.addItem(item);
    m_field = new GraphicsCell**[cellCountX];
    for(unsigned int i=0;i<cellCountX;++i){
        m_field[i] = new GraphicsCell*[cellCountY];
        for(unsigned int j=0;j<cellCountY;++j){
            m_field[i][j] = new GraphicsCell((i+j)%2==0);
            m_field[i][j]->setPos(i*GraphicsCell::getCellSizeX()+i+1, j*GraphicsCell::getCellSizeY()+j+1);
            gameFieldScene.addItem(m_field[i][j]);
        }
    }
    gameField->setScene(&gameFieldScene);
    gameField->setDragMode(QGraphicsView::RubberBandDrag);
    //gameField->setDragMode(QGraphicsView::ScrollHandDrag);
    gameField->setInteractive(true);
    gameField->setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);
    gameField->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
}

Interface::~Interface()
{
    delete ui;
}

void Interface::updateField(Field& field)
{
    unsigned int sx = field.getSizeX(), sy = field.getSizeY();
    for(unsigned int i;i<sx;++i){
        for(unsigned int j=0;j<sy;++j){
            if(field.getCell(i,j).isAlive()){
                m_field[i][j]->born();
            }else{
                m_field[i][j]->dead();
            }
        }
    }
}
