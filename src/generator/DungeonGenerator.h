#ifndef DUNGEONGENERATOR_H
#define DUNGEONGENERATOR_H
#include <list>
#include <vector>

class Room;
class Dungeon;
class DungeonGenerator {
public:
    explicit DungeonGenerator(Dungeon* dungeon);

private:
    void generateRooms(int map_x, int map_y);
    void orientOnMap();
    void setMainRoom();
    void buildMST();
    Dungeon* _dungeon;

};

#endif //DUNGEONGENERATOR_H
