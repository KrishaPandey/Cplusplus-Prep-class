#include <iostream>
using namespace std;
class Engine {
public:
    void start() {
        cout << "Engine: starting up!\n";
    }
    void stop() {
        cout << "Engine: shutting down.\n";
    }
};

class Car {
    Engine eng;
public:
    void turnKey() {
        // Car “sends a message” to its Engine
        eng.start();  
    }
    void kill() {
        eng.stop();
    }
};

int main() {
    Car c;
    c.turnKey();   // Car ? Engine::start()
    c.kill();      // Car ? Engine::stop()
}

