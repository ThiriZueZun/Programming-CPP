#include<iostream>
#include<bitset>
#include<deque>
#include<stack>
#include<queue>
#include<string>
using namespace std;
int main(){

    // Bitset

    bitset<10> s;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s[4] << "\n"; // 1
    cout << s[5] << "\n"; // 0

    bitset<10> a(string("0010011010")); // from right to left
    cout << a[4] << "\n"; // 1
    cout << a[5] << "\n"; // 0

    bitset<10> b(string("0010011010"));
    cout << b.count() << "\n"; // 4

    bitset<10> c(string("0010110110"));
    bitset<10> d(string("1011011000"));
    cout << (c&d) << "\n"; // 0010010000
    cout << (c|d) << "\n"; // 1011111110
    cout << (c^d) << "\n"; // 1001101110

    // Deque
    deque<int> e;
    e.push_back(5); // [5]
    e.push_back(2); // [5,2]
    e.push_front(3); // [3,5,2]
    e.pop_back(); // [3,5]
    e.pop_front(); // [5]

    cout << e.front() << "\n"; // 5
    cout << e.back() << "\n"; // 5

    // Stack

    stack<int> f;
    f.push(3);
    f.push(2);
    f.push(5);
    cout << f.top() << '\n'; // 5
    f.pop();
    cout << f.top() << '\n'; // 2

    // Priority queue

    priority_queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);
    cout << q.top() << "\n"; // 7
    q.pop();
    cout << q.top() << "\n"; // 5
    q.pop();
    q.push(6);
    cout << q.top() << "\n"; // 6
    q.pop();
    cout << q.top() << "\n"; // 3



    return 0;
}