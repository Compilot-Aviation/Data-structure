#include <gameEntry.hh>
#include <string>
using std::string;

GameEntry::GameEntry(const string &name, int score) {this->name_= name; this->score_=score;}
string GameEntry::getName() const { return this->name_; }
int GameEntry::getScore() const {return this->score_;}

