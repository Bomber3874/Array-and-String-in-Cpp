/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

int main(){
    int marks[5]={20,30,40,50,60};
    int s=0;
    //Sum
    cout<<"Sum of marks: "<<endl;
    for(int i=0; i<5; i++){
        s=s+marks[i];
    }
    cout<<s<<endl;
    //Average
    cout<<"Average of marks: "<<endl;
    cout<<s/5<<endl;
    return 0;
}

/*Output
Sum of marks: 
200
Average of marks: 
40
*/
