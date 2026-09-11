class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>freq(10,0);
        for(int &d:digits)
        {
            freq[d]++;
        }
        int ans=0;
        for(int i=1;i<10;i++) //hundred's digit
        {
            for(int j=0;j<10;j++) //tens digit
            {
                for(int k=0;k<10;k=k+2) //ones digit
                {
                    --freq[i];
                    --freq[j];
                    --freq[k];
                    if( freq[i]>=0 && freq[j]>=0 && freq[k]>=0)
                    ans++;

                    ++freq[i];
                    ++freq[j];
                    ++freq[k];
                }
            }
        }
        return ans;
    }
};