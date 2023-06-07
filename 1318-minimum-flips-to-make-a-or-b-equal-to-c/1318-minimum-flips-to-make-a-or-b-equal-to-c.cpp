class Solution {
public:
    int minFlips(int a, int b, int c)
    {
        int flips = 0;
        for (int i = 0; i < 32; i++) {
        int bit_a = (a >> i) & 1;  // Get i-th bit of a
        int bit_b = (b >> i) & 1;  // Get i-th bit of b
        int bit_c = (c >> i) & 1;  // Get i-th bit of c
        if ((bit_a | bit_b) != bit_c)
        {
            if (bit_c == 1) 
            {
                flips++;
            } 
            else 
            { 
                flips += (bit_a + bit_b);
            }
        }
    }

    return flips;
        
    }
};