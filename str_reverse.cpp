/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string str1;
    cout<<"Enter string: "<<endl;
    cin>>str1;
    int a=str1.length();
    for (int i=a;i>=0;i--){
        cout<<str1[i];
    }
    return 0;
}

/*Output
Enter string: 
hello
olleh
*/
