#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[1000];
bool b[1000];

void inKQ(){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

}
void Try(int i){
    for(int j = a[i-1] + 1; j <= k; j++){
        if(!b[j] && j > a[i-1]){
            a[i] = j;
            b[j] = true;
            if(i == n)
                inKQ();
            else
                Try(i+1);
            b[j] = false;
        }
    }
}

int main()
{
    memset(b, false, sizeof(b));
    a[0] = 0;
    cin >> n >> k;
    Try(1);
}
