#ifndef DIRECTORY_PATH_NODELINKEDLIST_HH
#define DIRECTORY_PATH_NODELINKEDLIST_HH
#include<DoubleNode.hh>
#include<string>

using std::string;

class DoubleLinkedList{
    public:
    DoubleLinkedList();
    ~DoubleLinkedList();
    bool empty() const;
    const string& front() const;
    const string& front() const;
    void addFront(const string& s);
    void addBack(const string& s);
    void removeFront();
    void removeBack();
    private:
    DoubleNode* head_;
    DoubleNode* trailer_;

};
#endif