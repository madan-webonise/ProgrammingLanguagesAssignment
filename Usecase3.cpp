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
        int iTotal;
        
        int PrintBill(int iQuantity, int iPrice)
        {
                iTotal = iQuantity * iPrice;
                cout<<"\n"<<iQuantity<<"  \t\t"<<iPrice<<"  \t"<<iTotal;
                return iTotal;
        }
        void Usecase3()
        {
                iColgateAmount = 0;
                iCloseupAmount = 0;
                iColgateQuantity = 5;
                iCloseupQuantity = 2;
                
                cout<<"\nQuantity         Price   Total";
                iColgateAmount = PrintBill(iColgateQuantity, iColgatePrice);
                
                iCloseupAmount = PrintBill(iCloseupQuantity, iCloseupPrice);
                
                iTotal = iColgateAmount + iCloseupAmount;                      
                cout<<"\n\t\t\t"<<iTotal<<"\n";
        }
       
};
int main()
{
     
        UsecaseForShopping usecaseobject;
	cout<<"\nPrice of Colgate : 10 Rs";
	cout<<"\nPrice of Closeup : 15 Rs";
	usecaseobject.Usecase3();
	return 0;
	return 0;
}
