/*Workshop #4 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 15th June 2021
        I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#include <iostream>
#include "Label.h"
#include "LabelMaker.h"
#include "cstring.h"
using namespace std;

namespace sdds{
    LabelMaker::LabelMaker(int noOfLabels){
        labels = new Label[noOfLabels];
        labelNum = noOfLabels;
    }

    void LabelMaker::readLabels(){
        cout<<"Enter "<<labelNum<<" labels:"<<endl;
        int i;
        for(i=0;i<labelNum;i++){
            cout<<"Enter label number "<<i+1<<endl<<"> ";
            labels[i].readLabel();
        }
    }

    void LabelMaker::printLabels(){
        int i;
        for(i=0;i<labelNum;i++){
            labels[i].printLabel();
            cout<<endl;
        }
    }

    LabelMaker::~LabelMaker(){
        delete [] labels;
        labels = nullptr;
    }
}