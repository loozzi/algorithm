#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    int cd = a[1];
    int gt = 0;
    for(int i = 2; i <= n; i++)
    {
        gt = max(gt, cd + a[i]);
        cd = a[i];


    }



    cout << gt;

}
