class Solution {
public:
    int maxArea(vector<int>& heights) {


        int l=0; 
        int r = heights.size()-1;

        int maxArea =0;

       while(l<r){
         
         int area =0;

         if(heights[l]<heights[r]){
            area = heights[l]*(r-l);
            
            l++;
         }else{
            area = heights[r]*(r-l);
            r--;
         }
         maxArea = max(maxArea, area);
       }
       return maxArea;
        
    }
};
