#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[1000], b[1000];
int res = 0;

void inKQ(){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i] * b[i];
    }
    if(sum <= k)
        res = max(res, sum);
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n)
            inKQ();
        else
            Try(i+1);
    }
}

int main()
{
    cin >> k >> n;
    for(int i = 1; i <= n; i++)
        cin >> b[i];
    Try(1);
    cout << res;
}
