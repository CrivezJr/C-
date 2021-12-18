//ciclo C++
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{ 
	
	while(1)
	{
		
		string Esercizio = "";
		
		cout << "inserisci il numero dell'esercizio: " <<endl;
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
			system("cls");
			
		
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
			system("cls");
			
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
			system("cls");
			
		}
	}
}
