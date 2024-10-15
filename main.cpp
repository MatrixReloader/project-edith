/**
 * @file main.cpp
 * @author Ray Hasan
 * @brief Main application file
 * @version
 * @date 10-15-2024
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>

#include "pch.h"

#ifdef WIN32
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include <cstdlib>
#endif

using namespace std;

/**
 * @brief Main application
 *
 * Features memory leak debugger (lldb)
 * @return exit code
 * @todo this is just an example todo task
 */
int main() {
#ifdef WIN32
  _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif
  cout << "this works? tha's crazy. anyways." << endl;
  cout << "Hello World! EDITH here!" << endl;
  return 0;
}