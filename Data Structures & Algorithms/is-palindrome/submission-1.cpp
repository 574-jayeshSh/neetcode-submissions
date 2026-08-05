class Solution {
public:
    string convertStringtoLower(string &s){
        string converted = "";
        for(char &c : s){
            if(isalnum(c)){
                if(c >= 'A' && c <= 'Z'){
                    c = c - 'A' + 'a';
                }
                converted += c;
            }
        }
        return converted;
    }
    bool isPalindrome(string s) {
        string str = convertStringtoLower(s);

        int i = 0, j = str.size()-1;
        
        while( i < j){
            if(str[i] != str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
