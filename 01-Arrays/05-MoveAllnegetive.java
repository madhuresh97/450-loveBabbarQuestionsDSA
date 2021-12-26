class Solution {
    public void moveZeroes(int[] nums) {
        int j = 0, temp;
        if(nums.length > 1) {
            for(int i = 0; i < nums.length; i++) {
                if (nums[i] != 0) {
                    temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                    j++;
                }
            }
        }
    }
}
