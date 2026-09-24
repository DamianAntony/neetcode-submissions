class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int water =0;
        int leftmax =0; 
        int rightmax =0;
        int l=0;
        int r=n-1;


        while(l<r){
            leftmax = max(height[l], leftmax);
            rightmax = max(height[r], rightmax);
            if(leftmax<=rightmax){
                if(height[l]<leftmax){
                    water+=leftmax-height[l];
                }
                    l++;
            }else{
                if(height[r]<rightmax){
                    water+=rightmax-height[r];
                }
                    r--;
            }
            
        }
        return water;
        
    }
};
