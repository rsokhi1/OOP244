/*Workshop #2 Part#1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 31st May 2021
*/
#include <iostream>
#include "cstring.h"  // implemented in workshop 1 part 2 (DIY)
#include "Employee.h"
#include "File.h"
using namespace std;
namespace sdds {

   int noOfEmployees;
   Employee* employees;


   void sort() {
      int i, j;
      Employee temp;
      for (i = noOfEmployees - 1; i > 0; i--) {
         for (j = 0; j < i; j++) {
            if (employees[j].m_empNo > employees[j + 1].m_empNo) {
               temp = employees[j];
               employees[j] = employees[j + 1];
               employees[j + 1] = temp;
            }
         }
      }
   }

   bool load(Employee* emp) {
      bool ok = false;
      int n;
      char name[128];
      ok = read(&emp->m_empNo);
      if(ok == true){
         ok = read(&emp->m_salary);
      }
      if(ok == true){
         ok = read(name);
      }
      if(ok == true){
         n = strLen(name);
         emp->m_name = new char[n+1];
         strCpy(emp->m_name,name);
         ok = true;
      }
      
      return ok;
   }
   
   bool load() {
      bool ok = false;
      int i = 0;
      if (openFile(DATAFILE)) {
         noOfEmployees = noOfRecords();
         employees = new Employee[noOfEmployees];
         for(i=0;i<noOfEmployees;i++){
            ok = load(&employees[i]);
         }
         if(i != noOfEmployees){
            cout<<"Error: incorrect number of records read; the data is possibly corrupted"<<endl;
         }
         else{
            ok = true;
         }
      }
      else {
         cout << "Could not open data file: " << DATAFILE<< endl;
      }
      closeFile();
      return ok;
   }

   
   void display(const Employee* emp){
      cout<<emp->m_empNo<<": "<<emp->m_name<<", "<<emp->m_salary<<endl;
   }
   void display(){
      cout<<"Employee Salary report, sorted by employee number"<<endl;
      cout<<"no- Empno, Name, Salary"<<endl;
      cout<<"------------------------------------------------"<<endl;
      int i;
      sort();
      for(i=0;i<noOfEmployees;i++){
         cout<<i+1<<"- ";
         display(&employees[i]);
      }
   }

   void deallocateMemory(){
      
      int i;
      for(i=0;i<noOfEmployees;i++){
         delete [] employees[i].m_name;
      }
            
      delete employees;

      
   }
}