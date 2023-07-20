#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string name;
    char stream;
    int streamClass;
    int bioMarks;
    int comMarks;
    int cheMarks;
    int phyMarks;
    int average;
    
    ofstream MyFile("StudentDetails.txt");
    
    cout << "Enter Your Full Name : ";
    getline(cin, name); 
    
    cout << "Select Stream (Bio/Maths) Use B/M: ";
    cin >> stream;
    
    if (stream == 'B') {
        cout << "Select class for Bio 1/2/3: ";
        cin >> streamClass;
    } else if (stream == 'M') {
        cout << "Select class for Maths 4/5/6/7/8: ";
        cin >> streamClass;
    } else {
        cout << "Entered input not valid";
        return 1;
    }
    
    switch (stream) {
        case 'B':
            cout << "Enter Biology Marks: ";
            cin >> bioMarks;
            cout << "Enter Chemistry Marks: ";
            cin >> cheMarks;
            cout << "Enter Physics Marks: ";
            cin  >> phyMarks;
            
            cout << "\n.............................................\n";
            cout << "Your Name is: " << name << "\n";
            cout << "Your Stream and Class is: " << stream << streamClass << "\n";
            cout << "Your Total Marks is: " << bioMarks + cheMarks + phyMarks << "\n";
            average = (bioMarks + cheMarks + phyMarks) / 3;
            cout << "Your Average Marks is: " << average << "\n";
            
            if (average >= 90 ){
                cout << "Your Rank is A";
            }else if(average >= 75 ){
                cout << "Your Rank is B";
            }else if (average >= 65){
                cout << "Your Rank is C";
            }else if (average >= 50){
                cout << "Your Rank is S";
            }else{
                cout << "You Should Work Harder";
            }

            
            MyFile << name << " " << stream << streamClass << "\n";
            
            break;
        
        case 'M':
            cout << "Enter Combined Maths Marks: ";
            cin >> comMarks;
            cout << "Enter Chemistry Marks: ";
            cin >> cheMarks;
            cout << "Enter Physics Marks: ";
            cin  >> phyMarks;
            
            cout << "\n.............................................\n";
            cout << "Your Name is: " << name << "\n";
            cout << "Your Stream and Class is: " << stream << streamClass << "\n";
            cout << "Your Total Marks is: " << comMarks + cheMarks + phyMarks << "\n";
            average = (comMarks + cheMarks + phyMarks) / 3;
            cout << "Your Average Marks is: " << average << "\n";
            
            if (average >= 90 ){
                cout << "Your Rank is A";
            }else if(average >= 75 ){
                cout << "Your Rank is B";
            }else if (average >= 65){
                cout << "Your Rank is C";
            }else if (average >= 50){
                cout << "Your Rank is S";
            }else{
                cout << "You Should Work Harder";
            }


            MyFile << name << " " << stream << streamClass << "\n";
            
            break;
        
        default:
            cout << "Entered input not valid";
    }

    return 0;
}