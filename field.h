#ifndef FIELD_H
#define FIELD_H

#include "fieldcellabstract.h"

class Field
{
public:
    Field():m_field(0),sizeX(0),sizeY(0){}
    Field(unsigned int _sizeX, unsigned int _sizeY);
    FieldCellAbstract& getCell(unsigned int x, unsigned int y);
    unsigned int getSizeX();
    unsigned int getSizeY();
private:
    FieldCellAbstract** m_field;
    unsigned int sizeX;
    unsigned int sizeY;
};

#endif // FIELD_H
