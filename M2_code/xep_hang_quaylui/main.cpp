#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[1000];
bool b[1000];

void inKQ(){
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void Try(int i){
    for(int j = 1; j <= k; j++){
        if(b[j] == false){
            a[i] = j;
            b[j] = true;
            if(i == n)
                inKQ();
            else
                Try(i+1);
            b[j] = false;
        }
    }
}

int main()
{
    memset(b, false, sizeof(b));
    cin >> n >> k;
    Try(1);
}
