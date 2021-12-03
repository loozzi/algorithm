#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    s1 = " " + s1;
    s2 = " " + s2;
    int n = s1.length();
    int m = s2.length();
    int a[n+1][m+1];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i*j==0)
                a[i][j] = 0;
            else {

                if(s1[i] == s2[j])
                    a[i][j] = a[i-1][j-1] + 1;
                else
                    a[i][j] = max(a[i-1][i], a[i][j-1]);
            }
        }
    }
    cout << a[n-1][m-1] << endl;
    string res = "";
    int i = n-1, j = m-1;
    while(a[i][j]){
        if(s1[i] == s2[j]){
            res += s1[i];
            i--;
            j--;
        }
        else{
            if(a[i][j-1] > a[i-1][j])
                j--;
            else
                i--;
        }
    }
    cout << res;

}
