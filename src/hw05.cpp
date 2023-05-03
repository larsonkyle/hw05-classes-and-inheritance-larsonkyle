#include <iostream>
#include "patientType.h"
#include "dateType.h"
#include "doctorType.h"
#include "personType.h"
#include "billType.h"

using namespace std;

int main() {
    patientType patient;
    billType patientBill;

    // Variables for user input
    int choice;
    string fname, lname, id, spl;
    int bday, bmonth, byear, admday, admonth, admyear, disday, dismonth, disyear;

    // Menu loop
    do {
        cout << "Select an option:\n"
             << "1. Set patient information\n"
             << "2. Set patient ID\n"
             << "3. Set patient birth date\n"
             << "4. Set attending physician name\n"
             << "5. Set attending physician specialization\n"
             << "6. Set admission date\n"
             << "7. Set discharge date\n"
             << "8. Print patient information\n"
             << "9. Quit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter patient first name: ";
                cin >> fname;
                cout << "Enter patient last name: ";
                cin >> lname;
                cout << "Enter patient ID: ";
                cin >> id;
                cout << "Enter patient birth date (DD MM YYYY): ";
                cin >> bday >> bmonth >> byear;
                cout << "Enter attending physician first name: ";
                cin >> fname;
                cout << "Enter attending physician last name: ";
                cin >> lname;
                cout << "Enter attending physician specialization: ";
                cin >> spl;
                cout << "Enter admission date (DD MM YYYY): ";
                cin >> admday >> admonth >> admyear;
                cout << "Enter discharge date (DD MM YYYY): ";
                cin >> disday >> dismonth >> disyear;
                patient.setInfo(fname, lname, id, bday, bmonth, byear, fname, lname, spl, admday, admonth, admyear, disday, dismonth, disyear);
                break;
            case 2:
                cout << "Enter patient ID: ";
                cin >> id;
                patient.setID(id);
                break;
            case 3:
                cout << "Enter patient birth date (DD MM YYYY): ";
                cin >> bday >> bmonth >> byear;
                patient.setBirthDate(bday, bmonth, byear);
                break;
            case 4:
                cout << "Enter attending physician first name: ";
                cin >> fname;
                cout << "Enter attending physician last name: ";
                cin >> lname;
                patient.setDoctorName(fname, lname);
                break;
            case 5:
                cout << "Enter attending physician specialization: ";
                cin >> spl;
                patient.setDoctorSpl(spl);
                break;
            case 6:
                cout << "Enter admission date (DD MM YYYY): ";
                cin >> admday >> admonth >> admyear;
                patient.setAdmDate(admday, admonth, admyear);
                break;
            case 7:
                cout << "Enter discharge date (DD MM YYYY): ";
                cin >> disday >> dismonth >> disyear;
                patient.setDisDate(disday, dismonth, disyear);
                break;
            case 8:
                patient.print();
                break;
            case 9:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
                break;
        }
    } while (choice != 9);

    patientBill.setInfo(id, 300, 400, 500);

    patientBill.printBill();

    return 0;
}