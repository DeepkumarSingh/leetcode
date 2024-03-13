class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        long long int  mid = start+(end-mid)/2;
        int ans=-1;
        while(start<=end)
        {
            if(mid*mid==x) return mid; // kya mera mid hi toa ans nhi
        
        else if(mid*mid<x) // left side right side jao par answer store karke 
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1; // left side jao 
        }
        mid=start+(end-start)/2; 
        }
        return ans;
    }
};
