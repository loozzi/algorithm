#include<bits/stdc++.h>

using namespace std;

int pow10[201];
 





int f[201];

void testcase1(){
    int k;
    cin >> k;
    k *= 9;
    f[0] = 1;
    for(int i = 1; i <= 200; i++){
        f[i] = f[i-1] * 10 % k;
    }

    for(int i = 1; i <= 200; i++){
        for(int j = 0; j <= i; j++){
            if((8 * f[i] - 2*f[i-j] - 6) % k == 0){
                for(int ii = 0; ii < j; ii++)
                    cout << "8";
                for(int jj = 0; jj < i- j; jj++)
                    cout << "6";
                cout << endl;
                return;

            }
        }
    }
    cout << "-1" << endl;
}


	
void testcase() {
	int x; 
    cin >> x; 
    x *= 9;
	pow10[0] = 1;
	for(int i = 1; i <= 200; ++i){
		pow10[i] = pow10[i-1] * 10 % x;
    }
	for(int nd = 1; nd <= 200; ++nd)
		for(int n8 = 0; n8 <= nd; ++n8)
			if((8*pow10[nd] - 2*pow10[nd-n8] - 6) % x == 0) {
				for(int i = 0; i < n8; ++i) printf("8");
				for(int i = 0; i < nd - n8; ++i) printf("6");
				printf("\n");
				return;
			}
	printf("-1\n");
}
 
int main() {
    // freopen("luckynum.inp", "r", stdin);
    // freopen("luckynum.out", "w", stdout);
	int tc; 
    cin >> tc;
	while(tc--) testcase1();
	return 0;
}