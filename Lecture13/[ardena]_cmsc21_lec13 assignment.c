#include <stdio.h>
#include <math.h>

struct line {
    struct point {
        float x;
        float y;
    } point1, point2;
    float *midpoint;
    float slope;
    float distance;
};

//function prototypes
float solveSlope(struct line line1);
float *solveMidpoint(struct line line1);
float solveDistance(struct line line1);
void getSlopeInterceptForm(struct line line1);

float solveSlope(struct line line1){ //calculates the slope 
    float slope = (line1.point2.y - line1.point1.y) / (line1.point2.x - line1.point1.x);
    return slope;
}

float *solveMidpoint(struct line line1){//calculates the midpoint
    static float midpoint[2]; //static array for pointer
    midpoint[0] = (line1.point1.x + line1.point2.x)/2;
    midpoint[1] = (line1.point1.y + line1.point2.y)/2;
    return midpoint;

}

float solveDistance(struct line line1){ //calculates the distance 
    float distance = sqrt(pow(line1.point2.x - line1.point1.x, 2) + pow(line1.point2.y - line1.point1.y, 2));
    return distance;
}

void getSlopeInterceptForm(struct line line1){ //gets the slope intercept form
    float slope = line1.slope;
    float interceptb = line1.point1.y - (slope * line1.point1.x); //solves for y-intercept
    printf("y = %fx + %f\n", slope, interceptb);
}

int main(void){ //main function
    struct line line1;

    //the following lines of code asks for user-input for x1, x2, y1, and y2
    printf("Enter x and y for point1: \n");
    scanf("%f %f", &line1.point1.x, &line1.point1.y);
    printf("\nx1 is %f and y1 is %f.\n", line1.point1.x, line1.point1.y);

    printf("Enter x and y for point2: \n");
    scanf("%f %f", &line1.point2.x, &line1.point2.y);
    printf("\nx2 is %f and y2 is %f.\n", line1.point2.x, line1.point2.y);

    //the following lines of code calls in the function
    line1.slope = solveSlope(line1); 
    printf("Slope: %f\n", line1.slope);

    line1.midpoint = solveMidpoint(line1);
    printf("Midpoint: %f, %f\n", line1.midpoint[0], line1.midpoint[1]);

    line1.distance = solveDistance(line1);
    printf("Distance: %f\n", line1.distance);

    getSlopeInterceptForm(line1);
    return 0;
}