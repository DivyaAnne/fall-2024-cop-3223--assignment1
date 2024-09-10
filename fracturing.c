//********************************************************
// fracturing.c
// Author: Divya Anne
// Class: COP 3223, Professor Parra
// Purpose: The code calculates geometric properties of a city 
//(modeled as a circle) by breaking the logic into separate functions 
//for distance, perimeter, area, width, and height, following the DRY 
//principle to reduce redundancy.
// //********************************************************

#include <stdio.h>
#include <math.h>

// Define PI constant
#define PI 3.14159

// Function prototypes
int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main function
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter coordinates for Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates for Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    return distance;
}

// Function to calculate the perimeter of a circle (using the distance as the diameter)
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = PI * distance;
    printf("The perimeter of the city is %.2f\n", perimeter);
    
    double difficulty = 1.0; // Difficulty rating (adjust as needed)
    return difficulty;
}

// Function to calculate the area of a circle (using the distance as the diameter)
double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2.0;
    double area = PI * radius * radius;
    printf("The area of the city is %.2f\n", area);
    
    double difficulty = 2.0; // Difficulty rating (adjust as needed)
    return difficulty;
}

// Function to calculate the width (useful for a rectangular-like shape)
double calculateWidth() {
    double distance = calculateDistance();
    printf("The width of the city is %.2f\n", distance);
    
    double difficulty = 1.5; // Difficulty rating (adjust as needed)
    return difficulty;
}

// Function to calculate the height (useful for a rectangular-like shape)
double calculateHeight() {
    double distance = calculateDistance();
    printf("The height of the city is %.2f\n", distance);
    
    double difficulty = 2.5; // Difficulty rating (adjust as needed)
    return difficulty;
}
