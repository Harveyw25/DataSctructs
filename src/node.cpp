#include "node.h"

node::node(int value)
{
    data = value;
    next = 0;
}

node::node(int value, node* nodeToLink)
{
    data = value;
    next = nodeToLink;
}

node::~node()
{

}
