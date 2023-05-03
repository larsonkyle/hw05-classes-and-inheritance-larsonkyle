#ifndef DATETYPE_H_
#define DATETYPE_H_

class dateType{
  public: 
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    
    void setDate(int, int, int);
    dateType(int m = 0, int d = 0, int y = 0);

  private:
    int dMonth;
    int dDay;
    int dYear;
};


#endif