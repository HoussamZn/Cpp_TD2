#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
class point{
    private :
    float x,y;
    public :
    point(float px,float py);
    void deplace(float px,float py);
    void affiche();
};
#endif
