#include <iostream>

int main(){
    struct point {
        int x;
        int y;
        ~point() {
            std::cout << "point is being destroyed" << std::endl;
        }

        int sum() {
            return x + y;
        }
        int diff() {
            return x - y;
        }
        int prod() {
            return x * y;
        }
        int quot() {
            return x / y;
        }

        void fourDirections(int distance){
            std::cout << "Up: (" << x << ", " << y + distance << ")";
            std::cout << "Down: (" << x << ", " << y - distance << ")";
            std::cout << "Left: (" << x - distance << ", " << y << ")";
            std::cout << "Right: (" << x + distance << ", " << y << ")" << std::endl;
        }

    } pl;
    int y0;
    for (int x0 = 1; x0 <= 10; x0++) {
        y0 = x0 + 1;
        pl = {x0, y0};
    pl = {x0, y0};
    std::cout << "(" << pl.x << ", " << pl.y << ")" << std::endl;
    std::cout << "sum: " << pl.sum() << std::endl;
    std::cout << "diff: " << pl.diff() << std::endl;
    std::cout << "prod: " << pl.prod() << std::endl;
    std::cout << "quot: " << pl.quot() << std::endl;
    pl.fourDirections(3);
    
    

}
}