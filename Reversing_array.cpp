/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

int main(){
    int marks[5]={20,30,40,50,60};
    cout<<"Reversed array: "<<endl;
    for (int i=4; i>=0; i--){
        cout<<marks[i]<<"\t";
    }
    return 0;
}

/*Output 
Reversed array: 
60	50	40	30	20
*/
