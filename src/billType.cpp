#include "billType.h"

void billType::printBill() const{
      
}

std::string billType::getID() const{
  return ID;
}

double billType::getPharmacyCharges() const{
  return pharmacyCharges;
}

double billType::getRoomRent() const{
  return roomRent;
}

double billType::getDoctorFee() const{
  return doctorFee;
}

double billType::billingAmount() const{
   return pharmacyCharges + roomRent + doctorFee;
}

void billType::setInfo(std::string id, double pCharges, double rRent, double docFee){
  ID = id;
  pharmacyCharges = pCharges;
  roomRent = rRent;
  doctorFee = docFee;
}

void billType::setID(std::string id){
  ID = id;
}

void billType::setPharmacyCharges(double pCharges){
  pharmacyCharges = pCharges;
}

void billType::updatePharmacyCharges(double pCharges){
  pharmacyCharges += pCharges;
}

void billType::setRoomRent(double rRent){
  roomRent = rRent;
}

void billType::updateRoomRent(double rRent){
  roomRent += rRent;
}

void billType::setDoctorFee(double docFee){
  doctorFee = docFee;
}

void billType::updateDoctorFee(double docFee){
  doctorFee += docFee;
}