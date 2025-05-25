#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Rectangle{
    public:
        int width, height;  
                
        void display(){
            cout << width << " " << height << "\n";
        }
};

class RectangleArea : public Rectangle{
    public:
        void read_input(){
            cin >> width >> height;
        }
        void display(){
            int area = height * width;
            cout << area << "\n";
        }
};

int main() {
    RectangleArea r;
    r.read_input();
    r.Rectangle::display();
    r.display();
    return 0;
}
