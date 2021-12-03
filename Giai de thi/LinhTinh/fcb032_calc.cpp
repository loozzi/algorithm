#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a;
    vector<long long> t;
    for(int i = 0; i < 3; i++){
        cin >> a;
        t.push_back(a);
    }

    sort(t.begin(), t.end());
    if(t[0] + t[1] - t[2] == 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;


    t.clear();
    for(int i = 0; i < 3; i++){
        cin >> a;
        t.push_back(a);
    }

    sort(t.begin(), t.end());
    if(t[0] + t[1] - t[2] == 0)
        cout << "yes";
    else
        cout << "no";
}
