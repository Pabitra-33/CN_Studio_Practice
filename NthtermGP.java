import java.lang.*;

public class Solution {
    
    private static final int MOD = 1000000007;

    public static int power(long x, int n) {
        if (n == 0) {
            return 1;
        }
        long result = 1;
        x = x % MOD;
        while (n > 0) {
            if (n % 2 == 1) {
                result = (result * x) % MOD;
            }
            x = (x * x) % MOD;
            n /= 2;
        }
        return (int) result;
    }

    public static int nthTermOfGP(int N, int A, int R) {
        // Write you code here   
        long result = power(R, N - 1);
        result = (A * result) % MOD;
        return (int) result;
    }

}