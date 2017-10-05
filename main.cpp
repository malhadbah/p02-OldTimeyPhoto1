#include <iostream>
#include "bitmap.h"
#include <string>
#include <vector>

using namespace std;

int main ()

{

Bitmap image;
vector <vector <Pixel> > bmp;
Pixel rgb;
//read a file example.bmp and convert it to a pixel matrix
image.open("machupicchu.dib");
bmp = image.toPixelMatrix();

cout<<"machupicchu.dib has been loaded. it is "<<bmp[0].size()<<" pixels wide and "<<bmp.size()<<" pixels high."<<endl;

return 0;
}

