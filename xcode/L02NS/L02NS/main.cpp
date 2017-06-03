//
//  main.cpp
//  L02NS
//
//  Created by massimo on 2017/6/3.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include <iostream>
#include "People.hpp"
using namespace Lex;
int main(int argc, const char * argv[]) {
  // insert code here...
//  std::cout << "Hello, World!\n";
  People *p  = new People();
  p->sayHello();
  
  delete p;
  return 0;
}
