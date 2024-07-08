#ifndef DIRECTORY_PATH_DOUBLENODE_HH_
#define DIRECTORY_PATH_DOUBLENODE_HH_

#include<string>
using std::string;

class DoubleNode{
    public: 
    DoubleNode(const string &s);
    string getElem();
    DoubleNode * getNext();
    DoubleNode * getPrev();
    void setNext(DoubleNode * n);
    void setPrev(DoubleNode * n);
    private:
     string elem_;
     DoubleNode * next_;
     DoubleNode * prev_;

     friend class doubleLinkedList;
};
#endif