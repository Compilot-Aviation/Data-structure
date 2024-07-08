#include<nodeLinkedList.hh>
#include<string>

using std::string;

NodeLinkedList::NodeLinkedList() {this->head_ = nullptr;};

NodeLinkedList::~NodeLinkedList() {
    while(!empty()){
        removeFront();
    }
}

bool NodeLinkedList::empty() const {
    if(this->head_==nullptr) {
        return true;
    }
    return false;
}

const string& NodeLinkedList::front() const{
    return this->head_->getElem();
}

void NodeLinkedList::addFront(const string & e) {
    Node * newNode = new Node(e);
    Node * tmp = new Node("");
    tmp->setNext(this->head_->getNext());
    this->head_->setNext(newNode);
    newNode->setNext(tmp->getNext());
    delete(tmp);
}

void NodeLinkedList::removeFront() {
    Node * n {this->head_};
    this->head_ = this->head_->getNext();
    delete n;
}
