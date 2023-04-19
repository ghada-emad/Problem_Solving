class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        int n=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
            }
            if(isalnum(s[i])){
                s1+=s[i];
            }
        }
        string rev=s1;
        reverse(rev.begin(),rev.end());
        return s1==rev;
    }
};
