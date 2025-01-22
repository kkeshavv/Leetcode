class Solution {
public:
    int mySqrt(int x) {
      int low=1;
     int  high=x;
     int result=0;
     if (x == 0) return 0;
      while(low<=high){
       int mid = low + (high - low) / 2;
        long long value = (long long)mid * mid;
        if(value==x){
            return mid;
        }
        else if(value<x){
            result = mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
      }  
      return result;
    }
};