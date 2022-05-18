/*
 * DO NOT MAKE ANY CHANGES
 */

#include <unordered_set>
#include "gtest/gtest.h"

TEST(quiz, same_array_equal) {
    std::vector<std::vector<int>> array_1{
            {1, 2, 3},
            {3, 2, 1}
    };

    std::vector<std::vector<int>> array_2 = array_1;
    ASSERT_EQ(array_1, array_2);
}

TEST(quiz, same_array_equal_after_sort) {
    std::vector<std::vector<int>> array_1{
            {1, 2, 3},
            {3, 2, 1}
    };
    std::vector<std::vector<int>> array_2{
            {3, 2, 1},
            {1, 2, 3}
    };

    // NE because of difference sequence
    ASSERT_NE(array_1, array_2);

    std::sort(array_2.begin(), array_2.end());

    // EQ because of the sort
    ASSERT_EQ(array_1, array_2);

    // inner vector has not been changed
    std::vector<std::vector<int>> array_2_copy{
            {3, 2, 1},
            {1, 2, 3}
    };
    ASSERT_EQ(array_2_copy[0], array_2[1]);
    ASSERT_EQ(array_2_copy[1], array_2[0]);
}