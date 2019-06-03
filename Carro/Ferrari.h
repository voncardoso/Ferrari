#ifndef FERRARI_H
#define FERRARI_H
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Motor.h"
#include "Cadastro.h"

using std::string;
using namespace std;

using std::cout;

class Ferrari
{
	friend ostream  &operator<<(ostream &, const Ferrari &);
public:
    Ferrari(int, float);
    
    Ferrari ();
    
    Ferrari( const Ferrari &);
    
   	~Ferrari();

	void quantCompras (int);
    
    void modelo1 (int);
    
    
    void escolhaCor (float);
    
    void acabamentoEmCouro() const;
    
    void getNumeroCarros() const;
    
    void midia(const string &) const;
    
    void mostra () ;
    
    void mensagemMotor(int);
    
    void mensagem1Motor(int);
    
    void mensagemTipoMotor(int);
    
    void mensagemCadastro (const string &, const string &, int,const string &, const string &,const string &, const string &);
    
    void rodadoEsuspensao (int*, string *) const;

    void mensegenFinal(int , float , int );

	void info ()const;
	
	
	bool operator == (const Ferrari&);
	
	bool operator < (Ferrari &);
	
	const Ferrari operator = (const Ferrari &);
	
	Ferrari  operator [] (int); 
	
	Ferrari operator[] (int) const;
	
	int operator!= (Ferrari &);
	
	Ferrari & operator *= ( Ferrari &);
	
	
	
	
	
	
	
	
private:
  
  	int i;
  	
    int modelo;
    
    float cor;
    
    static int numeroCarros;
    
    const string multMidia; 
    
    int quantCarro;
    
    string *carros;
    
    string *carroUser;
    
	int quantidade;
	
	int quantFinal;
	
	Cadastro cliente;
	
	Motor potenciaMot;
	
};

#endif // FERRARI_H
