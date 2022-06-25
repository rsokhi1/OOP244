#ifndef _SDDS_LABELMAKER_H_
#define _SDDS_LABELMAKER_H_
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