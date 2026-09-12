class Solution {
public:
    int minDays(int n) {
        const int INF=1e9;
        vector<int>dp(n+1,INF);
        dp[0]=0;
        for(int x=0;x<=n;x++)
        {
            if(dp[x]==INF)
            {
                continue;
            }
            for(int k=1;;k++)
            {
                int points=k*(k+1)/2;
                if(x+points>n)
                break;

                int days;

                if(x==0)
                days=k;
                else
                days=k+1;

                dp[x+points]=min(dp[x+points],dp[x]+days);
            }
        }
        return dp[n];
    }
};