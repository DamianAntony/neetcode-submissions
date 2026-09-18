class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;
        vector<int> result;

        for(int i=0; i<nums.size(); i++){
            int sum = target-nums[i];

            if(mp.find(sum)!=mp.end()){
                result.push_back(mp[sum]);
                result.push_back(i);
                return result;
            }
            mp[nums[i]]=i;
        }

        return result;
        
    }
};
