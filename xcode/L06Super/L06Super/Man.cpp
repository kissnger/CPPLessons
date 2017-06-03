//
//  Man.cpp
//  L03Classes
//
//  Created by massimo on 2017/6/3.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include "Man.hpp"
Man::Man(int age):People(age,1){
  
}
void Man::sayHello(){
  printf("Man say:Hello CPP\n");
}
