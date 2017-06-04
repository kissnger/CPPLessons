//
//  main.cpp
//  L12FunctionPointer
//
//  Created by massimo on 2017/6/4.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include <iostream>
#include <thread>
#include <unistd.h>
class Object;
typedef void(Object:: *SayHei)();
typedef void(Object::*CallLaterHandler)();

void threadFunc(Object *target,CallLaterHandler handler,int delay){
  sleep(delay);
  (target->*handler)();
}
void callLater(Object *target,CallLaterHandler handler,int delay){
  std::thread t(threadFunc,target,handler,delay);
  t.join();
}

#define CH(fp) (CallLaterHandler)(&fp)

class Object {
public:
  SayHei sayHi ;
};

class Hello:public Object {
  
public:
  Hello(){
//    sayHi = (SayHei)(&Hello::HelloSayHi);
//    (this->*sayHi)();
    printf("-------\n");
    callLater(this, CH(Hello::HelloSayHi), 3);
  }
  
  void HelloSayHi(){
    printf("Hello Cpp\n");
  }
};




int main(int argc, const char * argv[]) {
  // insert code here...
//  std::cout << "Hello, World!\n";
  
  Hello *h  = new Hello();
  delete h;
  
  return 0;
}
