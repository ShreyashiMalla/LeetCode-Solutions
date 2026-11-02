class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        // Create a new array to store squared numbers
        vector<int> result(n);
        int l=0,r=n-1;
        int pos=n-1;//fill from back
        // Continue until both pointers have crossed each other
        while(l<=r){
            // Compare absolute values- It convert the -ve no. to positive. Then compare 2 no.
            if(abs(nums[l])>abs(nums[r])){
                //square the number 
                result[pos]=nums[l]*nums[l];
                l++;
            }
            else{
                //square the number 
                result[pos]=nums[r]*nums[r];
                r--;
            }
            pos--;
        }
        // Return the sorted array of squares
        return result;
        
    }
};