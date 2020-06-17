/**!<Guardas de inclusión*/
#ifndef TABLERO_HPP
#define TABLERO_HPP

/**!<Bibliotecas necesarias*/
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>

class Tablero{
	public:
		Tablero();
		~Tablero();
		void gotoxy(int x, int y);
		void ocultarCursor();
		void pintarLimites();
};

#endif