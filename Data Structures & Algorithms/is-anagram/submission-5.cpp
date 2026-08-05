class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> seen(26,0);

        for(auto ch: s){
            seen[ch - 'a']++;
        }
        for(auto ch: t){
            seen[ch - 'a']--;
        }
        for(int i : seen){
            if(i < 0 || i>0) return false;
        }

        return true;
    }
};
