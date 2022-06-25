#ifndef _SDDS_LABEL_H_
#define _SDDS_LABEL_H_
namespace sdds{
    class Label{
        char* label;
        char frame[9];
        std::string labelContent;
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