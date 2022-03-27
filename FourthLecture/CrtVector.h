//
// Created by pc on 3/27/2022.
//

#ifndef RAYTRACINGFOURTHHOMEWORK_CRTVECTOR_H
#define RAYTRACINGFOURTHHOMEWORK_CRTVECTOR_H




struct  Vector {

   Vector();
    Vector (double e0, double e1, double e2);

    double x() const ;
    double y() const ;
    double z() const ;
    double cross_prod (const Vector & other );
    Vector vector_product(const Vector & other );

    double operator[](int i) const ;
    double& operator[](int i) ;
    Vector & operator = (const Vector & other );
    Vector& operator+=(const Vector &other );
    Vector operator-(const Vector &other ) const;
    Vector& operator*=(const double & t);

    Vector & operator/=(const double & t) ;

    double length() const;

private:
    double el[3];
};
#endif //RAYTRACINGFOURTHHOMEWORK_CRTVECTOR_H
