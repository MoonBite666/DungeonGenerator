#include "DungeonGenerator.h"

#include "Dungeon.h"
#include "RandomGenerator.h"
#include "Room.h"


DungeonGenerator::DungeonGenerator(Dungeon *dungeon) : _dungeon(dungeon){}

void DungeonGenerator::generateRooms(const int map_x, const int map_y) {
    int size = _dungeon->size_x() * _dungeon->size_y();
    int maxsize = static_cast<int>(size * 0.8);
    int crtsize = 0;
    int min_len = static_cast<int>(size * 0.05);
    int max_len = static_cast<int>(size * 0.2);
    for(const int room_x = RG::randInteger(min_len, max_len),
        room_y = RG::randInteger(min_len, max_len);
        crtsize < maxsize; crtsize += room_x * room_y) {
        Room r(room_x,room_y,size/2,size/2);
        _dungeon->addRoom(r);
    }
}
