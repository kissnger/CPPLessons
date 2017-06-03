//
//  main.cpp
//  L03Classes
//
//  Created by massimo on 2017/6/3.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include <iostream>
#include "Man.hpp"
int main(int argc, const char * argv[]) {
//  // insert code here...
//  std::cout << "Hello, World!\n";
  Man *man = static_cast<Man *>(new People(15, 1)) ;
  man->sayHello();
  printf("%d \n",man->getAge());
  
  return 0;
}
