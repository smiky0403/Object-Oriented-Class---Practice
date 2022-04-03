#include <cassert>
#include<iostream>
//#include "Car.h"
//#include "Pyramid.h"
#include "Sphere.h"
//#include "Date.h"
//#include "Student.h"





// Test
int main() {
  
  ////Test ClassDate
 // Date date(29, 8, 1981);
 // assert(date.String() == "August 29, 1981"); std::cout << "Done" <<"\n";
 
 ////Test Car
  // Car car;
  // char brand[] = "BMW";
  // car.SetBrandName(brand);
  // std::cout << car.GetBrand() << "\n";

  // Pyramid pyramid(4, 5, 6);
  // assert(pyramid.Length() == 4);
  // assert(pyramid.Width() == 5);
  // assert(pyramid.Height() == 6);
  // assert(pyramid.Volume() == 40);

  // bool caught =false;
  // try{Pyramid invalid(-1, 2, 3);}catch(...){caught = true;}
  // assert(caught); std::cout << "Done" <<"\n";



    // Student david("David Silver", 10, 4.0);
    // assert(david.Name() == "David Silver");
    // assert(david.Grade() == 10);
    // assert(david.GPA() == 4.0);
    
    // bool caught{false};
    // try {
    //     david.Grade(20);
    // }
    // catch(...) {
    //     caught = true;
    // }
    // assert(caught);std::cout << "Done" <<"\n";

    

    //Test Sphere
    Sphere sphere(5);
    assert(sphere.Radius() == 5);
    assert(abs(sphere.Volume() - 523.6) < 1);std::cout << "Done" <<"\n";
      sphere.Radius(3);
    assert(sphere.Radius() == 3);
    assert(abs(sphere.Volume() - 113.1) < 1);std::cout << "Done" <<"\n";

    Foo f();
    Foo f2();
    assert(Foo::count == 0);
    std::cout << Sphere::Volume(5) << "\n";
    std::cout << "Done" <<"\n";
} 