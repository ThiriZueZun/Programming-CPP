#include <iostream>
#include <map>
using namespace std;

int main(){

    map<string,int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;
    cout << m["banana"] << "\n"; // 3

    map<string,int> n;
    cout << n["aybabtu"] << "\n"; // 0

    if (n.count("aybabtu")) {
        cout << "key exit" << "\n";
    }

    for (auto x : m) {
    cout << x.first << " " << x.second << "\n";
    }


    return 0;
}