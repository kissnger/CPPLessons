//
//  Man.hpp
//  L03Classes
//
//  Created by massimo on 2017/6/3.
//  Copyright © 2017年 massimo. All rights reserved.
//

#ifndef Man_hpp
#define Man_hpp

#include <stdio.h>

#include "People.hpp"

class Man:public People{
public:
  Man(int age);
  virtual void sayHello();
  virtual void eat();
};
#endif /* Man_hpp */
