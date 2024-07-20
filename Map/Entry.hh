#ifndef DIRECTORY_PATH_ENTRY_HH
#define DIRECTORY_PATH_ENTRY_HH

template <typename K, typename V>

class Entry{
    public:
        Entry(const K & k, const V & v);
        const K& key () ;
        const V& value();
        void setKey(const K& k);
        void setValue(const V & v);

    private:
        K key_;
        V value_; 
};

#endif