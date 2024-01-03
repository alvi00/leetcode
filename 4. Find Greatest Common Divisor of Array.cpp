class Solution {
public:
    int findGCD(vector<int>& nums) {

        int max=*max_element(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());

        while(max>0 && min>0){
            if(max>min){
                max=max%min;
            }
            else{
                min=min%max;
            }
        }
        if(max==0){
            return min;
        }
        else{
            return max;
        }
    }
};
