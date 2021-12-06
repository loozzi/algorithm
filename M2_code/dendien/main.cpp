#include <bits/stdc++.h>

using namespace std;


void init(){
    freopen("dendien.inp", "r", stdin);
    freopen("dendien.out", "w", stdout);
}

void process(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int res = 0;

    // hang ngang
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == 1){
                int k = 0;
                while(a[i][j + k] == 1 && k + j < n){
                    k++;
                }
                res = max(res, k);
                j = k + j;
            }
        }
    }


    // hang doc
    for(int j = 0 ; j < n; j++){
        for(int i = 0; i < n; i++){
            if(a[i][j] == 1){
                int k = 0;
                while(a[i+k][j] == 1 && k + i < n){
                    k++;
                }
                res = max(res, k);
                i = k + i;
            }
        }
    }

    // hang cheo 1
    for(int j = res; j < n; j++){
        for(int i = 0; i <= j; i++){
            if(a[i][j-i] == 1){
                int k = 0;
                while(a[i+k][j-i-k] && i+k <= j){
                    k++;
                }
                res = max(res, k);
                i+=k;
            }
        }

    }
    for(int i = 1; i <= n-res; i++){
        for(int j = 0; j < n - 1; j++){
            if(a[i+j][n-j-1] == 1){
                int k = 0;
                while(a[i + j + k][n - j - 1 - k] == 1 && j + k < n-1){
                    k++;
                }
                res = max(res, k);
                j += k;
            }
        }
    }

    // hang cheo 2
    for(int j = 0 ; j < n - res; j++){
        for(int i = 0; i < n - j; i++){
            if(a[i][j+i] == 1){
                int k = 0;
                while(a[i + k][i+j+k] == 1 && i + k < n - j)
                    k++;
                res = max(res, k);
            }
        }
    }


    for(int i = 1; i < n - res; i++){
        for(int j = 0; j < n - i; j++){
            if(a[i+j][j] == 1){
                int k = 0;
                while(a[i + j + k][j+k] == 1 && j + k < n - i)
                    k++;
                res = max(res, k);
            }
        }
    }

    cout << res;

}

int main()
{
    init();
    process();
}
