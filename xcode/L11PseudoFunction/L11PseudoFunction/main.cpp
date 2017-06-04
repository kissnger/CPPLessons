//
//  main.cpp
//  L11PseudoFunction
//
//  Created by massimo on 2017/6/4.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include <iostream>

void hello(){
  printf("hello\n");
}

class Hello {
  
  
public:
  void operator () (){
    printf("Hello cpp\n");
  }
};


int main(int argc, const char * argv[]) {
  // insert code here...
//  std::cout << "Hello, World!\n";
  
  Hello h;
  h();
  
  return 0;
}
