/*Workshop #3 DIY
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 10th June 2021
        All the coding in this workshop is done by me.
*/
#include <iostream>
#include "cstring.h"
#include "CalorieList.h"
using namespace std;
namespace sdds{
    void CalorieList::setEmpty(){
        c_food = nullptr;
    }

    bool CalorieList::isValid()const{
        bool flag = false;
        int i;
        if(c_food != nullptr){
            for(i=0;i<c_noOfItems;i++){
                if(c_food[i].isValid() == false){
                    flag = false;
                    i = c_noOfItems;
                }
                else{
                    flag = true;
                }
            }
            
        }
        else{
            flag = false;
        }
        return flag;
    }

    int CalorieList::totalCalories()const{
        int i;
        int calTotal = 0;
        for(i=0;i<c_noOfItems;i++){
            calTotal = calTotal + c_food[i].calories();
        }
        return calTotal;
    }

    void CalorieList::title()const{
        bool flag = false;
        flag = isValid();
        cout<<"+----------------------------------------------------+"<<endl;
        if(flag == true){
            cout<<"|  Daily Calorie Consumption                         |"<<endl;
        }
        else{
            cout<<"| Invalid Calorie Consumption list                   |"<<endl;
        }
        cout<<"+--------------------------------+------+------------+"<<endl;
        cout<<"| Food name                      | Cals | When       |"<<endl;
        cout<<"+--------------------------------+------+------------+"<<endl;
    }

    void CalorieList::footer()const{
        bool flag;
        cout<<"+--------------------------------+------+------------+"<<endl;
        flag = isValid();
        if(flag == true){
            cout << "|    Total Calories for today:";
            cout.setf(ios::right);
            cout.width(9);
            cout.fill(' ');
            cout << totalCalories();
            cout << " |            |" << endl;
        }
        else{
            cout<<"|    Invalid Calorie Consumption list                |"<<endl;
        }
        cout<<"+----------------------------------------------------+"<<endl;
    }

    void CalorieList::init(int size){
        if(size <= 0){
            setEmpty();
        }
        else{
            int i;
            c_noOfItems = size;
            c_itemsAdded = 0;
            c_food = new Food[c_noOfItems];
            for(i=0;i<c_noOfItems;i++){
                c_food[i].setEmpty();
            }
        }
    }

    bool CalorieList::add(const char* item_name, int calories, int when){
        bool flag;
        if(c_itemsAdded < c_noOfItems){
            c_food[c_itemsAdded].set(item_name,calories,when);
            c_itemsAdded = c_itemsAdded + 1;
            flag = true;
        }
        else{
            flag = false;
        }
        return flag;
    }

    void CalorieList::display()const{
        title();
        int i;
        for(i=0;i<c_noOfItems;i++){
            c_food[i].display();
        }
        footer();
    }

    void CalorieList::deallocate(){
        delete [] c_food;
    }
}