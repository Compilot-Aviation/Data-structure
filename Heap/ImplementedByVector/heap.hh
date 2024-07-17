#ifndef DIRECTORY_PATH_HEAP_HH_
#define DIRECTORY_PATH_HEAP_HH_

#include<vector>
#include<iostream>
#include<string>

using std::vector;
using std::string;

class Heap{
    private:
        vector<int> vector_;
        bool compareTo(const int &i, const int & j) const;
        int size_;
    public:
        Heap();
        ~Heap();
        int getSize() const;
        int left(const int & index);
        int right(const int & index);
        int parent(const int & index);
        bool hasLeft(const int & index) const;
        bool hasRight(const int & index) const;
        bool isRoot(const int & index) const;
        int root();
        int last();
        void add(const int & i);
        void remove();
        void swap(const int &firstIndex, const int & secondIndex);
        int min();
        void print();
        string toString() const;

};

#endif