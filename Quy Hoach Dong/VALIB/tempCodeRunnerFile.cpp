r(int t = 1; t <= j/weight[i]; t++){
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j - t*weight[i]] + value[i] * t);
                }