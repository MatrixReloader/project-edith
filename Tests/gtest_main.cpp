/**
 * @file gtest_main.cpp
 * @author Ray Hasan
 * @brief Google test
 * @version
 * @date 10-15-2024
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <pch.h>

#include "gtest/gtest.h"

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}