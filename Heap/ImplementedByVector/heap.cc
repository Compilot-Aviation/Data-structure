#include</workspaces/Data-structure/Heap/ImplementedByVector/heap.hh>
#include<vector>
#include "heap.hh"

using std::vector;

bool Heap::compareTo(const int &i, const int &j) const{
    if(i<=j) {
        return true; // second arguement is bigger than first arguement
    };
    return false; // otherwise
}

Heap::Heap() {
    this->vector_= {};
    size_ = 0;
}

Heap::~Heap() {
   // delete this->vector_ ;
}

int Heap::getSize() const{
    return this->size_;
}

int Heap::left(const int & index) {
    return index*2+1;
}

int Heap::right(const int & index) {
    return index*2+2;
}

int Heap::parent(const int & index) {
    if(index%2 == 1){
        return (index-1)/2;
    }
    return (index-2)/2;
}

bool Heap::hasLeft(const int & index) const {
    if(this->getSize()>=index*2+1) {
        return true;
    }
    return false;
}

bool Heap::hasRight(const int & index) const {
    if(this->getSize()>=index*2+1) {
        return true;
    }
    return false;
}

bool Heap::isRoot(const int & index) const{
    return index==0;
}

int Heap::root(){
    return this->vector_.front();
}

int Heap::last(){
    return this->vector_.back();
}

void Heap::add(const int & i) {
    this->vector_.push_back(i);
    this->size_++;
    
    if(this->getSize()==1){
        return; // first input
    }

    int index = this->size_-1;
    while(compareTo(this->vector_[index], this->vector_[parent(index)])){
        swap(index,parent(index)); // update order in the Heap.
        index = parent(index);
    }
}

void Heap::remove()
{
    if(this->size_ == 0) {
        return;
    } 
    this->vector_[0] = this->vector_[this->size_-1];
    this->vector_[this->size_-1] = 0;
    this->size_--;
   
    int index = 0;

    while (true) {
    int smallest = index;
    int left = this->left(index);
    int right = this->right(index);

    if (left < this->size_ && this->vector_[left] < this->vector_[smallest]) {
        smallest = left;
    }
    if (right < this->size_ && this->vector_[right] < this->vector_[smallest]) {
        smallest = right;
    }

    if (smallest == index) {
        break;
    }

    swap(index, smallest);
    index = smallest;
}

}

void Heap::swap(const int & firstIndex, const int & secondIndex){
    int tmp = this->vector_[firstIndex];
    this->vector_[firstIndex] = this->vector_[secondIndex];
    this->vector_[secondIndex] = tmp;
}

int Heap::min(){
    return this->vector_.front();
}

void Heap::print()
{
    for (const auto& element : this->vector_) {
    std::cout << element << " ";
    }
std::cout << std::endl;
    
}
string Heap::toString() const {
        string result = "";
        for (int i = 0; i < size_; ++i) {
            result += std::to_string(vector_[i]) + " ";
        }
        return result;
    }