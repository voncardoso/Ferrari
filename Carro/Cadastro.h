#ifndef CADASTRO_H
#define CADASTRO_H

 #include <string>
#include <iostream>
#include <stdlib.h>

using std::string;
using namespace std;

using std::cout;

class Cadastro
{
	friend ostream  &operator<<(ostream &, const Cadastro &);
public:
    Cadastro(const string &, const string &, int, const string &, const string &, const string &, const string & );
	
	Cadastro ();
	
	Cadastro (const Cadastro &);
    
	~Cadastro();
    
	void mensagem2 (const string &, const string &, int, const string &, const string &, const string &, const string &);
    
	
	int operator == (Cadastro&);
	
	int operator < (Cadastro &);
	
	int operator > (Cadastro &);
	
	const Cadastro operator = (const Cadastro &);
	
	int operator!= (Cadastro & );
	
	Cadastro  operator [] (int ); 
	
	Cadastro operator[] (int) const;
	

    
	void infoCliente () const;
    
    
    

private:
	int idade;
	string nome;
	string sobreNome;
	string estadoCivil;
	string pais;
	string estado;
	string cidade;
	int i;

	
	

};

#endif // CADASTRO_H
