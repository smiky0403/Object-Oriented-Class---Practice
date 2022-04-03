#ifndef CAR_H
#define CAR_H
#include <iostream>

class Car{
  public:
    void SetBrandName(std::string brand_name);
    std::string GetBrand() const;

  private:
    int horsepower;
    int weight;
    //char *brand;
    std::string brand;

};

#endif