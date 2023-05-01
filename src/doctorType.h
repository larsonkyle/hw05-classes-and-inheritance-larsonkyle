#ifndef DOCTORTYPE_H_
#define DOCTORTYPE_H_
#include "personType.h"

class doctorType : public personType{
  public:
    void print() const;
    std::string getSpeciality() const;
    void setSpeciality(std::string);
    doctorType(std::string f = "",std::string l = "", std::string s = "") : personType(f, l)
      {  speciality = s;  }

  private:
    std::string speciality;
};


#endif