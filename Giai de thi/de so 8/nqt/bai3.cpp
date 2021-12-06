#include <bits/stdc++.h>
using namespace std;

bool *a;

void sang(int n){
    a = new bool[n+1];
    memset(a, 1, sizeof(bool) * (n+1));
//    for(int i = 0; i <= n; i++)
//        a[i] = true;
    a[0]=a[1]=false;
    for(long long i = 2; i * i < n; i++)
        if(a[i] == true)
            for(long long j = i*i; j <= n; j+=i)
                a[j] = false;
}


long long find_num(long long n){
    for(long long i = n; i <= 1000000000; i++){
        if(a[i])
            return i * i;
    }
}

bool check(long long n){
    if(n == 2)
        return true;
    for(int i= 2; i <= (int)sqrt(n); i++){
        if(n%i ==0)
            return false;
    }
    return n > 1;
}


long long find_num2(long long n){
    while(!check(n)){
        n++;
    }
    return n * n;
}

int main()
{
    freopen("bai3.inp", "r", stdin);
    freopen("bai3.out", "w", stdout);
    // memset(snt, true, sizeof(snt));
    //sang(100000000);
    int n;
    while(cin >> n){
        cout << find_num2((int)sqrt(n)) << endl;
    }
}
