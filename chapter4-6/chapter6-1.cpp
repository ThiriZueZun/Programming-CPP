#include <iostream>
#include <vector>
using namespace std;
int main() {
    int v;
    cout << "Enter the value: ";
    cin >> v;
    vector<int> coins = {100, 50, 20, 10, 5, 2, 1};
    vector<int> used;
    int count = 0;
    for (int c : coins) {
    while (v >= c) {
        v -= c;
        used.push_back(c);
        count++;
    }
    }
    cout << "Minimum coins used: " << count << endl;
    cout << "Coins: ";
    for (int c : used) cout << c << " ";
    cout << endl;
    
    return 0;
}