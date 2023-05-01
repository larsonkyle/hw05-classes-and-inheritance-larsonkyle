#include "dateType.h"

int dateType::getMonth() const{
  return dMonth;
}

int dateType::getDay() const{
  return dDay;
}

int dateType::getYear() const{
  return dYear;
}

void dateType::setDate(int month, int day, int year){
  dMonth = month;
  dDay = day;
  dYear = year;
}