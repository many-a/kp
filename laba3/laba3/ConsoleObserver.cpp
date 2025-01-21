#include "ConsoleObserver.h"
#include <iostream>

using namespace std;

void ConsoleObserver::update(const std::string& message) const {

    cout << "Notification: " << message << endl;

}

// Наблюдатель, выводит уведомления.