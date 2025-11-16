#include <iostream>
using namespace std;

int main () {
    int n= -5;

    if(n >=0) {
        cout << "n is positive\n";
    } else {
        cout << "n is negative\n";
        }
        return 0;
     }

#include <iostream>
using namespace std;

int main () {
    int age;
    cout << "enter age :";
    cin >> age;
    if (age>= 18) {
        cout << "you can vote\n";
    } else{
        cout << "you can't vote\n";
    }

        return 0;
    }


#include <iostream>
using namespace std;

int main () {                           //condition for if)
    int n;
    cout << "enter number :";
    cin >> n;

    if (n%2 ==0) {
        cout << "even\n";
    } else{
        cout << "odd\n";
    }


        return 0;
    }


#include <iostream>                             // if -else if condit ion
using namespace std;

int main () {
    int marks;
    cout << "enter marks : ";
    cin >> marks;

    if(marks >=90){
        cout << "A\n";
    } else if (marks >= 80 && marks < 90){
        cout << "B\n";
    } else {
        cout << "c\n";
        }
    
        return 0;
    }


//##########


   #include <iostream>
   using namespace std;

   int main() {
    char ch;
    cout << "enter char : ";
    cin >>ch;

    if(ch>='a'&& ch <='z') {
        cout << "lowercase\n";
    } else {
        cout << "upercase\n";
    }
    return 0;

    }


#include <iostream>
   using namespace std;

   int main() {
    char ch;
    cout << "enter char : ";
    cin >>ch;

    if(ch>=65&& ch <=90) {
        cout << "uppercase\n";
    } else {
        cout << "lowercase\n";
    }
    return 0;

    }
 

//    #Ternary Statement


#include <iostream>
   using namespace std;

   int main() {
    int n =-45;

   cout << (n >= 0? "positive" : "nagative") << endl;
     return 0;
   }



    // #loop


    #include <iostream>
    using namespace std;

    int main(){
        int count =1;

        while (count <=10) {
            cout << count << " ";
            count++;

        }

        cout<< endl;
        return 0;

    }




    #include <iostream>
    using namespace std;

    int main()  {
        int n=77;
        int count =1;

        while (count <= n) {
            cout << count << " ";
            count++;

        }

        cout<< endl;   
        return 0;

    }




      #include <iostream>
    using namespace std;

    int main()  {
        int n=10;
        int i=1;                        //while loop

        while (i<= n) {
            cout << i<< " ";
            i++;

        }

        cout<< endl;   
        return 0;

    }





      #include <iostream>
    using namespace std;

    int main()  {
        int n=99;
        
        for (int i=1; i<=n;i=i+2){
            cout << i << " ";
        }

        cout<< endl; 

        return 0;

    }






    #include <iostream>
    using namespace std;

    int main()  {
        int n=3;
        int sum=0;
        
        for (int i=1; i<=n;i++){
            sum+= i; 
        }

        cout<< "sum =" << sum << endl;

        return 0;

    }


                                                      
                                                      

