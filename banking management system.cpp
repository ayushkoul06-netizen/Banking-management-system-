#include <iostream>
#include <string>

using namespace std;

class account {
    private :
        string name;
        float account_balance;
        int acc_id;
        int pass ;
    public:
        int entered_pass;

        account() {
            name = "";
            account_balance = 0;
            acc_id = 0;
            pass = 0;
        }

        account(string n, float balance, int id, int pw) {
            name = n;
            account_balance = balance;
            acc_id = id;
            pass = pw;
        }

        void withdraw(){
            char a;
            int money;
            cout<<"If you want to withdraw money enter w"<<endl;
            cin>>a;
            if (a=='w'){
                cout<<"Enter the amount of money u want to withdraw"<<endl;
                cin>>money;
                if (money <= account_balance){
                    account_balance = account_balance - money;
                    cout<<"the remaining balance is :"<<account_balance<<endl;

                    
                }
                else{
                    cout<<"your account does not have this amount of balance  "<<"the remaining balance is "<<account_balance<<endl;

                }
            }
        }
        void Deposit(){
            
            char a;
            float money;
            cout<<"If you want to deposit money enter d  "<<endl;
            cin>>a;
            if (a=='d'){
                cout<<"enter the amount of money u want to deposit :"<<endl;
                cin>>money;
                account_balance = account_balance + money;
                cout<<"current balance is "<<account_balance<<endl;
                withdraw();

                

            }
            else {
                withdraw(); 


            }

        }
        void assign(string n, int account_number, int acc_id, int pass){
            name = n;
            account_balance = account_number;
            this->acc_id = acc_id;
            this->pass = pass;
        }

        void Display(){
            cout<<name<<endl;
            cout<<account_balance<<endl;
            cout<<acc_id<<endl;
            cout<<pass<<endl;
            Deposit();
        }
        void check_pass(){
            
            cout<<"Enter password to access your account :"<<endl;
            cin>>entered_pass;
            if (entered_pass == pass){
                cout<<"Your password is correct , here is your account detail "<<endl;
                Display();
            }       
            else{
                cout<<"your entered password is incorrect "<<endl;
                // can use while loop or for loop to give only 3 attempts will learn later 
               
            }
        }

            

        };


int main(){
    account one("ayush",378,3278,334);
    account two("heeman",378,3278,1234);
    account three("rahul",38,32,2244);
    
    one.check_pass();
    two.check_pass();
    three.check_pass();


    return 0;
}