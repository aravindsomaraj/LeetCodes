class Solution {
    public int pivotIndex(int[] nums) {
        int pivotIdx = -1;
        if (nums == null || nums.length == 0) {
            return pivotIdx;
        }
        
        int len = nums.length;
        int[] prefixSums = new int[len];
        int sum = 0;
        for (int i = 0; i < len; i++) {
            sum += nums[i];
            prefixSums[i] = sum;
        }

        for (int i = 0; i < len; i++) {
            int leftSum = (i > 0) ? prefixSums[i - 1] : 0;
            int rightSum = prefixSums[len - 1] - prefixSums[i];
            if (leftSum == rightSum) {
                pivotIdx = i;
                break;
            }
        }
        return pivotIdx;
    }
}
