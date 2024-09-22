class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int N = nums.size();
       int expectedSum =  (N*(N+1))/2;
       int actualSum = 0;
       for(int num: nums){
         actualSum += num;
       }
       return expectedSum - actualSum;
    }
};