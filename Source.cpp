#include <gtest/gtest.h>
#include "increase_elements.h"  

TEST(IncreaseElementsTest, PositiveNumbers) {
    std::vector<int> vec = { 1, 2, 3, 4 };
    std::vector<int> expected = { 3, 4, 5, 6 };
    EXPECT_EQ(increaseElements(vec, 2), expected);
}

TEST(IncreaseElementsTest, NegativeNumbers) {
    std::vector<int> vec = { -1, -2, -3, -4 };
    std::vector<int> expected = { 1, 0, -1, -2 };
    EXPECT_EQ(increaseElements(vec, 2), expected);
}

TEST(IncreaseElementsTest, ZeroIncrease) {
    std::vector<int> vec = { 0, 0, 0, 0 };
    std::vector<int> expected = { 0, 0, 0, 0 };
    EXPECT_EQ(increaseElements(vec, 0), expected);
}

TEST(IncreaseElementsTest, EmptyVector) {
    std::vector<int> vec = {};
    std::vector<int> expected = {};
    EXPECT_EQ(increaseElements(vec, 2), expected);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
