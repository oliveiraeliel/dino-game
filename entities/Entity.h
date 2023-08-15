#ifndef DINO_GAME_ENTITY_H
#define DINO_GAME_ENTITY_H

#include <string>

using namespace std;

class Entity {
private:
    int x, y, width, height, vx, vy;
    string texture_path;
public:
    Entity(int x, int y, int width, int height, int vx, int vy, const string &texturePath);
    int getX() const;
    void setX(int x);
    int getY() const;
    void setY(int y);
    int getWidth() const;
    void setWidth(int width);
    int getHeight() const;
    void setHeight(int height);
    int getVx() const;
    void setVx(int vx);
    int getVy() const;
    void setVy(int vy);
    const string &getTexturePath() const;
    void setTexturePath(const string &texturePath);
};


#endif //DINO_GAME_ENTITY_H
