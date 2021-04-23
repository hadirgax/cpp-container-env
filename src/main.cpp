// This file is part of the ???? project. All Rights Reserved.
/**********************************************
 * @project: ????
 * @author: HADIR GARCIA [halexandergc 'at' gmail.com]
 * @brief project template
 * @date 2021-04-22
 * @copyright Copyright 2021 HadirGa
 **********************************************/

#include <iostream>
#include <stdexcept>

#include "myClass.hpp"

int main() {
  std::cout << "Hello Docker from C++!" << std::endl;
  
  MyClass mc;
  int a = mc.sum(1,1);
  std::cout << "Sum: 1 + 1 = " << a << std::endl;
  return 0;
}