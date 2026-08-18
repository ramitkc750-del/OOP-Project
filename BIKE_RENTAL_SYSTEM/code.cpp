#include <iostream>   
#include <string>       
#include <fstream>      // For saving information in a file

using namespace std;

// ============================
//        BIKE CLASS
// ============================

class Bike
{
public:

    string name;        // Name of the bike
    int price;          // Price per hour
    bool rented;        // Tells us if bike is rented

    // Gives information to the bike
    Bike(string n, int p)
    {
        name = n;
        price = p;
        rented = false;     // Bike starts as available
    }
};

// ============================
//          MAIN
// ============================

int main()
{
    // Creating 4 bikes

    Bike bike1("Ducati Panigale V4", 130);
    Bike bike2("Kawasaki Ninja ZX-10RR", 150);
    Bike bike3("Harley Davidson Sportster S", 90);
    Bike bike4("Yamaha YZF-R9 SP", 100);

    int choice;
    int bike;
    int hours;
    int money;

    // Keep showing the menu
    while (true)
    {
        cout << "\n===== BIKE RENTAL SYSTEM =====\n";

        cout << "1. Display Bikes\n";
        cout << "2. Rent Bike\n";
        cout << "3. Return Bike\n";
        cout << "4. Show Rent Income\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        // ============================
        //       SHOW BIKES
        // ============================

        if (choice == 1)
        {
            cout << "\n1. " << bike1.name;
            cout << " - $" << bike1.price << endl;

            cout << "2. " << bike2.name;
            cout << " - $" << bike2.price << endl;

            cout << "3. " << bike3.name;
            cout << " - $" << bike3.price << endl;

            cout << "4. " << bike4.name;
            cout << " - $" << bike4.price << endl;
        }

        // ============================
        //        RENT BIKE
        // ============================

        else if (choice == 2)
        {
            cout << "Enter bike number (1-4): ";
            cin >> bike;

            cout << "Enter needed hours: ";
            cin >> hours;

            // Bike 1
            if (bike == 1)
            {
                if (bike1.rented == false)
                {
                    money = bike1.price * hours;

                    bike1.rented = true;

                    cout << "Bike rented!" << endl;
                    cout << "Total: $" << money << endl;

                    // Save information to file
                    ofstream file("rental.txt", ios::app);

                    file << bike1.name << endl;
                    file << "Hours: " << hours << endl;
                    file << "Total: $" << money << endl;
                    file << "----------------" << endl;

                    file.close();
                }
                else
                {
                    cout << "Bike is already rented." << endl;
                }
            }

            // Bike 2
            else if (bike == 2)
            {
                if (bike2.rented == false)
                {
                    money = bike2.price * hours;

                    bike2.rented = true;

                    cout << "Bike rented!" << endl;
                    cout << "Total: $" << money << endl;

                    ofstream file("rental.txt", ios::app);

                    file << bike2.name << endl;
                    file << "Hours: " << hours << endl;
                    file << "Total: $" << money << endl;
                    file << "----------------" << endl;

                    file.close();
                }
                else
                {
                    cout << "Bike is already rented." << endl;
                }
            }

            // Bike 3
            else if (bike == 3)
            {
                if (bike3.rented == false)
                {
                    money = bike3.price * hours;

                    bike3.rented = true;

                    cout << "Bike rented!" << endl;
                    cout << "Total: $" << money << endl;

                    ofstream file("rental.txt", ios::app);

                    file << bike3.name << endl;
                    file << "Hours: " << hours << endl;
                    file << "Total: $" << money << endl;
                    file << "----------------" << endl;

                    file.close();
                }
                else
                {
                    cout << "Bike is already rented." << endl;
                }
            }

            // Bike 4
            else if (bike == 4)
            {
                if (bike4.rented == false)
                {
                    money = bike4.price * hours;

                    bike4.rented = true;

                    cout << "Bike rented!" << endl;
                    cout << "Total: $" << money << endl;

                    ofstream file("rental.txt", ios::app);

                    file << bike4.name << endl;
                    file << "Hours: " << hours << endl;
                    file << "Total: $" << money << endl;
                    file << "----------------" << endl;

                    file.close();
                }
                else
                {
                    cout << "Bike is already rented." << endl;
                }
            }

            else
            {
                cout << "Wrong bike number." << endl;
            }
        }

        // ============================
        //       RETURN BIKE
        // ============================

        else if (choice == 3)
        {
            cout << "Enter bike number: ";
            cin >> bike;

            if (bike == 1)
            {
                bike1.rented = false;
                cout << "Bike returned." << endl;
            }

            else if (bike == 2)
            {
                bike2.rented = false;
                cout << "Bike returned." << endl;
            }

            else if (bike == 3)
            {
                bike3.rented = false;
                cout << "Bike returned." << endl;
            }

            else if (bike == 4)
            {
                bike4.rented = false;
                cout << "Bike returned." << endl;
            }

            else
            {
                cout << "Wrong bike number." << endl;
            }
        }

        // ============================
        //       SHOW EARNINGS
        // ============================

        else if (choice == 4)
        {
            cout << "Earnings are saved in rental.txt" << endl;
        }

        // ============================
        //            EXIT
        // ============================

        else if (choice == 5)
        {
            cout << "Thank you!" << endl;

            break;
        }

        else
        {
            cout << "Wrong choice." << endl;
        }
    }

    return 0;
}


