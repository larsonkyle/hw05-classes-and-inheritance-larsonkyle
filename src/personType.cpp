#ifndef PERSONTYPE_H_
#define PERSONTYPE_H_
#include <iostream>
#include <string>

class personType{
  public:
    void print() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    void setName(std::string, std::string);
    personType(std::string first = "", std::string last = "")
      { firstName = first;
        lastName = last; }

  private:
    std::string firstName;
    std::string lastName;
};


#endif