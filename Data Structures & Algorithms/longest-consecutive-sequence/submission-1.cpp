class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.size()==0){
        return 0;
       }
       int current =1; 
       int longest =1;
       int n = nums.size();

       

       sort(nums.begin(), nums.end());

        for(int i=1; i<n  ; i++){

            if(nums[i]==nums[i-1]){
                continue;
            }

            if(nums[i]==nums[i-1]+1){
                current++;
            }else{
                current=1;
            }

            longest = max(longest , current);


        }

        return longest;

        
        
    }
};
