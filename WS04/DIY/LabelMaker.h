/*Workshop #4 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 15th June 2021
        I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef _SDDS_LABELMAKER_H_
#define _SDDS_LABELMAKER_H_
#include "Label.h"
namespace sdds{
    class LabelMaker{
        int labelNum;
        Label* labels;
    public:
        LabelMaker(int noOfLabels);
        void readLabels();
        void printLabels();
        ~LabelMaker();
    };
}
#endif //!_SDDS_LABELMAKER_H_