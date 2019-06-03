#ifndef MOTOR_H
#define MOTOR_H
#include <string>
#include <iostream>
#include <stdlib.h>

using std::string;
using namespace std;

using std::cout;
class Motor
{
	friend ostream  &operator<<(ostream &, const Motor &);
public:
    Motor(int, int);
    
    Motor ();
    
    Motor (const Motor &);
   
    ~Motor();
    
	void menssagem2 (int*);
	
	void menssagemtipoMotor (int*);
	
	void menssagem () const;
	
	void infoMotor () const; 
	
	const Motor	 operator = (const Motor &);
	
	bool operator == (const Motor&);
	
	bool operator < (Motor &);
	
	bool operator > (Motor &);
	
	int operator != (Motor &);
	
	int operator += (Motor& );
	
	

	

    
    
private:
	int potencia;
	
	int tipoMotor;
	
	const static int velocidadeMaxima = 340;
	
};

#endif // MOTOR_H

