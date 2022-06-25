/*Workshop #9 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 29th July 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_SEARCHNLIST_H_
#define SDDS_SEARCHNLIST_H_
#include <iostream>
#include "Collection.h"
#include "Car.h"
#include "Student.h"
#include "Employee.h"
using namespace std;
namespace sdds{
    template <typename T>
    void listArrayElements(const char *title, const T *arr, int size){
        cout<<title<<endl;
        for(int i = 0;i<size;i++){
            cout<<(i+1)<<": "<<arr[i]<<endl;
        }
    }

    template <typename T1, typename T2>
    bool search(Collection<T1> &obj, const T1 *arr, int size, T2 key){
        bool flag = false;
        for(int i = 0;i < size;i++){
            if(arr[i] == key){
                obj.add(arr[i]);
                flag = true;
            }
        }
        return flag;
    }
}
#endif // !SDDS_SEARCHNLIST_H_