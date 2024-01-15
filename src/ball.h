#ifndef BALL_H
#define BALL_H

class Ball {
public:
    Ball(int x, int y, int width, int height, int speedX, int speedY);
    void update();
    void resetPosition(int x, int y);

private:
    int x;
    int y;
    int width;
    int height;
    int speedX;
    int speedY;
};

#endif