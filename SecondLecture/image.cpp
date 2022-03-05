#include <iostream>
#include <fstream>
# include <ctime>
struct pixel {
    int red{0};
    int green {0};
    int  blue {0};
};
const int height = 1080;
const int width = 1980;

int main() {
std::time (NULL);
    static pixel arr[height][width];

std::ofstream out ("image.ppm ",std::ios::out| std::ios::binary);
    out << "P3\n";
    out << width << " " << height << "\n";
    out << 255 << "\n";
// every for loop is a different zone of the pixel matrix for the image
    for (int i =0 ; i<height/3; i++){
        for (int j = 0 ;j<width/3; j++){
            arr[i][j].red=std::rand()%256;

        }
    }

    for (int i =0 ; i<height/3; i++){
        for (int j = width/3 ;j<2*width/3; j++){
            arr[i][j].green=std::rand()%256;

        }
    }
    for (int i =0 ; i<height/3; i++){
        for (int j = 2*width/3 ;j<width; j++){
            arr[i][j].blue=std::rand()%256;

        }
    }
    for (int i =height/3 ; i<2*height/3; i++){
        for (int j = 0 ;j<width/3; j++){
            arr[i][j].green=std::rand()%256;

        }
    }
    for (int i =height/3 ; i<2*height/3; i++){
        for (int j = 2*width/3 ;j<width; j++){
            arr[i][j].red=std::rand()%256;

        }
    }
    for (int i =height/3 ; i<2*height/3; i++){
        for (int j = width/3 ;j<2*width/3; j++){
            arr[i][j].blue=std::rand()%256;

        }
    }
    for (int i =2*height/3 ; i<height; i++){
        for (int j = 0 ;j<width/3; j++){
            arr[i][j].blue=std::rand()%256;

        }
    }
    for (int i =2*height/3 ; i<height; i++){
        for (int j = 2*width/3 ;j<width; j++){
            arr[i][j].green=std::rand()%256;

        }
    }
    for (int i =2*height/3 ; i<height; i++){
        for (int j = width/3 ;j<2*width/3; j++){
            arr[i][j].red=std::rand()%256;

        }
    }
    // here I write the pixel matrix to the ppm image
    for (int i =0 ; i<height; i++){
        for (int j = 0 ;j<width; j++){
            out << arr[i][j].red<<" "<< arr[i][j].green<<" "<< arr[i][j].blue<<"\t";

        }
        out << "\n";
    }
    out.close();
}