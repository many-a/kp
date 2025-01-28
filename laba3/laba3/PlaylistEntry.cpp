#include "PlaylistEntry.h"

PlaylistEntry::PlaylistEntry(const Song* song, const Playlist* playlist)

    : song(song), playlist(playlist) {
}

const Song* PlaylistEntry::getSong() const {

    return song;
}

// Многие к многим, связь между песней и плейлистом