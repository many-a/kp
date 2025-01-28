#ifndef PLAYLISTOBSERVER_H
#define PLAYLISTOBSERVER_H

#include <string>

using namespace std;

class PlaylistObserver {
public:

    virtual ~PlaylistObserver() = default;

    virtual void update(const string& message) const = 0;
};

#endif // PLAYLISTOBSERVER_H