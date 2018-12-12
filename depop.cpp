#include <iostream> 
using namespace std;
int main(){

    double price, depopfee, paypalfee, shipping, paytotal, subtpaypalfee, profit, totaldepopfee; 
    int choice;

    cout << "Price: ";
    cin >> price; 
    
    cout << "Shipping Prices: \n" << "(1) Small- $4.50\n" << "(2) Medium- $8.00\n" << "(3) Large- $10\n" << "(4) Xtra Large- $15.00\n" << "Enter Number: ";
    cin >> choice;

    cout << endl;
    
    if( choice == 1) {
        shipping = 4.50;
        cout << "Price: " << price << endl<< "Shipping : " << shipping <<endl;
	cout << "You Were Paid: " << price + shipping << endl;
    } else if( choice == 2){
        shipping = 8.00;
        cout << "Price: " << price << endl << "Shipping : " << shipping << endl;
	cout << "You Were Paid: " << price + shipping << endl;
    }else if(shipping == 3){
        shipping = 10.00;
        cout << "Price: " << price <<  endl << "Shipping : " << shipping << endl;
	cout << "You Were Paid: " << price + shipping << endl;
    }else if(shipping == 4){
        shipping = 15.00;
        cout << "Price: " << price << endl << "Shipping : " << shipping << endl;
	cout << "You Were Paid: " << price + shipping << endl;

    }
    
    depopfee = (price *.10);
    totaldepopfee = shipping + depopfee;
    paytotal = price + depopfee;
    
    cout << endl<< "Depop Fee on Item: " << depopfee << endl;
    cout << "Total Depop fees: " << totaldepopfee << endl;
    
    subtpaypalfee = price - depopfee;
    paypalfee = ((price+ shipping) * .029)+ .30;
    
    cout << endl << "PayPal Fee: " << paypalfee << endl; 
    
    profit = subtpaypalfee - paypalfee; 
    
    cout << endl <<"You Earned: " << profit << endl << endl; 
    
    return 0;
}
