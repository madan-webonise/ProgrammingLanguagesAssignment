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
              cout<<"\n"<<iQuantity<<"  \t\t"<<iPrice<<"  \t"<<iTotal<<"\n";
              return iTotal;
        }
        void Usecase1()
        {     
                iColgateQuantity = 1;
                cout<<"\nQuantity         Price   Total";
                PrintBill(iColgateQuantity, iColgatePrice); 
        }
        
};
int main()
{
        UsecaseForShopping usecaseobject;
	cout<<"\nPrice of Colgate : 10 Rs";
	cout<<"\nPrice of Closeup : 15 Rs";
	usecaseobject.Usecase1();
	return 0;
}
