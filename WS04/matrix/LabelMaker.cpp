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