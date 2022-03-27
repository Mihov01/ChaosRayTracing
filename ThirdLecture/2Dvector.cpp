//
// Created by pc on 3/18/2022.
//

#include "2Dvector.h"
# include <cmath>



int Vector::get_x()const{return x;}
int Vector::get_y()const{return y;};
int Vector::get_z() const {return z;}
Vector ::Vector(int x , int y , int z) {
    this->x=x;
    this->y=y;
    this->z =z;
}
/// sets the ray coordinates acording to the algorithm
void Vector::set_coordinates( unsigned int height, unsigned int width) {
    x+=0.5;
    y+=0.5;
    x/=width;
    y/=height;
    x = (x*2.0) -1.0;
    y = 1.0 - (2.0*y);
    x*=width/height;
    int length_vec = sqrt((x*x) + (y*y)+ (z*z));
    x /= length_vec;
    y /=length_vec;
    z/=length_vec;
}