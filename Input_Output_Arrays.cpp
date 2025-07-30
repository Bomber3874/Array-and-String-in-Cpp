/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

int main(){
    int marks[5];
    for(int i=0; i<5; i++){
        cout<<"Enter marks of subject"<<i+1<<": ";
        cin>>marks[i];
    }
    cout<<"Marks: "<<endl;
    for (int i=0; i<5; i++){
        cout<<marks[i]<<"\t";
    }
    return 0;
}

/* Output
Enter marks of subject1: 20
Enter marks of subject2: 30
Enter marks of subject3: 40
Enter marks of subject4: 50
Enter marks of subject5: 60
Marks: 
20	30	40	50	60	
*/
