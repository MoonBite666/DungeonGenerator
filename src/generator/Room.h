#ifndef ROOM_H
#define ROOM_H
#include <string>

class Room {
public:
    explicit Room(int w, int h);
private:
    int _width;
    int _height;
};

#endif //ROOM_H
