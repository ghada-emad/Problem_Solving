    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        int count=0;
        for(int i=0;i<N;i++){
            if(A[i]==B[i]){
                count++;
            }
        }    
        if(count==N){
            return true;
        }else{
            return false;
        }
    }
    
};


