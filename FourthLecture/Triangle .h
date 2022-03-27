//
// Created by pc on 3/27/2022.
//

#ifndef RAYTRACINGFOURTHHOMEWORK_TRIANGLE_H
#define RAYTRACINGFOURTHHOMEWORK_TRIANGLE_H
# include "CrtVector.h"
struct Triangle {
    Triangle ( const Vector & A , const Vector &  B , const  Vector &  C);
    void setCoord( const Vector & A , const Vector &  B , const  Vector &  C);
    Vector & get_A ()  ;
    Vector & get_B () ;
    Vector & get_C() ;
    Vector normal_vector ()const ;

private :
    Vector A ;
    Vector B ;
    Vector C ;
};
#endif //RAYTRACINGFOURTHHOMEWORK_TRIANGLE_H
