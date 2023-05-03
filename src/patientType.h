#ifndef PATIENTTYPE_H_
#define PATIENTTYPE_H_
#include "personType.h"
#include "dateType.h"
#include "doctorType.h"

class patientType : public personType{
  public:
    void print() const;
    std::string getID() const;
    int getBirthday() const;
    int getBirthMonth() const;
    int getBirthYear() const;
    std::string getDoctorFname() const;
    std::string getDoctorLname() const;
    std::string getDoctorSpl() const;
    int getAdmDay() const;
    int getAdmMonth() const;
    int getAdmYear() const;
    int getDisDay() const;
    int getDisMonth() const;
    int getDisYear() const;
    
    void setInfo(std::string, std::string, std::string, int, int, int, std::string, std::string, std::string, int, int, int, int, int, int);
    void setID(std::string);
    void setBirthDate(int, int, int);
    void setDoctorName(std::string, std::string);
    void setDoctorSpl(std::string);
    void setAdmDate(int, int, int);
    void setDisDate(int, int, int);
    patientType(std::string = "", std::string = "", std::string = "", int = 0, int = 0, int = 0, std::string = "", std::string = "", std::string = "", int = 0, int = 0, int = 0, int = 0, int = 0, int = 0);

  private:
    std::string ID;
    dateType dateOfBirth;
    doctorType attendingPhysician;
    dateType admitDate;
    dateType dischargeDate;
};


#endif