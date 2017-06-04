//
//  main.cpp
//  L17File
//
//  Created by massimo on 2017/6/4.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main(int argc, const char * argv[]) {
  // insert code here...
//  std::cout << "Hello, World!\n";
  
//  ofstream of("data.txt");
//  of<<"Hello cpp\n";
//  of.close();

  ifstream inf("data.txt");
//  char c;
//  inf>>c;
  stringbuf sb;
  
  inf >> &sb;
  
  
  cout << sb.str() << "\n";
  
  
  return 0;
}
