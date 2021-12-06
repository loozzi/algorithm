#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("FREGQ.INP", "r", stdin);
    freopen("FREGQ.OUT", "w", stdout);
    string str, tmp;
    int res = 0;

    // input data
    while(getline(cin, tmp))
        str += tmp;
    map<char, int> data;

    // Lower text
    for(int i = 0; i < str.length(); i++){
        if(str[i] < 'a')
            str[i] += 32;
    }

    // create map
    for(int i = 0; i < str.length(); i++){
        data[str[i]] = 0;
    }

    // process
    for(int i = 0; i < str.length(); i++)
        data[str[i]]++;

    map<char, int>::iterator i;
    for(i = data.begin(); i != data.end(); i++){
        res = max(res, i->second);
    }

    // return output
    cout << res;
}
