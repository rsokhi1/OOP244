/*Workshop #3 DIY
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 10th June 2021
        All the coding in this workshop is done by me.
*/
#ifndef SDDS_CALORIELIST_H_
#define SDDS_CALORIELIST_H_
#include "Food.h"
namespace sdds{
    class CalorieList{
        Food* c_food;
        int c_noOfItems;
        int c_itemsAdded;
        int totalCalories()const;
        bool isValid()const;
        void setEmpty();
        void title()const;
        void footer()const;
    public:
        void init(int size);
        bool add(const char* item_name, int calories, int when);
        void display()const;
        void deallocate();
    };
}
#endif // !SDDS_CALORIELIST_H_