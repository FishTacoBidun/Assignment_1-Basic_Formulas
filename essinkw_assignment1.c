#include <stdio.h>
#include <math.h>

int getNumSpheres(void);
void findSphereSA(double R, double ha, double hb);
void findSphereV(double R, double ha, double hb);

int main(void) {

int numSphere;
double R;
double ha;
double hb;
double SAAverage;
double VAverge;

numSpheres = getNumSpheres();

for(int i = 0; i < numSpheres; i++)
{

  while(R < 0 || ha < 0 || hb < 0)
  {
    
  }

  SAAverage += findSphereSA(R, ha, hb);
  VAverage += findSphereV(R, ha, hb);
}

return 0;
}

//gets the number of spheres the user wants to perform calculations on
int getNumSpheres(void)
{

}

//does the math to find the sphere's surface area 
double findSphereSA(double R, double ha, double hb)
{

}

//does the math to find the sphere's volume
double findSphereV(double R, double ha, double hb)
{

}
