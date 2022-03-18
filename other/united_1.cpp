#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    long long sum = 0;
    cin >> n >> k;
    long long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i = 0 ; i < n; i++){
        if(i < k)
            sum -= a[i];
        else
            sum += a[i];
    }

    cout << sum;
}
