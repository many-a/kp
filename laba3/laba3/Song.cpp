#include "Song.h"
#include <iostream>

using namespace std;

Song::Song(const string& title, const string& artist)

    : title(title), artist(artist) {
}

string Song::getTitle() const {

    return title;
}

void Song::print() const {

    cout << "Title: " << title << "\tArtist: " << artist << endl;
}

// Хранит информацию о названии песни и исполнителе.