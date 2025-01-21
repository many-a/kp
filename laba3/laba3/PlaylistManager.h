#ifndef PLAYLISTMANAGER_H
#define PLAYLISTMANAGER_H

#include <vector>
#include "Playlist.h"

using namespace std;

class PlaylistManager {
private:

    static PlaylistManager* instance;
    vector<Playlist*> playlists;

    PlaylistManager() {}

public:

    PlaylistManager(const PlaylistManager&) = delete;
    PlaylistManager& operator=(const PlaylistManager&) = delete;

    static PlaylistManager* getInstance();

    void addPlaylist(Playlist* playlist);

    const vector<Playlist*>& getAllPlaylists() const;
};

#endif // PLAYLISTMANAGER_H