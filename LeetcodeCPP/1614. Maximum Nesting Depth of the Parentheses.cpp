class Solution {
public:
    int maxDepth(string s) {
        int max1=0;
        int depth=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
              
              max1++;
            }
            else if(s[i]==')'){
                 max1--;
            }
            depth=max(depth,max1);
        }
        return depth;
    }
};
