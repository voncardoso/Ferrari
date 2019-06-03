#include "Ferrari.h"
#include "Motor.h"
#include "Cadastro.h"
#include <string>
#include <iostream>



int Ferrari::numeroCarros = 0;
string multMidia= "22 polegadas";


Ferrari::Ferrari()
{
	this -> modelo = 0;
	
	this -> cor = 0;
}	


Ferrari::Ferrari(int _modelo, float _cor)
{
		if (numeroCarros == 0)
		{
		this ->	quantCarro = 0;
		this ->	quantCarro++;
		this ->	carros = new string[quantCarro];
			
		}
		
		this -> modelo = _modelo;
    	
    	this -> cor = _cor;
    	
    	numeroCarros ++;
		
}


Ferrari::Ferrari(const Ferrari &m)
{
	this -> modelo = m.modelo;
	
	this -> cor = m.cor;
	
	this -> quantidade = m.quantidade;
	
	carros = new string[quantCarro];
	for	( i = 0; i < quantCarro ; i ++){
			this -> carroUser [i] = m.quantCarro;
	}
}

Ferrari::~Ferrari()
{
	delete [] carroUser;
	delete [ ] carros;
}

void Ferrari::quantCompras(int quantCarro)
{
	
	 quantCarro = quantidade; 
	
}


void Ferrari::modelo1 (int modelo)
{
	cout << "\n---MODELO---\n";
	
	if (modelo == 1)
	{
		cout << "TIPO : 812 Superfast \n";
	}else 
		
		if (modelo == 2  )
		{
			cout << "TIPO : F8 Tributo \n";
		}else 
			
			if (modelo == 3)
			{
				cout << "TIPO : Ferrari 488 Pista \n";
			}else 
				
				if (modelo == 4)
				{
					cout << "TIPO : Ferrari 488 Pista Spider \n";
				}
	
}

void Ferrari::escolhaCor(float cor)
{
	if (cor == 1)
	{
		cout << "COR : PRETO NINJA \n";
	}else 
		
		if (cor == 2  )
		{
			cout << "COR : AMARELO MODERNO \n";
		}else 
			
			if (cor == 3)
			{
				cout << "COR : VERMELHO CORSA \n";
			}else 
				
				if (cor == 4)
				{
					cout << "COR : BRANCO AVUS \n";
				}
}

void Ferrari::acabamentoEmCouro() const
{
	cout << " \n---CABAMENTO---\nBANCO : Couro Avus\n";
}

void Ferrari::getNumeroCarros() const
{
	cout << "\n\n--------------------------------------------------\n\n";
	cout <<"\nQuantidades de carros comprados :" << numeroCarros << "\n";
	
}
	
	void Ferrari::midia(const string &multMidia) const
	{
		cout <<"Mutimidia  : " << multMidia << "\n\n";
	}

void Ferrari::rodadoEsuspensao(int *ptrAro21, string *ptrSuspensao) const
{
	cout <<"\nRoda : " << "     aro" << *ptrAro21;
	
	cout <<"\nSuspenasao : " << *ptrSuspensao << " \n";
	
	
}

void Ferrari::mensagemMotor (int motor)  
{
	
	potenciaMot.menssagem();

}


void Ferrari::mensagem1Motor(int motor)
{
	potenciaMot.menssagem2( &motor);
	
}

void Ferrari::mensagemTipoMotor(int tipoMotor)
{
	potenciaMot.menssagemtipoMotor(&tipoMotor);
}

void Ferrari::mensagemCadastro(const string &nome, const string &sobreNome, int idade, const string &estadoCivil, const string &pais, const string &estado, const string &cidade)
{
	cliente.mensagem2(nome, sobreNome, idade, estadoCivil, pais, estado, cidade);
}

const Ferrari Ferrari::operator =( const Ferrari &Ferrari)
{
	 modelo =Ferrari.modelo;
	 cor = Ferrari.cor;
	 quantCarro = Ferrari.quantCarro;
	 quantidade = Ferrari.quantidade;
	 quantFinal =Ferrari.quantFinal;
	 
	 cliente = Ferrari.cliente;
	 potenciaMot = Ferrari.potenciaMot;
	 
}

ostream &operator << (ostream &output, const Ferrari & carroFer)
{
	output << carroFer.modelo;
	output << carroFer.cor;
	output << carroFer.quantCarro;
	output << carroFer.quantCarro;
	output << carroFer.quantidade;
	output << carroFer.quantFinal;
	
	return output;
}

bool Ferrari::operator ==(const Ferrari & carroFer )
{
	if(modelo == carroFer.modelo)
	{
		return cout << ("modelos iguais : 0");
		
	}else
		return cout << ("modelos diferentes : 1");
		
}

bool Ferrari::operator <(Ferrari & carroFer )
{
	cout << cor;
	if (cor <= carroFer.cor)
	{
		return 0;
	}else
		return 1;
}

Ferrari Ferrari::operator [](int carroFer)
{
	if (carroFer != modelo )
	{
		cout << " erro na busca";
	}else
		cout << "cor encontrada";
}

Ferrari Ferrari::operator[](int carroFer) const
{
	if (carroFer != cor)
	{
		cout << "\nErro na busca\n";
	}else
		cout << "\n Cor encontarda \n";
}

int Ferrari::operator!= (Ferrari &carroFer )
{
	if (cor == carroFer.cor )
		return cor;
	
	if (modelo == carroFer.modelo)
		return modelo;
		
}



 void Ferrari::info() const
 {
 	cout << "\nClasse Modelo \n";
 	
 	cout << "\n Vai receber a qauntidade de carros escolhido, modelo, cor\n\n";
 	
 		cout <<"\n Numero de carros escolhidos" << numeroCarros - 1 << "\n";
 	
	 if (modelo == 1)
	{
		cout << "MODELO : 812 Superfast \n";
	}else 
		
		if (modelo == 2  )
		{
			cout << "MODELO : F8 Tributo \n";
		}else 
			
			if (modelo == 3)
			{
				cout << "MODELO : Ferrari 488 Pista \n";
			}else 
				
				if (modelo == 4)
				{
					cout << "MODELO : Ferrari 488 Pista Spider \n";
				}
				
				potenciaMot.infoMotor();
				
				
 }



