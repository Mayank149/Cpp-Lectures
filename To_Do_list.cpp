#include <iostream>
#include <string>
#include <fstream>
#include <limits>
using namespace std;

int main()
{
    cout << "Welcome to TO-DO List application\n";
    bool running = true;
    while(running){
        int task;
        cout << "Enter 1 to add task to the list\n";
        cout << "Enter 2 to view tasks in the list\n";
        cout << "Enter 3 to exit\n";
        cout << "Enter the value: ";
        cin >> task;
        switch(task){
            case 1: {
                ofstream ofile("tasks.txt", ios :: app);
                string data;
                cout << "Enter the task: ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, data);
                ofile << data << endl;
                cout << "Task added successfully!\n";
                cout << endl;
                ofile.close();
                break;
            }
            case 2: {
                ifstream ifile("tasks.txt");
                string line;
                int i = 1;
                cout << "Tasks in the file:- \n";
                while(getline(ifile, line)){
                    cout << i++ << ". " << line << endl;
                }
                cout << endl;
                ifile.close();
                break;
            }
            case 3:
                cout << "Exiting program......\n";
                running = false;
                break;
            default:
                cout << "Wrong input! try again...\n";
                break;
        }
    }
    return 0;
}