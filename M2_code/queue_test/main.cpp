#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    for(int i = 0; i < 10; i++)
        q.push(i);
    q.pop();
    cout << q.size() << endl;
    cout << q.back() << endl;
    cout << q.front() << endl;
    cout << q.empty();
}
