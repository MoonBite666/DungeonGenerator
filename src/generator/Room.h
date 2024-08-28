#ifndef ROOM_H
#define ROOM_H
class Room {
public:
    explicit Room(int w, int h, int x, int y);
private:
    int _width;
    int _height;
    int _pos_x{};
    int _pos_y{};

public:
    [[nodiscard]] int width() const {
        return _width;
    }

    void set_width(const int width) {
        _width = width;
    }

    [[nodiscard]] int height() const {
        return _height;
    }

    void set_height(const int height) {
        _height = height;
    }

    [[nodiscard]] int pos_x() const {
        return _pos_x;
    }

    void set_pos_x(const int pos_x) {
        _pos_x = pos_x;
    }

    [[nodiscard]] int pos_y() const {
        return _pos_y;
    }

    void set_pos_y(const int pos_y) {
        _pos_y = pos_y;
    }
};

#endif //ROOM_H
