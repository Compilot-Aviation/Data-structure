#include<node.hh>
#include <string>
using std::string;

Node::Node(const string &s)
{
    this->elem_ = s;
    this->next_ = nullptr;
}
string Node::getElem()
{
    return this->elem_;
}

Node *Node::getNext()
{
    return this->next_;
}

void Node::setNext(Node * n){
    this->next_ = n;
}


