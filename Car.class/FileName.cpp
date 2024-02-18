#include <iostream>
using namespace std;

class Vehicle {
private:
    string make;
    string model;
    int year;
    int mile;

public:
    Vehicle(string mk, string mdl, int yr, int ml) : make(mk), model(mdl), year(yr), mile(ml) {}

    void setMake(string mk) {
        make = mk;
    }

    void setModel(string mdl) {
        model = mdl;
    }

    void setYear(int yr) {
        year = yr;
    }
    void setmile(int ml) {
        mile = ml;
    }

    void displayInformation() {
        cout << "Make: " << make << "\nModel: " << model << "\nYear: " << year << "\n Millage : " << mile << endl;
    }

    void servicing() {
        if (mile >= 10000) {
            cout << "Car needs servicing.\n";
        }

        else if (mile < 10000 && mile>0) {
            cout << "Car does not need servicing.\n";
        }
    }
};

int main() {
    cout << "\t\t\tThis is the Car Class\n";
    int mileage;
    cout << "Enter the car mileage: ";
    cin >> mileage;

    Vehicle MyVehicle("Honda", "SUV", 2023, mileage);

    cout << "\t\t\tVehicle Details:\n";
    MyVehicle.displayInformation();
    cout << "\t\t\tServicing Status:\n";
    MyVehicle.servicing();

    return 0;
}
