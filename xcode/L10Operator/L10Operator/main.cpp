//
//  main.cpp
//  L10Operator
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
  void add(Point p){
    add(p.getX(),p.getY());
  }
  
  void add(int x,int y){
    this->x += x;
    this->y += y;
  }
  
  void operator += (Point p){
    add(p);
  }
};

int main(int argc, const char * argv[]) {
  
//  Point p(10,10);
//  p.add(Point(12, 12));
//  p += Point(10, 10);
  
  Point *p = new Point(5,5);
  (*p) += Point(2,2);
  
  // insert code here...
  std::cout << "Hello, World!\n" << p->getY() << "\n";
  return 0;
}
