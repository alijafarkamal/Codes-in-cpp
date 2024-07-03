#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string shape;
    double height;
    const double PI = 3.1416;
    double radius;
    double width;
    double length;

    cout<< "Enter the shape type: (rectangle, circle, cylinder) ";
    cin >> shape;
    cout << endl;
    if (shape == "circle")
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        
        cout << "Area of the circle = "
            << PI * pow(radius, 2.0) << endl;
        cout << "Circumference of the circle: "
            << 2 * PI * pow(radius, 2.0) << endl;
    

    }
    if (shape == "cylinder")
    {
        cout << "Enter the radius of the base of the cylinder: ";
        cin >> radius;
        cout << "Enter the height of the cylinder: ";
        cin >> height;
        cout << "Volume of the cylinder = "
            << PI * pow(radius, 2.0) * height << endl;

        cout << "Surface area of the cylinder: "
            << 2 * radius * +2 * PI * pow(radius, 2.0) << endl;
       
        if (shape == "rectangle")
        {
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            cout << endl;

            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << endl;
            cout << "Area of the rectangle = "
                << length * width << endl;
            
            cout << "Perimeter of the rectangle = "
            << 2 * (length + width) << endl;
          
        }
      
   
}
return 0;


}