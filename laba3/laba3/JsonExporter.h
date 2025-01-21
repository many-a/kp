#ifndef JSONEXPORTER_H
#define JSONEXPORTER_H

#include "PlaylistExporter.h"

class JsonExporter : public PlaylistExporter {

public:

    std::string exportPlaylist(const Playlist& playlist) const override;

};

#endif // JSONEXPORTER_H