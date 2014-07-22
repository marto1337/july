#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;


//==============================================================================
int main(){

    int count_tests,count_tasks;
    int i_tests, i_tasks;
    ostringstream filename;
//==============================================================================
    cout << "How many tests would you like me to generate? ";
    cin >> count_tests;
    cout << "How many tasks would you like each test to have? ";
    cin >> count_tasks;
//==============================================================================
    for(i_tests=1;i_tests<=count_tests;i_tests++){
        filename << "test_" << i_tests << ".html";
        ofstream test(filename.str().c_str());
        if(test.is_open()){
            test << "<!DOCTYPE html>" << endl;
            test << "<html>" << endl;
            test << "<body>" << endl << endl;
            test << "<h1>Test #" << i_tests << "</h1>" << endl << endl;
            for(i_tasks=0;i_tasks<=count_tasks;i_tasks++){
                test << "<h3>Task #" << i_tasks << "</h3>" << endl << endl;
                test << "<p>" << "some task.." << "</p>" << endl;
            }
            test << endl << "</body>" << endl;
            test << "</html>" << endl;
            test.close();
        }
        else{
            cout << "Error: could not create file!" << endl;
        }
        cout << filename.str() << " generated.." << endl;
        filename.str("");
    }
//==============================================================================
    return 0;
}
