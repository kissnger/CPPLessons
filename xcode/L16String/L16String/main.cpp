//
//  main.cpp
//  L16String
//
//  Created by massimo on 2017/6/4.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, const char * argv[]) {
  // insert code here...
//  std::cout << "Hello, World!\n";
  
  string str;
  str += "Hello";
  str += " World";
  cout << str << "\n";
  stringstream ss;
  ss<<"Hello ";
  ss << 200;
  
  cout << ss.str() << "\n";
  
  return 0;
}
