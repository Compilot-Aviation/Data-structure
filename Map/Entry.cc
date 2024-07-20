
#include "Entry.hh"

template <typename K, typename V>
Entry::Entry(const K & k, const V & v) {key_(k); value_(v);}

template <typename K, typename V>
const K& Entry::key() {return key_;}

template <typename K, typename V>
const K& Entry::value() {return value_;}

template <typename K, typename V>
void Entry::setKey(const K& k) {key_ = k;}

template <typename K, typename V>
void Entry::setValue(const V & v) {value_ = v;}