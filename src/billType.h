#ifndef BILLTYPE_H_
#define BILLTYPE_H_
#include <string>

class billType{
  public:
    void printBill() const;
    std::string getID() const;
    double getPharmacyCharges() const;
    double getRoomRent() const;
    double getDoctorFee() const;
    double billingAmount() const;
    void setInfo(std::string, double, double, double);
    void setID(std::string id);
    void setPharmacyCharges(double);
    void updatePharmacyCharges(double);
    void setRoomRent(double);
    void updateRoomRent(double);
    void setDoctorFee(double);
    void updateDoctorFee(double);
    billType(std::string id = "", double phCharges = 0, double rRent = 0, double dFee = 0)
      {  ID = id;
         pharmacyCharges = phCharges;
         roomRent = rRent;
         doctorFee = dFee;  }

  private:
    std::string ID;
    double pharmacyCharges;
    double roomRent;
    double doctorFee;
};


#endif