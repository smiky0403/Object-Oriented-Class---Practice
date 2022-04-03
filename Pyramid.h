#ifndef PYRAMID_H
#define PYRAMID_H
#include<iostream>

class Pyramid{
  public:
    Pyramid(int length, int width, int height):
    length_(length), width_(width), height_(height){Validate();};
    int Length() const{return length_;};
    int Width() const{return width_;};
    int Height()const{return height_;};
    void Length(int length){length_ = length;Validate();};
    void Width(int width){width_ = width;Validate();};
    void Height(int height){height_ = height;Validate();};
    float Volume() const{return Length()*Width()*Height()/3;};
  private:
    int length_;
    int width_;
    int height_;
    void Validate() const{
      if(length_ <0 ||width_<0 || height_<0){
        throw std::invalid_argument("Negative dimention");}
    };
};

#endif