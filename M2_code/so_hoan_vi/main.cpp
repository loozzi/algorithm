#include <bits/stdc++.h>

using namespace std;

int n;
int *a, *b;

void show(){
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void dq(int i){
    for(int j = 1; j <= n; j++){
        if(b[j] == 0){
            a[i] = j;
            b[j] = 1;
            if(i==n){
                show();
            } else {
                dq(i+1);
            }

            b[j] = 0;
        }
    }
}

int main()
{
    cin >> n;
    a = new int[n+1];
    b = new int[n+1];
    memset(b, 0, (n+1)*sizeof(int));
    dq(1);
}
