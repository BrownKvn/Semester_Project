#include <iostream>
#include <string>

using namespace std;

class Hotel {
private:
    string roomNumber;
    string customerName;
    int numberOfDays;
    double roomRate;
    double totalBill;

public:
    void checkIn() {
        cout << "Enter room number: ";
        cin >> roomNumber;
        cout << "Enter customer name: ";
        cin >> customerName;
        cout << "Enter number of days: ";
        cin >> numberOfDays;
        cout << "Enter room rate: ";
        cin >> roomRate;

        totalBill = numberOfDays * roomRate;

        cout << "Check-in successful!" << endl;
    }

    void checkOut() {
        cout << "Room number: " << roomNumber << endl;
        cout << "Customer name: " << customerName << endl;
        cout << "Number of days: " << numberOfDays << endl;
        cout << "Room rate: " << roomRate << endl;
        cout << "Total bill: " << totalBill << endl;

        cout << "Check-out successful!" << endl;
    }
};

int main() {
    Hotel hotel;
    int choice;

    do {
        cout << "1. Check-in" << endl;
        cout << "2. Check-out" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hotel.checkIn();
                break;
            case 2:
                hotel.checkOut();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}

