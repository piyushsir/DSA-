#include <bits/stdc++.h>
using namespace std;

int max_value(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> dp(n, vector<int>(n, INT_MIN));

    for (int i = 0; i < n; i += 2) {
        dp[i][i] = nums[i];
    }

    for (int len = 3; len <= n; len += 2) {
        for (int i = 0; i <= n - len; i += 2) {
            int j = i + len - 1;
            for (int k = i + 1; k < j; k += 2) {
                if (nums[k] == '+') {
                    dp[i][j] = max(dp[i][j], dp[i][k-1] + dp[k+1][j]);
                } else {
                    dp[i][j] = max(dp[i][j], dp[i][k-1] - dp[k+1][j]);
                }
            }
            if (nums[i] == '+') {
                dp[i][j] = max(dp[i][j], dp[i+1][j]);
            } else {
                dp[i][j] = max(dp[i][j], -dp[i+1][j]);
            }
            if (nums[j] == '+') {
                dp[i][j] = max(dp[i][j], dp[i][j-1]);
            } else {
                dp[i][j] = max(dp[i][j], dp[i][j-1]);
            }
        }
    }

    return dp[0][n-1];
}

int main() {
    vector<int> nums = {1, 3, -2, -5, 1, -6, 7};
    cout << max_value(nums) << endl;
    return 0;
}
