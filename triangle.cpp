/******************************************************************************



                              Online C++ Compiler.

               Code, Compile, Run and Debug C++ program online.

Write your code in this editor and press "Run" button to compile and execute it.



*******************************************************************************/



// 2207411002 AKHTAR FAIZI PUTRA



#include <iostream>



using namespace std;



int main() {



    int height;

    

    char chr;

    

    cout<<"=============================\n";



    cout<<"==    TRIANGLE CHARS       ==\n";



    cout<<"=============================\n";



    cout<<"Input Height : "; cin>>height;



    cout<<"Input Char   : "; cin>>chr;



    cout<<"=============================\n";

    

    for(int i = 1; i <= height; i++) {

        for(int j = height; j > i; j--) {

            cout << " ";

        }

        for(int k = 1; k <= (2*i - 1); k++) {

            cout << chr;

        } 

        cout << endl;

    }

    cin.get();



return 0;



}
