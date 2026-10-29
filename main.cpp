#include <iostream>
#include "Room.h"
#include "Player.h"
using namespace std;

int main() {
    Player player;
    Room room(20, 10, &player);

    bool isRunning = true;
    while (isRunning) {
        room.draw();
        char input;
        cout << "Please use the wasd keys to move or press q to quit" << endl;
        cin >> input;
        if (input == 'q') {
            isRunning = false;
        } else {
            player.move(input, &room);
        }
    }
    return 0;
}