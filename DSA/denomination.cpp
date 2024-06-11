o#include <iostream>
#include <vector>
#include <limits>

int minCoins(std::vector<int>& denoms, int sum) {
    int n = denoms.size();
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(sum + 1, std::numeric_limits<int>::max()));
    dp[0][0] = 0;

    for (int i = 1; i <= n; i++) {
        dp[i][0] = 0;
        for (int j = 1; j <= sum; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= denoms[i - 1]) {
                dp[i][j] = std::min(dp[i][j], dp[i][j - denoms[i - 1]] + 1);
                if (j >= 2 * denoms[i - 1])
                    dp[i][j] = std::min(dp[i][j], dp[i][j - 2 * denoms[i - 1]] + 2);
            }
        }
    }

    return dp[n][sum];
}

int main() {
    std::vector<int> denominations = {1, 5, 6, 9};
    int targetSum = 10;
    int result = minCoins(denominations, targetSum);
    std::cout << "Minimum number of coins: " << result << std::endl;

    return 0;
}
