#include <iostream>
#include <string>
using namespace std;

// =====================
// Equipment Structure
// =====================
struct Equipment
{
    string equipmentID;
    string name;
    string category;
    string manufacturer;
    string modelNumber;
    string condition;
    string maintenanceDate;
};

// =====================
// Storage
// =====================
const int MAX = 100;
Equipment equipmentList[MAX];
int equipmentCount = 0;

// =====================
// Add Equipment Function
// =====================
void addEquipment()
{
    if (equipmentCount >= MAX)
    {
        cout << "Storage is full!" << endl;
        return;
    }

    cout << "\n=== Add Equipment ===" << endl;

    cout << "Equipment ID: ";
    cin >> equipmentList[equipmentCount].equipmentID;

    cin.ignore(); // important for getline

    cout << "Name: ";
    getline(cin, equipmentList[equipmentCount].name);

    cout << "Category: ";
    getline(cin, equipmentList[equipmentCount].category);

    cout << "Manufacturer: ";
    getline(cin, equipmentList[equipmentCount].manufacturer);

    cout << "Model Number: ";
    getline(cin, equipmentList[equipmentCount].modelNumber);

    cout << "Condition: ";
    getline(cin, equipmentList[equipmentCount].condition);

    cout << "Maintenance Date: ";
    getline(cin, equipmentList[equipmentCount].maintenanceDate);
    
    equipmentCount++;

    cout << "\nEquipment added successfully!\n";
}

// =====================
// Display Equipment Function
// =====================
void displayEquipment()
{
    cout << "\n=== Equipment List ===" << endl;

    if (equipmentCount == 0)
    {
        cout << "No equipment found." << endl;
        return;
    }

    for (int i = 0; i < equipmentCount; i++)
    {
        cout << "\nEquipment " << i + 1 << endl;
        cout << "ID: " << equipmentList[i].equipmentID << endl;
        cout << "Name: " << equipmentList[i].name << endl;
        cout << "Category: " << equipmentList[i].category << endl;
        cout << "Manufacturer: " << equipmentList[i].manufacturer << endl;
        cout << "Model: " << equipmentList[i].modelNumber << endl;
        cout << "Condition: " << equipmentList[i].condition << endl;
        cout << "Maintenance Date: " << equipmentList[i].maintenanceDate << endl;
    }
}

void searchEquipment()
{
    string searchID;
    bool found = false;

    cout << "\n=== Search Equipment ===" << endl;
    cout << "Enter Equipment ID: ";
    cin >> searchID;

    for (int i = 0; i < equipmentCount; i++)
    {
        if (equipmentList[i].equipmentID == searchID)
        {
            cout << "\nEquipment Found!" << endl;
            cout << "ID: " << equipmentList[i].equipmentID << endl;
            cout << "Name: " << equipmentList[i].name << endl;
            cout << "Category: " << equipmentList[i].category << endl;
            cout << "Manufacturer: " << equipmentList[i].manufacturer << endl;
            cout << "Model: " << equipmentList[i].modelNumber << endl;
            cout << "Condition: " << equipmentList[i].condition << endl;
            cout << "Maintenance Date: " << equipmentList[i].maintenanceDate << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Equipment not found." << endl;
    }
}

// =====================
// Main Menu
// =====================
int main()
{
    int choice;

    do
    {
        cout << "\n=================================" << endl;
        cout << " Equipment Management System" << endl;
        cout << "=================================" << endl;
        cout << "1. Add Equipment" << endl;
        cout << "2. Display Equipment" << endl;
        cout << "3. Search Equipment" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addEquipment();
            break;

        case 2:
            displayEquipment();
            break;

        case 3:
            searchEquipment();
            break;

        case 4:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}