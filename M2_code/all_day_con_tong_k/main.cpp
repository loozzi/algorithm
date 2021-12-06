#include <bits/stdc++.h>

///
/// cho day A(a1, a2, a...) phan biet, n < 15.
/// dua ra cac day con co tong bang s
///

using namespace std;
int a[100], b[100];
int n, k;

void showKQ(){
    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum += b[i] * a[i];
    if(sum == k){
        for(int i = 1; i <= n; i++)
            if(b[i])
                cout << a[i] << " ";
        cout << endl;
    }
}

void Try(int i){
    for(int j =0 ; j<=1; j++){
        b[i] = j;
        if(i == n)
            showKQ();
        else
            Try(i+1);
    }
}

int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    Try(1);
}
