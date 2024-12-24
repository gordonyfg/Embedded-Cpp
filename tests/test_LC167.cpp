#include "gtest/gtest.h"
#include "LC167.h"

TEST(LC167, ExampleTest) {
    // Example test for LC167
    Solution solution;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = solution.twoSum(nums, target); // Assuming this is your function
    ASSERT_EQ(result, std::vector<int>({1, 2}));
}