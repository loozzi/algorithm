#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[1001];
bool mark[1001];

void showKQ(){
    for(int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << endl;
}

void Try(int i){
    for(int j = a[i-1] + 1; j <= n; j++){
        if(mark[j] == false){
            a[i] = j;
            mark[j] = true;
            if(i == k)
                showKQ();
            else{
                Try(i+1);
            }
            mark[j] = false;
        }

    }
}

int main()
{
    memset(a, false, sizeof(a));
    cin >> n >> k;
    Try(1);
}
