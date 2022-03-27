#include <iostream>
# include <fstream>
# include "2Dvector.h"
# include <time.h>
struct pixel {
    int red{255};
    int green {255};
    int  blue {255};
};
static const int width = 1920;
static const int height = 1080;



int main() {
    // array of thr pixels
    time(NULL);
    static pixel arr [height][width];
    std :: ofstream out  ("image.ppm",std::ios::out|std::ios::binary);
    out << "P3\n";
    out << width << " " << height << "\n";
    out << 255 << "\n";
    int i, j, xr, yr;
    // the coordinates of the circle
    xr = 128;
    yr =128;

    for (i = 0; i < height; i++)
    {
        for (int j =0 ; j< width; j++){
            Vector a (i , j);
            a.set_coordinates(height,width);
            arr[i][j].red = a.get_x() * 255;
            arr[i][j].green = a.get_y()*255;
            arr[i][j].blue = rand()%256 ;
        }
    }
    for (int i =0 ; i<height; i++){
        for (int j = 0 ;j<width; j++){
            out << arr[i][j].red<<" "<< arr[i][j].green<<" "<< arr[i][j].blue<<"\t";

        }
        out << "\n";
    }
    out.close();

    return 0;
}
