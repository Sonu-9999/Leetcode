class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>minimum(n,INT_MAX);
        int min_element=nums[n-1];
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]<min_element)
            min_element=nums[i];

            minimum[i]=min_element;
        }
        int max_element=nums[0];
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max_element)
            max_element=nums[i];

            if(max_element-minimum[i]<=k)
            return i;
        }
        return -1;
    }
};