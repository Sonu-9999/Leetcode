class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        if(n>=1000 && n<1e6)
        {
            ans=1*(n-999);
        }
        else if(n>=1e6 && n<1e9)
        {
            ans=(1e6-1e3)+(2*(n-999999));
        }
        else if(n>=1e9 && n<1e12)
        {
            ans=(1e6-1e3)+(2*(1e9-1e6))+(3*(n-999999999));
        }
        else if(n>=1e12 && n<1e15)
        {
            ans=(1e6-1e3)+(2*(1e9-1e6))+(3*(1e12-1e9))+(4*(n-999999999999));
        }
        else if(n==1e15) 
        {
            ans=(1e6-1e3)+(2*(1e9-1e6))+(3*(1e12-1e9))+(4*(n-999999999999))+1;
        }
        else
        ans=0;
        

        return ans;
    }
};