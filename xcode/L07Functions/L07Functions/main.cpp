//
//  main.cpp
//  L07Functions
//
//  Created by massimo on 2017/6/3.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include <iostream>
#include "Man.hpp"

int main(int argc, const char * argv[]) {
  // insert code here...
//  std::cout << "Hello, World!\n";
  
  People *p = new Man(20);
  
  p->sayHello();
  
  p->eat();
  
  return 0;
}
