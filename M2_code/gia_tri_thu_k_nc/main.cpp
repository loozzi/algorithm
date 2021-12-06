/*
    nhap vao n, k. sinh ra tat ca phan tu cua mang, co tu so va mau so <= n
    tim vi tri so thu k, viet tu so va mau so duoi' da.ng toi gian nhat
*/

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    return (b==0)?a:gcd(b, a%b);
}

void doc(){

}

bool check(float b, vector<float> d){
    for(int i = 0; i < d.size(); i++){
        if(b==d[i]){
            return false;
        }
    }
    return true;
}

struct ps{
    int a, b;
    double t;
};

bool ss(ps a, ps b){
    return a.t < b.t;
}

void xuli(){
    int n, k;
    cin >> n >> k;

    vector<ps> g, m;
    ps l;
    l.a=0;
    l.b=1;
    l.t=0;
    g.push_back(l);
    for(float i = 1; i <= n; i+=1){
        for(float j = 0; j <= i; j+=1){
            ps l;
            l.a=j;
            l.b=i;
            l.t=j/i;
            g.push_back(l);
        }
    }

    sort(g.begin(), g.end(), ss);


    for(int i = 1;i < g.size(); i++){
        if(g[i-1].t != g[i].t){
            m.push_back(g[i]);
        }
    }
    cout << m[k-2].a << " " << m[k-2].b;

}

int main()
{
    doc();
    xuli();
}
