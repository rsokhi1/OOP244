/*Workshop #2 DIY
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 2nd June 2021

        All the coding in this workshop is done by me with no outside help.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "File.h"

namespace sdds {
   FILE* fptr;
   bool openFile(const char filename[]) {
      fptr = fopen(filename, "r");
      return fptr != NULL;
   }
   int noOfRecords() {
      int noOfRecs = 0;
      char ch;
      while (fscanf(fptr, "%c", &ch) == 1) {
         noOfRecs += (ch == '\n');
      }
      rewind(fptr);
      return noOfRecs;
   }
   void closeFile() {
      if (fptr) fclose(fptr);
   }

   bool read(char* temp){
      bool flag = false;
      if(fscanf(fptr,"%[^,]",temp)==1){
         flag = true;
      }
      else{
         flag = false;
      }
      return flag;
   }

   bool read(int* temp){
      bool flag = false;
      if(fscanf(fptr,",%d\n",temp) == 1){
         flag = true;
      }
      else{
         flag = false;
      }
      return flag;
   }
}