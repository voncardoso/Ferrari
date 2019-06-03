#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Ferrari.h"


using std::string;
using namespace std;
using std::cout;
using std::cin;


int main(int argc, char **argv)
{
	int i;
	int n;
	int quantidade;
	int motor;
	int modelo;
	float cor;
    int aro;
    int idade;
    int tipoMotor;
    string nome;
    string sobreNome;
	string multMidia= "22 polegadas";
	string estadoCivil;
	string pais;
	string estado;
	string cidade;
	
    	
    	do 
	{
		cout << "   \n\n\n\n\n\n\   BEM VINDO AO MUNDO FERRARI!!\n AQUI A VELOCIDADE ESTA NO SANGUE!!\n";
		
		 cout << "\n\n\n\n\nDigite 1 para montar seu carro\n";
		
		 cin >> n;
	
	}while (n!=1);
		system ("cls");
		
		
		
	
		
	
		
		
				cout << "\n\n--ESCOLHA SEU MODELO DE CARRO--\n\n";
		
				cout << " [1] 812 Superfast\n";
			
				cout << " [2] F8 Tributo\n";
			
				cout << " [3] Ferrari 488 Pista\n";
			
				cout << " [4] Ferrari 488 Pista Spider\n";
			
				cin >> modelo;	
			
			
			
		do 
		{
			
			 cout << "\n\n\n\n\nDigite 1 para escolher a cor \n";
			
			 cin >> n;
		
		}while (n!=1);
		
		system ("cls");
		
		cout << "\n-- CORES DISPONIVEIS --\n ";
		
				
				cout << "[1] PRETO NINJA \n";
				
				cout << " [2] AMARELO MODERNO \n";
				
				cout << " [3] VERMELHO CORSA \n";
				
				cout << " [4] BRANCO AVUS \n";
				
				cin >> cor; 
				
				do 
			{
			
				 cout << "\n\n\n\n\nDigite 1 para escolher o motor\n";
			
				 cin >> n;
		
			}while (n!=1);
		
		system ("cls");
			// ------------------------------MOTOR------------------------------------------//
			
			cout << "\n--- POTENCIA DO MOTOR ----\n";
			
				cout << " [1] 500 CV \n";
				
				cout << " [2] 650 CV \n";
				
				cout << " [3] 720 CV \n";
				
				cout << " [4] 1000 CV \n";
				
				cin >> motor; 
		
		
		system ("cls");
		
			cout << "\n--- TIPO DO MOTOR ----\n";
			
				cout << " [1] Motor a Gasolina\n";
				
				cout << " [2] Motor a Disel \n";
				
				cout << " [3] Motor Hibrido \n";
				
				cin >> tipoMotor; 
		
		system ("cls");
		
		cout << "Digite seu nome : ";
		cin	>> nome;
		
		cout << "Digite seu sobrenome : ";
		cin	>> sobreNome;
		
		cout << "Digite sua idade: ";
		cin	>> idade;
		
		cout << "Digite seu Estado Civil: ";
		cin	>> estadoCivil;
		
		cout << "Digite sua pais: ";
		cin	>> pais;
		
		cout << "Digite seu estado: ";
		cin	>> estado;
		
		cout << "Digite sua cidade: ";
		cin	>> cidade;
			
		system ("cls");
					
			Ferrari carros,mod,mod2(modelo, cor);
			
			// modelo
			mod.modelo1(modelo);
			mod.escolhaCor(cor);
			mod.acabamentoEmCouro();
			mod.midia(multMidia);
			//motor
			mod.mensagem1Motor(motor);
			mod.mensagemTipoMotor(tipoMotor);
			mod.mensagemMotor(motor);
			mod.getNumeroCarros();
			
			
			Ferrari c1(modelo, cor);
			Ferrari c2(1,1);
		//	cout << "\n\n"<<  (c1==c2) << "\n\n";
			cout << "\n\n" << (c1 < c2)<< "\n\n";
		//	cout << "\n\n"<< (mod = mod2 );
		//	cout << "\n\n" <<c1[modelo, 1];
		  //cout << c2[cor,1];

			 
			//cadastro
			mod.mensagemCadastro(nome,sobreNome,idade,estadoCivil,pais, estado, cidade);
			
			Motor mot(3,3);
			Motor mot1(motor,1);
			
			// cout << "\n\n" << (mot==mot1);
			// cout << "\n\n" << (mot < mot1);
			// cout << "\n\n" << (mot = mot1);
				
			
			Cadastro f1("von", "cardoso",21,"solteiro","brasil","para", "belem");
			Cadastro f2 (nome,sobreNome,idade,estadoCivil,pais, estado, cidade);
			
		//	cout << "\n\n" << (f1==f2);
		//	cout << "\n\n" << (f2 < f1);
		//	cout << "\n\n" << (f1 = f2);
		//	cout << "\n\n" << f1[1];
		
			
			 
			 
			 
			 
		
		
			
			
		// Cdastro -------
		

	
		
}
		

