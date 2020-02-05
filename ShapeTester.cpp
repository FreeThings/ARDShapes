#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include <iostream>

using namespace std;

string calc, yN;

class Box
{
    public:
        double length;
        double breadth;
        double height;
        double volume;
        double surfaceArea;
};

class Pyramid
{
    public:
        double length;
        double breadth;
        double height;
        double volume;
        double surfaceArea;
};

class Sphere
{
    public:
        double radius;
        double volume;
        double surfaceArea;
};

void calcBox()
{
    Box box1;
    cout << "\nWhat is the bredth of the box?\n";
    cin >> box1.breadth;
    cout << "\nWhat is the height of the box?\n";
    cin >> box1.height;
    cout << "\nWhat is the length of the box?\n";
    cin >> box1.length;
    box1.volume = box1.breadth * box1.height * box1.length;
    box1.surfaceArea = 2*(box1.height*box1.breadth) + 2*(box1.height * box1.length) + 2*(box1.breadth*box1.length);
    cout << "The volume of your Box is " << box1.volume << endl;
    cout << "The surface area of your Box is " << box1.surfaceArea << endl;

}

void calcPyr()
{
    Pyramid py1;
    cout << "\nWhat is the bredth of the Pyramid?\n";
    cin >> py1.breadth;
    cout << "\nWhat is the height of the Pyramid?\n";
    cin >> py1.height;
    cout << "\nWhat is the length of the Pyramid?\n";
    cin >> py1.length;
    py1.volume = (py1.breadth * py1.height * py1.length)/3;
    py1.surfaceArea = (py1.length*py1.breadth) + py1.length * sqrt(pow(py1.breadth/2,2)+pow(py1.height,2))+py1.breadth*sqrt(pow(py1.length/2,2)+pow(py1.height, 2));
    cout << "The volume of your Pyramid is " << py1.volume << endl;
    cout << "The surface area of your Pyramid is " << py1.surfaceArea << endl;
}
void calcSph()
{
    Sphere sp1;
    cout << "\nWhat is the radius of the Sphere?\n";
    cin >> sp1.radius;
    sp1.volume = (1.3333333)*(M_PI * pow(sp1.radius, 3));
    sp1.surfaceArea = 4 * M_PI * pow(sp1.radius, 2);
    cout << "The volume of your Sphere is " << sp1.volume << endl;
    cout << "The surface are of your Sphere is " << sp1.surfaceArea << endl;
}

int main()
{
    cout << "Welcome to shape maker!\nYou can make 3 different types of shapes here!\nThey are a sphere, pyramid, or box";
    cout << "Please enter below:\n'S' for a Sphere\n'P' for a Pyramid\n'B' for a Box\n\n";
    while (true)
        {
            cin >> calc;
            if (calc == "S")
            {
                calcSph();
                break;
            } else if (calc == "B")
            {
                calcBox();
                break;
            } else if (calc == "P")
            {
                calcPyr();
                break;
            } else
            {
                cout << "Please enter:\n'S' for a Sphere\n'P' for a Pyramid\n'B' for a Box\n";
            }
        }
}
