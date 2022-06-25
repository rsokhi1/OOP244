/*Workshop #3 DIY
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 10th June 2021
        All the coding in this workshop is done by me.
*/
#ifndef SDDS_FOOD_H_
#define SDDS_FOOF_H_
namespace sdds{
    class Food{
    private:
        char f_name[31];
        int f_calorie;
        int f_time;
        char f_mealtime[10];
    public:
        void meal(int);       
        int calories();
        void setEmpty();
        void set(const char* name,int calories,int time);
        void display();
        bool isValid()const;
    };
}
#endif // !SDDS_FOOD_H_