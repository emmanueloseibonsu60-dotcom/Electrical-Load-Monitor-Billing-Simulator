#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Appliance {
    string name;
    double watts;
    double hours;
};

vector<Appliance> appliances;

// Register new appliance
void registerAppliance() {
    Appliance a;

    cout << "Appliance name: ";
    getline(cin, a.name);

    cout << "Power (watts): ";
    cin >> a.watts;

    cout << "Hours used per day: ";
    cin >> a.hours;
    cin.ignore();

    appliances.push_back(a);

    cout << "Appliance added successfully.\n";
}


// View appliances
void viewAppliances() {
    if (appliances.empty()) {
        cout << "No appliances registered.\n";
        return;
    }

    cout << fixed << setprecision(2);

    cout << "\n#  Name                Watts   Hours   kWh/day\n";
    cout << "------------------------------------------------\n";

    for (int i = 0; i < appliances.size(); i++) {
        double kwh = (appliances[i].watts / 1000) * appliances[i].hours;

        cout << i + 1 << ". "
             << setw(18) << left << appliances[i].name
             << setw(8) << appliances[i].watts
             << setw(8) << appliances[i].hours
             << kwh << endl;
    }
}


// Menu
void showMenu() {
    cout << "\n===== Electrical Load Monitoring System =====\n";
    cout << "1. Register Appliance\n";
    cout << "2. View Appliances\n";
    cout << "3. Exit\n";
    cout << "Choose option: ";
}


int main() {

    int choice;

    while (true) {
        showMenu();
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: registerAppliance(); break;
            case 2: viewAppliances(); break;
            case 3:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice.\n";
        }
    }

    return 0;
}
