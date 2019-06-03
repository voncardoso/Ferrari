#include "Motor.h"
#include "Cadastro.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Ferrari.h"
using std::string;
using namespace std;
using std::cout;
using std::cin;

Motor::Motor()
{
	this -> potencia = 0;
	
	this -> tipoMotor= 0;
}


Motor::Motor(int _potencia, int _tipoMoto)
{
	this -> potencia = _potencia;
	
	this -> tipoMotor = _tipoMoto;
}

Motor::Motor(const Motor &mot)
{
	potencia = mot.potencia;
}

Motor::~Motor()
{
}

void Motor::menssagem2(int* potencia)
{
	cout << "\n----MOTOR----\n";

	if ( *potencia == 1)
	{
		cout << " POTENCIA : 500 CV\n";
	}else
		
			if ( *potencia == 2)
			{
				cout << "  POTENCIA : 650 CV\n";
			}else
			
					if ( *potencia == 3)
					{
						cout << " POTENCIA : 720 CV\n";
					}else
					
						if ( *potencia == 4)
						{
							cout << " POTENCIA : 1000 CV\n";
						}
}

void Motor::menssagemtipoMotor(int* tipoMotor)
{
		

	if ( *tipoMotor == 1)
	{
		cout << " TIPO: Gasolina";
	}else
		
			if ( *tipoMotor == 2)
			{
				cout << " TIPO :  Disel";
			}else
			
					if ( *tipoMotor == 3)
					{
						cout << " TIPO : Hibrido";
					}
}
 
void Motor::menssagem() const
{
	cout << " \n Velocidade Maxima : " << velocidadeMaxima;
}

ostream &operator << (ostream &output, const Motor &carroMotor )
{
	output <<carroMotor.potencia;
	output << carroMotor.tipoMotor;
	output <<carroMotor.velocidadeMaxima;
	return output;
}
const Motor Motor::operator =( const Motor & carroMotor)
{
	potencia = carroMotor.potencia;
	
	tipoMotor = carroMotor.tipoMotor;
		
}

bool Motor::operator ==(const Motor & carroMotor)
{
	if(potencia == carroMotor.potencia)
	{
		return true;
	}else
		return false;
}

bool Motor::operator <(Motor & carroMotor )
{
	if (potencia < carroMotor.potencia && tipoMotor < carroMotor.tipoMotor)
	{
		return true;
	}else
		return false;
}

bool Motor::operator >(Motor & carroMotor )
{
	if (tipoMotor < carroMotor.tipoMotor)
	{
		return true;
	}else
		return false;
}

int Motor::operator!=(Motor & carroMotor)
{
	if (tipoMotor == carroMotor.tipoMotor)
	{
		return tipoMotor;
	}
}


void Motor::infoMotor() const
{
	cout << "\nClasse Motor \n";
	
	cout << "recebe as informaçoes sobre a esclha do moto e a velocidade mmaxima dos carros \n\n";
	
		if (potencia == 1)
	{
		cout << " \n POTENCIA : 500 CV";
	}else
		
			if (potencia == 2)
			{
				cout << " \n POTENCIA : 650 CV";
			}else
			
					if (potencia == 3)
					{
						cout << "\n POTENCIA : 720 CV";
					}else
					
						if (potencia == 4)
						{
							cout << "\n POTENCIA : 1000 CV";
						}
						
							cout << " \n Velocidade Maxima : " << velocidadeMaxima;
}


	

