// This file is part of the ???? project. All Rights Reserved.

#include <gtest/gtest.h>
#include "../src/myClass.hpp"

namespace {

  TEST(TestSuccess, Success) {
    MyClass mc;
    EXPECT_EQ(2, mc.sum(1, 1));
    EXPECT_EQ(0, mc.sum(1, -1));
  }

  TEST(TestException, GreaterThen10) {
    MyClass mc;
    EXPECT_ANY_THROW(mc.sum(1, 11));
  }

  TEST(TestException, LessEq10) {
    MyClass mc;
    EXPECT_NO_THROW(mc.sum(1, 10));
  }
}