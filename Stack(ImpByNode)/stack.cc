#include<stack.hh>


Stack::Stack(){
    this->size_ =0;
    this->stack_ = new Node("");
    this->stack_->setNext(nullptr);
}

Stack::~Stack(){
    this->size_=0;
    delete this->stack_;
}

void Stack::push( Node * n) {
    if(this->empty()){
        stack_->setNext(n);
        this->size_ ++;
        return;
    }
    Node *tmp = this->stack_->getNext();
    stack_->setNext(n);
    n->setNext(tmp);
    this->size_ ++;
}

Node * Stack::pop() {
    if(this->empty()) {
        return nullptr;
    }
    Node * tmp = this->stack_->getNext();
    this->stack_->setNext(tmp->getNext());
    this->size_--;
    return tmp;
}

Node * Stack::top() {
    if(this->empty()) {
        return nullptr;
    }
    return this->stack_->getNext();
}

bool Stack::empty()
{
    if(this->size() == 0) {
        return true;
    }
    return false;
}

int Stack::size() {
    return this->size_;
}


