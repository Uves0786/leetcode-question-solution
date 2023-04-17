class Solution {
public:
    double myPow(double x, int n)
    {
        // x==number
        //n==power of number
        
        // base case
        if(x==1 || n==0) return 1;
           // double temp=myPow(x,n/2);
           // if(n%2==1) return temp*temp*x;
        if(n<0)
        {
            n=abs(n);
            x=1/x;             
        }
        // for even number
        if(n%2==0)
        {
            return  myPow(x*x,n/2);
        }
        
        // for odd number
        else
        {
             return  x*myPow(x*x,n/2);
        }
        
    }
};