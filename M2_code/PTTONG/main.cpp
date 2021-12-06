#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[1000];
bool b[1000];

void inKQ(int n, int k){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i];
    }
    if(sum == k){
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }

}

void Try(int i, int m, int k){
    for(int j = 1; j <= k; j++){
        if(!b[j] && j > a[i-1]){
            a[i] = j;
            b[j] = true;
            if(i == m)
                inKQ(m, k);
            else
                Try(i+1, m, k);
            b[j] = false;
        }
    }
}

int main()
{
    memset(b, false, sizeof(b));
    cin >> k;
    for(int i = 1; i <= k/2; i++)
        Try(1, i, k);
}
