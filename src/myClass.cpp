// This file is part of the ???? project. All Rights Reserved.

#include <iostream>
#include <stdexcept>

#include "myClass.hpp"

using namespace std;

int MyClass::sum(int a, int b) {
  if (b > 10) {
    throw runtime_error("ERROR: the term 'b' cannot be greater than 10.");
  }
  return a + b;
}