#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[1000];
bool b[1000], cheo1[30], cheo2[30];
bool stop = false;

void inKQ(){
    for(int i = 1; i <= n ;i++)
        cout << a[i] << " ";
    cout << endl;
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!b[j] && !cheo1[i + j - 1] && !cheo2[n-j+i] && !stop){
            a[i] = j;
            b[j] = true;
            cheo1[i + j - 1] = true;
            cheo2[n - j + i] = true;
            if(i == n){
                inKQ();
                stop = true;
                break;
            }
            else
                Try(i+1);
            b[j] = false;
            cheo1[i + j - 1] = false;
            cheo2[n - j + i] = false;
        }
    }
}

int main()
{
    memset(b, false, sizeof(b));
    memset(cheo1, false, sizeof(cheo1));
    memset(cheo2, false, sizeof(cheo2));
    n = 8;
    Try(1);
}
