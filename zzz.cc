#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

#define COEFF_DIAPASON 3

//==============================================================================
void input(int &a, int &b, int &c){
    cout << endl << "===================" << endl;
    cout << "input()" << endl;
    cout << "-------------------" << endl;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    cout << "===================" << endl;
}
//==============================================================================
void problem_solver(int a, int b, int c){
    double x,x2;
    int D;
    D = b*b - 4*a*c;
    cout << endl << "==================================================" << endl;
    cout << "problem_solver()" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "D = b^2 - 4*a*c; D = " << D << endl << endl;
    if(D>0){
        x = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);
        cout << "There are two real solutions since D is possitive:" << endl;
        cout << "x1 = (-b + sqrt(D)) / (2*a); x1 = " << x << endl;
        cout << "x2 = (-b - sqrt(D)) / (2*a); x2 = " << x2 << endl;
    }
    else if(D==0){
        x = -b/(2*a);
        cout << "There is only one solution since D is zero:" << endl;
        cout << "x = -b / (2*a); x = " << x << endl;
    }
    else if(D<0){
        cout << "There is no solution since D is negative.." << endl;
    }
    cout << "==================================================" << endl;
}
//==============================================================================
int num_generator(int min, int max){
    int num = rand()%(max-min+1)+min;
    return num;
}
//==============================================================================
void something_int(int &a, int &b, int &c){ //generating int x1 and x2;
     int x,x2;
     do{
         a=num_generator(-COEFF_DIAPASON,COEFF_DIAPASON);
     }while(a==0); //prevent division by 0;
     x=num_generator(-COEFF_DIAPASON,COEFF_DIAPASON);
     x2=num_generator(-COEFF_DIAPASON,COEFF_DIAPASON);
     b=((x+x2)*-1)*a;
     c=x*x2*a;
     cout << endl << "==========================================================" << endl;
     cout << "Generating quadratic equation: (" << a << ")x^2 + (" << b << ")x + (" << c << ") = 0;" << endl;
     //cout << "x1: " << x << "; x2: " << x2 << endl;
     cout << "==========================================================" << endl;
     problem_solver(a,b,c);
}
//==============================================================================
int main(int argc, char *argv[]){
    
    int a,b,c, i;
    srand(static_cast <unsigned int> (time(0)));
    
    //input(a,b,c);
    //problem_solver(a,b,c);
    //cout << num_generator(-9,9) << endl;
    
    //something(a,b,c);
    for(i=0;i<atoi(argv[1]);i++){
        cout << endl << "-> Task #" << i+1 << " <-" << endl;
        something_int(a,b,c);
    }

    return 0;
}

    /*
    int i,max=5,min=-5;
    for(i=0;i<100;i++){
        cout << "i: " << i << "; num: " << i%(max-min+1)+min << endl;
    }
    */

/*
//==============================================================================
void something(int &a, int &b, int &c){ //generating random x1 and x2;
     a=num_generator(-COEFF_DIAPASON,COEFF_DIAPASON);
     b=num_generator(-COEFF_DIAPASON,COEFF_DIAPASON);
     c=num_generator(-COEFF_DIAPASON,COEFF_DIAPASON);
     cout << endl << "==========================================================" << endl;
     cout << "Generating quadratic equation: (" << a << ")x^2 + (" << b << ")x + (" << c << ") = 0;" << endl;
     cout << "==========================================================" << endl;
     problem_solver(a,b,c);
}
*/
