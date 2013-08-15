
#include "RGB.h"


RGB::RGB()
{
    //Default colour is white?
    r = g = b = 0;
}

RGB::RGB(RGB& ted)
{
    this->r = ted.r;
    this->g = ted.g;
    this->b = ted.b;
}

RGB::RGB(int red, int green, int blue)
{
    this->r = red;
    this->g = green;
    this->b = blue; 
}

RGB::~RGB()
{

}
 
int RGB::getRed()
{
    return r;
}

int RGB::getGreen()
{
    return g;
}

int RGB::getBlue()
{
    return b;
}

void RGB::setRed(int red)
{
    r = red;
}

void RGB::setBlue(int blue)
{
    g = blue;
}

void RGB::setGreen(int green)
{
    g = green;
}

void RGB::operator=(RGB& col)
{
    this->r = col.r;
    this->b = col.b;
    this->g = col.g;
}

bool RGB::operator==(RGB& that)
{
    if(this->r == that.r)
        if(this->b == that.b)
            if(this->g == that.g)
                return true;
            else return false;
        else return false;
    else return false;
}

