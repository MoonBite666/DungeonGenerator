#ifndef DUNGEON_H
#define DUNGEON_H
#include <list>
#include <vector>

class Room;
class Dungeon {
public:
    explicit Dungeon(int size_x, int size_y);
    void addRoom(const Room& room);
    const std::vector<std::vector<bool>> & generateBoolMap();

private:
    std::list<Room> _rooms;
    std::vector<std::vector<bool>> _map;
    int _size_x;
    int _size_y;

public:
    [[nodiscard]] int size_x() const {
        return _size_x;
    }

    void set_size_x(const int size_x) {
        _size_x = size_x;
    }

    [[nodiscard]] int size_y() const {
        return _size_y;
    }

    void set_size_y(const int size_y) {
        _size_y = size_y;
    }
};

#endif //DUNGEON_H
