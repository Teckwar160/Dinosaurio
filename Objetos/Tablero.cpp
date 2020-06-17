#include "Tablero.hpp"

Tablero::Tablero(){
	/*Nada por el momento*/
}

Tablero::~Tablero(){
	/*Nada por el momento*/
}

void Tablero::gotoxy(int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;

	SetConsoleCursorPosition(hcon,dwPos);
}

void Tablero::ocultarCursor(){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor;

	cursor.dwSize = 2;
	cursor.bVisible = FALSE;

	SetConsoleCursorInfo(hcon,&cursor);		
}

void Tablero::pintarLimites(){
	#if 0
	for(int i = 0; i<70; i++){
		gotoxy(i,3); printf("%c",205);
		gotoxy(i,33); printf("%c",205);
	}

	for(int i = 0; i<23; i++){
		gotoxy(2,i); printf("%c",186);
		gotoxy(77,i); printf("%c",186);
	}

	/*Caracter de esquina*/
	/*201,200,187,188*/	
	#endif
}