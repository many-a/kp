#ifndef PLAYLISTENTRY_H
#define PLAYLISTENTRY_H

class Song;
class Playlist;

class PlaylistEntry {
private:

    const Song* song;
    const Playlist* playlist;

public:

    PlaylistEntry(const Song* song, const Playlist* playlist);
    const Song* getSong() const;

};

#endif // PLAYLISTENTRY_H