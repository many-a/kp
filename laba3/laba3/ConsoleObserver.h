#ifndef CONSOLEOBSERVER_H
#define CONSOLEOBSERVER_H

#include "PlaylistObserver.h"

class ConsoleObserver : public PlaylistObserver {

public:

    void update(const std::string& message) const override;

};

#endif // CONSOLEOBSERVER_H