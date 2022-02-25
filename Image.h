#include <iostream> 
#include <stdio.h>
#include <stdint.h>
#include <string.h>

enum ImageType{
    PNG, JPG, BMP, TGA
};

struct Image
{
    uint8_t* data = NULL; //data
    size_t size = 0; //size of data
    int w; //width
    int h; //height
    int channels; //number of channels

    Image(const char* filename);
    Image(int w, int h, int channels); //blank or black image 
    Image(const Image& img); //copy over images
    ~Image();

    bool read(const char* filename); //reading files
    bool write(const char* filename); //write files
    
    ImageType getFileType(const char* filename); //image type
};
