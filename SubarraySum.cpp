class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int res = 0;
        int preSum = 0;
        map<int,int> mp;
        mp[0] = 1;
        for(int i=0;i<n;i++)
        {
            preSum += nums[i];
            int rem = preSum%k;
            if(rem < 0)
              rem += k;
            if(mp.find(rem) != mp.end())
            {
                res += mp[rem];
            }
            mp[rem]++;
        }

        return res;
    }
};