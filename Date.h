#ifndef DATE_H
#define DATE_H

#include<string>
#include<vector>


struct Clock{
  int hour{10};
  int min{29};
};

class Date {
public:
  Date(int day, int month, int year);
  int Day() const { return day_; }
  void Day(int day);
  int Month() const { return month_; }
  void Month(int month);
  int Year() const { return year_; }
  void Year(int year); 
  void SetClock(int hour, int min);
  Clock GetClock();
  std::string String() const;

private:
  bool LeapYear(int year) const;
  int DaysInMonth(int month, int year) const;
  int day_{1};
  int month_{1};
  int year_{0};
  Clock clock_{58, 59};
};

#endif