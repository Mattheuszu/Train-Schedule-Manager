/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

class Train {
    string destination;
    int number;
    int hours;
    int minutes;
    
public:

 void setDestination(string destination)
    {
        this->destination = destination;
    }
    
 void setNumber(int number)
    {
      this->number = number;
    }
    
    void setHours(int hours)
    {
      this->hours = hours;
    }
    
    void setMinutes(int minutes)
    {
      this->minutes = minutes;
    }
    
    string getDestination()
    {
        return this->destination;
    }
    
    int getHours()
    {
        return this->hours;
    }
    
    int getMinutes()
    {
        return this->minutes;
    }
    
    int getNumber()
    {
        return this->number;
    }
    

};

int main()
{
    
    vector <Train> trains;
    
    string destination;
    int number;
    float hours;
    float minutes;
    
    for(int i = 0; i < 4; i++){
        
        Train tmp;
        cout << "Train #" << i + 1 << endl;
        
        cout << "Input number: ";
        cin >> number;
        tmp.setNumber(number);
        
        cout << "Input destination: ";
        cin >> destination;
        tmp.setDestination(destination);
        
        cout << "Input hours: ";
        cin >> hours;
        tmp.setHours(hours);
        
        cout << "Input minutes: ";
        cin >> minutes;
        tmp.setMinutes(minutes);
        
        trains.push_back(tmp);
        cout << endl;
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (trains[i].getDestination() > trains[j].getDestination()) {
                Train temp = trains[i];
                trains[i] = trains[j];
                trains[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        cout << "Number: " << trains[i].getNumber() << endl;
        cout << "Destination: " << trains[i].getDestination() << endl;
        cout << "Hours: " << trains[i].getHours() << endl;
        cout << "Minutes: " << trains[i].getMinutes() << endl;
    }
    
    cout << "Input info time about Trains: ";
    cout << endl;
    cout << "hours: ";
    cin >> hours;
    cout << "minutes: ";
    cin >> minutes;
    bool isFind = false;
    
     for(int i = 0; i < 4; i++)
    {
        if(trains[i].getHours() > hours && trains[i].getMinutes() > minutes || trains[i].getHours() == hours && trains[i].getMinutes() == minutes || trains[i].getHours() > hours && trains[i].getMinutes() < minutes || trains[i].getHours() < hours && trains[i].getMinutes() < minutes){
            cout << endl;
            cout << "Number: " << trains[i].getNumber() << endl;
            cout << "Destination: " << trains[i].getDestination() << endl;
            cout << "Hours: " << trains[i].getHours() << endl;
            cout << "Minutes: " << trains[i].getMinutes() << endl;
            isFind = true;
        }
    }
    
    if (!isFind) cout << "Trains doesn`t exists.";

    
    return 0;
}


 