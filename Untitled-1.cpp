 #include <iostream>
    using namespace std;

    int main()  {
        int n=6;
        int sum=0;
        
        for (int i=1; i<=n;i++){
            sum+= i; 
            if(i== 5){
                break;
            }
        }

        cout<< "sum =" << sum << endl;

        return 0;

    }
    







    #include <iostream>
    using namespace std;

    int main()  {
        int n=10;
        int evensum =0;
        
        for (int i=1; i<=n; i++) {
            if(i%2 ==0) {
                evensum += i;

            }

        }
        cout << "even sum = " << evensum << endl;

        return 0;
    }

    #include <iostream>
    using namespace std;

    int main()  {
        int n=10;
        int evensum =0;
        
        for (int i=1; i<=n; i++) {
            if(i%2 !=0) {
                evensum += i;

            }

        }
        cout << "even sum = " << evensum << endl;

        return 0;
    }



    #include <iostream>
    using namespace std;
    int main() {
        while(2>5) {
            cout << "hello world!\n";
        }
        do {
            cout << "hello world!\n";
        } while (3>5);
    } 



    #include <iostream>
    using namespace std;
    int main() {
        int n = 10;
        int i = 1;

       
        do {
            cout << i << " " ;
            i++;
        } while (i<=n);

        cout << endl;
        return 0;
    } 




        //   QS START




#include <iostream>
using namespace std;

int main() {
    int n =10;
    bool isprime = true;

    for(int i=2; i<=n-1; i++) {
        if(n % i ==0) {
            isprime = false;
            break;
        }
    }

    if(isprime == true) {
        cout << "prime no\n";
    } else{
        cout << "non prime no\n";
    }
    return 0;
}




#include <iostream>
using namespace std;

int main()
{
    int n =11;
    bool isprime = true;

    for(int i=2; i*i<=n; i++) {
        if(n % i ==0) {
            isprime = false;
            break;
        }
    }

    if(isprime == true) {
        cout << "prime no\n";
    } else{
        cout << "non prime no\n";
    }
    return 0;
}



// NESTED LOOPS


#include <iostream>
using namespace std;
int main() 
{
      for(int i=1; i<5; i++) {
       cout <<"@@@@@" << endl;
    }

   int x = 10;
   for(int i=1; i<=x; i++) {
    cout << "@";
   }
   cout << endl;

    return 0;
}




#include <iostream>
using namespace std;

int main() 
{
    
    for (int i=1; i<=5; i++){
        int m =30;
        for (int i=1; i<=m; i++){
            cout << "@";
        }
        cout << endl;
        

    }
    cout << endl;
   
   
}



#include <iostream>
using namespace std;

int main() 
{
    int n=2;
    
    for (int i=1; i<=n; i++){
        int m =9;
        for (int i=1; i<=m; i++){
            cout << "@";
        }
        cout << endl;
        

    }
    cout << endl;
    return 0;
}












