//
//  main.cpp
//  L05SuperC
//
//  Created by massimo on 2017/6/3.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include <iostream>
#include "Man.hpp"
int main(int argc, const char * argv[]) {
  // insert code here...
//  std::cout << "Hello, World!\n";
  
  Man *m = new Man(30);
  printf("%d \n",m->getAge());
  
  
  return 0;
}
