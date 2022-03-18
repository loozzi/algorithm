#include<bits/stdc++.h>

using namespace std;

int sqr(int x){
    return x*x;
}


int poww(int a, int b, int c){
    if(b == 0){
        return 1 % c;
    } else if(b % 2 == 0){
        return sqr((int)pow(a, b/2) % c) % c;
    } else return ((a % c) * sqr((int)pow(a, b/2) % c)) % c;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    cout << poww(a, b, c);

}