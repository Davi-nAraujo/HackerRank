#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class A
{
    public:
        A(){
            callA = 0;
        }
    private:
        int callA;
        void inc(){
            callA++;
        }

    protected:
        void func(int & a)
        {
            a = a * 2;
            inc();
        }
    public:
        int getA(){
            return callA;
        }
};

class B : public A
{
    public:
        B(){
            callB = 0;
        }
    private:
        int callB;
        void inc(){
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a * 3;
            inc();
        }
    public:
        int getB(){
            return callB;
        }
};

class C : public B
{
    public:
        C(){
            callC = 0;
        }
    private:
        int callC;
        void inc(){
            callC++;
        }
    protected:
        void func(int & a)
        {
            a = a * 5;
            inc();
        }
    public:
        int getC(){
            return callC;
        }
};

class D : public C
{

    int val;
    public:
        //Initially val is 1
         D()
         {
             val = 1;
         }


         //Implement this function
         void update_val(int new_val)
         {
            int mod5 = new_val, mod3 = new_val, mod2 = new_val;

            while((mod5%5) == 0){
                mod5 = mod5/5;
                C::func(val);
            }


            while((mod3%3) == 0){
                mod3 = mod3/3;
                B::func(val);
            }


            while((mod2%2) == 0){
                mod2 = mod2/2;
                A::func(val);
            }

            cout << "Value = " << val << "\n";
         }

         //For Checking Purpose
         void check(int); //Do not delete this line.
};

int main() {
    int new_val;
    cin >> new_val;
    D objeto;
    objeto.update_val(new_val);
    cout << "A's func called " << objeto.A::getA() << " times" << "\n";
    cout << "B's func called " << objeto.B::getB() << " times" << "\n";
    cout << "C's func called " << objeto.C::getC() << " times" << "\n";
    return 0;
}
