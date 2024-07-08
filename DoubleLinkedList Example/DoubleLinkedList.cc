#include<DoubleLinkedList.hh>
#include<string>

using std::string;

DoubleLinkedList::DoubleLinkedList() {
    this->head_ = this->trailer_;
    this->trailer_ = this->head_;
};

DoubleLinkedList::~DoubleLinkedList() {
    while(!empty()){
        removeFront();
    }
}

bool DoubleLinkedList::empty() const {
    if(this->head_==this->trailer_) {
        return true;
    }
    return false;
}

const string& DoubleLinkedList::front() const{
    return this->head_->getElem();
}

void DoubleLinkedList::addFront(const string & e) {
    DoubleNode * newNode = new DoubleNode(e);
    DoubleNode * tmp = new DoubleNode("");
    tmp->setNext(this->head_->getNext());
    this->head_->setNext(newNode);
    newNode->setNext(tmp->getNext());
    delete(tmp);
}

void DoubleLinkedList::addBack(const string & e) {
    DoubleNode * newNode = new DoubleNode(e);
    DoubleNode * tmp = trailer_->getPrev();
    tmp->setNext(newNode);
    newNode->setPrev(tmp);
    newNode->setNext(this->trailer_);

}

void DoubleLinkedList::removeFront() {
    DoubleNode * n {this->head_};
    n->setNext(n->getNext()->getNext());
    delete n;
}

void DoubleLinkedList::removeBack() {
    DoubleNode * n {this->trailer_};
    n->setPrev(n->getPrev()->getPrev());
    delete n;
}