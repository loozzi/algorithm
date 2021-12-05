#include <bits/stdc++.h>

using namespace std;

void doc(){

}

int a[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int so_kt(int x){
    return a[x];
}

int lon(int x){
    if(x==0)
        return 1;
    if(x==1) return 5;
    if(x==2 || x==3) return 1;
    if(x == 4 || x== 5) return 2;
    if(x== 6) return 1;
    if(x==7) return 2;
    else if (x == 9 || x == 8) return 0;

}

void t1(long long n){
    int res = 0;
    while(n){
        res += so_kt(n%10);
        n/=10;
    }
    cout << res;
}

void t2(long long n){
    long long f[20];
    memset(f, 0, sizeof(f));
    int i = 1;
    f[0] = lon(n%10);
    n/=10;
    while(n){
        f[i] += lon(n%10);
        n/=10;
        i++;
    }
    for(int j = 0; j <i; j++){
        cout << f[j] << " ";
    }
}

void xuli(){
    int v;
    long long n;
    cin >> v >> n;
    if(v==1)
        t1(n);
    else
        t2(n);
}

int main()
{
    doc();
    xuli();
}
