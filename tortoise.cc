#include <iostream>
#include <vector>

int findDuplicate(const std::vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    // Phase 1: Detect if there is a cycle
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Phase 2: Find the entrance of the cycle
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    std::vector<int> nums = {1, 3, 4, 2, 2}; // Example array with a duplicate
    int duplicate = findDuplicate(nums);
    std::cout << "The duplicate element is: " << duplicate << std::endl;

    return 0;
}
