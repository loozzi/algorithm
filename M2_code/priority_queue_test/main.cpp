#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int> > pq;
    pq.push(1);
    pq.push(9);
    pq.push(5);
    pq.push(7);
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
}
