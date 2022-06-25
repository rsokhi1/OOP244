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
#include "Food.h"
using namespace std;
namespace sdds{
    void Food::setEmpty(){
        f_name[0] = '\0';
        f_mealtime[0] = '\0';
        f_calorie = 0;
    }

    void Food::set(const char* name,int calories,int time){
        if((name == nullptr) || (calories < 0) ){
            setEmpty();
        }
        else{
            strnCpy(f_name,name,30);
            f_calorie = calories;
            f_time = time;
        }
    }

    bool Food::isValid() const{
        bool flag;
        if(f_name[0] != '\0' && f_calorie > 0 && f_calorie <= 3000 
        && f_time > 0 && f_time <= 4){
                flag = true;
        }
        else{
            flag = false;
        }
        return flag;
    }

    int Food::calories(){
        return f_calorie;
    }

    void Food::meal(int time){
        if(time == 1){
            strCpy(f_mealtime,"Breakfast");
        }
        else if(time == 2){
            strCpy(f_mealtime,"Lunch");
        }
        else if(time == 3){
            strCpy(f_mealtime,"Dinner");
        }
        else if(time == 4){
            strCpy(f_mealtime,"Snack");
        }
    }

    void Food::display(){
        bool flag;
        flag = isValid();
        if(flag == true){
            cout<<"| ";
            cout.setf(ios::left);
            cout.width(30);
            cout.fill('.');
            cout<<f_name;
            cout.unsetf(ios::left);
            cout<<" | ";
            cout.setf(ios::fixed);

            cout.setf(ios::right);
            cout.width(4);
            cout.fill(' ');
            cout<<f_calorie;
            cout.unsetf(ios::right);
            cout<<" | ";

            cout.unsetf(ios::fixed);
            cout.setf(ios::left);
            cout.width(10);
            meal(f_time);
            cout<<f_mealtime<<" |"<<endl;
        }
        else{
            cout<<"| xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx | xxxx | xxxxxxxxxx |"<<endl;
        }
    }
}