// without using switch case
#include <iostream>
using namespace std;

int main() {
    char button;
    cout<<"input a character:";
    cin>>button;
    if(button=='a')
    {
        cout<<"hello"<<endl;
    }
    else if(button=='b')
    {
    cout<<"Namste"<<endl;
}
    else if(button=='c')
{ 
    cout<<"Assalam o Alaykum"<<endl;
}
        else{
            cout<<"Try again"<<endl;
        }
    
    return 0;
}
//using switch case

#include <iostream>
using namespace std;

int main() 
{
    char button; 
    cout<<"input a character:";
    cin>>button;
    switch (button)
    {
        case 'a':
        cout<<"hello"<<endl;
        break;
        case 'b':
    cout<<"Namste"<<endl;
    break;
    case 'c':
    cout<<"Assalam o Alaykum"<<endl;
    break;
    default:
            cout<<"Try again"<<endl;
            break;
    }   
    
    return 0;
}
