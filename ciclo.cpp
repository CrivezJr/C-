//ciclo
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main ()

{ 
	
	while(1)
	{
		
		string Esercizio = "";
		
		cout << "inserisci il numero dell'esercizio (un numero intero tra 1 e 8):" << endl << " Esercizio 1= Pitagora " << endl << " Esercizio 2= Inverto variabili " << endl; 
		cout << " Esercizio 3= Vuoi farla ingelosirla? " << endl << " Esercizio 4= Inverto variabili 2" << endl << " Esercizio 5= Calcolo spazio tempo e velocita(fisica)"<< endl;
		cout << " Esercizio 6= Quanto pesa Crive? " << endl << " Esercizio 7= Utilizzo il while" << endl << " Esercizio 8= Utilizzo il for"<< endl;
		cin >> Esercizio;
		
		if (Esercizio== "1")
		{ 
			system("cls");
			float cateto_a, cateto_b, ipotenusa;
			cout << "inserisci il primo cateto : ";
			cin >> cateto_a;
			cout << "inserisci il secondo cateto : ";
			cin >> cateto_b;
			ipotenusa = sqrt(pow(cateto_a, 2.0) + pow(cateto_b, 2.0));
			cout << "L'ipotenusa e' uguale a: " << ipotenusa << endl;		
		}
		
		if (Esercizio== "2")
		{
			system("cls");
			float a, b, c, temp;
			cout << "inserisci il primo numero : ";
			cin >> a;
			cout << "inserisci il secondo numero : ";
			cin >> b;
			
			if (a>b)
			{
				temp = a;
				a=b;
				b=temp;
			}
			c= sqrt(pow(b-a, 3.0));
			cout << "c= radice (elevamento alla 3(b-a)) = " << c << endl;
		}
		
		if (Esercizio == "3")
		{
			system("cls");
			string a= "",b = "";
			cout << "vuoi farla ingelosirla?" << endl << "Digita 'Si' o 'No' ";
			cin >> a;
			if (a == "Si")
			{ 
				cout << "va bene fallo"<< endl;
				cout << "ma se la vedi camminare e sorridere con un altro" << endl << "FOCESS E CAMMIN!!!!!!!" << endl;
			}
			if (a == "No") 
			{ 
				cout << "Sei sicuro? "<< endl<< "Digita 'Si o No'";
				cin >> b;
				if (b == "No")
					{
						cout << "va bene fallo"<< endl;
						cout << "ma se la vedi camminare e sorridere con un altro" << endl << "FOCESS E CAMMIN!!!!!!!" << endl;
					}
				if (b == "Si")
				{
					cout << "Sei sicuro? " << endl<<  "Digita 'Si o No' ";
					cin >> b;
					if (b == "No")
					{
						cout << "va bene fallo"<< endl;
						cout << "ma se la vedi camminare e sorridere con un altro" << endl << "FOCESS E CAMMIN!!!!!!!" << endl;
					}
					else
					{
						cout << "Sei sicuro? " << endl<<  "Digita 'Si o No' ";
						cin >> b;
						if (b == "No")
						{
							cout << "va bene fallo"<< endl;
							cout << "ma se la vedi camminare e sorridere con un altro" << endl << "FOCESS E CAMMIN!!!!!!!" << endl;
						}
						else
						{
							cout << "Sei sicuro? " <<endl<<  "Digita 'Si o No' ";
							cin >> b;
							if (b == "No")
							{
								cout << "va bene fallo"<< endl;
								cout << "ma se la vedi camminare e sorridere con un altro" << endl << "FOCESS E CAMMIN!!!!!!!" << endl;
							}
							else
							{
								cout << "Allora sei una guerriera" << endl;
							}
						}
					}	
				}
			}

		}
			
		if (Esercizio== "4")
		{ 	
			system("cls");
			cout<< "Scrivere il programma per scambiare il contenuto di due variabili "<< endl;
			
			int temp,x,y;
			cout << "inserisci due numeri: ";
			cin>> x ;
			cout << "Il valore di x e' :"<< x << endl;
			cin>> y;
			cout << "Il valore di x e' :" << y << endl;
			temp = x;
			x = y;
			y = temp;
			cout << "Il valore " << y << " ha assunto il valore " << x << endl;
			cout << "Il valore " << x << " ha assunto il valore " << y << endl;
		}
		
		if(Esercizio == "5")
		{
			system("cls");
			string o= "";
			
			cout << "Inserire l'incognita(una tra s, v e t)" << endl;
			cin >> o;
			
			if (o == "s")
			{
				double s,v,t;
				cout << "Inserire t(tempo) in secondi  ";
				cin >> t;
				cout << "Inserire v(velocita') in metri al secondo  ";
				cin >> v;
				s= v*t;
				cout << "lo spazio equivale a " << s;
			}
			if (o == "t")
			{
				double s,v,t;
				cout << "Inserire s(spazio) in metri  ";
				cin >> s;
				cout << "Inserire v(velocita') in metri al secondo  ";
				cin >> v;
				t= s / v;
				cout << "il tempo equivale a " << t;
			}
			if (o == "v")
			{
				double s,v,t;
				cout << "Inserire t(tempo) in secondi  ";
				cin >> t;
				cout << "Inserire s(spazio) in metri  ";
				cin >> s;
				v= s / t;
				cout << "la velocita' equivale a " << v << endl;
			}
		}
		if (Esercizio == "6")
		{
			system("cls");
			cout << "Quanto pesa Crive in Kg?";
			float peso;
			cin >> peso;
			while (peso < 100)
			{
				cout << "Noooooooo!     " << "Prova con un altro peso!" << endl;
				cin >> peso;
			}
			cout << "ESATTOOOOOOO" << endl;
		}
		if (Esercizio == "7")
		{
			system("cls");
			int a,b,c;
			cout << "Inserisci un numero (metti 0 per terminare): ";
			cin >> a;
			while (a != 0)
			{
				cout << "Inserisci un altro numero" << endl;
				cin >> a;
				if (a == 0)
				{ 
					a = c;
				}
				if (a != 0)
				{
					b = a;
				}
			}
			cout << "Mostra l'ultimo numero  " << b << endl << endl;
		}
		if (Esercizio == "8")
		{
			system ("cls");
			float o;
			for (int i=1; i<= 20; i++)
			{
				cout << "inserisci 20 numeri uno alla volta";
				cin >> o;
				if (o >= 37)
				cout << o*3 << endl;
				else 
				{
					cout << o*67 << endl;
				}
			}
		}
		if (Esercizio == "9")
		{
			system ("cls");
			// creo due for annidati per un totale di 100 ripetizioni
			for (int r=1; r<=10; r++)
			{
				for(int c=1; c<=10; c++)
				cout << setw(5) << r*c;
				cout << endl;
			}
		}
	}
}
