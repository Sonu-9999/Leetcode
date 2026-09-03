class Solution {
public:
    bool checkoddeven(vector<int>& nums1)
    {
        int n=nums1.size();
        int odd=0;
        int even=0;
        for(int num:nums1)
        {
            if(num%2==0)
            even++;
            else
            odd++;
        }
        if(even==n || odd==n)
        return true;

        return false;
    }
    bool uniformArray(vector<int>& nums1) {
        if(checkoddeven(nums1))
        return true;

        //it is impossible to change all to even
        //we can only try to change all to odd
        //find smallest odd
        int smallest_odd=INT_MAX;
        for(int num:nums1)
        {
            if(num%2!=0 && num<smallest_odd)
            smallest_odd=num;
        }
        //attempt to convert all to odd using smallest odd
        for(int num:nums1)
        {
            if(num%2!=0)
            continue;

            else
            {
                int newnum=num-smallest_odd;
                if(newnum<1)
                return false;
            }
        }
        return true;
    }
};