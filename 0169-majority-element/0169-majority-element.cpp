class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int n = nums.size();
        
        for(int i : nums)
        {
            m[i]++;
        }
        for(auto it : m)
        {
            if(it.second>n/2)
                return it.first;
        }
        
        return -1;
    }
};