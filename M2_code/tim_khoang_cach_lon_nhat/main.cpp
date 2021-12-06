#include <bits/stdc++.h>

using namespace std;

struct toa_do{
    int x;
    int y;
    float kc;
};

bool compair(toa_do a, toa_do b){
    return (a.kc<b.kc);
}

int main()
{
    freopen("DOANTHANG.INP", "r", stdin);
    freopen("DOANTHANG.OUT", "w", stdout);
    int n;
    cin >> n;
    toa_do a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].x >> a[i].y;
        a[i].kc = sqrt(pow(a[i].x, 2) + pow(a[i].y,2));
    }

    sort(a, a+n, compair);
    for(int i = 0; i < n; i++)
        cout << a[n-i-1].x << " " << a[n-i-1].y << endl;
}


//int main(){
//    freopen("DOANTHANG.INP", "r", stdin);
//    freopen("DOANTHANG.OUT", "w", stdout);
//    int n, tmp1, tmp2, x, y;
//    float kc = 0;
//    cin >> n;
//    for(int i = 0; i < n; i++){
//        cin >> tmp1 >> tmp2;
//        if(kc < sqrt(tmp1*tmp1 + tmp2*tmp2)){
//            x = tmp1;
//            y = tmp2;
//            kc = sqrt(tmp1*tmp1 + tmp2*tmp2);
//        }
//    }
//    cout << x << " " << y;
//}

