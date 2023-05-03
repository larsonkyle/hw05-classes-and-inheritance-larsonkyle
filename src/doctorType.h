#ifndef DOCTORTYPE_H_
#define DOCTORTYPE_H_
#include "personType.h"

class doctorType : public personType{
  public:
    void print() const;
    std::string getSpecialty() const;
    
    void setSpecialty(std::string);
    doctorType(std::string f = "",std::string l = "", std::string s = "");

  private:
    std::string specialty;
};


#endif