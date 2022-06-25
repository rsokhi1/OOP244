// Workshop 1:
// Version: 1.0
// Date: 2021/05/21
// Author: Fardad Soleimanloo
// Description:
// This file tests the DIY section of your workshop
///////////////////////////////////////////////////
#include <iostream>
#include "cstring.h"
using namespace sdds;
using namespace std;
int main() {
   char str1[80] = "abcdefghijklmnopqrstuvwxyz";
   char str2[80];
   const char* fadd;
   strCpy(str2, str1);
   cout << str2 << endl; //1
   strnCpy(str2, "@@@", 2);
   cout << str2 << endl; // 2
   strnCpy(str2, "@@@", 3);
   cout << str2 << endl; // 3
   strnCpy(str2, "@@@", 4);
   cout << str2 << endl; // 4
   cout << strCmp("aab", "aaa") << endl; // 5
   cout << strnCmp("aab", "aaa", 2) << endl; // 6
   cout << strnCmp("aab", "aaa", 3) << endl; // 7
   cout << strLen("") << endl; // 8
   cout << strLen(str1) << endl; // 9
   fadd = strStr(str1, "jkl");
   cout << fadd << endl; // 10
   fadd = strStr(str1, "bbb");
   if (!fadd) cout << "Not found" << endl; // 11
   strCpy(str2, "John ");     
   strCat(str2, "Doe");
   cout << str2 << endl; // 12
   return 0;
}