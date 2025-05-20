#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Person {
    public:
        int age;
        string name;
    
        virtual void getdata() = 0;
        virtual void putdata() = 0;
        virtual int get_cur_id() = 0;
};

class Professor : public Person{
    private:
        int publications;
        static int cur_id;
    public:
        int get_cur_id() override {
            cur_id += 1;
            return  cur_id;
        }
        void getdata() override {
            cin >> name >> age >> publications;
        }
        void putdata() override {
            cout << name << " " << age << " " << publications << " " << get_cur_id() << endl;
        }
};

class Student : public Person{
    private:
        int marks[6];
        static int cur_id;
    public:
        int get_cur_id() override {
            cur_id += 1;
            return  cur_id;
        }
        void getdata() override {
            cin >> name >> age;
            for(int i = 0; i < 6; i++){
               cin >> marks[i];
            }
        }
        void putdata() override {
            int sum = 0;
            for(int i=0; i < 6; i++){
                sum += marks[i];
            } 
            cout << name << " " << age << " " << sum << " " << get_cur_id() << endl;
        }
};
int Student::cur_id = 0;
int Professor::cur_id = 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
