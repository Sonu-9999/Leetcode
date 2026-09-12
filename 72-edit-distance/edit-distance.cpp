class Solution {
public:
    int m;
    int n;
    int t[501][501];
    int solve(string &s1, string &s2,int i, int j)
    {
        if(i==m)
        return n-j;
        if(j==n)
        return m-i;
        if(t[i][j]!=-1)
        return t[i][j];

        if(s1[i]==s2[j])
        return t[i][j]=solve(s1,s2,i+1,j+1);
        else
        {
            //insert
            int insert=solve(s1,s2,i,j+1);
            //delete
            int del=solve(s1,s2,i+1,j);
            //replace
            int replace=solve(s1,s2,i+1,j+1);

            return t[i][j]=1+min({insert,del,replace});
        }
        return -1;

        
    }
    int minDistance(string word1, string word2) {
        memset(t,-1,sizeof(t));
        m=word1.size();
        n=word2.size();
        return solve(word1,word2,0,0);
        
    }
};