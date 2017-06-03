//
//  main.cpp
//  L04CMethod
//
//  Created by massimo on 2017/6/3.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include <iostream>
class Objet{
public:
  Objet(){
    printf("Create Object\n");
  };
  ~Objet(){
    printf("delete Object\n");
  }
};

void runObject(){
//  {
    Objet obj;
//  }
  printf("runObject end\n");
}

int main(int argc, const char * argv[]) {
  // insert code here...
//  std::cout << "Hello, World!\n";
//  Objet obj;
  runObject();
  printf("end\n");
  return 0;
}
