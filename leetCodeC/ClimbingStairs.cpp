class ClimbingStairs {
public:
    int climbStairs(int n) {
        if (n < 3) return n;

        int baz[n + 1];
        baz[1] = 1;
        baz[2] = 2;
        for (int i = 3; i <= n; i++) {
            baz[i] = baz[i - 1] + baz[i - 2];
        }
        return baz[n];
    }
};
