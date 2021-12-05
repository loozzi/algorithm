#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("RECRUIT_OLP2012K11.INP", "r", stdin);
    freopen("RECRUIT_OLP2012K11.OUT", "w", stdout);
    int n, k;
    vector<int> res;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    int i = 1;
    bool kt = false;
//    for(int i = 1; i < n; i++){
//        for(int j = a[i-1]+1; j < a[i]; j++, k--){
//            cout << j << " ";
//            if(k == 0){
//                break;
//                kt = true;
//            }
//        }
//        if(!kt)
//            break;
//    }

    for(int i = 1; i <n; i++){
        for(int j = a[i-1]+1; j < a[i]; j++)
        {
            res.push_back(j);
            if(res.size() >= k){
                break;
                kt = true;
            }
        }
        if(kt)
            break;
    }
    for(int i = a[n-1] + 1; res.size()<=k; i++)
        res.push_back(i);
    for(int i = 0; i < k; i++)
        cout << res[i] << " ";
}
