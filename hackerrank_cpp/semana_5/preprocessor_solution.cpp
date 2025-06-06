#define io(v) cin >> v
#define toStr(Result) #Result
#define FUNCTION(a, b) void a(int &m, int &v){if(v b m){m = v;}}
#define INF 10000000
#define foreach(v,i)  for (size_t i = 0; i < (v).size(); ++i)


#include <iostream>
#include <vector>
using namespace std;

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
    int n; cin >> n;
    vector<int> v(n);
    foreach(v, i) {
        io(v)[i];
    }
    int mn = INF;
    int mx = -INF;
    foreach(v, i) {
        minimum(mn, v[i]);
        maximum(mx, v[i]);
    }
    int ans = mx - mn;
    cout << toStr(Result =) <<' '<< ans;
    return 0;

}