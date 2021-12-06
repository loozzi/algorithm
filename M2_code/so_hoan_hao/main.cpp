#include <bits/stdc++.h>

using namespace std;

bool shh(int n){
    int sum = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            sum += i + n/i;
            if(i == n/i)
                sum -= i;
        }
    }
    return sum == n;
}

int main()
{
    int n;
    cin >> n;
    cout << shh(n);
}
