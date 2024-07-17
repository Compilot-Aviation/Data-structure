#include</workspaces/Data-structure/FullBinaryTree/node.hh>
#include <string>
#include "node.hh"
using std::string;

Node::Node(const string &s)
{
    this->elem_ = s;
    this->rightChildren_ = nullptr;
    this->leftChildren_ = nullptr;
    this->parent_ = nullptr;
}
Node::Node(const string &s, Node *p,  Node *n1,  Node *n2)
{
    this->elem_ = s;
    this->rightChildren_ = n2;
    this->leftChildren_ = n1;
    this->parent_ = p;
}
Node::Node(const string &s, Node *n)
{
    this->elem_ = s;
    this->parent_ = n;
}
Node *Node::getRightChildren()
{
    return this->rightChildren_;
}
Node *Node::getLeftChildren()
{
    return this->leftChildren_;
}
Node *Node::getParent()
{
    return this->parent_;
}
void *Node::setRightChildren(Node * n)
{
    this->rightChildren_ = n;
}
void *Node::setLeftChildren(Node * n)
{
    this->leftChildren_ = n;
}
void *Node::setParent(Node * n)
{
    this->parent_ = n;
}
string Node::getElem()
{
    return this->elem_;
}

