#include "ball.h"

Ball::Ball(int x, int y, int width, int height, int speedX, int speedY)
    : x(x), y(y), width(width), height(height), speedX(speedX), speedY(speedY) {
}

void Ball::update() {
    x += speedX;
    y += speedY;
}

void Ball::resetPosition(int x, int y) {
    this->x = x;
    this->y = y;

}