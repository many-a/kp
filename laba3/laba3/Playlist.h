#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <string>
#include <vector>
#include "PlaylistEntry.h"
#include "PlaylistObserver.h"

using namespace std;

class Playlist {
private:
    string name;

    vector<PlaylistEntry*> entries;
    vector<PlaylistObserver*> observers;

public:
    Playlist(const string& name);

    void addSong(Song* song);
    void removeSong(const string& songTitle);
    void printSongs() const;
    void addObserver(PlaylistObserver* observer);
    void notifyObservers(const string& message) const;

    const vector<PlaylistEntry*>& getEntries() const;

    string getName() const;
};

#endif // PLAYLIST_H