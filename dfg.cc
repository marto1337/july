#include <iostream>
#include <sstream>
#include <fstream>
#include <cmath>
#include <ctime>
using namespace std;

#define COEFF_DIAPASON 5

//==============================================================================
void input(int &count_tests, int &count_tasks){
    cout << endl;
    cout << "How many tests would you like me to generate? ";
    cin >> count_tests;
    cout << "How many tasks would you like each test to have? ";
    cin >> count_tasks;
    cout << endl;
}
//==============================================================================
void test_generator(int count_tests, int count_tasks){
    ostringstream filename;
    int i_tests, i_tasks;
    for(i_tests=1;i_tests<=count_tests;i_tests++){
        filename << "test_" << i_tests << ".html";
        ofstream test(filename.str().c_str());
        if(test.is_open()){
            test << "<!DOCTYPE html>" << endl;
            test << "<html>" << endl;
            test << "<head>" << endl;
            test << "<title>" << "Quadratic equations. Test (Group " << i_tests << ")" << "</title>" << endl;
            test << "</head>" << endl;
            test << "<body>" << endl << endl;
            test << "<h1>Quadratic equations. Test (Group " << i_tests << ")</h1>" << endl;
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
        cout << filename.str() << " successfully generated.." << endl;
        filename.str("");
    }
}
//==============================================================================
int main(){
    
    int count_tests,count_tasks;

    input(count_tests,count_tasks);
    test_generator(count_tests,count_tasks);
//==============================================================================
    return 0;
}
