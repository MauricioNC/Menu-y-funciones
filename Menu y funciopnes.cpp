#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <cmath>
using namespace std;

float form1(int x);
float form2(int x, int y);
float form3(int x);
void tabular();
void tabular(int x, int opc);

int main ()
{
	int x, y, opc;
	
	do
	{
		system("cls");
		cout << "			----- * FUNCIONES * -----" << endl << endl;
		cout << "Elige una de las siguientes formulas: " << endl;
		cout << "1.- Formula 1" << endl;
		cout << "2.- Formula 2" << endl;
		cout << "2.- Formula 3" << endl;
		cout << "0.- Salir" << endl;
		cout << "---------------" << endl;
		cout << "OPCION: ";
		cin >> opc;
    
		if (opc == 0)
			exit(0);
		else if (opc == 1)
		{
			cout << "Ingresa el valor para x: ";
			cin >> x;
			tabular(x, opc);
		}
		else if (opc == 2)
		{
			tabular();
		}
		else if (opc == 3)
		{
			cout << "Ingresa el valor para x: ";
			cin >> x;
			tabular(x, opc);
		}
		else if (opc != 0)
		{
			cout << "Opcion invalida!";
			getch();
			system("cls");
		}
		cout << "Presiona enter para volver al menu";
		getch();
	}
	while (opc != 0); 
	return 0;
}

void tabular(int x, int opc)
{
    cout << "X	f(x)" << endl;
	
	if (opc == 1)
	{
		for (int i=0; i <= x; i++)
		{
			cout << i << "		" << form1(i) << endl;
		}
	}
	else if (opc == 3)
	{
		if (x > 0)
		{
			for (int i=0; i <= x; i++)
			{
				cout << i << "		" << form3(i) << endl;
			}
		}
		else
			if (x <= 0)
			{
				for (int i=0; i >= x; i--)
				{
					cout << i << "		" << form3(i) << endl;
				}
			}
	}
}
void tabular()
{
	cout << "X, y	f(x, y)" << endl;
	for (int i=1; i <= 5; i++)
		cout << i << "		" << form2(i, i) << endl;
}

float form1(int x)
{
    float res;
    res= pow(pow(x, 2) * 2, (1.0/3.0)) / ((2.0 * x) - 3);
    return res; 
} 
float form2(int x, int y)
{
    float res;
    res = (2 * x * y) - (3 * y);
    return res;
}
float form3(int x)
{
	float res;
	
	if (x > 0)
		return res = (2 * pow(x, 3));
	else 
		if (x <= 0)
			return res = (3 * pow(x, 2));
}
