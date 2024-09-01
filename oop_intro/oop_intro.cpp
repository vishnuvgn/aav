#include <iostream>
#include <string>

class Vehicle {
   public:
        int wheelNum;
        std::string brand;
        std::string model;

        std::string getVehicleInfo(void) {
            return brand + " " + model + " with " + std::to_string(wheelNum) + " wheels";
        }
        
};


int main(void) {
    Vehicle car1;
    car1.brand = "Toyota";
    car1.model = "Supra";
    car1.wheelNum = 4;
    std::string vehicleInfo = car1.getVehicleInfo();
    std::cout << vehicleInfo;
    return 0;
}