#ifndef TIMECONTROLLERTREENODE_H
#define TIMECONTROLLERTREENODE_H

#include "field.h"
#include <vector>

class TimeControllerTreeNode
{
public:
    TimeControllerTreeNode();
    Field& getField();
    unsigned int getTime();
private:
    Field field;
    unsigned int time;
    std::vector<TimeControllerTreeNode*> childs;
    TimeControllerTreeNode* parent;
};

#endif // TIMECONTROLLERTREENODE_H
