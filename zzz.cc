#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//==============================================================================
void input(int &a, int &b, int &c){
    cout << endl << "===================" << endl;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    cout << "===================" << endl << endl;
}
//==============================================================================
void problem_solver(int a, int b, int c){
    double x,x2;
    int D;
    D = b*b - 4*a*c;
    cout << "D = b^2 - 4*a*c; D = " << D << endl << endl;
    if(D>0){
        x = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);
        cout << "There are two real solutions since D is possitive:" << endl;
        cout << "x1 = (-b + sqrt(D)) / (2*a); x1 = " << x << endl;
        cout << "x2 = (-b + sqrt(D)) / (2*a); x2 = " << x2 << endl;
    }
    else if(D==0){
        x = -b/(2*a);
        cout << "There is only one solution since D is zero:" << endl;
        cout << "x = -b / (2*a); x = " << x << endl;
    }
    else if(D<0){
        cout << "There is no solution since D is negative.." << endl;
    }
}
//==============================================================================
int num_generator(){
    
    int num = rand()%10;
    return num;
}
//==============================================================================
int main(){
    
    int a,b,c;
    srand(static_cast <unsigned int> (time(0)));
    
    //input(a,b,c);
    //problem_solver(a,b,c);
    
    cout << num_generator() << endl;
    
    
    return 0;
}
