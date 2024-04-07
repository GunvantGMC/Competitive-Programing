MOD = 998244353;
function solve(n, k, L, R) {
    dp = new Array(R + 1).fill(null).map(() => new Array(R + 1).fill(0));
    dp[0][0] = 1;
    for(let i = 1; i <= n; i++) 
    {
        for(let j = 1; j <= k; j++) 
        {
            for(let s = L; s <= R; s++)
            {
                dp[i][s] = (dp[i][s] + dp[i - 1][(s - j + R 1) % (R + 1)]) % MOD;
            }
        }
    }
    const result = new Array(n).fill(0);
    for(let i = 1; i <= n; i++) 
    {
        for(let s = L; s <= R; s++)
        {

        }
        result[i - 1] = (result[i - 1] + dp[i][s]) % MOD;
    }
    return result;
}

