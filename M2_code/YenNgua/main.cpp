#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("YENNGUA.INP", "r", stdin);
    freopen("YENNGUA.OUT", "w", stdout);

    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0;i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int mind[n], maxc[m];
    for(int i = 0; i < n; i++){
        mind[i] = a[i][0];
        for(int j = 0; j < m; j++)
            mind[i] = min(mind[i], a[i][j]);
    }
    for(int i = 0; i < m; i++){
        maxc[i] = a[0][i];
        for(int j = 0;j < n; j++){
            maxc[i] = max(maxc[i], a[j][i]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mind[i]==maxc[j]){
                cout << mind[i];
		return 0;
            }
        }
    }
    cout << "NO";
}
