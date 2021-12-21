//ciclo
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main ()

{ 
	
	while(1)
	{
		
		string Esercizio = "";
		
		cout << "inserisci il numero dell'esercizio (un numero intero tra 1 e 6): " <<endl;
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
			cout << "L'ipotenusa e' uguale a: " << ipotenusa;		
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
			cout << "c= radice(elevamento alla 3(b-a)= " << c;
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
						cout << "ma se la vedi camminare e sorridere con un altro" << endl << "FOCESS E CAMMIN!!!!!!!";
					}
				if (b == "Si")
				{
					cout << "Sei sicuro? " << endl<<  "Digita 'Si o No' ";
					cin >> b;
					if (b == "No")
					{
						cout << "va bene fallo"<< endl;
						cout << "ma se la vedi camminare e sorridere con un altro" << endl << "FOCESS E CAMMIN!!!!!!!";
					}
					else
					{
						cout << "Sei sicuro? " << endl<<  "Digita 'Si o No' ";
						cin >> b;
						if (b == "No")
						{
							cout << "va bene fallo"<< endl;
							cout << "ma se la vedi camminare e sorridere con un altro" << endl << "FOCESS E CAMMIN!!!!!!!";
						}
						else
						{
							cout << "Sei sicuro? " <<endl<<  "Digita 'Si o No' ";
							cin >> b;
							if (b == "No")
							{
								cout << "va bene fallo"<< endl;
								cout << "ma se la vedi camminare e sorridere con un altro" << endl << "FOCESS E CAMMIN!!!!!!!";
							}
							else
							{
								cout << "Allora sei una guerriera";
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
			cin>> x;
			cout << x;
			cin>> y;
			cout << y;
			temp = x;
			x = y;
			y = temp;
			cout << "Il valore " << y << " ha assunto il valore " << x << endl;
			cout << "Il valore " << x << " ha assunto il valore " << y << endl;
		}
		
		if(Esercizio == "5")
		{
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
				cout << "la velocita' equivale a " << v;
			}
		}
		if (Esercizio == "6")
		{
			cout << "Quanto pesa Crive?";
			int peso;
			cin >> peso;
			while (peso < 100)
			{
				cout << "Noooooooo!     " << "Prova con un altro peso!" << endl;
				cin >> peso;
			}
			cout << "ESATTOOOOOOO" << endl;
		}
	}
}
