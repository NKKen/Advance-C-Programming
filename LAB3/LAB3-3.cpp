#include <iostream>

int main(){
    struct point {
        int x;
        int y;
    } pl;

    point* p2 = &pl;
    point* p3 = new point;

    pl ={1,2};
    pl.x = 5;
    std::cout << p2->x << " " << p2->y << std::endl;
    (*p3).x = 10; (*p3).y = 20;
    std::cout << p3->x << " " << p3->y << std::endl;
    

    
}