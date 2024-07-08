#ifndef DIRECTORY_PATH_STACK_HH_
#define DIRECTORY_PATH_STACK_HH_
#include<node.hh>


class Stack{
    private:
        int size_;
        Node * stack_; 
    public:
        Stack();
        ~Stack();
        void push(Node * n);
        Node * pop();
        Node * top();
        int size();
        bool empty();
};


#endif