#ifndef FIELDCELL_H
#define FIELDCELL_H

#include "fieldcellabstract.h"
#include "field.h"
#include <QColor>

class FieldCell : public FieldCellAbstract
{
public:
    FieldCell():FieldCellAbstract(true),color(Qt::green){}
    FieldCell(bool _state, QColor _color = QColor(Qt::green)):FieldCellAbstract(_state),color(_color){}
    void update(Field* field);
protected:
    QColor color;
};

#endif // FIELDCELL_H
