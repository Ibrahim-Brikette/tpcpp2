#include"vecteur2d.h"
class vect3d : public vecteur2d
{
private:
    double z;
public:
    vect3d(double x=0,double y=0,double z=0);
    void affiche();
    void deplacer(double,double,double);
    float getZ ()const;

};//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
