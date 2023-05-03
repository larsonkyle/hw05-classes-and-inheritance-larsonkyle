#include "doctorType.h"

void doctorType::print() const{
  std::cout << getFirstName() << " ";
  std::cout << getLastName() << " ";
  std::cout << specialty << "\n";
}

std::string doctorType::getSpecialty() const{
  return specialty;
}

void doctorType::setSpecialty(std::string spl){
  specialty = spl;
}

doctorType::doctorType(std::string f ,std::string l , std::string s) : personType(f, l){
  specialty = s;  
}