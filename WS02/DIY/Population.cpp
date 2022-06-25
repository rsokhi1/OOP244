/*Workshop #2 DIY
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 2nd June 2021

        All the coding in this workshop is done by me with no outside help.
*/
#include <iostream>
#include "Population.h"
#include "File.h"

using namespace std;
namespace sdds {
    
    int noOfCodes;
    Population* o_population;

    void sort() {
        int i, j;
        Population temp;
        for (i = noOfCodes - 1; i > 0; i--) {
            for (j = 0; j < i; j++) {
            if (o_population[j].p_population > o_population[j + 1].p_population) {
                temp = o_population[j];
                o_population[j] = o_population[j + 1];
                o_population[j + 1] = temp;
            }
            }
        }
    }
    bool load(Population* pop){
        bool ok = false;
        ok = read(pop->postal_code);
        if(ok == true){
            ok = read(&pop->p_population);
        }
        return ok;
    }
    bool load(const char filename[]){
        bool ok = false;
        int i = 0;
        if (openFile(filename)){
            noOfCodes = noOfRecords();
            o_population = new Population[noOfCodes];
            for(i=0;i<noOfCodes;i++){
                ok = load(&o_population[i]);
            }
            if(i != noOfCodes){
                cout<<"Error: incorrect number of records read; the data is possibly corrupted"<<endl;
            }
            else{
                ok = true;
            }
        }
        else{
            cout<<"could not open data file: "<<filename<<endl;
        }
        closeFile();
        return ok;
    }

    // int display(const Population* pop){
    //     int total = 0;
    //     cout<<pop->postal_code<<":  "<<pop->p_population<<endl;
    //     total += pop->p_population;
    //     return total;
    // }

    void display(){
        int i,total = 0;
        cout<<"Postal Code: population"<<endl;
        cout<<"-------------------------"<<endl;
        sort();
        for(i=0;i<noOfCodes;i++){
            cout<<i+1<<"- "<<o_population[i].postal_code<<":  "<<o_population[i].p_population<<endl;
            total += o_population[i].p_population;
        }
        cout<<"-------------------------"<<endl;
        cout<<"Population of Canada: "<<total<<endl;
    }

    void deallocateMemory(){
        delete [] o_population;
    }
}
