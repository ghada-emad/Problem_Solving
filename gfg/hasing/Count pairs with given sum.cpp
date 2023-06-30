
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<n;i++){
            {
                count+=mp[k-arr[i]];
                mp[arr[i]]++;
            }
            
        }
        return count;
        
    }
};
