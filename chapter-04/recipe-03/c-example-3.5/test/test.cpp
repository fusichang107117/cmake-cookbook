#include "../src/sum_integers.h"
#include "gtest/gtest.h"

#include <vector>

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(example, sum_zero) {
  int integers[6] = {1, -1, 2, -2, 3, -3};
  int result = sum_integers(integers, 6);
  ASSERT_EQ(result, 10);
}

TEST(example, sum_five) {
  int integers[5] = {1, 2, 3, 4, 5};
  int result = sum_integers(integers, 5);
  ASSERT_EQ(result, 15);
}
