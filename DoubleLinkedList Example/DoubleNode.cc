#include<DoubleNode.hh>
#include <string>
using std::string;

DoubleNode::DoubleNode(const string &s)
{
    this->elem_ = s;
    this->next_ = nullptr;
    this->prev_ = nullptr;
}
string DoubleNode::getElem()
{
    return this->elem_;
}

DoubleNode *DoubleNode::getNext()
{
    return this->next_;
}

void DoubleNode::setNext(DoubleNode * n){
    this->next_ = n;
}

DoubleNode *DoubleNode::getPrev()
{
    return this->prev_;
}

void DoubleNode::setPrev(DoubleNode * n){
    this->prev_ = n;
}