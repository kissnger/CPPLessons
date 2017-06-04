//
//  main.cpp
//  L14FriendClass
//
//  Created by massimo on 2017/6/4.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include <iostream>

class A{
  friend class B;
private:
  int num;
public:
  A(){
    num = 10;
  }
};

class B{
  
  
public:
  B(){
    A a;
    printf("%d \n",a.num);
  }
};

int main(int argc, const char * argv[]) {
  // insert code here...
//  std::cout << "Hello, World!\n";
  
  B b;
  return 0;
}
