#include "scores.hh"

Scores::Scores(int maxEnt)
{
    this->maxEntries_ = maxEnt;
    entries_ = new GameEntry[maxEntries_];
    this->numEntries_ = 0;
}

Scores::~Scores()
{
    delete entries_;
}

void Scores::add(const GameEntry &e)
{
    int newScore = e.getScore();
    if(this->getNumEntries() == this->getMaxEntries()) {
        if(newScore <= this->entries_[this->getMaxEntries()-1].getScore()){
              return;
        }
    }
    int i = this->getMaxEntries()-2;
    while (i>=0 && newScore>=this->entries_[i].getScore())
    {
        this->entries_[i+1] = this->entries_[i];
        i--;
    }
    this->entries_[i+1]=e;
    
}

GameEntry Scores::remove(int i)
{   
    GameEntry tmp=entries_[i];
    for(int j = i+1; j<maxEntries_;j++){
        this->entries_[j-1] = this->entries_[j];         
    }
    this->numEntries_--;
    return tmp;
}
int Scores::getNumEntries()
{
    return this->numEntries_;
}

int Scores::getMaxEntries()
{
    return this->maxEntries_;
}


