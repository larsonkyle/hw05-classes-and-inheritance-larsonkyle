#include "doctorType.h"

void doctorType::print() const{
  std::cout << getFirstName() << " ";
  std::cout << getLastName() << " ";
  std::cout << speciality << "\n";
}

std::string doctorType::getSpeciality() const{
  return speciality;
}

void doctorType::setSpeciality(std::string spl){
  speciality = spl;
}