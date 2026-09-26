class Solution {
public:
    int lengthOfLongestSubstring(string s) {

         set<char> elements;
         int longestlength=0;
         int l =0;

         for(int r=0; r< s.length(); r++){
            
            while(elements.count(s[r])){
                elements.erase(s[l]);
                l++;
            }

            elements.insert(s[r]);
            longestlength= max(longestlength , r-l+1);
         }

         
         return longestlength;        
    }
};
