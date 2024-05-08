#include<iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
void login();
void registration();
void forget();

  
int main(){
    // login();
    // registration();
    // forget();
    int choice;
    cout<<"___________________________________________________________________________________________"<<endl;
    cout<<"\t-------------------Welcome to RSPL---------------\t\n";
    cout<<"\t  -----------------Please Press---------------\t\n";
    cout<<"\t 1. for Login\t\n";
    cout<<"\t 2. for Registration\t\n";
    cout<<"\t 3. For forgetPassword";


    cin>>choice;
    switch (choice)
    {
    case 1:
        login();
        break;
    case 2:
        registration();
        break;
    case 3:
        forget();
    
    default:
    system("cls");
    cout<<"\nPlease select from the menu option given above\t\n";
    main();
    }

}

  void login(){
        int count;
        string userId,password,id,pass;
        system("cls");
        cout<<"\t\t\tPlease enter username and password\n";
        cout<<"\t\t\tUsername ";
        cin>>userId;
        cout<<"\t\t\tPassword ";
        cin>>password;
        ifstream input("records.txt");
        while(input>>id>>pass){
            if(id==userId && pass==password){
                count=1;
                system("cls");
            }else{
                cout<<"\t\t\tLOGIN ERROR\n";
                cout<<"\t\t\tPlease check your username and password\n";
                main();
            }
            input.close();
            if(count==1){
                 cout<<"\t\t\tLOGIN successful!\n";
                main();
            }else{
                cout<<"\\tLOGIN ERROR  \\tuser not register!!";
            }

        }



    };

    void registration(){
        string ruserId,rpassword,rid,rpass;
        cout<<"\t\t\tEnter the user id:";
        cin>>ruserId;
        cout<<"\t\t\tEnter the password:";
        cin>>rpassword;
        ofstream f1("records.txt",ios::app);
        f1<<ruserId<<' '<<rpassword<<endl;
        system("cls");
        cout<<"\t\t\tRegistration is successfull\n";
        main();


    };
    void forget(){
        int option;
        system("cls");
        cout<<"Forgot password!! No worries\n";
        cout<<"press 1 to search your userId\n";
        cout<<"press 2 go to main menu\n";
        cin>>option;
            switch (option){

            case 1:{
            int count=0;
            string userId,sId,Spass;
            cout<<"\n\t\tEnter  the user name which you remebered";
            ifstream f2("records.txt");
            while (f2>>sId>>Spass)
            {
               if(sId==userId){
                count=1;
               }
            }
            f2.close();
            if(count==1)
            {
                cout<<"\n\t\tYour password is found";
                cout<<"\n\t\tYour password is "<<Spass;
                main();
            }else{
                cout<<"\n\t\tSorry,we are unable to find your password";
                main();
            }
            }
            case 2:
            {
                main(); 
            }
            
            
            default:
            cout<<"\t\t\tWrong choice!! please try again\n";
               forget();
            }


    };