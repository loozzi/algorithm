#include <bits/stdc++.h>
using namespace std;

int main()
{
//    vector<int> k;
//    k.push_back(5);
//    k.push_back(2);
//    k.push_back(1);
//    vector<int>::iterator it;
//    it = k.begin();
//    // k.pop_back();
//    for(; it != k.end(); it++){
//        cout << *it << endl;
//        //k.erase(it);
//    }
//    cout << k.size();

    int n, m;
    cin >> n >> m;

    vector< vector<int> > p (n+1);
    int x, y;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        p[x].push_back(y);
        p[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        sort(p[i].begin(), p[i].end());
        // reverse(p[i].begin(), p[i].end());
    }
    vector<int>::iterator it;
    for(int i = 1; i <= n; i++){
        for(it = p[i].begin(); it != p[i].end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }
}
