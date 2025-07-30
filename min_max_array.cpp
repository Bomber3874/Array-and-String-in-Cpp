/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

int main(){
    int marks[5]={20,30,40,50,60};
    int max=marks[0];
    int min=marks[0];
    //Max
    for(int i=0; i<5; i++){
        if (marks[i]>max){
            max=marks[i];
        }
    }
    cout<<"Maximum marks: "<<max<<endl;
    //Min
    for (int i=0; i<5; i++){
        if (marks[i]<min ){
            min=marks[i];
        }
    }
    cout<<"Minimum marks: "<<min<<endl;
    return 0;
}

/*Output
Maximum marks: 60
Minimum marks: 20
*/
