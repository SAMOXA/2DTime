#ifndef FIELDCELLABSTRACT_H
#define FIELDCELLABSTRACT_H

#include <cstddef>
#include <map> //For std::pair

class FieldCellAbstract
{
public:
    FieldCellAbstract(){}
    FieldCellAbstract(bool _state): state(_state){}
    virtual bool isAlive();
    void dead();
    void born();
private:

protected:
    bool state;
};

#endif // FIELDCELLABSTRACT_H
