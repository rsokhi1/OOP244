/*Workshop #2 DIY
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 2nd June 2021

        All the coding in this workshop is done by me with no outside help.
*/
#ifndef SDDS_FILE_H_
#define SDDS_FILE_H_
namespace sdds {
   bool openFile(const char filename[]);
   void closeFile();
   int noOfRecords();
   bool read(char*);
   bool read(int*);
}
#endif // !SDDS_FILE_H_
