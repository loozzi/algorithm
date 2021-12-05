#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int t, x, n;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> x;
            q.push(x);
            if(x == 3){
                cin >> x;
                q.push(x);
            }
        }
        while(!q.empty()){
            cout << q.front() << endl;
            q.pop();
        }
    }
}
