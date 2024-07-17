#ifndef DIRECTORY_PATH_FULLBINARYTREE_HH_
#define DIRECTORY_PATH_FULLBINARYTREE_HH_
#include<node.hh>

class fullBinaryTree
{
private:
    Node * root_;
    int size_;
public:
    fullBinaryTree(/* args */);
    ~fullBinaryTree();
     Node * getRightChildren();
     Node * getLeftChildren();
     Node * getParent();
     void * setRightChildren(Node * n);
     void * setLeftChildren(Node * n);
     void * setParent(Node * n);
     bool isRoot(Node * p);
     int size();
     bool isEmpty();
};



#endif

