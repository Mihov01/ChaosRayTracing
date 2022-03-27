//
// Created by pc on 3/18/2022.
//

#ifndef RT_3_WEEK_2DVECTOR_H
#define RT_3_WEEK_2DVECTOR_H
# include <iostream>
struct Vector{
    Vector () = default;
    Vector(int x , int y, int z =-1) ;
    void set_coordinates( unsigned int height , unsigned int width);
    int get_x ()const;
    int get_y ()const ;
    int get_z ()const ;
private :
    int x {0};
    int y {0};
    int z {-1};
};
#endif //RT_3_WEEK_2DVECTOR_H
