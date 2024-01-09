class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=n-1;i>=1;i--){
            int didswap=0;
            for(int j=0;j<=i-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    didswap=1;
                }
            }
            if(didswap==0){
                break;
            }
        }
    }
};
