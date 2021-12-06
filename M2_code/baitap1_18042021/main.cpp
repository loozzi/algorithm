/*
DE BAI
Trong 1 cuoc thi tren truyen hinh, moi thi sinh co 1 ma so 0 < x <= 9999. Tro choi tren truyen hinh moi khan gia duoc phep
binh chon cho thi sinh do' theo tho`i gian thuc. Yeu cau: tim ra thi sinh co so luot binh chon nhieu nhat.
Input:
    - moi dong la 1 luot binh chon

Output:
    - thi sinh co ma so duoc binh chon nhieu nhat va so luot binh chon do

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
    int n, m;
    int a[10000];
    memset(a, 0, sizeof(a));

    while(cin >> n){
        a[n]++;
    }


    m = 0;
    for(int i = 1; i < 10000; i++){
        m = max(m, a[i]);
    }
    for(int i = 1; i < 10000; i++)
        if(a[i]==m)
            cout << i << " " << m << endl;
}
