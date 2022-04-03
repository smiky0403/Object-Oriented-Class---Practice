#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>

#include <string>
using std::string;

class Student {
 public:
  // constructor
  Student(string name, int grade, float gpa) : name_(name), grade_(grade), gpa_(gpa) {
      Validate();
  }
  // accessors
  string Name() const {
      return name_;
  }
  int Grade() const {
      return grade_;
  }
  float GPA() const {
      return gpa_;
  }
    
  // mutators
  void Name(string name) {
      name_ = name;
      Validate();
  }
  void Grade(int grade) {
      grade_ = grade;
      Validate();
  }
  void GPA(float gpa) {
      gpa_ = gpa;
      Validate();
  }

 private:
 string name_;
 int grade_;
 float gpa_;
 void Validate() {
     if(Grade() < 0 || Grade() > 12 || GPA() < 0.0 || GPA() > 4.0)
         throw std::invalid_argument("argument out of bounds");
 }
};

#endif