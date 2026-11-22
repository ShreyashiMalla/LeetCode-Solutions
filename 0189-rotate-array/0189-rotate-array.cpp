class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        // if k is greater than n
        k= k%n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
                
    }
    void reverse(vector<int>& nums,int l,int r){
        while(l<r){
            int temp=nums[r];
            nums[r]=nums[l];
            nums[l]=temp;
            l++;
            r--;

        }
    }
};