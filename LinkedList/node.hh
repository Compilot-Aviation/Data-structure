#ifndef DIRECTORY_PATH_NODE_HH_
#define DIRECTORY_PATH_NODE_HH_

#include<string>
using std::string;

class Node{
    public:
     Node(const string &s);
     string getInfo();
     Node * getnextNode();
    private:
     string info;
     Node * nextNode;
};
#endif