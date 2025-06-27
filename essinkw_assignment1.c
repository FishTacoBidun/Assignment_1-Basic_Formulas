#include <stdio.h>
#include <math.h>

//constants
const double PI = 3.14159265359;

//function definitions
int getNumSpheres(void);
void findSphereSA(double R, double ha, double hb);
void findSphereV(double R, double ha, double hb);

int main(void) {

//variables
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
    printf("Obtaining data for spherical segment number %x\n", i);

    //get R
    printf("What is the radius of the sphere (R)?\n");
    scanf("%f", &R);

    //get ha
    printf("What is the height of the top area of the spherical segment (ha)?\n");
    scanf("%f", &ha);


    //get hb
    printf("What is the height of the bottom area of the spherical segment (hb)?\n");
    scanf("%f", &hb);
  }

  SAAverage += findSphereSA(R, ha, hb);
  VAverage += findSphereV(R, ha, hb);
}

return 0;
}

//gets the number of spheres the user wants to perform calculations on
int getNumSpheres(void)
{
  int numSpheres;

  while(numSpheres < 2 || numSpheres > 10)
  {
    printf("How many spherical segments you want to evaluate [2-10]?\n");
    scanf("%x", &numSpheres);
  }

  return numSpheres;
}

//does the math to find the sphere's surface area 
double findSphereSA(double R, double ha, double hb)
{

}

//does the math to find the sphere's volume
double findSphereV(double R, double ha, double hb)
{

}
