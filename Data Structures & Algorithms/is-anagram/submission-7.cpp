class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int>sHash(26,0);
        for(char ch : s) sHash[ch - 'a']++;
        for(char ch : t) sHash[ch - 'a']--;

        for(int freq : sHash){
            if(freq < 0) return false;
        }
        return true;
    }
};
