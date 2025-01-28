#include "Playlist.h"
#include "PlaylistEntry.h"
#include "PlaylistObserver.h"
#include "Song.h" 
#include <iostream>

using namespace std;

Playlist::Playlist(const string& name) : name(name) {}

void Playlist::addSong(Song* song) {

    entries.push_back(new PlaylistEntry(song, this));

    notifyObservers("Added song: " + song->getTitle());
}

void Playlist::removeSong(const string& songTitle) {

    for (auto it = entries.begin(); it != entries.end(); ) {

        if ((*it)->getSong()->getTitle() == songTitle) {

            delete* it;
            it = entries.erase(it);

        } else {

           ++it;
        }
    }
}

void Playlist::printSongs() const {

    cout << "\nSongs in " << name << ":" << endl;

    for (const auto& entry : entries) {

        cout << "- " << entry->getSong()->getTitle() << "\n" << endl;
    }
}

void Playlist::addObserver(PlaylistObserver* observer) {

    observers.push_back(observer);
}

void Playlist::notifyObservers(const 

    string& message) const {

        for (const auto& observer : observers) {

            observer->update(message);
        }
}

const vector<PlaylistEntry*>& Playlist::getEntries() const {

    return entries;
}

string Playlist::getName() const {

    return name;
}

// Хранит название плейслиста и список песен входящих в него.