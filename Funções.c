#include <stdio.h>
#include <locale.h>
#include "pedro.h"
float valor1, valor2, media;

int main() {
	setlocale(LC_ALL, "");
	cadastrar();
	fx_media();
	system("cls");
	resultado();

    return 0;
}

