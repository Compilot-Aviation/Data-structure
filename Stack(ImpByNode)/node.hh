#ifndef DIRECTORY_PATH_NODE_HH_
#define DIRECTORY_PATH_NODE_HH_

#include<string>
using std::string;

class Node{
    public: 
        Node(const string &s);
        string getElem();
        Node * getNext();
            void setNext(Node * n);
    private:
        string elem_;
        Node * next_;

     friend class NodeLikedList;
};
#endif