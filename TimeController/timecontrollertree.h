#ifndef TIMECONTROLLERTREE_H
#define TIMECONTROLLERTREE_H

#include "fieldcellabstract.h"
#include "timecontrollertreenode.h"

class TimeControllerTree
{
public:
    TimeControllerTree();
private:
    TimeControllerTreeNode* root;
    TimeControllerTreeNode* currentNode;
};

#endif // TIMECONTROLLERTREE_H
