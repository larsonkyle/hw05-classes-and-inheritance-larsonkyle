
//************************************************************
// Author: D.S. Malik
//  
// class personType
// This class specifies the members to implement a person's 
// first name and last name.
//************************************************************
 
#ifndef H_personType
#define H_personType
#include <iostream>
#include <string>
 

class personType
{
public:
    void print() const;
       //Function to output the first name and last name
       //in the form firstName lastName.
  
    void setName(std::string first, std::string last);
       //Function to set firstName and lastName according 
       //to the parameters.
       //Postcondition: firstName = first; lastName = last

    std::string getFirstName() const;
       //Function to return the first name.
       //Postcondition: The value of the data member firstName
       //               is returned.

    std::string getLastName() const;
       //Function to return the last name.
       //Postcondition: The value of the data member lastName
       //               is returned.

    personType(std::string first = "", std::string last = "")
      { firstName = first;
        lastName = last; }
       //constructor
       //Sets firstName and lastName according to the parameters.
       //The default values of the parameters are empty strings.
       //Postcondition: firstName = first; lastName = last  

 private:
    std::string firstName; //variable to store the first name
    std::string lastName;  //variable to store the last name
};

#endif