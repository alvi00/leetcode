class Solution {
public:
    int mySqrt(int x) {
         int low=1;
         int high=x;
         while(low<=high){
             int mid=low+(high-low)/2;
             if((long)mid*mid==(long)x){
                 return mid;
             }else if((long)mid*(long)mid>(long)x){
                 high=mid-1;
             }else if((long)mid*(long)mid<x){
                 low=mid+1;
             }
         }
         return high;
    }
};
