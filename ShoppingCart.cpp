#include<iostream>
using namespace std;
#define iColgatePrice 10
#define iCloseupPrice 15
class ShoppingCart
{
        public :
        int iColgateQuantity;
        int iCloseupQuantity;
        int iColgateAmount;
        int iCloseupAmount;
        int iDiscountAmount;
        int iTotal;
        
        ShoppingCart()
        {
                iColgateQuantity = 0;
                iCloseupQuantity = 0;
        }
        void ListItem()
        {
                int iChoice;
                cout<<"\n//////////////////////////////////ITEM LIST////////////////////////////////////////";
                cout<<"\nColgate"<<"\t"<<iColgateQuantity;
                cout<<"\nCloseup"<<"\t"<<iCloseupQuantity;
        }
        void AddItem()
        {
                int iItemChoice;
                int iInputQuantity;
                cout<<"\nEnter 1 for colgate";
                cout<<"\nEnter 2 for closeup";
                cin>>iItemChoice; 
                
                if(iItemChoice == 1)
                {
                        cout<<"\nEnter the total quantity for colgate";
                        cin>>iInputQuantity;
                        iColgateQuantity = iColgateQuantity + iInputQuantity;                       
                }
                if(iItemChoice == 2)
                {
                        cout<<"\nEnter the total quantity for closeup";
                        cin>>iInputQuantity;
                        iCloseupQuantity = iCloseupQuantity + iInputQuantity;                       
                }
                              
        }
        
        void RemoveItem()
        {
                int iItemChoice;
                int iInputQuantity;
                cout<<"\nEnter 1 for colgate";
                cout<<"\nEnter 2 for closeup";
                cin>>iItemChoice; 
                
                if(iItemChoice == 1)
                {
                        cout<<"\nEnter the total quantity to be removed from colgate";
                        cin>>iInputQuantity;
                        iColgateQuantity = iColgateQuantity - iInputQuantity;                       
                }
                if(iItemChoice == 2)
                {
                        cout<<"\nEnter the total quantity to be removed from closeup";
                        cin>>iInputQuantity;
                        iCloseupQuantity = iCloseupQuantity - iInputQuantity;                       
                } 
                      
        }
        int CheckDiscount()
        {
                int iQuotient;
                int iRemiander;
                int iApplyDiscountChoice;
                
                cout<<"\nColgate Buy 2 get 1 free";
                cout<<"\nCloseup No discount";
                
                cout<<"\nApplyDiscount";
                cout<<"\n1 :Yes";
                cout<<"\n2 :No";
                cin>>iApplyDiscountChoice;
                if(iApplyDiscountChoice == 1)
                {
                        iQuotient = iColgateQuantity / 3;
                        iRemiander = iColgateQuantity % 3;
                        
                        iColgateAmount = (iQuotient * 20) + (iRemiander *10);
                        cout<<"\niColgateAmount "<<iColgateAmount;
                        return iColgateAmount;   
                }
                else
                {
                        iColgateAmount = iColgateQuantity * iColgatePrice;
                        cout<<"\niColgateAmount "<<iColgateAmount;
                        return iColgateAmount;
                }
                
        }
        
        void CalculateTotalBill()
        {
                iCloseupAmount = iCloseupQuantity * iCloseupPrice;
                iTotal = iCloseupAmount + iColgateAmount;
                cout<<"\nItem"<<" \t"<<"\tQuantity"<<"\t\t"<<"Price"<<"\t\t"<<"Total";
                cout<<"\nColgate\t\t"<<iColgateQuantity<<"\t\t\t"<<iColgatePrice<<"\t\t"<<iColgateAmount;
                cout<<"\nCloseUp\t\t"<<iCloseupQuantity<<"\t\t\t"<<iCloseupPrice<<"\t\t"<<iCloseupAmount;
                cout<<"\n\t\t\t\t\t\t\t"<<iTotal<<"\n";
        }
        void Checkout()
        {
              CalculateTotalBill();         
        }
  
};
int main()
{
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
	        switch(iChoice)
	        {
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
