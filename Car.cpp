#include "Car.h"

void Car::SetBrandName(std::string brand_name){
  Car::brand = brand_name;
}

std::string Car::GetBrand() const
{
  return brand;
} 