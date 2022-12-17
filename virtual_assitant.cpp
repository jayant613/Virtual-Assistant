#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime>

using namespace std;

int main()
{

    system("cls");

    cout << "\t\t\t<***************************************** W E L C O M E *****************************************>" << endl;
    cout << "\t\t\t<***************************************** I AM A VIRTUAL ASSISTANCE *****************************************>" << endl;
    cout << "\t\t\t<***************************************** MY NAME IS INDERTIA *****************************************>" << endl;
    cout << "\t\t\t<***************************************** I AM HERE TO HELP YOU *****************************************>" << endl;

    char password[20]; // to take password
    char ch[100];      // to take command from the user

    do
    {
        cout << "*****************************" << endl;
        cout << "!ENTER YOUR PASSWORD !" << endl;
        cout << "*****************************" << endl;

        gets(password);

        if (strcmp(password, "inertia") == 0)
        {
            cout << "Correct Password" << endl;
        }
        else
        {
            cout << "Incorrect Password" << endl;
        }
    } while (1);
    return 0;
}