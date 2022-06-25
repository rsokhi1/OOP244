/*Workshop #2 DIY
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 2nd June 2021

        All the coding in this workshop is done by me with no outside help.
*/
#ifndef SDDS_POPULATION_H_
#define SDDS_POPULATION_H_

namespace sdds {
    struct Population{
        char postal_code[3];
        int p_population;
    };
    void sort();
    bool load(Population*);
    bool load(const char*);
    int display(const Population* pop);
    void display();

    void deallocateMemory();
}
#endif // SDDS_POPULATION_H_