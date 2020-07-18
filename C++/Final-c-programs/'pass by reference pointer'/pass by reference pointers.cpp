#include <iostream>
using namespace std;
void passbyvalue(int x);
void passbyreference(int *x);
int main()
{
						/* ek funcktion mei do trha se value dal sakte hei firstpass by value jo ham abhi tak karte 
							* aii hei koi function lia eg sqrt(81)
							* usme value 81 dal boom!!{ham us function se actual value ki copy pass karte hei taki
							* actual value mei koi change na aai  }program chal pda
							* par ab ham karage dusra method ie pass by reference isme ham basically value ka memory 
							* address pass karte hei matlab ham us variable ka direct access function ko de deta hei
							* vsa ham kyu karage seems kinda dangerous !! 
							* to jse sabko yad hoga c kafi purani lang hei or us time utni zada memory ni hoti thi
							* normal comp me to us beichare 1MB system ;p pe kam zor dena ke liye isko use kia jata tha
							* kyuki pass by value mei extra copy bnati hei or hamare pass to esa hi bahot sara data hei na XD  */

		int betty = 13;
		int sandy = 13;
		passbyvalue(betty);
		passbyreference(&sandy);
		
		cout<<"betty is now  "<<betty<<endl;
		cout<<"sandy is now  "<<sandy<<endl;// jse ki dek sakte hei comiler mei sandy change ho gaya
			return 0;
}

void passbyvalue(int x)//ye bettty ki copy hei to isme change aaya to frk bhi ni pdta
{
	x=99;
	}
	
void passbyreference(int *x)//par isme *x sandy ka memory address hei or isme change aaya to sandy mei bhi change aai ga
{
	*x = 66;
	
}
