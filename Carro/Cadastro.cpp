#include "Cadastro.h"
#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include "Ferrari.h"
#include "Cadastro.h"
#include "Motor.h"
#include <string>
#include "string.h"
using std::string;
using namespace std;

using std::cout;

Cadastro::Cadastro()
{
	if (idade<0)
	{
		cout << ("idade invalida");
	}
		
		this -> nome= "Desonhecido  \n";
		
		this -> idade= 0;
		
		this -> sobreNome = "Desonhecido  \n";
	

}

Cadastro::Cadastro( const string &_nome, const string &_sobreNome, int _idade, const string &_estadoCivil, const string &_pais, const string &_estado, const string &_cidade) 
{
		this -> nome = _nome;
		
		this -> sobreNome = _sobreNome;
		
		this ->idade = _idade;
		
		this ->estadoCivil = _estadoCivil;
		
		this ->pais = _pais;
		
}

Cadastro::Cadastro(const Cadastro &cad)
{
	this -> nome = cad.nome;
}


void Cadastro::mensagem2( const string &nome, const string &sobreNome, int idade, const string &estadoCivil, const string &pais,const string &estado, const string &cidade)
{
	cout << "Nome : " << nome;
	cout << "\nSobreome : " << sobreNome;
	cout << "\nIdade : " << idade;
	cout << "\nestado Civil : " << estadoCivil;
	cout << "\nPais : " << pais; 
	cout << "\nEstado : " << estado;
	cout << "\nCidade : " << cidade;  
	
}

const Cadastro Cadastro::operator =( const Cadastro &carroCad)
{
	nome = carroCad.nome; 
	sobreNome = carroCad.sobreNome; 
	idade = carroCad.idade; 
	estadoCivil	= carroCad.estadoCivil; 
	pais = carroCad.pais;
	estado = carroCad.estado; 
	cidade	= carroCad.cidade;

}
ostream &operator << (ostream &output, const Cadastro  &carroCad)
{
	output << carroCad.nome; 
	output << carroCad.sobreNome; 
	output << carroCad.idade; 
	output << carroCad.estadoCivil; 
	output << carroCad.pais;
	output << carroCad.estado; 
	output << carroCad.cidade;
	return output;
}

int Cadastro::operator == ( Cadastro & carroCad)
{
	if (nome != carroCad.nome || sobreNome != carroCad.sobreNome)
	{
		return 1;
	}else
		return 0;
}

int Cadastro::operator < (Cadastro & carroCad )
{
	
	if ( nome <= carroCad.sobreNome)
	{
		return 0;
	}else
		return 1;
}


int Cadastro::operator > (Cadastro & carroCad )
{
	if (carroCad.pais < cidade)
	{
		return 0;
	}else
		return 1;
	
}

int Cadastro::operator!= (Cadastro &carroCad )
{
	if (cidade == carroCad.cidade )
		return 0;
	
	if (pais == carroCad.pais)
		return 1;
		
	if (estado == carroCad.estado)	
		return 2;
}



Cadastro::~Cadastro()
{
	
}

