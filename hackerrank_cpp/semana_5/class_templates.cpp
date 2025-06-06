#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

template <class T>
class MyTemplate {
T element;
public:
MyTemplate (T arg) {element=arg;}
T addElements (T arg2) {return element + arg2;}
};

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string type;
        cin >> type;
        if(type == "string"){
            string one, two;
            cin >> one >> two;
            MyTemplate<string> concatenatedString(one);
            cout << concatenatedString.addElements(two) << "\n";
        } else if( type == "int"){
            int one, two;
            cin >> one >> two;
            MyTemplate<int> addints(one);
            cout << addints.addElements(two) << "\n";            
        } else if(type == "float"){
            float one, two;
            cin >> one >> two;
            MyTemplate<float> addfloats(one);
            cout << addfloats.addElements(two) << "\n";
        }
    }
    return 0;
}
