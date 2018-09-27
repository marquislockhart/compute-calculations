// Marquis Lockhart - CSCI 1110-01
// Program 4 - Complete Calculations

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

double sphereRadius(double sphereDiameter);
double sphereSurfaceArea(double radius);
double sphereCircumference(double sphereDiameter);
double sphereVolume(double radius);
static int diameter;


int main()
{

    printf("Enter a Diameter:");
    scanf("%i", &diameter);

    double stop=1;
    while (stop=0);
    // Conditional loop where if the entered number isn't positive, the program will ask until condition is met.
    while (diameter <= 0)
    {
        printf("\nPlease enter a positive number.\n");
        printf("Enter a Diameter");
        scanf("%i", &diameter);
    }

    double determinedRadius = sphereRadius(diameter);
    double determinedSurfaceArea = sphereSurfaceArea(determinedRadius);
    double determinedCircumference = sphereCircumference(diameter);
    double determinedVolume = sphereVolume(determinedRadius);

    printf("Diameter:      Radius:         Surface Area:     Circumference:      Volume:");
    printf(" \n %4i%14g%21g%17g%18g", diameter, determinedRadius, determinedSurfaceArea, determinedCircumference, determinedVolume);
    return 0;
}
    // Calculates radius of a sphere.
    double sphereRadius(double sphereDiameter)
    {
        double Radius = (((double)(int)diameter / 2)*100)/100;
        return Radius;
    }
    //Calculates surface area of a sphere.
    double sphereSurfaceArea(double radius)
    {
        double surfaceArea = (((double)(int)4 * PI * pow(sphereRadius(diameter),2))*100/100);
        return surfaceArea;
    }
    //Calculates circumference of a sphere.
    double sphereCircumference(double sphereDiameter)
    {
        double circumference = (((double)(int)PI * diameter)*100)/100;
        return circumference;
    }
    //Calculates the volume of a sphere.
    double sphereVolume(double radius)
    {
        double volume = (((double)(int)(4 * PI / 3) * pow(sphereRadius(diameter), 3))*100)/100;
        return volume;
    }
/*Enter a Diameter:2
Diameter:      Radius:         Surface Area:     Circumference:      Volume:
    2             1                12.56                6               4
*/
