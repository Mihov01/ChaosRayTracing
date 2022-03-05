//
// Created by pc on 3/5/2022.
//
# include <fstream>
# include <cmath>
struct pixel {
    int red{255};
    int green {255};
    int  blue {255};
};
const int  width =256;
const int height = 256;
const int radius =70;
int main (){
    // array of thr pixels
    static pixel arr [height][width];
    std :: ofstream out  ("circle.ppm",std::ios::out|std::ios::binary);
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
            if (sqrt(abs (xr - i)*abs (xr - i)+ abs (yr -j)*abs (yr -j)) <= radius){
                arr[i][j].red = 255;
                arr[i][j].blue=0;
                arr[i][j].green=0;
            }
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