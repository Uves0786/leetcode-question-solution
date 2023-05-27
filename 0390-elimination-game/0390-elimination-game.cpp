class Solution {
public:
   int game(int n)
   {
       if(n<=2)
       {
           return n-1;
       }
       if(n%2==1)
       {
           return n-2-2*game((n-1)/2);
       }
       else
       {
           return n-1-2*game(n/2);
       }
   }
    int lastRemaining(int n) {
        return game(n)+1;
       
    }
};