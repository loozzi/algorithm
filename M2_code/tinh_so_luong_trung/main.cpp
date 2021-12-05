#include <bits/stdc++.h>
using namespace std;
struct gt{
    int sl, gia;
};

bool compair(const gt a,const gt b){
    return a.gia < b.gia;
}

int main()
{
    freopen("TRUNG.INP", "r", stdin);
    freopen("TRUNG.OUT", "w", stdout);
    int n, k;
    cin >> n >> k;
    gt a[n];
    for(int i = 0; i < n; i++)  cin >> a[i].sl >> a[i].gia;

    sort(a, a + n, compair);

    int soluong = 0;

    for(int i = 0; i < n ; i++){
        if(k >= a[i].gia){
            int tmp = k / a[i].gia;
            if(tmp > a[i].sl){
                soluong += a[i].sl;
                k -= a[i].sl*a[i].gia;
            } else {
                soluong += tmp;
                k -= a[i].sl * tmp;
            }
        }
    }

    cout << soluong;
}
