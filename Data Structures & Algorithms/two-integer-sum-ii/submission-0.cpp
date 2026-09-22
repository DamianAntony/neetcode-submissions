class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        vector<int> result;
        unordered_map<int,int> mp;
        int n = numbers.size();
       
        for(int i=0; i<n; i++){
            
           int sum =  target- numbers[i];
           if(mp.find(sum)!=mp.end()){
             result.push_back(mp[sum]+1);
             result.push_back(i+1);
             return result;
           }

           mp[numbers[i]]=i;
        }
        return result;
        
    }
};
