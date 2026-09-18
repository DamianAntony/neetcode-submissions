class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<char> freqs(26,0);
        vector<char> freqt(26,0);

        for(char ch:s){
            freqs[ch-'a']++;
        }
        for(char ch :t){
            freqt[ch-'a']++;
        }

        return freqt==freqs;
        
    }
};
