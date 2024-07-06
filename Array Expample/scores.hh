#ifndef DIRECTORY_PATH_SCORES_HH_
#define DIRECTORY_PATH_SCORES_HH_

#include <gameEntry.hh>
#include <string>
#include<stdexcept>
using std::string;

class Scores{
    public:
     Scores(int maxEnt);
     ~Scores();
     void add(const GameEntry & e);
     GameEntry remove(int i);
     int getMaxEntries();
     int getNumEntries();
    private:
     int findLocation(const GameEntry& e);
     GameEntry*  entries_;
     int maxEntries_;
     int numEntries_;
};

#endif