//
//  People.hpp
//  L01OOP
//
//  Created by massimo on 2017/6/3.
//  Copyright © 2017年 massimo. All rights reserved.
//

#ifndef People_hpp
#define People_hpp

#include <stdio.h>

class People {
private:
  int age;
  int sex;
public:
  People();
  People(int age,int sex);
  int getAge();
  int getSex();
  void sayHello();
};

#endif /* People_hpp */
