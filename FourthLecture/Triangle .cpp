//
// Created by pc on 3/27/2022.
//

# include "Triangle .h"

Triangle ::Triangle(const Vector &A, const Vector &B, const Vector &C) {
    this -> A = A ;
    this -> B = B ;
    this -> C = C ;

}
void Triangle::setCoord(const Vector &A, const Vector &B, const Vector &C) {
    this -> A = A ;
    this -> B = B ;
    this -> C = C ;
}

Vector & Triangle ::get_A()  {
    return this->A;
}
Vector & Triangle ::get_B() {
    return this->B;
}
Vector & Triangle ::get_C() {
    return this ->C;
}
Vector Triangle::normal_vector() const {
    Vector A1 = B-A;
    Vector B1= C-A;
    Vector C1 = A1.vector_product(B1);
    C1.operator/=(C1.length());
    return C1;
}