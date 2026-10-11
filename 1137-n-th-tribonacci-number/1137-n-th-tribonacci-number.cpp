class Solution {
public:
    int tribonacci(int n) {
        const int maxl = 4;
        static int a[maxl];
        a[0] = 0;
        a[1] = 1;
        a[2] = 1;
        for(int i = 3;i<=n;i++){
            a[i%maxl] =a[(i-1)%maxl]+a[(i-2)%maxl]+a[(i-3)%maxl];
        }
        return a[n%maxl];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna