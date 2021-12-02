#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[10001];
bool mark[10001];

int dem  = 0;
void showKQ(){
    cout << "(";
    for(int i = 1; i < k; i++)
        cout << a[i] << ", ";
    cout << a[k] << ")" << endl;
    dem++;
}

void Try(int i){
    for(int j = a[i-1] + 1; j<=n; j++){
        if(mark[j] == false && j > a[i-1]){
            a[i] = j;
            mark[j] = true;
            if(i == k)
                showKQ();
            else
                Try(i+1);
             mark[j] = false;
        }

    }
}

int main()
{
    freopen("bai3.inp", "r", stdin);
    freopen("bai3.out", "w", stdout);
    memset(mark, false, sizeof(mark));
    a[0] = 0;
    cin >> n >> k;
    Try(1);
    cout << dem;
}
