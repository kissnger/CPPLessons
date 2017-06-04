//
//  main.cpp
//  L13Ref
//
//  Created by massimo on 2017/6/4.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include <iostream>
class Point {
  
private:
  int x;
  int y;
public:
  
  Point(int x, int y){
    this->x = x;
    this->y = y;
  }
  
  int getX(){
    return this->x;
  }
  
  int getY(){
    return this->y;
  }
  void add(Point &p){
    this->x += p.x;
    this->y += p.y;
  }
  
};
int main(int argc, const char * argv[]) {
  
  Point p (1,1);
//  p.add(Point(2,2));
  Point p1 (2,2);
  p.add(p1);
  
  // insert code here...
//  std::cout << "Hello, World!\n";
  return 0;
}
