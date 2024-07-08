#ifndef DIRECTORY_PATH_NODELINKEDLIST_HH
#define DIRECTORY_PATH_NODELINKEDLIST_HH
#include<node.hh>
#include<string>

using std::string;

class NodeLinkedList{
    public:
    NodeLinkedList();
    ~NodeLinkedList();
    bool empty() const;
    const string& front() const;
    void addFront(const string& e);
    void removeFront();
    private:
    Node* head_;
};
#endif