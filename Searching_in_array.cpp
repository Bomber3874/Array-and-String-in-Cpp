/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

int main(){
    int marks[5]={20,30,40,50,60};
    int key;
    cout<<"Enter desired element: "<<endl;
    cin>>key;
    for (int i=0; i<5; i++){
        if (key==marks[i]){
            cout<<"Key found at location:"<<i+1;
            break;
        }
    }
    return 0;
}

/*Output
Enter desired element: 
40
Key found at location:3
*/
