/*Workshop #4 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 15th June 2021
        I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef _SDDS_LABEL_H_
#define _SDDS_LABEL_H_
namespace sdds{
    class Label{
        char* label;
        char frame[9];
    public:
        Label();
        Label(const char* frameArg);
        Label(const char* frameArg, const char* content);
        ~Label();
        void readLabel();
        std::ostream& printLabel()const;
    };
}
#endif //!_SDDS_LABEL_H_