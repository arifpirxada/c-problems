#include <iostream>

/* If we add this here, then we don't have to write std::...
using namespace std
or
using std::cout
using std::endl
*/

class Car
{
    // Encapsulation:
    // 1. Public - Accessable everywhere in the program.
    // 2. Private - Acessable only in class.
    // 2. Protected - Acessable only in class and derived classes.

private:
    int rating;

public:
    std::string brand;
    std::string color;
    int year;

    // Constructor - called when object is created.
    Car(std::string b) : brand(b)
    {
        std::cout << "Constructor Called!" << std::endl << std::endl;
        if (year < 2018)
        {
            rating = 6;
        }
        else
        {
            rating = 10;
        }
    }

    // Destructor - called when object goes out of scope.
    ~Car()
    {
        std::cout << std::endl << "Destructor Called!" << std::endl;
    }

    void displayInfo()
    {
        std::cout << "Brand: " << brand << std::endl << "Year: " << year << std::endl << "Rating: " << rating << std::endl << "Color: " << color << std::endl;
    }
};

// Inheritance
class Bike : public Car
{
public:
    int speed;
    int distanceTraveled;

    Bike (std::string b, int s) : Car(b), speed(s) {};

    void displayBike()
    {
        std::cout << "Speed: " << speed << "km/h" << std::endl << "DistanceTraveled: " << distanceTraveled << "km" << std::endl;
    }
};

int main()
{
    // Creating an object of the Car class
    Car myCar("Toyota");
    myCar.color = "Blue";
    myCar.year = 2022;

    // Calling a member function
    myCar.displayInfo();

    // Creating an object of the Bike class
    Bike myBike("Yamaha", 120);
    myBike.color = "Black";
    myBike.year = 2017;
    myBike.distanceTraveled = 1770;

    // Calling a member function
    myBike.displayInfo();
    myBike.displayBike();

    return 0;
}