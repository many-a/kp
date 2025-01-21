#include "Song.h"
#include "Playlist.h"
#include "ConsoleObserver.h"
#include "PlaylistManager.h"
#include "JsonExporter.h"
#include "XmlExporter.h"
#include <iostream>

#include "Song.h"
#include "Playlist.h"
#include "ConsoleObserver.h"
#include "PlaylistManager.h"
#include "JsonExporter.h"
#include "XmlExporter.h"
#include <iostream>

using namespace std;

int main() {

    // Создаем треки

    Song song1("Violento", "idke");
    Song song2("Oh! Majuna!", "Babymetal");
    Song song3("Shanti Shanti Shanti", "Rxven");
    Song song4("Bounce", "Dynamite MC, Dominic Smith");

    // Создаем плейлисты

    Playlist playlist1("Phonk Collection");
    Playlist playlist2("Metal Collection");
    Playlist playlist3("Hip-Hop");

    // Добавляем наблюдателя для уведомлений

    ConsoleObserver observer;
    playlist1.addObserver(&observer);
    playlist2.addObserver(&observer);

    // Добавляем треки в плейлисты

    playlist1.addSong(&song1); 
    playlist2.addSong(&song2); 
    playlist2.addSong(&song3); 
    playlist3.addSong(&song4);

    // Выводим информацию о плейлистах

    playlist1.printSongs();
    playlist2.printSongs();
    playlist3.printSongs();

    // Удаляем треки из плейлиста
    playlist2.removeSong("Oh! Majuna!");
    cout << "\nRemove track\n";
    playlist2.printSongs();
    
    PlaylistManager* manager = PlaylistManager::getInstance();
    manager->addPlaylist(&playlist1);
    manager->addPlaylist(&playlist2);
    manager->addPlaylist(&playlist3);

    return 0;
}


// При необходимости

// Export JSON
// JsonExporter jsonExporter;
// cout << jsonExporter.exportPlaylist(playlist1) << std::endl;


// Export XML
// XmlExporter xmlExporter;
// cout << xmlExporter.exportPlaylist(playlist2) << std::endl;
