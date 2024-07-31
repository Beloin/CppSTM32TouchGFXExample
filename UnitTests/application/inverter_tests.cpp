//
// Created by beloin on 31/07/24.
//
#include <gtest/gtest.h>
#include <application/Inverter.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}

TEST(Inverter, should_return_true) {
    auto inverter = Inverter{};
    EXPECT_TRUE(inverter.IsTrue());
}