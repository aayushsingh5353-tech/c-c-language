                                  //funtion Syntax


#include <iostream>
using namespace std;


void printhello() {
    cout << "hello\n";
}

int main() {
    printhello();
    printhello();
    printhello();
    printhello();
    return 0;
}





#include <iostream>
using namespace std;

int printhello() {
    cout << "hello\n" <<endl ;
    return 5;
}

int main() {
    int val = printhello();
    cout << "val =" << val << endl;
    
    return 0;
}




#include <iostream>
using namespace std;

int printhello() {
    cout << "hello\n";
    return 5;
}

#include <iostream>
using namespace std;

int main() {
    cout << printhello () << endl;
    
    return 0;
}

  


                                   //    parameters



#include <iostream>
using namespace std;

int sum (int a , int b) {
    int s=a+b;
    return s;
}

int main () {
    cout << sum (10,19) << endl;

    return 0;
}



#include <iostream>
using namespace std;

double sum (double a , double b) {
    double s=a+b;
    return s;
}

int main () {
    cout << sum (10.67,19.77) << endl;

    return 0;
}



#include <iostream>
using namespace std;

int minOfTwo (int a, int b){
    if (a<b) {
        return a;
    } else{
        return b;
    }
}
int main () {
    cout << "min =" <<minOfTwo (10,19) << endl;

    return 0;
}


//calculate the sum od num from 1 to N(parameter)



#include <iostream>
using namespace std;



int factorialN (int n){
    int fact =1;
    for (int i=1; i<=n; i++) {
        fact *=i;
    }
    return fact ;
}
int main () {
    cout << factorialN(4) << endl;
   
    return 0;
}




#include <iostream>
using namespace std;

void changeX (int X) {
    X = 2*X;
    cout << "X =" << X << endl;
}

int main () {
    int X =5;
    changeX (X);

    cout << "X =" << X << endl;
    return 0;
}






