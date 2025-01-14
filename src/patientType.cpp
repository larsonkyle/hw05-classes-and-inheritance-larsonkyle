#include "patientType.h"

void patientType::print() const{
  std::cout << "Patient ID: ";
  std::cout << ID << "\n";

  std::cout << "Patient Name: " << getFirstName()  << " " << getLastName();

  std::cout << "\nDate of Birth: ";
  std::cout << dateOfBirth.getMonth() << "/" << dateOfBirth.getDay() << "/" << dateOfBirth.getYear() << "\n";

  std::cout << "Attending Physician: ";
  std::cout << attendingPhysician.getFirstName()  << " " << attendingPhysician.getLastName() << " "<< attendingPhysician.getSpecialty() << "\n";

  std::cout << "Admission Date: ";
  std::cout << admitDate.getMonth() << "/" << admitDate.getDay() << "/"<< admitDate.getYear() << "\n";

  std::cout << "Discharge Date: ";
  std::cout << dischargeDate.getMonth() << "/" << dischargeDate.getDay() << "/" << dischargeDate.getYear() << "\n";
}

std::string patientType::getID() const{
    return ID;
}

int patientType::getBirthDay() const{
  return dateOfBirth.getDay();
}

int patientType::getBirthMonth() const{
  return dateOfBirth.getMonth();
}

int patientType::getBirthYear() const{
  return dateOfBirth.getYear();
}

std::string patientType::getDoctorFName() const{
  return attendingPhysician.getFirstName();
}
std::string patientType::getDoctorLName() const{
  return attendingPhysician.getLastName();
}
std::string patientType::getDoctorSpl() const{
  return attendingPhysician.getSpecialty();
}

int patientType::getAdmDay() const{
  return admitDate.getDay();
}

int patientType::getAdmMonth() const{
  return admitDate.getMonth();
}

int patientType::getAdmYear() const{
  return admitDate.getYear();
}

int patientType::getDisDay() const{
  return dischargeDate.getDay();
}

int patientType::getDisMonth() const{
  return dischargeDate.getMonth();
}

int patientType::getDisYear() const{
  return dischargeDate.getYear();
}

void patientType::setInfo(std::string id, std::string fName, std::string lName, int bMth, int bDay, int bYear, std::string docFrName, std::string docLaName, std::string docSpl, int admMth, int admDay, int admYear, int disChMth, int disChDay, int disChYear){
  ID = id;
  setName(fName, lName);
  
  dateOfBirth.setDate(bMth, bDay, bYear);
  
  attendingPhysician.setName(docFrName, docLaName);
  attendingPhysician.setSpecialty(docSpl);

  admitDate.setDate(admMth, admDay, admYear);

  dischargeDate.setDate(disChMth, disChDay, disChYear);
}

void patientType::setID(std::string id){
  ID = id;
}

void patientType::setBirthDate(int bMth, int bDay, int bYear){
  dateOfBirth.setDate(bMth, bDay, bYear);
}
void patientType::setDoctorName(std::string fName, std::string lName){
  attendingPhysician.setName(fName, lName);
}
void patientType::setDoctorSpl(std::string spl){
  attendingPhysician.setSpecialty(spl);
}
void patientType::setAdmDate(int admMth, int admDay, int admYear){
  admitDate.setDate(admMth, admDay, admYear);
}
void patientType::setDisDate(int disMth, int disDay, int disYear){
  dischargeDate.setDate(disMth, disDay, disYear);
}

patientType::patientType(std::string id, std::string fName, std::string lName, int bMth, int bDay, int bYear, std::string docFrName, std::string docLaName, std::string docSpl, int admMth, int admDay, int admYear, int disChMth, int disChDay, int disChYear) : personType(fName, lName){
  ID = id;
  
  dateOfBirth.setDate(bMth, bDay, bYear);
  
  attendingPhysician.setName(docFrName, docLaName);
  attendingPhysician.setSpecialty(docSpl);

  admitDate.setDate(admMth, admDay, admYear);

  dischargeDate.setDate(disChMth, disChDay, disChYear);
}