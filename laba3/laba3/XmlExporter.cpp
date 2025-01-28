#include "XmlExporter.h"
#include "Playlist.h"
#include "Song.h" 
#include <string>

using namespace std;

string XmlExporter::exportPlaylist(const Playlist& playlist) const {

    string result = "<playlist name=\"" + playlist.getName() + "\">\n";

        for (const auto& entry : playlist.getEntries()) {

            result += "  <song>" + entry->getSong()->getTitle() + "</song>\n";
        }

    result += "</playlist>";

    return result;
}

// Экспорт плейлиста в формат XML