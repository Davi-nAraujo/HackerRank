#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
    public:
        void triangle(){
            cout<<"I am a triangle\n";
        }
};

class Isosceles : public Triangle{
    public:
        void isosceles(){
            cout<<"I am an isosceles triangle\n";
        }
        void sides(){
            cout<<"In an isosceles triangle two sides are equal\n";
        }
};

class Equilateral : public Isosceles{
    public:
        void equilateral(){
            cout<<"I am an equilateral triangle\n";
        }
};

int main(){
    Equilateral eql;
    eql.equilateral();
    eql.isosceles();
    eql.triangle();
    return 0;
}