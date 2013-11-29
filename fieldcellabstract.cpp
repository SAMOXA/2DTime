#include "fieldcellabstract.h"

bool FieldCellAbstract::isAlive()
{
    return state;
}

void FieldCellAbstract::dead()
{
    state = false;
}

void FieldCellAbstract::born()
{
    state = true;
}
