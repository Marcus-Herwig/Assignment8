#include "Node.hpp"
#include <stdlib.h>

Node::Node(int payload)
{
    this->payload = payload;
    this->nextNode = NULL;
    this->priorNode = NULL;
}

void Node::setNextNode(Node* n)
{
    this->nextNode = n;
}

void Node::setPriorNode(Node* n)
{
    this->priorNode = n;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}
        
int Node::getPayload()
{
    return this->payload;
}