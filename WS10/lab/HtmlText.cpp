/*Workshop #10 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 5th August 2021
*/
#include <iostream>
#include "HtmlText.h"
namespace sdds {
    HtmlText::HtmlText(const char* filename, const char* title) :Text(filename){
        if(title){
            m_title = new char[strlen(title) + 1];
            strcpy(m_title,title);
        }   
    }
    
    HtmlText::HtmlText(const HtmlText &H){
        *this = H;
    }
    
    HtmlText &HtmlText::operator=(const HtmlText &H) 
    {
        if(this != &H){
            (Text&)*this = H;
            if(m_title){
                delete [] m_title;
            }
            if(H.m_title){
                m_title = new char[strlen(H.m_title) + 1];
                strcpy(m_title,H.m_title);
            }
            else{
                m_title = nullptr;
            }
        }
        return *this;
    }

    HtmlText::~HtmlText(){
        delete [] m_title;
        m_title = nullptr;
    }
    
    void HtmlText::write(std::ostream& os)const
	{
		bool flag = false;
		os << "<html><head><title>";
		if (m_title == nullptr)
		{
			os << "NO Title";
		}
		else
		{
			os << m_title;
		}
		os << "</title></head>\n<body>\n";
		os << "<h1>" << m_title << "</h1>\n";

		for (int i = 0; (*this)[i] != '\0'; i++)
		{
			switch ((*this)[i])
			{
			case ' ':
				if (flag == true)
				{
					os << "&nbsp;";
				}
				else
				{
					flag = true;
					os << (*this)[i];
				}
				break;

			case '<':
				os << "&lt;";
				flag = false;
				break;

			case '>':
				os << "&gt;";
				flag = false;
				break;

			case '\n':
				os << "<br />\n";
				flag = false;
				break;

			default:
				flag = false;
				os << (*this)[i];
				break;
			}
		}
		os << "</body>\n</html>";
	}
}