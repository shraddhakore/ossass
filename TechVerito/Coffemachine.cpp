#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
class Coffemachine{
    private:
    int Coffe_beans=10;
    int Milk=10;
    int Water=10;
    public:
 int Cappuccino(){
    if(Coffe_beans>=2 && Milk>=2 && Water>=1){
        cout<<"Cappuccino has been served successfully."<<endl;
        Coffe_beans-=2;
        Milk-=2;
        Water-=1;
        
    }
    else{
        cout<<"Ingredients are not available"<<endl;
    }   
    
}
void Latte(){
    if(Coffe_beans>=2 && Milk>=3 && Water>=1){
        cout<<"Latte has been served successfully."<<endl;
        Coffe_beans-=2;
        Milk-=3;
        Water-=1;
    }
    else{
        cout<<"Ingredients are not available"<<endl;
    }
    
}

void Espresso(){
     if(Coffe_beans>=3 && Water>=1){
        cout<<"Latte has been served successfully."<<endl;
        Coffe_beans-=3;
        Water-=1;
    }
    else{
        cout<<"Ingredients are not available"<<endl;
    }
}

void Serve_milk(){
    if(Milk>=3){
        cout<<"3 Units of milk served successfully."<<endl;
        Milk-=3;
    }
    else{
        cout<<"Milk is not available."<<endl;
    }
}

void Serve_water(){
    if(Water>=3){
        cout<<"3 Units of water served successfully."<<endl;
        Water-=3;
    }
     else{
        cout<<"Water is not available."<<endl;
    }
}

void Display(){
    cout<<"Available Coffe Beans:"<<Coffe_beans<<endl;
    cout<<"Available Milk:"<<Milk<<endl;
    cout<<"Availble Water:"<<Water<<endl;
}
void Fill_milk(){
    int quantity;
    cout<<"Enter the quantity:"<<endl;
    cin>>quantity;

    if(Milk>=quantity){
        cout<<quantity<<"Units of milk filled successfully"<<endl;
        Milk-=quantity;
    }
    else{
        cout<<"Milk is not available "<<endl;
    }
}


void Fill_water(){
    int quantity;
    cout<<"Enter quantity of water:"<<endl;
    cin>>quantity;

    if(Water>=quantity){
         cout<<quantity<<"Units of water filled successfully"<<endl;
         Water-=quantity;
         
    }
    else{
         cout<<"Water is not available "<<endl;
    }
}


void RefillCoffeBeans(int &qauntity){
   

    if(Coffe_beans>=qauntity){
        cout<<qauntity<<"Units of coffe beans filled successfully."<<endl;
        Coffe_beans-=qauntity;
    }
    else{
        cout<<"Coffe Beans are not availble"<<endl;
    }
}

};

    
    int main(){

   
    int choice;
    while(true){
    cout<<"1. Serve Cappuccino."<<endl;
    cout<<"2. Serve Latte"<<endl;
    cout<<"3. Serve Espresso."<<endl;
    cout<<"4. Serve Milk."<<endl;
    cout<<"5. Serve Water."<<endl;
    cout<<"6. Fill coffee beans."<<endl;
    cout<<"7. Fill Milk."<<endl;
    cout<<"8. Fill Water."<<endl;
    cout<<"9. Display current ingredient quantity."<<endl;
    cout<<"10. Turn off."<<endl;
  
    cout << "Please enter your choice: ";
    cin >> choice;

    
    Coffemachine cm;
    

    
    switch(choice){

        case 1: 
                cm.Cappuccino();
                break;

        case 2: cm.Latte();
                break;

        case 3: cm.Espresso();
                break;

        case 4: cm.Serve_milk();
                break;

        case 5: cm.Serve_water();
                break;

        case 6: {
                int quantity;
                cout << "Enter the quantity of coffee beans: ";
                cin >> quantity;
                cm.RefillCoffeBeans(quantity);
                break;
            }
        
        case 7: cm.Fill_milk();
                break;
        
        case 8: cm.Fill_water();
                break;

        case 9: cm.Display();
                break;

        case 10: exit(0);
                    break;

        default: cout<<"Please enter valid choice."<<endl;
                 break;

    }
    cout<<"You want contine or not Y/N"<<endl;
    string s;
    cin>>s;
    if(s=="No"){
        break;
    }
    }
 return 0;   
}


