//
//  main.cpp
//  L15Containers
//
//  Created by massimo on 2017/6/4.
//  Copyright © 2017年 massimo. All rights reserved.
//

#include <iostream>
#include <list>
#include <string>
#include <map>
using namespace std;
int main(int argc, const char * argv[]) {
  // insert code here...
//  std::cout << "Hello, World!\n";
  std::list<std::string> l;
  l.push_back("Hello");
  l.push_back("Lex");
  for (std::list<std::string>::iterator it = l.begin() ; it!=l.end(); it ++) {
    std::cout << *it << "\n";
  }
  
  
  std::map<std::string,std::string> m;
  
  m.insert(pair<string, string>("hello","Hello lex"));
  
  m["name"] = "Lex";
  
  cout<<m.at("hello") << "  " << m["name"] << "\n";
  
  
  return 0;
}
