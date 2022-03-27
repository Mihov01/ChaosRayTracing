//
// Created by pc on 3/27/2022.
//

# include "CrtVector.h"
# include <cmath>

Vector::Vector() {
    el[0]=0;
    el[1]=0;
    el[2]=0;
}
Vector ::Vector(double e0, double e1, double e2) {
    el[0]=e0;
    el[1]=e1;
    el[2]=e2;
}
double Vector::x() const {return el [0];}
double Vector::y() const {return el [1];}
double Vector::z() const {return el [2];}
double Vector::cross_prod(const Vector &other) {
    return (this->x()*other.x()+this->y()*other.y()+ this->z()*other.z());
}
double Vector:: length() const {
    return sqrt(el[0]*el[0] + el[1]*el[1] + el[2]*el[2]);
}
Vector Vector::vector_product(const Vector &other) {
    double new_x= this->y()*other.z() - this->z()*other.y();
    double new_y =   this->z()*other.x() - this->x()*other.z();
    double new_z =  this->x()*other.y() - this->y()*other.x();
    Vector vec ( new_x, new_y ,new_z);
    return vec ;
}
double& Vector :: operator[](int i) {return el[i];}
double Vector::operator[](int i) const {return el[i];}
Vector & Vector ::operator+=(const Vector &other) {
    for (int i =0 ; i<3 ; i++){
        this->el[i]+=other.el[i];
    }
    return *this;
}
Vector  Vector ::operator-( const Vector &other) const{

     Vector new_v (el[0] -other.el[0], el[1]-other.el[1], el[2] - other.el[2]);
    return  new_v;
}
Vector & Vector ::operator*=(const double &t) {
    for (int i =0 ; i<3 ; i++){
        this->el[i]+=t;
    }
    return *this;
}
Vector & Vector ::operator/=(const double &t) {
    for (int i =0 ; i<3 ; i++){
        this->el[i]/=t;
    }
    return *this;
}
Vector & Vector ::operator=(const Vector &other) {
    if (this != &other ){
        for ( int i =0 ; i< 3 ; i++){
            this->el[i] = other[i];
        }
    }
    return *this ;
}
