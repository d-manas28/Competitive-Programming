class Solution {
public:
    string convertToFormat(string s){
        string res = "";
        for(char i:s){
            // if uppercase convert into lowercase
            if(i>=65 && i<=90){
                i = i+32;
            }
            // if not alphabet, ignore
            if(isalnum(i)){
                res += i;
            }
        }
        return res;
    }
    bool isPalindrom(string s){
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        
        string res = convertToFormat(s);
        return isPalindrom(res);
    }
};