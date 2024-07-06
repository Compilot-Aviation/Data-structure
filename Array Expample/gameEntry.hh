#ifndef DIRECTORY_PATH_gameEntry_HH_
#define DIRECTORY_PATH_gameEntry_HH_

#include <string>
using std::string;

class GameEntry {
    public:
     GameEntry(const string &name, int score);
     string getName() const;
     int getScore() const;
    private:
     string name_;
     int score_;
};

#endif