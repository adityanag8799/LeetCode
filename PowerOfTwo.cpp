class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        if(n%2!=0) return false;
        bool found;
        int x;
        found=false;
        x=0;
        while(x<32)
        {
        if(pow(2,x)==n)
        {
            found=true;
            break;
        }
        x++;
        }
    return found; 
        }
};
