#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int i, j, operacao_finalizada;

/*
	|**************************************************************************************************************************|
	|*********************************************** CALCULADORA UNIVERSAL EM C ***********************************************|
	|**************************************************************************************************************************|
	|**************************************************************************************************************************|
	|************************************************* FEITO POR:  SANDRO RDS *************************************************|
	|**************************************************************************************************************************|
*/

// ***************************************************************** OPERA��ES ARITM�TICAS ***********************************************************

//OPERA��O DE SOMA
void soma_operacoes()
{
	float soma = 0, novo_operando, operandos[100];
	int quantidade_operandos = 1;
	
	system("cls");
	printf("SOMA\n\n\n\n");
		
	for(i=1;i<=quantidade_operandos;i++)
	{
		//PRIMEIRO LOOP, CAPTURA DA QUANTIDADE DE OPERANDOS PARA SOMAR
		if(i==1)
		{
			printf("Informe a Quantidade De N�meros Que Ser�o Somados: ");
			scanf("%i", &quantidade_operandos);
			
			//USU�RIO INFORMOU UMA QUANTIDADE DE OPERANDOS MENOR QUE 2 -> FINALIZA��O DA OPERA��O
			if(quantidade_operandos <= 1)
			{
				operacao_finalizada = true;
				break;
			}
		}
		
		//USU�RIO INFORMOU UMA QUANTIDADE DE OPERANDOS MAIOR QUE 1
		if(quantidade_operandos > 1)
		{
			system("cls");
			printf("SOMA\n\n\n\n");
			printf("Insira Abaixo Os Termos Da Opera��o\n\n\n");
			
			//CAPTURA DOS OPERANDOS
			if(i <= quantidade_operandos)
			{
				
				//RESULTADO PROVIS�RIO AP�S 2 OPERANDOS INFORMADOS
				if(i > 2)
				{
					printf("Resultado Provis�rio = %.2f\n\n", soma);
				}
				
				//CAPTURA DO VALOR DE UM NOVO OPERANDO
				printf("Digite Aqui: ");
				scanf("%f", &novo_operando);
				
				soma += novo_operando;
				operandos[i-1] = novo_operando;
			}
			
			//TODOS OS OPERANDOS FORAM INFORMADOS
			if(i == quantidade_operandos)
			{
				system("cls");
				printf("SOMA\n\n\n\n");
				printf("\nResultado Final = %.2f", operandos[0]);
				
				//MOSTRANDO TODOS OS OPERANDOS INFORMADOS
				for(j=1;j<quantidade_operandos;j++)
				{
					printf(" + %.2f", operandos[j]);
				}
				
				//MOSTRANDO O RESULTADO FINAL
				printf(" = %.2f\n\n", soma);
			}
		}
	}
}

//OPERA��O DE SUBTRA��O
void subtracao_operacoes()
{
	float subtracao = 0, novo_operando, operandos[100];
	int quantidade_operandos = 1;
	
	system("cls");
	printf("SUBTRA��O\n\n\n\n");
		
	for(i=1;i<=quantidade_operandos;i++)
	{	
		//PRIMEIRO LOOP, CAPTURA DA QUANTIDADE DE OPERANDOS PARA SUBTRAIR
		if(i == 1)
		{
			printf("Informe a Quantidade De N�meros Que Ser�o Subtra�dos: ");
			scanf("%i", &quantidade_operandos);
			
			//USU�RIO INFORMOU UMA QUANTIDADE DE OPERANDOS MENOR QUE 2 -> FINALIZA��O DA OPERA��O
			if(quantidade_operandos <= 1)
			{
				operacao_finalizada = true;
				break;
			}
		}
		
		//USU�RIO INFORMOU UMA QUANTIDADE DE OPERANDOS MAIOR QUE 1
		if(quantidade_operandos > 1)
		{
			system("cls");
			printf("SUBTRA��O\n\n\n\n");
			printf("Insira Abaixo Os Termos Da Opera��o\n\n\n");
			
			//CAPTURA DOS OPERANDOS
			if(i <= quantidade_operandos)
			{
				
				//RESULTADO PROVIS�RIO AP�S 2 OPERANDOS INFORMADOS
				if(i > 2)
				{
					printf("Resultado Provis�rio = %.2f\n\n", subtracao);
				}
				
				//CAPTURA DO VALOR DE UM NOVO OPERANDO
				printf("Digite Aqui: ");
				scanf("%f", &novo_operando);
				
				subtracao = i==1 ? novo_operando : subtracao - novo_operando;
				operandos[i-1] = novo_operando;
			}
			
			//TODOS OS OPERANDOS FORAM INFORMADOS
			if(i == quantidade_operandos)
			{
				system("cls");
				printf("SUBTRA��O\n\n\n\n");
				printf("\nResultado Final = %.2f", operandos[0]);
				
				//MOSTRANDO TODOS OS OPERANDOS INFORMADOS
				for(j=1;j<quantidade_operandos;j++)
				{
					printf(" - %.2f", operandos[j]);
				}
				
				//MOSTRANDO O RESULTADO FINAL
				printf(" = %.2f\n\n", subtracao);
			}
		}
	}
}

//OPERA��O DE MULTIPLICA��O
void multiplicacao_operacoes()
{
	float multiplicacao = 1, novo_operando, operandos[100];
	int quantidade_operandos = 1;
	
	system("cls");
	printf("MULTIPLICA��O\n\n\n\n");
		
	for(i=1;i<=quantidade_operandos;i++)
	{
		//PRIMEIRO LOOP, CAPTURA DA QUANTIDADE DE OPERANDOS PARA MULTIPLICAR
		if(i == 1)
		{
			printf("Informe a Quantidade De N�meros Que Ser�o Multiplicados: ");
			scanf("%i", &quantidade_operandos);
			
			//USU�RIO INFORMOU UMA QUANTIDADE DE OPERANDOS MENOR QUE 2 -> FINALIZA��O DA OPERA��O
			if(quantidade_operandos <= 1)
			{
				operacao_finalizada = true;
				break;
			}
		}
		
		//USU�RIO INFORMOU UMA QUANTIDADE DE OPERANDOS MAIOR QUE 1
		if(quantidade_operandos > 1)
		{
			system("cls");
			printf("MULTIPLICA��O\n\n\n\n");
			printf("Insira Abaixo Os Termos Da Opera��o\n\n\n");
			
			//CAPTURA DOS OPERANDOS
			if(i <= quantidade_operandos)
			{
				//RESULTADO PROVIS�RIO AP�S 2 OPERANDOS INFORMADOS
				if(i > 2)
				{
					printf("Resultado Provis�rio = %.2f\n\n", multiplicacao);
				}
				
				//CAPTURA DO VALOR DE UM NOVO OPERANDO
				printf("Digite Aqui: ");
				scanf("%f", &novo_operando);
				
				multiplicacao *= novo_operando;
				operandos[i-1] = novo_operando;
			}
			
			//TODOS OS OPERANDOS FORAM INFORMADOS
			if(i == quantidade_operandos)
			{
				system("cls");
				printf("MULTIPLICA��O\n\n\n\n");
				printf("\nResultado Final = %.2f", operandos[0]);
				
				//MOSTRANDO TODOS OS OPERANDOS INFORMADOS
				for(j=1;j<quantidade_operandos;j++)
				{
					printf(" x %.2f", operandos[j]);
				}
				
				//MOSTRANDO O RESULTADO FINAL
				printf(" = %.2f\n\n", multiplicacao);
			}
		}
	}
}

//OPERA��O DE DIVIS�O
void divisao_operacoes()
{
	float divisao = 0, novo_operando, operandos[100];
	int quantidade_operandos = 1;
	
	system("cls");
	printf("DIVIS�O\n\n\n\n");
		
	for(i=1;i<=quantidade_operandos;i++)
	{	
		//PRIMEIRO LOOP, CAPTURA DA QUANTIDADE DE OPERANDOS PARA DIVIDIR
		if(i == 1)
		{
			printf("Informe a Quantidade De N�meros Que Ser�o Divididos: ");
			scanf("%i", &quantidade_operandos);
			
			//USU�RIO INFORMOU UMA QUANTIDADE DE OPERANDOS MENOR QUE 2 -> FINALIZA��O DA OPERA��O
			if(quantidade_operandos <= 1)
			{
				operacao_finalizada = true;
				break;
			}
		}
		
		//USU�RIO INFORMOU UMA QUANTIDADE DE OPERANDOS MAIOR QUE 1
		if(quantidade_operandos > 1)
		{
			system("cls");
			printf("DIVIS�O\n\n\n\n");
			printf("Insira Abaixo Os Termos Da Opera��o\n\n\n");
			
			//CAPTURA DOS OPERANDOS
			if(i <= quantidade_operandos)
			{
				
				//RESULTADO PROVIS�RIO AP�S 2 OPERANDOS INFORMADOS
				if(i > 2)
				{
					printf("Resultado Provis�rio = %.2f\n\n", divisao);
				}
				
				//CAPTURA DO VALOR DE UM NOVO OPERANDO
				printf("Digite Aqui: ");
				scanf("%f", &novo_operando);
								
				if((novo_operando != 0) || (i == 1)) //VERIFICA��O SE O OPERANDO INFORMADO � DIFERENTE DE ZERO OU � O PRIMEIRO N�MERO A SER DIVIDIDO
				{
					divisao = i==1 ? novo_operando : divisao / novo_operando;
					operandos[i-1] = novo_operando;	
				}
				else //TENTATIVA DE DIVIS�O POR 0
				{
					printf("\nN�o � poss�vel dividir um n�mero por 0!!!");
					i--;
					Sleep(1000);
				}
			}
			
			//TODOS OS OPERANDOS FORAM INFORMADOS
			if(i == quantidade_operandos)
			{
				system("cls");
				printf("DIVIS�O\n\n\n\n");
				printf("\nResultado Final = %.2f", operandos[0]);
				
				//MOSTRANDO TODOS OS OPERANDOS INFORMADOS
				for(j=1;j<quantidade_operandos;j++)
				{
					printf(" � %.2f", operandos[j]);
				}
				
				//MOSTRANDO O RESULTADO FINAL
				printf(" = %.2f\n\n", divisao);
			}
		}
	}
}

//OPERA��O DE POT�NCIA
void potencia_operacoes()
{
	float potencia, base, expoente;
	
	system("cls");
	printf("POT�NCIA\n\n\n\n");
	
	//CAPTURANDO O VALOR DA BASE
	printf("Insira o Valor da Base: ");
	scanf("%f", &base);
	
	system("cls");
	printf("POT�NCIA\n\n\n\n");
	printf("Base = %.1f\n\n", base);
	
	//CAPTURANDO O VALOR DO EXPOENTE
	printf("\nInforme o Valor do Expoente: ");
	scanf("%f", &expoente);
	
	potencia = pow(base,expoente);
	
	system("cls");
	printf("POT�NCIA\n\n\n\n");
	
	//MOSTRANDO O RESULTADO FINAL E OS OPERANDOS 
	printf("Resultado Final:\n\n\n");
	printf("Base = %.1f\n\n", base);
	printf("Expoente = %.1f\n\n", expoente);
	printf("Resultado Final = %.2f\n\n", potencia);
}

//OPERA��O DE RAIZ
void raiz_operacoes()
{
	
	float indice, radicando, raiz;
	bool encerrar_modulo = false, radicando_valido = false, indice_valido = false;
	
	while(encerrar_modulo == false)
	{
		//VALIDANDO O �NDICE DA RAIZ
		if(indice_valido == false)
		{
			system("cls");
			printf("RAIZ\n\n\n\n");
			printf("OBS: O Valor do �ndice Deve Ser Inteiro e Maior Que 0!\n\n\n");
			printf("Insira o Valor Do �ndice Da Raiz: ");
			scanf("%f", &indice);
		}
		
		//�NDICE V�LIDO INFORMADO
		if(indice > 0)
		{
			indice_valido = true;	
			
			while(radicando_valido == false)
			{
				system("cls");
				printf("RAIZ\n\n\n\n");
				printf("OBS: Caso o �ndice Seja Par, o Valor do Radicando N�o Pode Ser Negativo! <C�lculo Efetuado Em R>\n\n\n");
				printf("�ndice = %.0f\n\n", indice);
				
				printf("Insira o Valor do Radicando da Raiz: ");
				scanf("%f", &radicando);
				
				//�NDICE PAR
				if(fmod(indice,2) == 0)
				{
					if(radicando >= 0) //RADICANDO POSITIVO -> EFETUA��O DO C�LCULO
					{
						raiz = pow(radicando, 1/indice);
						
						system("cls");
						printf("RAIZ\n\n\n\n");
						
						//MOSTRANDO O RESULTADO FINAL
						printf("Resultado Final:\n\n\n");
						printf("�ndice = %.0f\n\n", indice);
						printf("Radicando = %.2f\n\n", radicando);
						printf("Raiz = %.4f\n\n", raiz);
						
						radicando_valido = true;
						encerrar_modulo = true;
					}
					else //RADICANDO NEGATIVO -> VALOR INV�LIDO
					{
						printf("\n\nValor Inv�lido!!!");
						Sleep(1000);
					}
				}
				else //�NDICE IMPAR -> EFETUA��O DO C�LCULO
				{
					raiz = pow(radicando, 1/indice);
					system("cls");
					printf("RAIZ\n\n\n\n");
					
					//MOSTRANDO O RESULTADO FINAL
					printf("Resultado Final:\n\n\n");
					printf("�ndice = %.0f\n\n", indice);
					printf("Radicando = %.2f\n\n", radicando);
					printf("Raiz = %.4f\n\n", raiz);
					
					radicando_valido = true;
					encerrar_modulo = true;
				}
			}
		}
		else //�NDICE INV�LIDO INFORMADO
		{
			printf("\n\n�ndice Inv�lido!!!");
			Sleep(1000);
		}
	}
}

//OPERA��O DE LOGARITMO
void logaritmo_operacoes()
{
	float logaritmando, base, logaritmo; 
	bool encerrar_modulo = false, logaritmando_valido = false, base_valida = false;
	
	while(encerrar_modulo == false)
	{
		//VALIDANDO O LOGARITMANDO
		if(logaritmando_valido == false)
		{
			system("cls");
			printf("LOGARITMO\n\n\n\n");
			printf("OBS: O Valor do Logaritmando Deve Ser Maior Que 0!\n\n\n");
			printf("Insira o Valor Do Logaritmando: ");
			scanf("%f", &logaritmando);
		}
		
		if(logaritmando > 0) //LOGARITMANDO V�LIDO
		{
			logaritmando_valido = true;
			
			while(base_valida == false)
			{
				system("cls");
				printf("LOGARITMO\n\n\n\n");
				printf("OBS: O Valor da Base Deve Ser Maior Que 0 e Diferente de 1!\n\n\n");
				printf("Logaritmando = %.2f\n\n", logaritmando);
				
				printf("Insira o Valor da Base: ");
				scanf("%f", &base);
				
				if((base > 0) && (base != 1)) //TESTANDO SE A BASE � MAIOR QUE ZERO E DIFERENTE DE 1
				{
					logaritmo = log10f(logaritmando) / log10f(base);
					system("cls");
					printf("LOGARITMO\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Logaritmando = %.2f\n\n", logaritmando);
					printf("Base = %.2f\n\n", base);
					printf("Logaritmo = %.4f\n\n", logaritmo);
					
					base_valida = true;
					operacao_finalizada = true;
				}
				else //BASE INV�LIDA
				{
					printf("Valor Inv�lido!!!\n\n\n");
					Sleep(1000);
				}
			}
		}
		else //LOGARITMANDO INV�LIDO
		{
			printf("Valor Inv�lido!!!\n\n\n");
			Sleep(1000);
		}
	}
}

// ***************************************************************** OPERA��ES ARITM�TICAS ***********************************************************


// ****************************************************************** FORMAS GEOM�TRICAS *************************************************************
	
	// ######################################################## PER�METRO E �REA ######################################################
	
//PER�METRO E �REA DO QUADRADO
void quadrado_perimetroarea_fgeo(int tipo)
{
	float lado, perimetro, area;
	bool encerrar_modulo = false;
	
	if(tipo == 1)
	{
		while(encerrar_modulo == false)
		{
			system("cls");
			printf("PER�METRO: QUADRADO\n\n\n\n");
			printf("Insira o Valor do Lado: ");
			scanf("%f", &lado);
			
			if(lado > 0)
			{
				system("cls");
				perimetro = lado * 4;
				printf("PER�METRO: QUADRADO\n\n\n\n");
				printf("Resultado Final:\n\n\n");
				printf("Lado = %.2f Metros\n\n", lado);
				printf("Per�metro = %.2f Metros\n", perimetro);
				encerrar_modulo = true;
			}
			else
			{
				printf("Valor Inv�lido!!!\n\n");
				Sleep(1000);
			}
		}
	}
	else
	{
		while(encerrar_modulo == false)
		{
			system("cls");
			printf("�REA: QUADRADO\n\n\n\n");
			printf("Insira o Valor do Lado: ");
			scanf("%f", &lado);
			
			if(lado > 0)
			{
				system("cls");
				area = lado * lado;
				printf("�REA: QUADRADO\n\n\n\n");
				printf("Resultado Final:\n\n\n");
				printf("Lado = %.2f Metros\n\n", lado);
				printf("�rea = %.2f Metros�\n", area);
				encerrar_modulo = true;
			}
			else
			{
				printf("Valor Inv�lido!!!\n\n");
				Sleep(1000);
			}
		}
	}
}

//PER�METRO E �REA DO RET�NGULO
void retangulo_perimetroarea_fgeo(int tipo)
{
	float base, altura, perimetro, area;
	bool encerrar_modulo = false, altura_valida = false;
	
	if(tipo == 1)
	{
		while(encerrar_modulo == false)
		{
			system("cls");
			printf("PER�METRO: RET�NGULO\n\n\n\n");
			printf("Insira o Valor da Base: ");
			scanf("%f", &base);
			
			if(base > 0)
			{
				while(altura_valida == false)
				{
					system("cls");
					printf("PER�METRO: RET�NGULO\n\n\n\n");
					printf("Base = %.2f Metros\n\n", base);
					printf("Insira o Valor da Altura: ");
					scanf("%f", &altura);
					
					if(altura > 0)
					{
						perimetro = (base * 2) + (altura * 2);
						system("cls");
						printf("PER�METRO: RET�NGULO\n\n\n\n");
						printf("Resultado Final:\n\n\n");
						printf("Base = %.2f Metros\n\n", base);
						printf("Altura = %.2f Metros\n\n", altura);
						printf("Per�metro = %.2f Metros\n", perimetro);
						altura_valida = true;
						encerrar_modulo = true;
					}
					else
					{
						printf("Valor Inv�lido!!!\n\n");
						Sleep(1000);
					}
				}
			}
			else
			{
				printf("Valor Inv�lido!!!\n\n");
				Sleep(1000);
			}
		}
	}
	else
	{
		while(encerrar_modulo == false)
		{
			system("cls");
			printf("�REA: RET�NGULO\n\n\n\n");
			printf("Insira o Valor da Base: ");
			scanf("%f", &base);
			
			if(base > 0)
			{
				while(altura_valida == false)
				{
					system("cls");
					printf("�REA: RET�NGULO\n\n\n\n");
					printf("Base = %.2f Metros\n\n", base);
					printf("Insira o Valor da Altura: ");
					scanf("%f", &altura);
					
					if(altura > 0)
					{
						area = base * altura;
						system("cls");
						printf("�REA: RET�NGULO\n\n\n\n");
						printf("Resultado Final:\n\n\n");
						printf("Base = %.2f Metros\n\n", base);
						printf("Altura = %.2f Metros\n\n", altura);
						printf("�rea = %.2f Metros�\n", area);
						altura_valida = true;
						encerrar_modulo = true;
					}
					else
					{
						printf("Valor Inv�lido!!!\n\n");
						Sleep(1000);
					}
				}
			}
			else
			{
				printf("Valor Inv�lido!!!\n\n");
				Sleep(1000);
			}
		}
	}
}

//PER�METRO E �REA DO TRI�NGULO
void triangulo_perimetroarea_fgeo(int tipo)
{
	float lados[3], perimetro, area, base, altura;
	char escolha[3];
	int estagio = 1;
	bool encerrar_modulo = false;
	
	if(tipo == 1)
	{
		system("cls");	
		printf("PER�METRO: TRI�NGULO\n\n\n\n");
		printf("O Pol�gono Em Quest�o � Um Tri�ngulo Equil�tero (Todos Os Lados S�o Iguais) ? <S/N>\n\n");
		scanf("%s", &escolha);
		
		if(!strcmp(escolha,"S") || !strcmp(escolha,"Sim") || !strcmp(escolha,"sim"))
		{
			while(encerrar_modulo == false)
			{
				system("cls");
				printf("PER�METRO: TRI�NGULO\n\n\n\n");
				printf("Insira o Valor do Lado: ");
				scanf("%f", &lados[0]);
				
				if(lados[0] > 0)
				{
					system("cls");
					printf("PER�METRO: TRI�NGULO\n\n\n\n");
					perimetro = lados[0]*3;
					printf("Resultado Final:\n\n\n");
					printf("Lado = %.2f Metros\n\n", lados[0]);
					printf("Per�metro = %.2f Metros\n\n", perimetro);
					encerrar_modulo = true;
				}
				else
				{
					printf("Valor Inv�lido!!!\n\n");
					Sleep(1000);
				}
			}
		}
		
		if(!strcmp(escolha,"N") || !strcmp(escolha,"N�o") || !strcmp(escolha,"n�o"))
		{
			while(encerrar_modulo == false)
			{
				switch(estagio)
				{
					case 1:
						system("cls");
						printf("PER�METRO: TRI�NGULO\n\n\n\n");
						printf("Insira o Valor do 1� Lado: ");
						scanf("%f", &lados[0]);
						
						if(lados[0] > 0)
						{
							estagio = 2;
						}
						else
						{
							printf("Valor Inv�lido!!!\n\n");
							Sleep(1000);
							break;
						}
					
					case 2:
						system("cls");
						printf("PER�METRO: TRI�NGULO\n\n\n\n");
						printf("1� Lado = %.2f Metros\n\n", lados[0]);
						printf("Insira o Valor do 2� Lado: ");
						scanf("%f", &lados[1]);
						
						if(lados[1] > 0)
						{
							estagio = 3;
						}
						else
						{
							printf("Valor Inv�lido!!!\n\n");
							Sleep(1000);
							break;
						}
						
					case 3:
						system("cls");
						printf("PER�METRO: TRI�NGULO\n\n\n\n");
						printf("1� Lado = %.2f Metros\n\n", lados[0]);
						printf("2� Lado = %.2f Metros\n\n", lados[1]);
						printf("Insira o Valor do 3� Lado: ");
						scanf("%f", &lados[2]);
						
						if(lados[2] > 0)
						{
							perimetro = lados[0] + lados[1] + lados[2];
							system("cls");
							printf("PER�METRO: TRI�NGULO\n\n\n\n");
							printf("Resultado Final:\n\n\n");
							printf("1� Lado = %.2f Metros\n\n", lados[0]);
							printf("2� Lado = %.2f Metros\n\n", lados[1]);
							printf("3� Lado = %.2f Metros\n\n", lados[2]);
							printf("Per�metro = %.2f Metros\n\n", perimetro);
							encerrar_modulo = true;
						}
						else
						{
							printf("Valor Inv�lido!!!\n\n");
							Sleep(1000);
							break;
						}
				}
			}
		}	
	}
	else
	{
		while(encerrar_modulo == false)
		{
			switch(estagio)
			{
				case 1:
					system("cls");
					printf("�REA: TRI�NGULO\n\n\n\n");
					printf("Insira o Valor da Base: ");
					scanf("%f", &base);
					
					if(base > 0)
					{
						estagio = 2;
					}
					else
					{
						printf("Valor Inv�lido!!!\n\n");
						Sleep(1000);
						break;
					}
					
				case 2:
					system("cls");
					printf("�REA: TRI�NGULO\n\n\n\n");
					printf("Base = %.2f Metros\n\n", base);
					printf("Insira o Valor da Altura: ");
					scanf("%f", &altura);
					
					if(altura > 0)
					{
						area = (base * altura) / 2;
						system("cls");
						printf("�REA: TRI�NGULO\n\n\n\n");
						printf("Resultado Final:\n\n\n");
						printf("Base = %.2f Metros\n\n", base);
						printf("Altura = %.2f Metros\n\n", altura);
						printf("�rea = %.2f Metros�\n\n", area);
						encerrar_modulo = true;
						break;
					}
					else
					{
						printf("Valor Inv�lido!!!\n\n");
						Sleep(1000);
						break;
					}
			}
		}			
	}
}

//PER�METRO E �REA DO C�RCULO
void circulo_perimetroarea_fgeo(int tipo)
{
	float raio, perimetro, area;
	int i;
	bool encerrar_modulo = false;
	
	if(tipo == 1)
	{
		while(encerrar_modulo == false)
		{
			system("cls");
			printf("PER�METRO: C�RCULO\n\n\n\n");
			printf("Insira o Valor do Raio: ");
			scanf("%f", &raio);
			
			if(raio > 0)
			{
				perimetro=2*M_PI*raio;
				system("cls");
				printf("PER�METRO: C�RCULO\n\n\n\n");
				printf("Resultado Final:\n\n\n");
				printf("Raio = %.2f Metros\n\n", raio);
				printf("Per�metro = %.3f Metros\n\n", perimetro);
				encerrar_modulo = true;
			}
			else
			{
				printf("Valor Inv�lido!!!\n\n");
				Sleep(1000);
			}
		}
	}
	else
	{
		while(encerrar_modulo == false)
		{
			system("cls");
			printf("�REA: C�RCULO\n\n\n\n");
			printf("Insira o Valor do Raio: ");
			scanf("%f", &raio);
			if(raio > 0)
			{
				area = M_PI * pow(raio,2);
				system("cls");
				printf("�REA: C�RCULO\n\n\n\n");
				printf("Resultado Final:\n\n\n");
				printf("Raio = %.2f Metros\n\n", raio);
				printf("�rea = %.3f Metros�\n\n", area);
				encerrar_modulo = true;
			}
			else
			{
				printf("Valor Inv�lido!!!\n\n");
				Sleep(1000);
			}
		}
	}
}

//PER�METRO DE UMA FORMA GEOM�TRICA GEN�RICA
void outros_perimetro_fgeo()
{
	float perimetro = 0;
	int i = 0, j, quantidade_lados;
	
	system("cls");
	printf("PER�METRO: OUTROS\n\n\n\n");
	printf("Informe a Quantidade de Lados do Pol�gono: ");
	scanf("%i", &quantidade_lados);
	
	if(quantidade_lados > 2)
	{
		float lados[quantidade_lados];
		
		while(i < quantidade_lados)
		{
			system("cls");
			printf("PER�METRO: OUTROS\n\n\n\n");
			
			if((i < quantidade_lados) && (i > 0))
			{
				printf("Valor Anterior: %i� Lado = %.2f Metros\n\n", i, lados[i-1]);
			}
			if(i < quantidade_lados)
			{
				printf("Informe o Valor do %i� Lado: ", i+1);
				scanf("%f",&lados[i]);
				perimetro += lados[i];
			}
			
			if((lados[i] > 0) || (i == quantidade_lados))
			{
				i++;
			}
			else
			{
				printf("Valor Inv�lido!!!\n\n");
				Sleep(1000);
			}
			
			if(i == quantidade_lados)
			{
				system("cls");
				printf("PER�METRO: OUTROS\n\n\n\n");
				printf("Resultado Final:\n\n\n");
				
				for(j=0;j<quantidade_lados;j++)
				{
					printf("%i� Lado = %.2f Metros\n\n", j+1, lados[j]);
				}
				
				printf("Per�metro = %.2f Metros\n\n", perimetro);
			}
		}
	}
}

//M�DULO DE ESCOLHA DAS OPERA��ES DE FORMAS GEOM�TRICAS -> SESS�O PER�METRO
void perimetro_fgeo()
{
	int escolha; 
	bool encerrar_modulo = false; 
	
	system("cls");
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("PER�METRO\n\n\n\n");
		printf("OBS: Contas Realizadas em Metros - Sistema Internacional de Unidades\n\n\n");
		printf("1 - Quadrado\n\n");
		printf("2 - Ret�ngulo\n\n");
		printf("3 - Tri�ngulo\n\n");
		printf("4 - C�rculo\n\n");
		printf("5 - Outros\n\n");
		printf("0 - Voltar Para o Menu Anterior\n\n");
		printf("Selecione um Pol�gono Pr�-Determinado: ");
		scanf("%i", &escolha);
		
		switch(escolha)
		{
			//VOLTAR
			case 0:
				encerrar_modulo = true;
				operacao_finalizada = false;
				break;
				
			//QUADRADO
			case 1:
				quadrado_perimetroarea_fgeo(1);
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
			
			//RET�NGULO
			case 2:
				retangulo_perimetroarea_fgeo(1);
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
				
			//TRI�NGULO
			case 3:
				triangulo_perimetroarea_fgeo(1);
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
			
			//C�RCULO
			case 4:
				circulo_perimetroarea_fgeo(1);
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
				
			//OUTROS
			case 5:
				outros_perimetro_fgeo();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
			
			//INSER��O DE UM D�GITO INV�LIDO
			default:
				printf("Op��o Inv�lida!!!\n\n");
				Sleep(1000);
		}
	}
}
	
	// ######################################################## PER�METRO E �REA ######################################################



	// ############################################################## �REA ############################################################

//�REA DO PARALELOGRAMO
void paralelogramo_area_fgeo()
{
	float area, base, altura;
	int estagio = 1;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("�REA: PARALELOGRAMO\n\n\n\n");
		
		switch(estagio)
		{
			case 1:
				printf("Insira o Valor da Base: ");
				scanf("%f", &base);
				
				if(base > 0)
				{
					estagio = 2;
					break;
				}
				else
				{
					printf("Valor Inv�lido!!!\n\n");
					Sleep(1000);
					break;
				}
				
			case 2:
				printf("Base = %.2f Metros\n\n", base);
				printf("Insira o Valor da Altura: ");
				scanf("%f", &altura);
				
				if(altura > 0)
				{
					area = base * altura;
					system("cls");
					printf("�REA: PARALELOGRAMO\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Base = %.2f Metros\n\n", base);
					printf("Altura = %.2f Metros\n\n", altura);
					printf("�rea = %.2f Metros�\n\n", area);
					encerrar_modulo = true;
					break;
				}
				else
				{
					printf("Valor Inv�lido!!!\n\n");
					Sleep(1000);
				}
			}
		}
}

//�REA DO LOSANGO
void losango_area_fgeo()
{
	float area, diagonal_maior, diagonal_menor;
	int estagio = 1;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("�REA: LOSANGO\n\n\n\n");
		switch(estagio)
		{
			case 1:
				printf("Insira o Valor da Diagonal Maior: ");
				scanf("%f", &diagonal_maior);
				
				if(diagonal_maior > 0)
				{
					estagio = 2;
					break;
				}
				else
				{
					printf("Valor Inv�lido!!!\n\n");
					Sleep(1000);
					break;
				}
				
			case 2:
				printf("Diagonal Maior = %.2f Metros\n\n", diagonal_maior);
				printf("Insira o Valor da Diagonal Menor: ");
				scanf("%f", &diagonal_menor);
				
				if(diagonal_menor > 0)
				{
					area = (diagonal_maior * diagonal_menor) / 2;
					system("cls");
					printf("�REA: LOSANGO\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Diagonal Maior = %.2f Metros\n\n", diagonal_maior);
					printf("Diagonal Menor = %.2f Metros\n\n", diagonal_menor);
					printf("�rea = %.2f Metros�\n\n", area);
					encerrar_modulo = true;
					break;
				}
				else
				{
					printf("Valor Inv�lido!!!\n\n");
					Sleep(1000);
				}
		}
	}	
}

//�REA DO TRAP�ZIO
void trapezio_area_fgeo()
{
	float area, base_maior, base_menor, altura;
	int estagio = 1;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("�REA: TRAP�ZIO\n\n\n\n");
		
		switch(estagio)
		{
			case 1:
				printf("Insira o Valor da Base Maior: ");
				scanf("%f", &base_maior);
				
				if(base_maior > 0)
				{
					estagio = 2;
					break;
				}
				else
				{
					printf("Valor Inv�lido!!!\n\n");
					Sleep(1000);
					break;
				}
				
			case 2:
				printf("Base Maior = %.2f Metros\n\n", base_maior);
				printf("Insira o Valor da Base Menor: ");
				scanf("%f", &base_menor);
				
				if(base_menor > 0)
				{
					estagio = 3;
					break;
				}
				else
				{
					printf("Op��o Inv�lida!!!\n\n");
					Sleep(1000);
					break;
				}
				
			case 3:
				printf("Base Maior = %.2f Metros\n\n", base_maior);
				printf("Base Menor = %.2f Metros\n\n", base_menor);
				printf("Insira o Valor da Altura: ");
				scanf("%f", &altura);
				
				if(altura > 0)
				{
					area = ((base_maior + base_menor) * altura) / 2;
					system("cls");
					printf("�REA: TRAP�ZIO\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Base Maior = %.2f Metros\n\n", base_maior);
					printf("Base Menor = %.2f Metros\n\n", base_menor);
					printf("Altura = %.2f Metros\n\n", altura);
					printf("�rea = %.2f Metros�\n\n", area);
					encerrar_modulo = true;
					break;
				}
				else
				{
					printf("Op��o Inv�lida!!!\n\n");
					Sleep(1000);
					break;
				}
		}
	}
}

//M�DULO DE ESCOLHA DAS OPERA��ES DE FORMAS GEOM�TRICAS -> SESS�O �REA
void area_fgeo()
{
	int escolha;
	bool encerrar_modulo = false; 
	
	system("cls");
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("�REA\n\n\n\n");
		printf("OBS: Contas Realizadas em Metros Quadrados - Sistema Internacional de Unidades\n\n\n");
		printf("1 - Quadrado\n\n");
		printf("2 - Ret�gulo\n\n");
		printf("3 - Tri�ngulo\n\n");
		printf("4 - Paralelogramo\n\n");
		printf("5 - Losango\n\n");
		printf("6 - Trap�zio\n\n");
		printf("7 - C�rculo\n\n");
		printf("0 - Voltar Para o Menu Anterior\n\n");
		printf("Selecione um Pol�gono Pr�-Determinado: ");
		scanf("%i", &escolha);
		
		switch(escolha)
		{
			//VOLTAR
			case 0:
				encerrar_modulo = true;
				operacao_finalizada = false;
				break;
					
			//QUADRADO
			case 1:
				quadrado_perimetroarea_fgeo(2);
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
				
			//RET�NGULO
			case 2:
				retangulo_perimetroarea_fgeo(2);
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
					
			//TRI�NGULO
			case 3:
				triangulo_perimetroarea_fgeo(2);
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
				
			//PARALELOGRAMO
			case 4:
				paralelogramo_area_fgeo();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
					
			//LOSANGO
			case 5:
				losango_area_fgeo();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
					
			//TRAP�ZIO
			case 6:
				trapezio_area_fgeo();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
				
			//C�RCULO
			case 7:
				circulo_perimetroarea_fgeo(2);
				encerrar_modulo = true;
				operacao_finalizada = true;
			
			//INSER��O DE UM D�GITO INV�LIDO
			default:
				printf("Op��o Inv�lida!!!\n\n");
				Sleep(1000);
		}
	}
}
	
	// ############################################################## �REA ############################################################
	
	
	
	// ############################################################## VOLUME ##########################################################

//VOLUME DO CUBO
void cubo_volume()
{
	int estagio = 1;
	float lado, profundidade, volume;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("VOLUME: CUBO\n\n\n\n");
		
		switch(estagio)
		{
			//CAPTURA DO VALOR DO LADO
			case 1:
				printf("Insira o Valor do Lado: ");
				scanf("%f", &lado);
				
				if(lado > 0) //VERIFICANDO SE O VALOR DO LADO � POSITIVO
				{
					estagio = 2;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA O LADO
				{
					printf("Op��o Inv�lida!!!\n\n");
					Sleep(1000);
					break;
				}
			
			//CAPTURA DO VALOR DA PROFUNDIDADE
			case 2:
				printf("Lado = %.2f Metros\n\n", lado);
				printf("Insira o Valor da Profundidade: ");
				scanf("%f", &profundidade);
				
				if(profundidade > 0) //VERIFICANDO SE O VALOR DA PROFUNDIDADE � POSITIVO
				{
					volume = lado * lado * profundidade;
					system("cls");
					printf("VOLUME: CUBO\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Lado = %.2f Metros\n\n", lado);
					printf("Profundidade = %.2f Metros\n\n", profundidade);
					printf("Volume = %.2f Metros�\n\n", volume);
					encerrar_modulo = true;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA A PROFUNDIDADE
				{
					printf("Op��o Inv�lida!!!\n\n");
					Sleep(1000);
					break;
				}	
		}
	}
}

//VOLUME DO PARALELEP�PEDO
void paralelepipedo_volume()
{
	int estagio = 1;
	float comprimento, largura, altura, volume;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("VOLUME: PARALELEP�PEDO\n\n\n\n");
		
		switch(estagio)
		{
			//CAPTURA DO VALOR DO COMPRIMENTO
			case 1:
				printf("Insira o Valor do Comprimento: ");
				scanf("%f", &comprimento);
				
				if(comprimento > 0) //VERIFICANDO SE O VALOR DO COMPRIMENTO � POSITIVO
				{
					estagio = 2;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA O COMPRIMENTO
				{
					printf("Valor Inv�lido!!!\n\n");
					Sleep(1000);
					break;
				}
				
			//CAPTURA DO VALOR DA LARGURA
			case 2:
				printf("Comprimento = %.2f Metros\n\n", comprimento);
				printf("Insira o Valor da Largura: ");
				scanf("%f", &largura);
				
				if(largura > 0) //VERIFICANDO SE O VALOR DA LARGURA � POSITIVO
				{
					estagio = 3;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA A LARGURA
				{
					printf("Valor Inv�lido!!!\n\n");
					Sleep(1000);
					break;
				}
				
			//CAPTURA DO VALOR DA ALTURA
			case 3:
				printf("Comprimento = %.2f Metros\n\n", comprimento);
				printf("Largura = %.2f Metros\n\n", largura);
				printf("Insira o Valor da Altura: ");
				scanf("%f", &altura);
				
				if(altura > 0) //VERIFICANDO SE O VALOR DA ALTURA � POSITIVO
				{
					volume = comprimento * largura * altura;
					system("cls");
					printf("VOLUME: PARALELEP�PEDO\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Comprimento = %.2f Metros\n\n", comprimento);
					printf("Largura = %.2f Metros\n\n", largura);
					printf("Altura = %.2f Metros\n\n", altura);
					printf("Volume = %.2f Metros�", volume);				
					encerrar_modulo = true;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA A ALTURA
				{
					printf("Valor Inv�lido!!!\n\n");
					Sleep(1000);
					break;
				}
				
		}
	}
}

//VOLUME DA PIR�MIDE
void piramide_volume()
{
	int estagio = 1;
	float area_base, altura, volume;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("VOLUME: PIR�MIDE\n\n\n\n");
		
		switch(estagio)
		{
			//CAPTURA DO VALOR DA �REA DA BASE
			case 1:
				printf("Insira o Valor da �rea da Base: ");
				scanf("%f", &area_base);
				
				if(area_base > 0) //VERIFICANDO SE O VALOR DA �REA DA BASE � POSITIVO
				{
					estagio = 2;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA A �REA DA BASE
				{
					printf("Op��o Inv�lida!!!\n\n");
					Sleep(1000);
					break;
				}
			
			//CAPTURA DO VALOR DA ALTURA
			case 2:
				printf("�rea da Base = %.2f Metros�\n\n", area_base);
				printf("Insira o Valor da Altura: ");
				scanf("%f", &altura);
				
				if(altura > 0) //VERIFICANDO SE O VALOR DA ALTURA � POSITIVO
				{
					volume = (area_base * altura) / 3;
					system("cls");
					printf("VOLUME: PIR�MIDE\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("�rea da Base = %.2f Metros�\n\n", area_base);
					printf("Altura = %.2f Metros\n\n", altura);
					printf("Volume = %.2f Metros�\n\n", volume);
					encerrar_modulo = true;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA A ALTURA
				{
					printf("Op��o Inv�lida!!!\n\n");
					Sleep(1000);
					break;
				}
		}
	}
}

//VOLUME DO CONE
void cone_volume()
{
	int estagio = 1;
	float raio, altura, volume;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("VOLUME: CONE\n\n\n\n");
		
		switch(estagio)
		{
			//CAPTURANDO O VALOR DO RAIO
			case 1:
				printf("Insira o Valor do Raio: ");
				scanf("%f", &raio);
				
				if(raio > 0) //VERIFICA��O SE O RAIO TEM VALOR POSITIVO
				{
					estagio = 2;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA O RAIO
				{
					printf("Valor Inv�lido!!!\n\n");
					Sleep(1000);
					break;
				}
				
			//CAPTURANDO O VALOR DA ALTURA
			case 2:
				printf("Raio = %.2f Metros\n\n", raio);
				printf("Insira o Valor da Altura: ");
				scanf("%f", &altura);
				
				if(altura > 0) //VERIFICA��O SE A ALTURA TEM VALOR POSITIVO
				{
					volume = (M_PI * pow(raio,2) * altura)/3;
					system("cls");
					printf("VOLUME: CONE\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Raio = %.2f Metros\n\n", raio);
					printf("Altura = %.2f Metros\n\n", altura);
					printf("Volume = %.2f Metros�\n\n", volume);
					encerrar_modulo = true;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA A ALTURA
				{
					printf("Op��o Inv�lida!!!\n\n");
					Sleep(1000);
					break;
				}
				
		}
	}
}

//VOLUME DO CILINDRO
void cilindro_volume()
{
	int estagio = 1;
	float raio, altura, volume;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("VOLUME: CILINDRO\n\n\n\n");
		
		switch(estagio)
		{
			//CAPTURA DO VALOR DO RAIO
			case 1:
				printf("Insira o Valor do Raio: ");
				scanf("%f",&raio);
				
				if(raio > 0) //VERIFICA��O SE O RAIO TEM VALOR POSITIVO
				{
					estagio = 2;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA O RAIO
				{
					printf("Valor Inv�lido!!!\n\n");
					Sleep(1000);
					break;
				}
			
			//CAPTURA DO VALOR DA ALTURA
			case 2:
				printf("Raio = %.2f Metros\n\n", raio);
				printf("Insira o Valor da Altura: ");
				scanf("%f", &altura);
				
				if(altura > 0) //VERIFICA��O SE A ALTURA TEM VALOR POSITIVO
				{
					volume = M_PI * pow(raio,2) * altura;
					
					system("cls");
					printf("VOLUME: CILINDRO\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Raio = %.2f Metros\n\n", raio);
					printf("Altura = %.2f Metros\n\n", altura);
					printf("Volume = %.2f Metros�\n\n", volume);
					encerrar_modulo = true;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA A ALTURA
				{
					printf("Op��o Inv�lida!!!\n\n");
					Sleep(1000);
					break;
				}
				
		}
	}
}

//VOLUME DA ESFERA
void esfera_volume()
{
	float raio, volume;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("VOLUME: ESFERA\n\n\n\n");
		printf("Insira o Valor do Raio: ");
		scanf("%f", &raio);
		
		//CAPTURA DO VALOR DO RAIO
		if(raio > 0) //VERIFICA��O SE O RAIO TEM VALOR POSITIVO
		{
			volume = (4*M_PI*pow(raio,3))/3;
			system("cls");
			printf("VOLUME: ESFERA\n\n\n\n");
			printf("Resultado Final:\n\n\n");
			printf("Raio = %.2f Metros\n\n", raio);
			printf("Volume = %.2f Metros�\n\n", volume);
			encerrar_modulo = true;
		}
		else //VALOR NEGATIVO INFORMADO PARA O RAIO
		{
			printf("Valor Inv�lido!!!\n\n");
			Sleep(1000);
		}
	}
}

//M�DULO DE ESCOLHA DAS OPERA��ES DE FORMAS GEOM�TRICAS -> SESS�O VOLUME
void volume_fgeo()
{
	int escolha, encerrar_modulo = false; 
	
	system("cls");
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("VOLUME\n\n\n\n");
		printf("OBS: Contas Realizadas em Metros C�bicos - Sistema Internacional de Unidades\n\n\n");
		printf("1 - Cubo\n\n");
		printf("2 - Paralelep�pedo\n\n");
		printf("3 - Pir�mide\n\n");
		printf("4 - Cone\n\n");
		printf("5 - Cilindro\n\n");
		printf("6 - Esfera\n\n");
		printf("0 - Voltar Para o Menu Anterior\n\n");
		printf("Selecione um Pol�gono Pr�-Determinado: ");
		scanf("%i", &escolha);
		
		switch(escolha)
		{
			//VOLTAR
			case 0:
				encerrar_modulo = true;
				operacao_finalizada = false;
				break;
				
			//CUBO
			case 1:
				cubo_volume();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
					
			//PARALELEPIPEDO
			case 2:
				paralelepipedo_volume();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
					
			//PIR�MIDE
			case 3:
				piramide_volume();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
					
			//CONE
			case 4:
				cone_volume();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
					
			//CILINDRO
			case 5:
				cilindro_volume();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
					
			//ESFERA
			case 6:
				esfera_volume();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
			
			//INSER��O DE UM D�GITO INV�LIDO
			default:
				printf("Op��o Inv�lida!!!\n\n");
				Sleep(1000);
		}
	}
}

	// ############################################################## VOLUME ##########################################################

// *************************************************************** FORMAS GEOM�TRICAS *******************************************************



// ****************************************************************** CONVERSOR *************************************************************

//M�DULO DE CONVERS�O DE BIN�RIO PARA DECIMAL
void bi_de()
{
	int bi[8], n = 0, i;
	
	for(i=0;i<=7;i++)
	{
		system("cls");
		printf("CONVERS�O BIN�RIO -> DECIMAL\n\n\n\n");
		printf("OBS: Insira Algarismo Por Algarismo\n\n\n");
		if(i == 0)
		{	
			printf("Insira o N�mero: ");
			scanf("%i", &bi[i]);
		}
		if(i == 1)
		{
			printf("Insira o N�mero: %i", bi[0]);
			scanf("%i", &bi[i]);
		}
		if(i == 2)
		{
			printf("Insira o N�mero: %i%i", bi[0], bi[1]);
			scanf("%i", &bi[i]);
		}
		if(i == 3)
		{
			printf("Insira o N�mero: %i%i%i", bi[0], bi[1], bi[2]);
			scanf("%i", &bi[i]);
		}
		if(i == 4)
		{
			printf("Insira o N�mero: %i%i%i%i", bi[0], bi[1], bi[2], bi[3]);
			scanf("%i", &bi[i]);
		}
		if(i == 5)
		{
			printf("Insira o N�mero: %i%i%i%i%i", bi[0], bi[1], bi[2], bi[3], bi[4]);
			scanf("%i", &bi[i]);
		}
		if(i == 6)
		{
			printf("Insira o N�mero: %i%i%i%i%i%i", bi[0], bi[1], bi[2], bi[3], bi[4], bi[5]);
			scanf("%i", &bi[i]);
		}
		if(i == 7)
		{
			printf("Insira o N�mero: %i%i%i%i%i%i%i", bi[0], bi[1], bi[2], bi[3], bi[4], bi[5], bi[6]);
			scanf("%i", &bi[i]);
		}
	}
	
	for(i=7;i>=0;i--)
	{
		if(bi[i]==1)
		{
			n += pow(2, 7-i);
		}
	}
	
	system("cls");
	printf("CONVERS�O BIN�RIO -> DECIMAL\n\n\n\n");
	printf("N�mero Bin�rio: %i%i%i%i%i%i%i%i\n\n\n", bi[0], bi[1], bi[2], bi[3], bi[4], bi[5], bi[6], bi[7]);
	printf("N�mero Decimal: %i\n\n", n);
}

//M�DULO DE CONVERS�O DE DECIMAL PARA BIN�RIO
void de_bi()
{
	int n, np, i, resto[8];
	
	system("cls");
	printf("CONVERS�O DECIMAL -> BIN�RIO\n\n\n\n");
	printf("Insira o N�mero: ");
	scanf("%i", &n);
	np = n;
	
	for(i=7;i>=0;i--)
	{
		resto[i] = n % 2;
		n = n / 2;
	}
	
	system("cls");
	printf("CONVERS�O DECIMAL -> BIN�RIO\n\n\n\n");
	printf("N�mero Decimal: %i\n\n\n", np);
	printf("N�mero Bin�rio: %i%i%i%i%i%i%i%i\n\n", resto[0], resto[1], resto[2], resto[3], resto[4], resto[5], resto[6], resto[7]);
}

//M�DULO DE CONVERS�O DE HEXADECIMAL PARA BIN�RIO
void hexa_bi()
{
	int n, np, i, resto[8];
	
	system("cls");
	printf("CONVERS�O HEXADECIMAL -> BIN�RIO\n\n\n\n");
	printf("Insira o N�mero: ");
	scanf("%x", &n);
	np=n;
	
	for(i=7;i>=0;i--)
	{
		resto[i] = n % 2;
		n = n / 2;
	}
	
	system("cls");
	printf("CONVERS�O DECIMAL -> BIN�RIO\n\n\n\n");
	printf("N�mero Hexadecimal: %x\n\n\n", np);
	printf("N�mero Bin�rio: %i%i%i%i%i%%i%i\n\n", resto[0], resto[1], resto[2], resto[3], resto[4], resto[5], resto[6], resto[7]);
}

//M�DULO DE CONVERS�O DE BIN�RIO PARA HEXADECIMAL
void bi_hexa()
{
	int bi[8], n=0, i;
	
	for(i=0;i<=7;i++)
	{
		system("cls");
		printf("CONVERS�O BIN�RIO -> HEXADECIMAL\n\n\n\n");
		printf("OBS: Insira Algarismo Por Algarismo\n\n\n");
		if(i == 0)
		{
			
			printf("Insira o N�mero: ");
			scanf("%i", &bi[i]);
		}
		if(i == 1)
		{
			printf("Insira o N�mero: %i", bi[0]);
			scanf("%i", &bi[i]);
		}
		if(i == 2)
		{
			printf("Insira o N�mero: %i%i", bi[0], bi[1]);
			scanf("%i", &bi[i]);
		}
		if(i == 3)
		{
			printf("Insira o N�mero: %i%i%i", bi[0], bi[1], bi[2]);
			scanf("%i", &bi[i]);
		}
		if(i == 4)
		{
			printf("Insira o N�mero: %i%i%i%i", bi[0], bi[1], bi[2], bi[3]);
			scanf("%i", &bi[i]);
		}
		if(i == 5)
		{
			printf("Insira o N�mero: %i%i%i%i%i", bi[0], bi[1], bi[2], bi[3], bi[4]);
			scanf("%i",&bi[i]);
		}
		if(i == 6)
		{
			printf("Insira o N�mero: %i%i%i%i%i%i", bi[0], bi[1], bi[2], bi[3], bi[4], bi[5]);
			scanf("%i", &bi[i]);
		}
		if(i == 7)
		{
			printf("Insira o N�mero: %i%i%i%i%i%i%i", bi[0], bi[1], bi[2], bi[3], bi[4], bi[5], bi[6]);
			scanf("%i", &bi[i]);
		}
	}
	
	for(i=7;i>=0;i--)
	{
		if(bi[i] == 1)
		{
			n += pow(2, 7-i);
		}
	}
	
	system("cls");
	printf("CONVERS�O BIN�RIO -> HEXADECIMAL\n\n\n\n");
	printf("N�mero Bin�rio: %i%i%i%i%i%i%i%i\n\n\n", bi[0], bi[1], bi[2], bi[3], bi[4], bi[5], bi[6], bi[7]);
	printf("N�mero Hexadecimal: %x\n\n", n);
}

//M�DULO DE CONVERS�O DE HEXADECIMAL PARA DECIMAL
void hexa_de()
{
	int n;
	
	system("cls");
	printf("CONVERS�O HEXADECIMAL -> DECIMAL\n\n\n\n");
	printf("Insira o N�mero: ");
	scanf("%x", &n);
	system("cls");
	printf("CONVERS�O HEXADECIMAL -> DECIMAL\n\n\n\n");
	printf("N�mero Hexadecimal: %x\n\n\n", n);
	printf("N�mero Decimal: %i\n\n", n);
}

//M�DULO DE CONVERS�O DE DECIMAL PARA HEXADECIMAL
void de_hexa()
{
	int n;
	
	system("cls");
	printf("CONVERS�O DECIMAL -> HEXADECIMAL\n\n\n\n");
	printf("Insira o N�mero: ");
	scanf("%i", &n);
	system("cls");
	printf("CONVERS�O DECIMAL -> HEXADECIMAL\n\n\n\n");
	printf("N�mero Decimal: %i\n\n\n", n);
	printf("N�mero Hexadecimal: %x\n\n", n);
}

// ****************************************************************** CONVERSOR *************************************************************


//M�DULO DE ESCOLHA DAS OPERA��ES ARITM�TICAS
void operacoes_aritmeticas()
{
	int escolha; 
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		
		printf("MENU: OPERA��ES B�SICAS\n\n\n");
		printf("1 - Soma\n\n");
		printf("2 - Subtra��o\n\n");
		printf("3 - Multiplica��o\n\n");
		printf("4 - Divis�o\n\n");
		printf("5 - Pot�ncia\n\n");
		printf("6 - Raiz\n\n");
		printf("7 - Logaritmo\n\n");
		printf("0 - Retornar Ao Menu Inicial\n\n");
		printf("Escolha a Opera��o Desejada: ");
		scanf("%i", &escolha);
		
		switch(escolha)
		{
			//RETORNAR AO MENU INICIAL
			case 0:
				encerrar_modulo = true;
				operacao_finalizada = false;
				break;
				
			//SOMA
			case 1:
				soma_operacoes();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
			
			//SUBTRA��O		
			case 2:
				subtracao_operacoes();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
					
			//MULTIPLICA��O
			case 3:
				multiplicacao_operacoes();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
				
			//DIVIS�O
			case 4:
				divisao_operacoes();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
			
			//POT�NCIA
			case 5:
				potencia_operacoes();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
			
			//RAIZ	
			case 6:
				raiz_operacoes();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
			
			//LOGARITMO
			case 7:
				logaritmo_operacoes();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
			
			//INSER��O DE UM D�GITO INV�LIDO
			default:
				encerrar_modulo = false;
				printf("Op��o Inv�lida!!!");
				Sleep(1000);
		}
	}
}

//M�DULO DE ESCOLHA DAS OPERA��ES DE FORMAS GEOM�TRICAS
void formas_geometricas()
{
	int escolha;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		
		printf("MENU: C�LCULOS DE FORMAS GEOM�TRICAS\n\n\n\n");
		printf("1 - Per�metro\n\n");
		printf("2 - �rea\n\n");
		printf("3 - Volume\n\n");
		printf("0 - Retornar ao Menu Inicial\n\n");
		printf("Escolha a Opera��o Desejada: ");
		scanf("%i", &escolha);
		
		switch(escolha)
		{
			//VOLTAR
			case 0:
				encerrar_modulo = true;
				operacao_finalizada = false;
				break;
				
			//PER�METRO
			case 1:
				perimetro_fgeo();
				if(operacao_finalizada == true)
				{
					encerrar_modulo = true;
				}
				break;
			
			//�REA
			case 2:
				area_fgeo();
				if(operacao_finalizada == true)
				{
					encerrar_modulo = true;
				}
				break;
			
			//VOLUME
			case 3:
				volume_fgeo();
				if(operacao_finalizada == true)
				{
					encerrar_modulo = true;
				}
				break;
			
			//INSER��O DE UM D�GITO INV�LIDO
			default:
				printf("Op��o Inv�lida!!!\n\n");
				Sleep(1000);
		}
	}
}

//M�DULO DE ESCOLHA DA OPERA��O DE CONVERS�O
void conversor()
{
	int escolha1, escolha2, estagio = 1;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		//PRIMEIRA ESCOLHA
		if(estagio == 1)
		{
			system("cls");
			printf("MENU: CONVERSOR BIN�RIO/DECIMAL/HEXADECIMAL\n\n\n\n");
			printf("Selecione os Respectivos N�meros Que Representam Cada Tipo Para Escolher o Tipo de Convers�o\n\n");
			printf("1 - Bin�rio 	| 	2 - Decimal 	| 	3 - Hexadecimal");
			printf("\n\nDe: ");
			scanf("%i",&escolha1);
			
			if((escolha1 >= 1) && (escolha1 <= 3)) //ESCOLHA 1 V�LIDA
			{
				estagio = 2;
			}
			else //ESCOLHA 1 INV�LIDA
			{
				printf("Op��o Inv�lida!!!\n\n");
				Sleep(1000);
			}
		}
		
		//SEGUNDA ESCOLHA
		if(estagio == 2)
		{
			system("cls");
			printf("MENU: CONVERSOR BIN�RIO/DECIMAL/HEXADECIMAL\n\n\n\n");
			printf("Selecione os Respectivos N�meros Que Representam Cada Tipo Para Escolher o Tipo de Convers�o\n\n");
			printf("1 - Bin�rio 	| 	2 - Decimal 	| 	3 - Hexadecimal");
			printf("\n\nDe: %i\n\n", escolha1);
			
			printf("Para: ");
			scanf("%i", &escolha2);
			
			if((escolha2 >= 1) && (escolha2 <= 3) && (escolha2 != escolha1)) //ESCOLHA 2 V�LIDA
			{
				switch(escolha1)
				{
					//BIN�RIO
					case 1:
						if(escolha2 == 2) //PARA DECIMAL
						{
							bi_de();
							encerrar_modulo = true;
							operacao_finalizada = true;
						}
						else //PARA HEXADECIMAL
						{
							bi_hexa();
							encerrar_modulo = true;
							operacao_finalizada = true;
						}
						break;
					
					//DECIMAL
					case 2:
						if(escolha2 == 1) //PARA BIN�RIO
						{
							de_bi();
							encerrar_modulo = true;
							operacao_finalizada = true;
						}
						else //PARA HEXADECIMAL
						{
							de_hexa();
							encerrar_modulo = true;
							operacao_finalizada = true;
						}
						break;
					
					//HEXADECIMAL
					case 3:
						if(escolha2 == 1) //PARA BIN�RIO
						{
							hexa_bi();
							encerrar_modulo = true;
							operacao_finalizada = true;
						}
						else //PARA DECIMAL
						{
							hexa_de();
							encerrar_modulo = true;
							operacao_finalizada = true;
						}
						break;
				}
			}
			else //ESCOLHA 2 INV�LIDA
			{
				printf("Op��o Inv�lida!!!\n\n");
				Sleep(1000);
			}
		}
	}
}

//M�DULO PRINCIPAL - TELA DE SELE��O
main()
{
	int escolha, voltar_encerrar;
	bool encerrar = false;
	
	setlocale(LC_ALL,"Portuguese");
	
	while(encerrar == false)
	{	
		system("cls");	
		printf("CALCULADORA UNIVERSAL\n\n\n\n");
		printf("MENU INICIAL:\n\n\n");
		printf("1 - Opera��es Aritm�ticas\n\n");
		printf("2 - C�lculos de Formas Geom�tricas\n\n");
		printf("3 - Conversor Bin�rio/Decimal/Hexadecimal\n\n");
		printf("0 - Sair do Programa\n\n");
		printf("Escolha a Op��o Desejada: ");
		scanf("%i",&escolha);
		
		switch(escolha)
		{
			
			//CHAMADA PELO M�DULO DE OPERA��ES ARITM�TICAS
			case 1:
				operacoes_aritmeticas();
				break;
			
			//CHAMADA PELO M�DULO DE FORMAS GEOM�TRICAS
			case 2:
				formas_geometricas();
				break;
				
			//CHAMADA PELO M�DULO DE CONVERS�ES
			case 3:
				conversor();
				break;
				
			//ENCERRAR PROGRAMA
			case 0:
				encerrar = true;
				break;
			
			//INSER��O DE UM DIGITO INV�LIDO
			default:	
				printf("Op��o Inv�lida!!!\n\n");
				Sleep(1000);
		}
		
		//FINALIZA��O DE UMA FUN��O COM OP��O DE FECHAR O PROGRAMA OU RETORNAR AO MENU INICIAL
		if((escolha >= 1) && (escolha <= 3) && (operacao_finalizada == true))
		{
			operacao_finalizada = false;
			
			printf("\n\nDigite 1 Para Voltar ao Menu Inicial | Digite 0 Para Fechar o Programa\n\n");
			scanf("%i", &voltar_encerrar);
			if(voltar_encerrar == 0)
			{
				encerrar = true;
			}
		}
	}
}
