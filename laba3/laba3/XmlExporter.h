#ifndef XMLEXPORTER_H
#define XMLEXPORTER_H

#include "PlaylistExporter.h"

using namespace std;

class XmlExporter : public PlaylistExporter {
public:
    
    string exportPlaylist(const Playlist& playlist) const override;

};

#endif // XMLEXPORTER_H