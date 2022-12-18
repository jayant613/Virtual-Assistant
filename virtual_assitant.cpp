#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime> // must include this header file to use time function

using namespace std;

// function to wish user according to time

void wishme()
{
    // current date and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time->tm_hour < 12)
    {
        cout << "Good Morning Boss" << endl;
    }
    else if (time->tm_hour < 12 && time->tm_hour <= 12)
    {
        cout << "Good Afternoon Boss" << endl;
    }
    else if (time->tm_hour > 16 && time->tm_hour <= 24)
    {
        cout << "Good Evening Boss" << endl;
    }
}

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
            cout << "\n<*************************************************************************************>/n" << endl;
            wishme();
            do
            {
                cout << "\n<*************************************************************************************>/n" << endl;
                cout << endl
                     << "How can i help you....." << endl
                     << endl;
                cout << "Your Query --->";
                gets(ch);
                cout << endl;
                cout << "Here is the result for your query --->";

                if (strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0)
                {
                    cout << "Hello Boss........" << endl;
                }
                if (strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0)
                {
                    cout << "Hello Boss........" << endl;
                }
            } while (1);
        }
        else
        {
            cout << "Incorrect Password" << endl;
        }
    } while (1);
    return 0;
}