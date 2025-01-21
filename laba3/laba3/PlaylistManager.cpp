#include "PlaylistManager.h"

using namespace std;

PlaylistManager* PlaylistManager::instance = nullptr;

PlaylistManager* PlaylistManager::getInstance() {

    if (!instance) {

        instance = new PlaylistManager();
    }

    return instance;
}

void PlaylistManager::addPlaylist(Playlist* playlist) {

    playlists.push_back(playlist);
}

const vector<Playlist*>& PlaylistManager::getAllPlaylists() const {

    return playlists;
}

// Singleton (управление плейлистами)