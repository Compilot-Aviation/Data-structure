#include "Map.hh"
#include <vector>
#include "iterator.hh"
using std::vector;

int Map::size() const
{
    return size_;
}

bool Map::isEmpty() const
{
    return size_==0;
}
template<typename K, typename V>;
Iterator * Map::find(const K &k)
{
    for(Iterator i = this->begin() ; this->end() == i ; i++){
        if(i.k == k){
            return nullptr;
        }
    };
    return nullptr;
}
template<typename K, typename V>;
Iterator Map::put(const K &k, const V &v)
{
    return map_.push_back(Entry(k,v));
}
template<typename K, typename V>;
void Map::erase(const K &k)
{
    delete find(k);
}
template<typename K, typename V>;
void Map::erase(const Iterator &p)
{
    delete p;
}
template<typename K, typename V>;
Iterator Map::begin()
{
    return map_.begin();
}
template<typename K, typename V>;
Iterator Map::end()
{
    return map_.back();
}
