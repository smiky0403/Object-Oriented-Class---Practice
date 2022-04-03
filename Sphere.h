#ifndef SPHERE_H
#define SPHERE_H
#include<iostream>
#include<stdexcept>
#include<cmath>

class Sphere{
  public:
    static float Volume(int radius) { return pi_ * 4/3 * pow(radius,3); } //Alternative for volume
    //Sphere(int radius): radius_(radius), volume_(M_PI * 4/3 * pow(radius_, 3))   
    //{Validate();};      //Alternative for using accurate PI
    Sphere(int radius): radius_(radius), volume_(pi_ * 4/3 * pow(radius_, 3))   
    {Validate();};      
    int Radius() const { return radius_; }
    int Volume() const { return volume_; }
    //mutator
    void Radius(int radius) {Validate(); radius_ = radius; volume_ = M_PI * 4 / 3 * pow(radius_, 3); }
  private:
    //static float const pi_; //Alternative, can be declare outside of class later
    static float constexpr pi_{3.14};  // constexpr: evalauted at compile time intead of run time; cant user const, will get error
    int radius_;
    int volume_;
    void Validate() const{  if(radius_ <0 ){throw std::invalid_argument("Negative dimention");}  };
};

//float const Sphere::pi_{3.14};  //Alternative, can be declare outside of class

class Foo {
 public:
  static int count;
  Foo() { Foo::count += 1; }
};

int Foo::count{0};


#endif