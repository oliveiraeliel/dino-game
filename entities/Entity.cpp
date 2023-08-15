//
// Created by eliel on 15/08/23.
//

#include "Entity.h"

int Entity::getX() const {
    return x;
}

void Entity::setX(int x) {
    Entity::x = x;
}

int Entity::getY() const {
    return y;
}

void Entity::setY(int y) {
    Entity::y = y;
}

int Entity::getWidth() const {
    return width;
}

void Entity::setWidth(int width) {
    Entity::width = width;
}

int Entity::getHeight() const {
    return height;
}

void Entity::setHeight(int height) {
    Entity::height = height;
}

int Entity::getVx() const {
    return vx;
}

void Entity::setVx(int vx) {
    Entity::vx = vx;
}

int Entity::getVy() const {
    return vy;
}

void Entity::setVy(int vy) {
    Entity::vy = vy;
}

const string &Entity::getTexturePath() const {
    return texture_path;
}

void Entity::setTexturePath(const string &texturePath) {
    texture_path = texturePath;
}

Entity::Entity(int x, int y, int width, int height, int vx, int vy, const string &texturePath) : x(x), y(y),
                                                                                                 width(width),
                                                                                                 height(height),
                                                                                                 vx(vx), vy(vy),
                                                                                                 texture_path(
                                                                                                         texturePath) {}
