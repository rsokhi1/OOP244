#ifndef _FILE_H_
#define _FILE_H_
#include "ShoppingRec.h"
namespace sdds{
    
    bool openFileForRead();
    bool openFileForOverwrite();
    void closeFile();
    bool freadShoppingRec(ShoppingRec* rec);
    void fwriteShoppintRec(const ShoppingRec* rec);
}
#endif //!_FILE_H_