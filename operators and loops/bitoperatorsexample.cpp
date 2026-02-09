#include<iostream>
using namespace std;
int main()
{
    int a,choice,b,result;
    cout<<"enter a number: "<<endl;
    cin>>a;
    for(;;){
        cout<<"1.& 2.| 3.^ 4.~ 5.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch (choice){
            case 1:
                    cout<<"Enter another number to perfrom AND operation"<<endl;
                    cin>>b;
                    result=a&b;
                    cout<<result<<endl;
                    break;

            case 2:
                    cout<<"Enter another number to perfrom OR operation"<<endl;
                    cin>>b;
                    result=a|b;
                    cout<<result<<endl;
                    break;
            
            case 3:
                    cout<<"Enter another number to perfrom XOR operation"<<endl;
                    cin>>b;
                    result=a^b;
                    cout<<result<<endl;
                    break;

            case 4:
                    cout<<"The NOT of "<<a<<" is"<<endl;
                    result= ~a;
                    cout<<result<<endl;
                    break;

            case 5:
                    exit(0);

            default:
                    cout<<"Invalid Choice!!!"<<endl;
        }
    }

}
