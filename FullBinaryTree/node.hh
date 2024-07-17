#ifndef DIRECTORY_PATH_NODE_HH_
#define DIRECTORY_PATH_NODE_HH_

#include<string>
using std::string;

class Node{
    public: 
    Node(const string &s);
    string getElem();
    
    private:
     string elem_;
     Node * rightChildren_;
     Node * leftChildren_;
     Node * parent_;

     friend class FullBinaryTree;
};
#endif