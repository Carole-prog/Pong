#include "manager.h"

GameManager::GameManager(int screenWidth, int screenHeight)
    : leftPaddle(10, screenHeight / 2 - 50, 20, 100, 5),
      rightPaddle(screenWidth - 30, screenHeight / 2 - 50, 20, 100, 5),
      ball(screenWidth / 2 - 15, screenHeight / 2 - 15, 30, 30, 5, 5),
      screenWidth(screenWidth),
      screenHeight(screenHeight) {
}

void GameManager::update() {
    leftPaddle.update();
    rightPaddle.update();
    ball.update();
}

Paddle& GameManager::getLeftPaddle() {
    return leftPaddle;
}

Paddle& GameManager::getRightPaddle() {
    return rightPaddle;
}

Ball& GameManager::getBall() {
    return ball;
}
