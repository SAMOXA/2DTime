#include "field.h"

Field::Field(unsigned int _sizeX, unsigned int _sizeY):sizeX(_sizeX),sizeY(_sizeY)
{

}

FieldCellAbstract& Field::getCell(unsigned int x, unsigned int y)
{
    return m_field[x][y];
}

unsigned int Field::getSizeX()
{
    return sizeX;
}

unsigned int Field::getSizeY()
{
    return sizeY;
}
