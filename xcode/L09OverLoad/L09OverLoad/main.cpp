//
//  main.cpp
//  L09OverLoad
//
//  Created by massimo on 2017/6/3.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include <iostream>
class Hello{
public:
  void sayHello(){
    printf("Hello Lex\n");
  }
  void sayHello(char *name){
    printf("hello %s\n",name);
  }
  
  void sayHello(std::string name){
    std::string str = "Hello ";
    str += name;
    std::cout<< str << "\n";
  }
};
int main(int argc, const char * argv[]) {
  // insert code here...
//  std::cout << "Hello, World!\n";
  Hello *h = new Hello();
  std::string name = "li";
  h->sayHello(name);
  return 0;
}
