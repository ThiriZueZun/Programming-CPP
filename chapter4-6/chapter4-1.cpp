#include<iostream>
#include<vector>
#include<string>
#include <algorithm> //for sort and reverse
using namespace std;
int main(){

    vector<int> v;
    v.push_back(3); // [3]
    v.push_back(2); // [3,2]
    v.push_back(5); // [3,2,5]

    cout << v[0] << "\n"; // 3
    cout << v[1] << "\n"; // 2
    cout << v[2] << "\n"; // 5

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }

    for (auto x : v) {
        cout << x << "\n";
    }

    vector<int> a;
    a.push_back(5);
    a.push_back(2);
    cout << a.back() << "\n"; // 2
    a.pop_back();
    cout << a.back() << "\n"; // 5

    vector<int> f = {2,4,2,5,1};
    sort(f.begin(), f.end());
    for (auto y : f) {
        cout << y << '\n'; // 1 2 2 4 5
    }
    reverse(f.begin(), f.end());
    for (auto y : f) {
        cout << y << '\n'; // 5 4 2 2 1
    }

    vector<int> g(10); // size 10, all 0
    vector<int> h(10,3); // size 10, all 3
    cin >> g[0];
    cout << g[0] << "\n"; // input value    

    vector<int> i(10, 5);
    cout << i.size() << "\n"; // 10
    i.push_back(7);

    string c = "hatti";
    string d = c+c;
    cout << d << "\n"; // hattihatti
    d[5] = 'v';
    cout << d << "\n"; // hattivatti
    string e = d.substr(3,4);
    cout << e << "\n"; // tiva



    return 0;
}