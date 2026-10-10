class Solution {
public:
    int climbStairs(int n) {
        int ways[3];
        ways[1] = 1;
        ways[2] = 2;
        for(int i=3;i<=n;i++){
            ways[i%3] = ways[(i-1)%3] + ways[(i-2)%3];
        }
        return ways[n%3];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna