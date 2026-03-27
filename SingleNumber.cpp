// Problem: Single Number
// Link: https://leetcode.com/problems/single-number/
// Difficulty: Easy
/* Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space. */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single = 0;
        for(int num : nums){
            single = single ^ num;
            }
            return single;
    }
};
