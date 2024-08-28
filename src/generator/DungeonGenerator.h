#ifndef DUNGEONGENERATOR_H
#define DUNGEONGENERATOR_H
#include <list>
#include <vector>

class Room;

class DungeonGenerator {
public:
    std::vector<std::vector<bool>> generateDungeon(int size_x, int size_y);

private:
    void generateRoom();
    void orientOnMap();
    void setMainRoom();
    void buildMST();
    std::list<Room> _rooms;
    std::vector<std::vector<bool>> map;

};

#endif //DUNGEONGENERATOR_H
