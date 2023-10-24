#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include "point.h"


using namespace std;
point::point(float px,float py)
{
    x=px;
    y=py;
}
void point::deplace(float px,float py)
{
    x+=px;
    y+=py;
}
void point::affiche()
{
    cout<<"("<<x<<","<<y<<")";
}

