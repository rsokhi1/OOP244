/*Workshop #10 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 5th August 2021
*/
#ifndef SDDS_HTMLTEXT_H__
#define SDDS_HTMLTEXT_H__
#include "Text.h"
namespace sdds {
   class HtmlText :  public Text {
      char* m_title {nullptr};
   public:
      HtmlText(const char* filename=nullptr, const char* title = nullptr);
      HtmlText(const HtmlText &H);
      HtmlText &operator=(const HtmlText &H);
      ~HtmlText();
      void write(std::ostream &os) const;

   };
}
#endif // !SDDS_HTMLTEXT_H__
