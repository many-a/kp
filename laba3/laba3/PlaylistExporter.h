#ifndef PLAYLISTEXPORTER_H
#define PLAYLISTEXPORTER_H

#include <string>
#include "Playlist.h"

using namespace std;

class PlaylistExporter {
public:

    virtual ~PlaylistExporter() = default;
    virtual string exportPlaylist(const Playlist& playlist) const = 0;

};

#endif // PLAYLISTEXPORTER_H