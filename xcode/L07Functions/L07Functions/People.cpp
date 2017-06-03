//
//  People.cpp
//  L01OOP
//
//  Created by massimo on 2017/6/3.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include "People.hpp"
People::People(){
  this->age =10;
  this->sex = 1;
}
People::People(int age,int sex){
  this->age = age;
  this->sex = sex;
  
}
int People::getAge(){
  return this->age;
}

int People::getSex(){
  return this->sex;
}
void People::sayHello(){
  printf("People say:Hello CPP\n");
}

