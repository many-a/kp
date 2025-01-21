#ifndef SONG_H
#define SONG_H

#include <string>

using namespace std;

class Song {
private:

    string title;
    string artist;

public:

    Song(const string& title, const string& artist);

    string getTitle() const;
    void print() const;
};

#endif 


//SONG - Хранит информацию о названии песни и исполнителе.