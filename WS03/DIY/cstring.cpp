/*Workshop #3 DIY
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 10th June 2021
        All the coding in this workshop is done by me.
*/
#include<iostream>
#include "cstring.h"
using namespace std;
namespace sdds{
  
  void strCpy(char* des, const char* src){
      int i;
      for(i=0; src[i]!= '\0';i++){
          des[i] = src[i];
      }
      des[i] = '\0';
  }

  void strnCpy(char* des, const char* src, int len){
    int i;
    for(i=0;i<len;i++){
        des[i] = src[i];
    }
    des[i] = '\0';
  }
  
  int strCmp(const char* s1, const char* s2){
      int i = 0,count = 0;
    for(i=0;s1[i] != '\0' || s2[i] != '\0';i++){
      if(s1[i] == s2[i]){
        count++;
      }
    }
    return s1[count] - s2[count];
  }
    
  int strnCmp(const char* s1, const char* s2, int len){
    int i = 0,count = -1;
    while(i<len){
      if(s1[i] == '\0' || s2[i] == '\0'){
        i = len;
      }
      if(s1[i] != s2[i]){
        i =len;
      }
      i++;
      count++;
    }
    return s1[count] - s2[count];
  }
  
  int strLen(const char* s){  
    int i,count=0;
    for(i=0;s[i]!='\0';i++){
        count++;
    }
    return count;
  }
 

  const char* strStr(const char* str1, const char* str2){
    int i,j;
    const char* cptr;
    for (i = 0; str1[i] != '\0'; i++){
        for (j = 0; str1[j + i] == str2[j]; j++){
            if (str2[j + 1] == '\0'){
                cptr = &str1[i];
            }
            else{
              cptr = NULL;
            }
        }
    }

    return cptr;
  }
  
  void strCat(char* des, const char* src){
    int i,j = 0;
    i = strlen(des);
    while(src[j] != '\0'){
      des[i] = src[j];
      i++;
      j++;
    }
    des[i] = '\0';
  }
}