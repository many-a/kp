#include "JsonExporter.h"
#include "Playlist.h"
#include "Song.h" 
#include <string>

using namespace std;

string JsonExporter::exportPlaylist(const Playlist& playlist) const {

    string result = "{\n";

        result += "  \"name\": \"" + playlist.getName() + "\",\n";
        result += "  \"songs\": [\n";

            for (const auto& entry : playlist.getEntries()) {
                result += "    \"" + entry->getSong()->getTitle() + "\",\n";
            }

        result += "  ]\n}";

    return result;
}

// Экспорт плейлиста в формат JSON