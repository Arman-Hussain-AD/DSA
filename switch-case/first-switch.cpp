#include<iostream>
using namespace std;
int main()
{
    cout<<"phone rings"<<endl;
    cout<<"press 1 for english"<<endl;
    cout<<"press 2 for hindi"<<endl;
    int n;
    cin>>n;
    switch(n){
        default:
        cout<<"invalid input";
        break;

        case 1:
            {
                cout<<"to check balance press 1"<<endl;
                cout<<"for internet service enquiry press 2"<<endl;
                cout<<"for caller tune press 3"<<endl;
                cout<<"for network related issues press 4"<<endl;
                cout<<"to talk with our coustomer executive press 5"<<endl;
                int x;
                cin>>x;
                switch(x){
                    case 1:
                        cout<<"your balance is Rs - 109.45";
                        break;
                    case 2:
                        cout<<"dial *123*145# for internet service";
                        break;
                    case 3:
                        cout<<"type song name";
                        break;
                    case 4:
                        cout<<"dial *123*145# for network related issue";
                        break;
                    case 5:
                        cout<<"our executive is busy at this moment please try again later";
                        break;
                }
                break;
            }

            case 2:
            {
                cout<<"apni jama rashi janne k liye 1 dabaiye"<<endl;
                cout<<"internet se sambandhit jankari k liye 2 dabaiye"<<endl;
                cout<<"caller tune set karne k liye 3 dabaiye"<<endl;
                cout<<"network se sambandhit jankari k liye 4 dabaiye"<<endl;
                cout<<"hamare grahak seva se batt karne k liye 5 dabaiye"<<endl;
                int y;
                cin>>y;
                switch(y){
                    case 1:
                        cout<<"apka jama rashi hia - 109.45";
                        break;
                    case 2:
                        cout<<"*123*145# dabaiye internet k liye";
                        break;
                    case 3:
                        cout<<"ganne k naam likhe";
                        break;
                    case 4:
                        cout<<"*123*145# dabaiye network k liye";
                        break;
                    case 5:
                        cout<<"hamari sabhi lines abhi busy hai kripiya punaah prayaas kre dhanyawaad";
                        break;
                }
                break;
            }
    }
}