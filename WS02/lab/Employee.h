/*Workshop #2 Part#1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 31st May 2021
*/
#ifndef SDDS_EMPLOYEE_H_
#define SDDS_EMPLOYEE_H_

#define DATAFILE "employees.csv"
namespace sdds {
   struct Employee {
      char* m_name;
      int m_empNo;
      double m_salary;
   };

   void sort();
   
   bool load(Employee*);
   
   bool load();

   void display(const Employee* emp);
   
   void display();
   
   void deallocateMemory();
}
#endif // SDDS_EMPLOYEE_H_