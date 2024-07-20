#ifndef DIRECTORY_PATH_ENTRY_HH
#define DIRECTORY_PATH_ENTRY_HH
#include<vector>
#include"Entry.hh"
#include<iterator>
using std::vector;


template<typename K, typename V>;

class Map{
    public:
        class Entry;
        class Iterator;

        int size() const;
        bool isEmpty() const;
        Iterator * find(const K& k);
        void put(const K& k , const V& v);
        void erase(const K& k);
        void erase(const Iterator & p);
        Iterator begin();
        Iterator end();

        private:
            vector<Entry> map_;
            int size_;


};

#endif