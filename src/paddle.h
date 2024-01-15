#ifndef PADDLE.H
#define PADDLE.H
    class Paddle{
        public:
            Paddle(int coordx, int coordy, int width, int height, int speed);
            void moveUp();
            void moveDown();
            void update();
        private :
            int coordx;
            int coordy;
            int width;
            int height;
            int speed;
    };
#endif
