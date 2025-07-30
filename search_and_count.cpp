/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

int main(){
    int marks[6]={20,30,30,50,30,60};
    int key;
    int s=0;
    cout<<"Enter desired element: ";
    cin>>key;
    for (int i=0; i<5; i++){
        if (key==marks[i]){
            cout<<"Key found at location:"<<i+1<<endl;
            s=s+1;
        }
    }
    if (s>1){
        cout<<"The key was found "<<s<<" times."<<endl;
    }
    else if (s=1){
        cout<<"The key was found once."<<endl;
    }
    else{
        cout<<"The key was not found"<<endl;
    }
    return 0;
}

/*Output
Enter desired element: 30
Key found at location:2
Key found at location:3
Key found at location:5
The key was found 3 times.
*/
