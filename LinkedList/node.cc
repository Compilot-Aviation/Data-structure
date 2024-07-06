#include<node.hh>
#include <string>
using std::string;

Node::Node(const string &s)
{
    this->info = s;
    this->nextNode = nullptr;
}
string Node::getInfo()
{
    return this->info;
}

Node *Node::getnextNode()
{
    return this->nextNode;
}
