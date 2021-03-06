#include<iostream>
using namespace std;
#define iColgatePrice 10
#define iCloseupPrice 15
class ShoppingCart
{
        public :
        int iTotal;
        int iColgateAmount;
        int iCloseupAmount;
        int iDiscountAmount;
        int iColgateQuantity;
        int iCloseupQuantity;
          
        ShoppingCart() {
                iColgateQuantity = 0;
                iCloseupQuantity = 0;
        }
        //ShoppingCart() Constructor initializes the product quantities
        void ListItem() {
                int iChoice;
                cout<<"\n//////////////////////////////////ITEM LIST////////////////////////////////////////";
                cout<<"\nColgate"<<"\t"<<iColgateQuantity;
                cout<<"\nCloseup"<<"\t"<<iCloseupQuantity;
        }
        //ListItem() Lists the product and their quantity
        void AddItem() {
                int iItemChoice;
                int iInputQuantity;
                cout<<"\nEnter 1 for colgate";
                cout<<"\nEnter 2 for closeup";
                cin>>iItemChoice; 
                
                if( iItemChoice == 1 ) {
                        cout<<"\nEnter the total quantity for colgate";
                        cin>>iInputQuantity;
                        iColgateQuantity = iColgateQuantity + iInputQuantity;                       
                }
                if( iItemChoice == 2 ) {
                        cout<<"\nEnter the total quantity for closeup";
                        cin>>iInputQuantity;
                        iCloseupQuantity = iCloseupQuantity + iInputQuantity;                       
                }
                              
        }
        //AddItem() adds items to the cart, here it increases the quantity of the product
        void RemoveItem() {
                int iItemChoice;
                int iInputQuantity;
                cout<<"\nEnter 1 for colgate";
                cout<<"\nEnter 2 for closeup";
                cin>>iItemChoice; 
                
                if( iItemChoice == 1 ) {
                        cout<<"\nEnter the total quantity to be removed from colgate";
                        cin>>iInputQuantity;
                        iColgateQuantity = iColgateQuantity - iInputQuantity;                       
                }
                if( iItemChoice == 2 ) {
                        cout<<"\nEnter the total quantity to be removed from closeup";
                        cin>>iInputQuantity;
                        iCloseupQuantity = iCloseupQuantity - iInputQuantity;                       
                } 
                      
        }
        //RemoveItem() removes items from the cart, here it decreases the quantity of the product
        int CheckDiscount() {
                int iQuotient;
                int iRemiander;
                int iApplyDiscountChoice;
                
                cout<<"\nColgate Buy 2 get 1 free";
                cout<<"\nCloseup No discount";
                
                cout<<"\nApplyDiscount";
                cout<<"\n1 :Yes";
                cout<<"\n2 :No";
                cin>>iApplyDiscountChoice;
                if ( iApplyDiscountChoice == 1 ) {
                        iQuotient = iColgateQuantity / 3;
                        iRemiander = iColgateQuantity % 3;
                        
                        iColgateAmount = (iQuotient * 20) + (iRemiander *10);
                        cout<<"\niColgateAmount "<<iColgateAmount;
                        return iColgateAmount;   
                } else {
                        iColgateAmount = iColgateQuantity * iColgatePrice;
                        cout<<"\niColgateAmount "<<iColgateAmount;
                        return iColgateAmount;
                }
                
        }
        //CheckDiscount() checks if there is discount available and applies the discount if user agrees
        void CalculateTotalBill() {
                iCloseupAmount = iCloseupQuantity * iCloseupPrice;
                iTotal = iCloseupAmount + iColgateAmount;
                cout<<"\nItem"<<" \t"<<"\tQuantity"<<"\t\t"<<"Price"<<"\t\t"<<"Total";
                cout<<"\nColgate\t\t"<<iColgateQuantity<<"\t\t\t"<<iColgatePrice<<"\t\t"<<iColgateAmount;
                cout<<"\nCloseUp\t\t"<<iCloseupQuantity<<"\t\t\t"<<iCloseupPrice<<"\t\t"<<iCloseupAmount;
                cout<<"\n\t\t\t\t\t\t\t"<<iTotal<<"\n";
        }
        //CalculateTotalBill() calculates the total bill
        void Checkout() {
              CalculateTotalBill();         
        }
        //Checkout() invokes CalculateTotalBill and this the last function to be executed
};
int main() {
        int iChoice;
        ShoppingCart cartobject;
	do
	{
	       	cout<<"\n1 : List Item";
	        cout<<"\n2 : Add Item";
	        cout<<"\n3 : Remove Item";
	        cout<<"\n4 : Check Discount";
	        cout<<"\n5 : Checkout";
	        cout<<"\n6 : Exit";
	        cout<<"\nEnter your choice";
	        cin>>iChoice;
	        switch(iChoice) {
	                case 1:
	                 cartobject.ListItem();
	                break;
	                case 2:
	                 cartobject.AddItem();
	                break;
	                case 3:
                         cartobject.RemoveItem();
	                break;
	                case 4:
	                 cartobject.CheckDiscount();
	                break;
	                case 5:
	                 cartobject.Checkout();
	                break;
	                case 6:
	                break;
	                default :
	                cout<<"\nEnter a Valid Choice";
	        }

        }while(iChoice != 5);
	return 0;
}
