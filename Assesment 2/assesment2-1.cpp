#include<iostream>
using namespace std;
int choise,q,a = 0,e = 0;
string mp;
char option;    
class Techfood
{
    public :
        void food(int m)
        {
                cout<<"\n Please enter your Quantity = ";
                cin>>q;
                a = q * m;
                cout<<"Total Amount : "<<a<<"/-";
                e = e + a;
        }
};
int main()
{
    string n;
    Techfood t;
    cout<<"                 ------------------ Tops Tech . Fast Food ------------------                   ";
    cout<<"\n\nPlease enter your name = ";
    cin>>n;
    cout<<"Hello "<<n<<endl;
    cout<<"\nWhat whould you like to order?";
    cout<<"\n\n";
    up :
    cout<<"                                  --------- Menu ---------                                   ";

    cout<<"\n\n1) Pizzas";
    cout<<"\n2) Burgers";
    cout<<"\n3) Sandwitch";
    cout<<"\n4) Rolls";
    cout<<"\n5) Biryani";
    cout<<"\n\n Please Enter yout choise : ";
    cin>>choise;
    switch(choise)
    {
        case 1 :
        cout<<"\n 1 Margrita pizza           Rs.100/-";
        cout<<"\n 2 Onion pizza              Rs.130/-";
        cout<<"\n 3 Farm house pizza         Rs.250/-";
        cout<<"\n\nPlease enter which Pizza you would like to have ?: ";
        cin>>choise;
        switch(choise)
        {
            case 1 :
                t.food(100);
            break;
            case 2 :
                t.food(130);
            break;
            case 3 :
                t.food(250);
            break;
        }
        break;
        case 2 :
        cout<<"\n 1 Veg. Burger        Rs.80/-";
        cout<<"\n 2 Chees Burger       Rs.120/-";
        cout<<"\n 3 Chiken Burgr       Rs.150/-";
        cout<<"\n\nPlease enter which Burger you would like to have ?: ";
        cin>>choise;
        switch(choise)
        {
            case 1 :
            t.food(80);
            break;
            case 2 :
            t.food(120);
            break;
            case 3 :
            t.food(150);
            break;
        }
        break;
        case 3 :
        cout<<"\n 1 Club Sandwitch              Rs.240/-";
        cout<<"\n 2 Veg. Crispy Sandwitch       Rs.160/-";
        cout<<"\n 3 Extream Veg Sandwitch       Rs.100/-";
        cout<<"\n\nPlease enter which Sandwitch you would like to have ?: ";
        cin>>choise;
        switch(choise)
        {
            case 1 :
            t.food(240);
            break;
            case 2 :
            t.food(160);
            break;
            case 3 :
            t.food(100);
            break;
        }
        break;
        case 4 :
        cout<<"\n 1 Chiken Rolls        Rs.150/-";
        cout<<"\n 2 Paneer Rolls        Rs.120/-";
        cout<<"\n 3 Veg. Rolls          Rs.80/-";
        cout<<"\n\nPlease enter which Rolls you would like to have ?: ";
        cin>>choise;
        switch(choise)
        {
            case 1 :
            t.food(150);
            break;
            case 2 :
            t.food(120);
            break;
            case 3 :
            t.food(80);
            break;
        }
        break;
        case 5 :
        cout<<"\n 1 Veg. Biryani            Rs.240/-";
        cout<<"\n 2 Chiken Biryani          Rs.350/-";
        cout<<"\n 3 Haidrabadi Biryani      Rs.400/-";
        cout<<"\n\nPlease enter which Biryani you would like to have ?: ";
        cin>>choise;
        switch(choise)
        {
            case 1 :
            t.food(240);
            break;
            case 2 :
            t.food(350);
            break;
            case 3 :
            t.food(400);
            break;
        }
        break;
        default :
        cout<<"Your Choice in not available";
    }
    cout<<"\n Do you want to place more order y or n : ";
    cin>>option;
    switch(option)
    {
        case 'y' :
        case 'Y' :
        goto up;
        break;
        case 'n' :
        case 'N' :
        goto down;
    }
        
    down :
    cout<<"\n                                  --------- Your order ---------                                   \n";
    cout<<"\n Your Total bill : "<<e<<"/-"<<endl;
    cout<<"Your Order will be at your door in 30 min"<<endl;
    cout<<"Thank you for ordering from tops tech fast food";
    return 0;
}