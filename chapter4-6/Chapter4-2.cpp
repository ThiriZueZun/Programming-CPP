#include <iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);
    cout << s.count(3) << "\n"; // 1
    cout << s.count(4) << "\n"; // 0
    s.erase(3);
    s.insert(4);
    cout << s.count(3) << "\n"; // 0
    cout << s.count(4) << "\n"; // 1

    set<int> a = {2,5,6,8};
    cout << a.size() << "\n"; // 4
    for (auto x : a) {
        cout << x << "\n";
    }

    set<int> b;
    b.insert(5);
    b.insert(5);
    b.insert(5);
    cout << b.count(5) << "\n"; // 1

    multiset<int> c;
    c.insert(5);
    c.insert(5);
    c.insert(5);
    cout << c.count(5) << "\n"; // 3
    
    return 0;
}