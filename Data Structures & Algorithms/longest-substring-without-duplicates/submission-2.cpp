class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>freq;

        int i = 0, j = 0;
        int maxLength = 0;

        while(j<s.size()){
            if(!freq.count(s[j])){
                freq.insert(s[j]);
            }
            else{while(freq.count(s[j])){
                freq.erase(s[i]);
                i++;
            }
            freq.insert(s[j]);
            
            }

            j++;
            maxLength = max(maxLength, j-i);

        }
        return maxLength;
    }
};
