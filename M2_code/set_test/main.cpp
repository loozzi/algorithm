#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int, greater<int> > s;
    s.insert(2);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(5);
    s.insert(5);
    set<int>::iterator it;

    s.erase(5);

    for(it=s.begin(); it!=s.end(); it++)
        cout << *it << " ";
    cout << endl;




    it = s.lower_bound(6);
    if(it != s.end())
        cout << *it;
    else
        cout << "none";
    cout << endl;
    it = s.upper_bound(1);
    if(it != s.end())
        cout << *it;
    else
        cout << "none";
}
