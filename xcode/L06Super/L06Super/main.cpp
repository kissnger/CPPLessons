//
//  main.cpp
//  L06Super
//
//  Created by massimo on 2017/6/3.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include <iostream>
#include "Man.hpp"
int main(int argc, const char * argv[]) {
  // insert code here...
//  std::cout << "Hello, World!\n";
  Man *m = new Man(15);
  m->sayHello();
  return 0;
}
