#include "patientType.h"

void patientType::print() const{
  std::cout << "Patient ID: ";
  std::cout << ID << "\n";

  std::cout << "Patient Name: " << getFirstName()  << " " << getLastName();

  std::cout << "Date of Birth: ";
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

int patientType::getBirthday() const{
  return dateOfBirth.getDay();
}

int patientType::getBirthMonth() const{
  return dateOfBirth.getMonth();
}

int patientType::getBirthYear() const{
  return dateOfBirth.getYear();
}

std::string patientType::getDoctorFname() const{
  return attendingPhysician.getFirstName();
}
std::string patientType::getDoctorLname() const{
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

void patientType::setInfo(std::string id, std::string fName, std::string lName, int bDay, int bMonth, int bYear, std::string docFrName, std::string docLaName, std::string docSpl, int admDay, int admMth, int admYear, int disChDay, int disChMth, int disChYear){
  ID = id;
  setName(fName, lName);
  
  dateOfBirth.setDate(bMonth, bDay, bYear);
  
  attendingPhysician.setName(docFrName, docLaName);
  attendingPhysician.setSpecialty(docSpl);

  admitDate.setDate(admMth, admDay, admYear);

  dischargeDate.setDate(disChMth, disChDay, disChYear);
}

void patientType::setID(std::string id){
  ID = id;
}

void patientType::setBirthDate(int bDay, int bMth, int bYear){
  dateOfBirth.setDate(bMth, bDay, bYear);
}
void patientType::setDoctorName(std::string fName, std::string lName){
  attendingPhysician.setName(fName, lName);
}
void patientType::setDoctorSpl(std::string spl){
  attendingPhysician.setSpecialty(spl);
}
void patientType::setAdmDate(int admDay, int admMth, int admYear){
  admitDate.setDate(admMth, admDay, admYear);
}
void patientType::setDisDate(int disDay, int disMth, int disYear){
  dischargeDate.setDate(disMth, disDay, disYear);
}

patientType::patientType(std::string id, std::string fName, std::string lName, int bDay, int bMonth, int bYear, std::string docFrName, std::string docLaName, std::string docSpl, int admDay, int admMth, int admYear, int disChDay, int disChMth, int disChYear) : personType(fName, lName){
  ID = id;
  
  dateOfBirth.setDate(bMonth, bDay, bYear);
  
  attendingPhysician.setName(docFrName, docLaName);
  attendingPhysician.setSpecialty(docSpl);

  admitDate.setDate(admMth, admDay, admYear);

  dischargeDate.setDate(disChMth, disChDay, disChYear);
}