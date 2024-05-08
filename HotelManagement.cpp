#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;
    //quantity
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qchickenrolls=0;
    //sold foods item
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Schickenrolls=0;
    //total quantity
    int total_rooms=0, total_burger=0,total_pasta=0,total_noodles=0,total_chickenrolls=0;
    cout<<"\n\t Quantity of items we have";
    cout<<"\n\t Rooms available"<<endl;
    cin>>Qrooms;
    cout<<"\n Quantity of pasta"<<endl;
    cin>>Spasta;
    cout<<"\n Quantity of burger"<<endl;
     cin>>Qburger;
    cout<<"\n Quantity of noodles"<<endl;
     cin>>Qnoodles;
    cout<<"\n Quantity of chickenrolls"<<endl;
    cin>>Qchickenrolls;
    m:
    cout<<"\n\t\t\t please choose from the menu"<<endl;
    cout<<"\n\n1)Rooms";
    cout<<"\n\n2)pasta";
    cout<<"\n\n3)burger";
    cout<<"\n\n4)noodles";
    cout<<"\n\n5)chickenrolls";
    cout<<"\n\n6) Information regarding sales and collection"<<endl;
    cout<<"\n12\n7) Exit";
    cout<<"\n\t\t please enter your choice"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Enter the number of rooms"<<endl;
        cin>>quant;
        if(Qrooms-Srooms>=quant){
            Srooms=Srooms+quant;
            total_rooms=total_rooms+quant*1200;
            cout<<"\n\t\t\t "<< quant <<"rooms are alloted to you";

        }
        else{
            cout<<"\n\t Only"<<Qrooms-Srooms<<"Rooms reamaining in hotel"<<endl;
            break;
        }
    
        case 2:
        cout<<"Enter the Pasta Quantity"<<endl;
        cin>>quant;
        if(Qpasta-Spasta>=quant){
            Spasta=Spasta+quant;
            total_pasta=total_pasta+quant*250;
            cout<<"\n\t\t\t ";
            cout<<Qpasta;

        }
        else{
            cout<<"\n\t Only"<<Qpasta-Spasta<<"Pasta reamaining in hotel"<<endl;
            break;
        }
        case 3:
        cout<<"Enter the Burger Quantity"<<endl;
        cin>>quant;
        if(Qburger-Sburger>=quant){
            Sburger=Sburger+quant;
            total_burger=total_burger+quant*250;
            cout<<"\n\t\t\t ";

        }
        else{
            cout<<"\n\t Only"<<Qburger-Sburger<<"Burger reamaining in hotel"<<endl;
            break;
        }
        case 4:
        cout<<"Enter the Noodles Quantity"<<endl;
        cin>>quant;
        if(Qnoodles-Snoodles>=quant){
            Snoodles=Snoodles+quant;
            total_noodles=total_noodles+quant*250;
            cout<<"\n\t\t\t ";

        }
        else{
            cout<<"\n\t Only"<<Qburger-Sburger<<"Noodles reamaining in hotel"<<endl;
            break;
        }
        case 5:
        cout<<"Enter the ChickenRolls Quantity"<<endl;
        cin>>quant;
        if(Qchickenrolls-Schickenrolls>=quant){
            Schickenrolls=Schickenrolls+quant;
            total_chickenrolls=total_chickenrolls+quant*250;
            cout<<"\n\t\t\t ";

        }
        else{
            cout<<"\n\t Only"<<Qburger-Sburger<<"Noodles reamaining in hotel"<<endl;
            break;
        }
        case 6:
        cout<<"\n\t\t\t Total Sale and collection:"<<endl;
        cout<<Srooms<<" ";
        cout<<Spasta<<" ";
        cout<<Sburger<<" ";
        cout<<Snoodles<<" ";
        cout<<Schickenrolls<<" ";
        cout<<" \t";
        cout<<"Rooms Remaining:\n" ;
        cout<<Qrooms<<" "<<endl;
        cout<<"Beverages Remaining:\n" ;

        cout<<Qpasta<<" Pasta\n ";
        cout<<Qburger<<" Burger\n";
        cout<<Qnoodles<<" Noodles\n";
        cout<<Qchickenrolls<<" ChickenRolls\n";

        cout<<"Total Collection Item wise:"<<endl;
        cout<<total_rooms<<" "; 
        cout<<total_burger<<" ";
        cout<<total_noodles<<" ";
        cout<<total_pasta<<" ";
        cout<<total_chickenrolls<<" ";

        cout<<"\n\t\t\t\t\t";
        cout<<"Total Hotel Collection: ";
        cout<<total_rooms+total_pasta+total_burger+total_noodles+total_chickenrolls<<endl;
        cout<<"\n\t\t\t\t\t";
        cout<<"Thanks for Visiting";
        break;  

         case 7:
        exit(0);
            default:
            cout<<"Please Enter the number from given list"<<endl;
    }
   
    goto m;
    


}