#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
    
    map<string, int>mapa;
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){    
        string name;
        int marks, value;
        cin >> value;
        switch (value) {
            
            case 1:{
                cin >> name;
                cin >> marks;
                
                map<string,int>::iterator itr=mapa.find(name);
                if(itr != mapa.end()){
                    mapa[name] += marks;
                } else {
                    mapa.insert(make_pair(name, marks));
                }
                break;
            }
            
            case 2:{
                cin >> name;
                mapa.erase(name);
                break;
            }
            
            case 3:{
                cin >> name;
                map<string,int>::iterator itr=mapa.find(name);
                if(itr != mapa.end()){
                    cout << mapa[name] << "\n";
                } else {
                    cout << 0 << "\n";
                }
                break;
            }
        }
    }
    return 0;
}
