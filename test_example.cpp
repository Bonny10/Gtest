#include <gtest/gtest.h>
extern "C" {
#include "example.c"
}

// Test case for the add() function
TEST(ExampleTest, Add) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-2, -3), -5);
    EXPECT_EQ(add(0, 0), 0);
}

// Test case for the subtract() function
TEST(ExampleTest, Subtract) {
    EXPECT_EQ(subtract(5, 3), 2);
    EXPECT_EQ(subtract(10, 7), 3);
    EXPECT_EQ(subtract(0, 0), 0);
}

// Main function to run the tests
int main(int argc, char** argv) {
    // Initialize the Google Test framework
    ::testing::InitGoogleTest(&argc, argv);

    // Run all tests
    return RUN_ALL_TESTS();
}

