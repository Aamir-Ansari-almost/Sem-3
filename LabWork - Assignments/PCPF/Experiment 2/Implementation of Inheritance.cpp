#include <iostream>

using namespace std;

//Super class
class Vehicle {
    private:
        string vehicleModel;
        int regNum;
        float speed, fuel, mileage;

    public:
        //Initialization
        Vehicle(string vehicleModel, int regNum, float speed, float fuel, float mileage) {
            this->vehicleModel = vehicleModel;
            this->regNum = regNum;
            this->speed = speed;
            this->fuel = fuel;
            this->mileage = mileage;
        }

        //Model getter setter
        string getVehicleModel () {
            return this->vehicleModel;
        }
        void setVehicleModel (string vehicleModel) {
            this->vehicleModel = vehicleModel;
        }

        //regNum getter setter
        int getRegNum () {
            return this->regNum;
        }
        void setRegNum(int regNum) {
            this->regNum = regNum;
        }

        //speed getter setter
        float getSpeed() {
            return this->speed;
        }
        void setSpeed (float speed) {
            this->speed = speed;
        }

        //fuel getter setter
        float getFuel() {
            return this->fuel;
        }
        void setFuel(float fuel) {
            this->fuel = fuel;
        }

        //mileage getter setter
        float getMileage() {
            return this->mileage;
        }
        void setMileage(float mileage) {
            this->mileage = mileage;
        }

        //fuels needed in liter
        float fuelNeeded (float km) {
            return (this->mileage / km);
        }

        //Distance covered
        float distanceCovered (float hour) {
            return (this->speed * hour);
        }

        //Display information of vehicle
        virtual void display() {
            cout << "Vehicle Model :  " << this->vehicleModel << endl;
            cout << "Registration number :  " << this->regNum << endl;
            cout << "Vehicle Speed :  " << this->speed << " km/h" << endl;
            cout << "Vehicle Fuel :  " << this->fuel << " liters" << endl;
            cout << "Vehicle Mileage :  " << this->mileage << "km/l" << endl;
        }

};

//Sub class
class Truck : public Vehicle {
    private:
        float cargoWeightLimit;

    public:
        //Initializing constructor
        Truck (string vehicleModel, int regNum, float speed, float fuel, float mileage, float cargoWeightLimit)
        :Vehicle(vehicleModel, regNum, speed, fuel, mileage) {
            this->cargoWeightLimit = cargoWeightLimit;
        }

        //cargoWeightLimit getter setter
        float getCargoWeightLimit() {
            return this->cargoWeightLimit;
        }
        void setCargoWeightLimit() {
            this->cargoWeightLimit = cargoWeightLimit;
        }

        //Display info of bus
        void display() override {
            cout << "Vehicle Model :  " << getVehicleModel() << endl;
            cout << "Registration number :  " << getRegNum() << endl;
            cout << "Vehicle Speed :  " << getSpeed() << " km/h" << endl;
            cout << "Vehicle Fuel :  " << getFuel() << " liters" << endl;
            cout << "Vehicle Mileage :  " << getMileage()  << " km/l" << endl;
            cout << "Cargo Weight Limit :  " << this->cargoWeightLimit << endl;
        }
};

//Sub class
class Bus : public Vehicle {
    private:
        int numPassenger;

    public:
        //Initializing constructor
        Bus (string vehicleModel, int regNum, float speed, float fuel, float mileage, int numPassenger)
        :Vehicle(vehicleModel, regNum, speed, fuel, mileage) {
            this->numPassenger = numPassenger;
        }

        //numPassenger getter setter
        int getNumPassenger() {
            return this->numPassenger;
        }
        void setNumPassenger() {
            this->numPassenger = numPassenger;
        }

        //Display info of truck
        void display() override {
            cout << "Vehicle Model :  " << getVehicleModel() << endl;
            cout << "Registration number :  " << getRegNum() << endl;
            cout << "Vehicle Speed :  " << getSpeed() << " km/h" << endl;
            cout << "Vehicle Fuel :  " << getFuel() << " liters" << endl;
            cout << "Vehicle Mileage :  " << getMileage()  << " km/l" << endl;
            cout << "Number of Passenger :  " << this-> numPassenger << endl;
        }

};

int main() {

    //created object; initialized with constructor
    Truck truckObj("Belaz", 2, 60, 50, 15, 80);

    //created object; initialized with constructor
    Bus busObj("Volvo", 1, 25, 50, 10, 100);

    //Display truck
    cout << "*********** B U S ****************" << endl;
    busObj.display();
    cout << "Fuel needed :  " << busObj.fuelNeeded(10) << endl;
    cout << "Distance covered :  " << busObj.distanceCovered(2) << endl;

    cout << endl;
    //Display bus
    cout << "*********** T R U C K ****************" << endl;
    truckObj.display();
    cout << "Fuel needed :  " << truckObj.fuelNeeded(15) << endl;
    cout << "Distance covered :  " << truckObj.distanceCovered(2) << endl;
}

















