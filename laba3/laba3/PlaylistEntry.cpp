#include "PlaylistEntry.h"

PlaylistEntry::PlaylistEntry(const Song* song, const Playlist* playlist)

    : song(song), playlist(playlist) {
}

const Song* PlaylistEntry::getSong() const {

    return song;
}

// ������ � ������, ����� ����� ������ � ����������