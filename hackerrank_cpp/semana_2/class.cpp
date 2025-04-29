#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class myClass{
    private:
        int age, standard;
        string name, last_name;
    public:
        void set_age(int new_age){
            age = new_age;
        }
        void set_first_name(string new_name){
            name = new_name;
        }
        void set_last_name(string new_last_name){
            last_name = new_last_name;
        }
        void set_standard(int new_standard){
            standard = new_standard;
        }
        int get_age(){
            return age;
        }
        string get_first_name(){
            return name;
        }
        string get_last_name(){
            return last_name;
        }
        int get_standard(){
            return standard;
        }
        void to_string(){
            cout << age << "," << name << "," << last_name << "," << standard << "\n";
        }
};
int main() {
        int type_age, type_standard;
        string type_name, type_last_name;
        
        cin >> type_age >> type_name >> type_last_name >> type_standard;
        
        myClass student;
        
        student.set_age(type_age);
        student.set_first_name(type_name);
        student.set_last_name(type_last_name);
        student.set_standard(type_standard);
        
        cout << student.get_age() << "\n";
        cout << student.get_last_name() << ", " << student.get_first_name() << "\n";
        cout << student.get_standard() << "\n";
        cout << "\n";
        student.to_string();


    return 0;
}
