#ifndef POINT_H
#define POINT_H
class point{
    private :
    float x,y;
    public :
    point(float px,float py);
    void deplace(float px,float py);
    void affiche();
};
#endif
