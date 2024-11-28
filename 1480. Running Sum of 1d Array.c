int* runningSum(int* nums, int numsSize, int* returnSize) {
    // Set the return size to be the same as the input array size
    *returnSize = numsSize;
    
    // Allocate memory for the result array
    int* result = malloc(numsSize * sizeof(int));
    
    // Calculate running sum
    result[0] = nums[0];  // First element remains the same
    
    // Calculate cumulative sum for subsequent elements
    for (int i = 1; i < numsSize; i++) {
        result[i] = result[i-1] + nums[i];
    }
    //hola que tal 
    return result;
}