#include <iostream>
#include "Label.h"
#include "cstring.h"
using namespace std;

namespace sdds {
    Label::Label() {
        strCpy(frame, "+-+|+-+|");
        label = nullptr;
    }

    Label::Label(const char* frameArg) {
        strCpy(frame, frameArg);
        label = nullptr;
    }

    Label::Label(const char* frameArg, const char* content) {
        label = new char[strLen(content) + 1];
        strCpy(frame, frameArg);
        strCpy(label, content);
    }

    void Label::readLabel() {
        char temp[71];
        if(label != nullptr){
            delete [] label;
            label = nullptr;
        }
        cin.getline(temp, 71);
        label = new char[strLen(temp)+1];
        strCpy(label,temp);
    }

    std::ostream& Label::printLabel()const {
        if (label != nullptr) {
            int space = strLen(label);
            cout << frame[0];
            cout.width(space + 3);
            cout.fill(frame[1]);
            cout << frame[2] << endl;

            cout << frame[7];
            cout.width(space + 3);
            cout.fill(' ');
            cout << frame[3] << endl;

            cout << frame[7];
            cout << " " << label << " ";
            cout << frame[3] << endl;

            cout << frame[7];
            cout.width(space + 3);
            cout.fill(' ');
            cout << frame[3] << endl;

            cout << frame[6];
            cout.width(space + 3);
            cout.fill(frame[5]);
            cout << frame[4];
        }
        return cout;
    }

    Label::~Label() {
        delete[] label;
        label = nullptr;
    }
}