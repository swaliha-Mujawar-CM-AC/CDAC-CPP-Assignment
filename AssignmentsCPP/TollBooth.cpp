#include <iostream>
using namespace std;

class TollBooth {
private:
    int totalVehicles;
    double totalRevenue;

public:
    // Constructor to start everything at zero
    TollBooth() {
        totalVehicles = 0;
        totalRevenue = 0.0;
    }

    // Resets the booth stats
    void reset() {
        totalVehicles = 0;
        totalRevenue = 0.0;
        cout << "Booth statistics have been reset to zero." << endl;
    }

    // Logic for adding vehicles and money
    void vehiclePayingToll(int vehicleType, double tollAmount) {
        totalVehicles++; // count the vehicle
        totalRevenue = totalRevenue + tollAmount; // add the cash
        
        if(vehicleType == 1) cout << "Standard Car added. Toll: " << tollAmount << endl;
        else if(vehicleType == 2) cout << "Truck added. Toll: " << tollAmount << endl;
        else if(vehicleType == 3) cout << "Bus added. Toll: " << tollAmount << endl;
    }

    // Getters
    int getTotalVehicles() {
        return totalVehicles;
    }

    double getTotalRevenue() {
        return totalRevenue;
    }
};

int main() {
    TollBooth booth;
    int choice = 0;

    // Fixed toll amounts as per question
    const double CAR_TOLL = 180.0;
    const double TRUCK_TOLL = 250.0; // assumed value
    const double BUS_TOLL = 350.0;

    while (choice != 7) {
        cout << "\n--- TOLL BOOTH MENU ---" << endl;
        cout << "1. Add Standard Car (Rs. 180)" << endl;
        cout << "2. Add Truck (Rs. 250)" << endl;
        cout << "3. Add Bus (Rs. 350)" << endl;
        cout << "4. Show Total Vehicles" << endl;
        cout << "5. Show Total Revenue" << endl;
        cout << "6. Reset Statistics" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter Choice: ";
        
        // Anti-infinite loop check
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a valid number!" << endl;
            continue;
        }

        switch (choice) {
            case 1:
                booth.vehiclePayingToll(1, CAR_TOLL);
                break;
            case 2:
                booth.vehiclePayingToll(2, TRUCK_TOLL);
                break;
            case 3:
                booth.vehiclePayingToll(3, BUS_TOLL);
                break;
            case 4:
                cout << "Total vehicles passed: " << booth.getTotalVehicles() << endl;
                break;
            case 5:
                cout << "Total revenue collected: Rs. " << booth.getTotalRevenue() << endl;
                break;
            case 6:
                booth.reset();
                break;
            case 7:
                cout << "Shutting down booth system..." << endl;
                break;
            default:
                cout << "Invalid option chosen!" << endl;
        }
    }

    return 0;
}
