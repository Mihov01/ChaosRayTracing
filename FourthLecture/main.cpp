#include <iostream>
# include "CrtVector.h"
# include "Triangle .h"
int main() {
    Vector A1 (3.5,0,0);
    Vector B1 (1.75,3.5,0);
    Vector C1 = A1.vector_product(B1);
    std::cout << C1.x()<< " " << C1.y()<< " " << C1.z()<<"\n";
    Vector A2 (3,-3,1);
    Vector B2 (4,9,3);
    Vector C2 = A2.vector_product(B2);
    std::cout << C2.x()<< " " << C2.y()<< " " << C2.z()<<"\n";
    std::cout << "The area of the rombus defined by A2 and B2 is :\n"<< abs (A2.cross_prod(B2))<<"\n";

    Vector B3 (-12,12,4);
    std::cout << "The area of the rombus defined by A2 and B3 is :\n"<< abs (A2.cross_prod(B3))<<"\n";
    Vector A4 (-1.75, -1.75, -3);
    Vector B4 (1.75, -1.75, -3);
    Vector C4 (0, 1.75, -3);
    Triangle T(A4,B4,C4);
    Vector T1 = T.normal_vector();
    std::cout << T1.x()<< " "<< T1.y()<< " "<< T1.z()<<"\n";
    Vector A5 (0, 0, -1);
    Vector B5 (1, 0, 1);
    Vector C5 (-1, 0, 1);
    Triangle T2(A5,B5,C5);
    Vector T3 = T2.normal_vector();
    std::cout << T3.x()<< " "<< T3.y()<< " "<< T3.z()<<"\n";
    Vector A6 (0.56, 1.11, 1.23);
    Vector B6 (0.44, -2.368, -0.54);
    Vector C6 (-1.56, 0.15, -1.92);
    Triangle T4(A6,B6,C6);
    Vector T5 = T4.normal_vector();
    std::cout << T5.x()<< " "<< T5.y()<< " "<< T5.z()<<"\n";
    return 0;
}
