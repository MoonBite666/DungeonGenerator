#include "Dungeon.h"
#include "Room.h"

Dungeon::Dungeon(const int size_x, const int size_y) : _size_x(size_x), _size_y(size_y){}

void Dungeon::addRoom(const Room &room) {
    _rooms.push_back(room);
}

const std::vector<std::vector<bool>> & Dungeon::generateBoolMap() {
    _map = std::vector<std::vector<bool>>(_size_x, std::vector<bool>(_size_y, false));
    return _map;
}

