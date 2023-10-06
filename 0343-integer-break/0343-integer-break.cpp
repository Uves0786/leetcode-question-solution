class Solution {
public:
    int integerBreak(int n) {
        
        if(n==2){
            return 1;
        }
        if(n==3){
            return 2;
        }
        vector<int> maxproduct(n+1,0);
        
                maxproduct[1]=1;
                maxproduct[2]=2;
                maxproduct[3]=3;
        for(int i=4;i<=n;i++){
            int max_value=0;
            for(int j=1;j<=i/2;j++){
                max_value=max(max_value,maxproduct[j]*maxproduct[i-j]);
            }
            maxproduct[i]=max_value;
        }
        return maxproduct[n];
        
    }
};