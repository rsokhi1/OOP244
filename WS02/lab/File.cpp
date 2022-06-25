/*Workshop #2 Part#1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 31st May 2021
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
   // TODO: read functions go here    
   bool read(char *temp){
      bool flag;
      if(fscanf(fptr,"%[^\n]\n",temp) == 1){
         flag = true;
      }
      else{
         flag = false;
      }
      return flag;
   }

   bool read(int* temp){
      bool flag;
      if(fscanf(fptr,"%d,",temp) == 1){
         flag = true;
      }
      else{
         flag = false;
      }
      return flag;
   }
   
   bool read(double* temp) {
      bool flag;
      if(fscanf(fptr,"%lf,",temp) == 1){
         flag = true;
      }
      else{
         flag = false;
      }
      return flag;
   }
   
}