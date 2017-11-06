#include<iostream>
using namespace std;
#define iColgatePrice 10
#define iCloseupPrice 15
class UsecaseForShopping
{
        public :
        int iColgateQuantity;
        int iCloseupQuantity;
        int iColgateAmount;
        int iCloseupAmount;
        int iDiscountAmount;
        int iTotal;
        
        int CalculateDiscount(int iQuantity)
        {
                int iQuotient;
                int iRemiander;

                iQuotient = iColgateQuantity / 3;
                iRemiander = iColgateQuantity % 3;
                
                iDiscountAmount = (iQuotient * 20) + (iRemiander *10);
                return iDiscountAmount;
        }
        void PrintBill(int iQuantity, int iPrice, int iTotal)
        {
                cout<<"\n"<<iQuantity<<"  \t\t"<<iPrice<<"  \t"<<iTotal; 
        }
       
        void Usecase5()
        {
                iCloseupQuantity = 2;              
                cout<<"\nEnter number of colgate quantity\n";
                cin>>iColgateQuantity;
                
                iDiscountAmount = CalculateDiscount(iColgateQuantity);
                iTotal = iDiscountAmount;
                cout<<"Quantity         Price   Total";
                
                PrintBill(iColgateQuantity,iColgatePrice,iTotal);
                iTotal = iCloseupQuantity * iCloseupPrice;
                PrintBill(iCloseupQuantity,iCloseupPrice,iTotal);     
                          
                iTotal = (iCloseupQuantity * iCloseupPrice) + iDiscountAmount;
                cout<<"\n\t\t\t"<<iTotal<<"\n";                                          
        }
        
};

int main()
{
     
        UsecaseForShopping usecaseobject;
	cout<<"\nPrice of Colgate : 10 Rs";
	cout<<"\nPrice of Closeup : 15 Rs";
	usecaseobject.Usecase5();
	return 0;
}
