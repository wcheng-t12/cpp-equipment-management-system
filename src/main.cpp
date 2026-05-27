#include <iostream>
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n=== Equipment Management System ===" << endl;
        cout << "1. Add Equipment" << endl;
        cout << "2. Display Equipment" << endl;
        cout << "3. Search Equipment" << endl;
        cout << "4. Sort Equipment" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Add Equipment Selected" << endl;
                break;

            case 2:
                cout << "Display Equipment Selected" << endl;
                break;

            case 3:
                cout << "Search Equipment Selected" << endl;
                break;

            case 4:
                cout << "Sort Equipment Selected" << endl;
                break;

            case 5:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}
