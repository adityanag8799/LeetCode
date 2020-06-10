Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Example 1:

Input: [1,3,5,6], 5
Output: 2
Example 2:

Input: [1,3,5,6], 2
Output: 1
Example 3:

Input: [1,3,5,6], 7
Output: 4
Example 4:

Input: [1,3,5,6], 0
Output: 0

Solution:

class Solution {
public:
    int searchInsert(vector<int>& nums, int target){
        int x; 
        for(x=0;x<nums.size();x++) 
        {
            if(nums[x]==target) return x;
        }
            nums.push_back(target);
        sort(nums.begin(),nums.end());
        for(x=0;x<nums.size();x++)
        {
            if(nums[x]==target) break;    
        }
    return x;
    }
};
