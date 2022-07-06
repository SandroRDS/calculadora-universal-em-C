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

// ***************************************************************** OPERAÇÕES ARITMÉTICAS ***********************************************************

//OPERAÇÃO DE SOMA
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
			printf("Informe a Quantidade De Números Que Serão Somados: ");
			scanf("%i", &quantidade_operandos);
			
			//USUÁRIO INFORMOU UMA QUANTIDADE DE OPERANDOS MENOR QUE 2 -> FINALIZAÇÃO DA OPERAÇÃO
			if(quantidade_operandos <= 1)
			{
				operacao_finalizada = true;
				break;
			}
		}
		
		//USUÁRIO INFORMOU UMA QUANTIDADE DE OPERANDOS MAIOR QUE 1
		if(quantidade_operandos > 1)
		{
			system("cls");
			printf("SOMA\n\n\n\n");
			printf("Insira Abaixo Os Termos Da Operação\n\n\n");
			
			//CAPTURA DOS OPERANDOS
			if(i <= quantidade_operandos)
			{
				
				//RESULTADO PROVISÓRIO APÓS 2 OPERANDOS INFORMADOS
				if(i > 2)
				{
					printf("Resultado Provisório = %.2f\n\n", soma);
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

//OPERAÇÃO DE SUBTRAÇÃO
void subtracao_operacoes()
{
	float subtracao = 0, novo_operando, operandos[100];
	int quantidade_operandos = 1;
	
	system("cls");
	printf("SUBTRAÇÃO\n\n\n\n");
		
	for(i=1;i<=quantidade_operandos;i++)
	{	
		//PRIMEIRO LOOP, CAPTURA DA QUANTIDADE DE OPERANDOS PARA SUBTRAIR
		if(i == 1)
		{
			printf("Informe a Quantidade De Números Que Serão Subtraídos: ");
			scanf("%i", &quantidade_operandos);
			
			//USUÁRIO INFORMOU UMA QUANTIDADE DE OPERANDOS MENOR QUE 2 -> FINALIZAÇÃO DA OPERAÇÃO
			if(quantidade_operandos <= 1)
			{
				operacao_finalizada = true;
				break;
			}
		}
		
		//USUÁRIO INFORMOU UMA QUANTIDADE DE OPERANDOS MAIOR QUE 1
		if(quantidade_operandos > 1)
		{
			system("cls");
			printf("SUBTRAÇÃO\n\n\n\n");
			printf("Insira Abaixo Os Termos Da Operação\n\n\n");
			
			//CAPTURA DOS OPERANDOS
			if(i <= quantidade_operandos)
			{
				
				//RESULTADO PROVISÓRIO APÓS 2 OPERANDOS INFORMADOS
				if(i > 2)
				{
					printf("Resultado Provisório = %.2f\n\n", subtracao);
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
				printf("SUBTRAÇÃO\n\n\n\n");
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

//OPERAÇÃO DE MULTIPLICAÇÃO
void multiplicacao_operacoes()
{
	float multiplicacao = 1, novo_operando, operandos[100];
	int quantidade_operandos = 1;
	
	system("cls");
	printf("MULTIPLICAÇÃO\n\n\n\n");
		
	for(i=1;i<=quantidade_operandos;i++)
	{
		//PRIMEIRO LOOP, CAPTURA DA QUANTIDADE DE OPERANDOS PARA MULTIPLICAR
		if(i == 1)
		{
			printf("Informe a Quantidade De Números Que Serão Multiplicados: ");
			scanf("%i", &quantidade_operandos);
			
			//USUÁRIO INFORMOU UMA QUANTIDADE DE OPERANDOS MENOR QUE 2 -> FINALIZAÇÃO DA OPERAÇÃO
			if(quantidade_operandos <= 1)
			{
				operacao_finalizada = true;
				break;
			}
		}
		
		//USUÁRIO INFORMOU UMA QUANTIDADE DE OPERANDOS MAIOR QUE 1
		if(quantidade_operandos > 1)
		{
			system("cls");
			printf("MULTIPLICAÇÃO\n\n\n\n");
			printf("Insira Abaixo Os Termos Da Operação\n\n\n");
			
			//CAPTURA DOS OPERANDOS
			if(i <= quantidade_operandos)
			{
				//RESULTADO PROVISÓRIO APÓS 2 OPERANDOS INFORMADOS
				if(i > 2)
				{
					printf("Resultado Provisório = %.2f\n\n", multiplicacao);
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
				printf("MULTIPLICAÇÃO\n\n\n\n");
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

//OPERAÇÃO DE DIVISÃO
void divisao_operacoes()
{
	float divisao = 0, novo_operando, operandos[100];
	int quantidade_operandos = 1;
	
	system("cls");
	printf("DIVISÃO\n\n\n\n");
		
	for(i=1;i<=quantidade_operandos;i++)
	{	
		//PRIMEIRO LOOP, CAPTURA DA QUANTIDADE DE OPERANDOS PARA DIVIDIR
		if(i == 1)
		{
			printf("Informe a Quantidade De Números Que Serão Divididos: ");
			scanf("%i", &quantidade_operandos);
			
			//USUÁRIO INFORMOU UMA QUANTIDADE DE OPERANDOS MENOR QUE 2 -> FINALIZAÇÃO DA OPERAÇÃO
			if(quantidade_operandos <= 1)
			{
				operacao_finalizada = true;
				break;
			}
		}
		
		//USUÁRIO INFORMOU UMA QUANTIDADE DE OPERANDOS MAIOR QUE 1
		if(quantidade_operandos > 1)
		{
			system("cls");
			printf("DIVISÃO\n\n\n\n");
			printf("Insira Abaixo Os Termos Da Operação\n\n\n");
			
			//CAPTURA DOS OPERANDOS
			if(i <= quantidade_operandos)
			{
				
				//RESULTADO PROVISÓRIO APÓS 2 OPERANDOS INFORMADOS
				if(i > 2)
				{
					printf("Resultado Provisório = %.2f\n\n", divisao);
				}
				
				//CAPTURA DO VALOR DE UM NOVO OPERANDO
				printf("Digite Aqui: ");
				scanf("%f", &novo_operando);
								
				if((novo_operando != 0) || (i == 1)) //VERIFICAÇÃO SE O OPERANDO INFORMADO É DIFERENTE DE ZERO OU É O PRIMEIRO NÚMERO A SER DIVIDIDO
				{
					divisao = i==1 ? novo_operando : divisao / novo_operando;
					operandos[i-1] = novo_operando;	
				}
				else //TENTATIVA DE DIVISÃO POR 0
				{
					printf("\nNão é possível dividir um número por 0!!!");
					i--;
					Sleep(1000);
				}
			}
			
			//TODOS OS OPERANDOS FORAM INFORMADOS
			if(i == quantidade_operandos)
			{
				system("cls");
				printf("DIVISÃO\n\n\n\n");
				printf("\nResultado Final = %.2f", operandos[0]);
				
				//MOSTRANDO TODOS OS OPERANDOS INFORMADOS
				for(j=1;j<quantidade_operandos;j++)
				{
					printf(" ÷ %.2f", operandos[j]);
				}
				
				//MOSTRANDO O RESULTADO FINAL
				printf(" = %.2f\n\n", divisao);
			}
		}
	}
}

//OPERAÇÃO DE POTÊNCIA
void potencia_operacoes()
{
	float potencia, base, expoente;
	
	system("cls");
	printf("POTÊNCIA\n\n\n\n");
	
	//CAPTURANDO O VALOR DA BASE
	printf("Insira o Valor da Base: ");
	scanf("%f", &base);
	
	system("cls");
	printf("POTÊNCIA\n\n\n\n");
	printf("Base = %.1f\n\n", base);
	
	//CAPTURANDO O VALOR DO EXPOENTE
	printf("\nInforme o Valor do Expoente: ");
	scanf("%f", &expoente);
	
	potencia = pow(base,expoente);
	
	system("cls");
	printf("POTÊNCIA\n\n\n\n");
	
	//MOSTRANDO O RESULTADO FINAL E OS OPERANDOS 
	printf("Resultado Final:\n\n\n");
	printf("Base = %.1f\n\n", base);
	printf("Expoente = %.1f\n\n", expoente);
	printf("Resultado Final = %.2f\n\n", potencia);
}

//OPERAÇÃO DE RAIZ
void raiz_operacoes()
{
	
	float indice, radicando, raiz;
	bool encerrar_modulo = false, radicando_valido = false, indice_valido = false;
	
	while(encerrar_modulo == false)
	{
		//VALIDANDO O ÍNDICE DA RAIZ
		if(indice_valido == false)
		{
			system("cls");
			printf("RAIZ\n\n\n\n");
			printf("OBS: O Valor do Índice Deve Ser Inteiro e Maior Que 0!\n\n\n");
			printf("Insira o Valor Do Índice Da Raiz: ");
			scanf("%f", &indice);
		}
		
		//ÍNDICE VÁLIDO INFORMADO
		if(indice > 0)
		{
			indice_valido = true;	
			
			while(radicando_valido == false)
			{
				system("cls");
				printf("RAIZ\n\n\n\n");
				printf("OBS: Caso o Índice Seja Par, o Valor do Radicando Não Pode Ser Negativo! <Cálculo Efetuado Em R>\n\n\n");
				printf("Índice = %.0f\n\n", indice);
				
				printf("Insira o Valor do Radicando da Raiz: ");
				scanf("%f", &radicando);
				
				//ÍNDICE PAR
				if(fmod(indice,2) == 0)
				{
					if(radicando >= 0) //RADICANDO POSITIVO -> EFETUAÇÃO DO CÁLCULO
					{
						raiz = pow(radicando, 1/indice);
						
						system("cls");
						printf("RAIZ\n\n\n\n");
						
						//MOSTRANDO O RESULTADO FINAL
						printf("Resultado Final:\n\n\n");
						printf("Índice = %.0f\n\n", indice);
						printf("Radicando = %.2f\n\n", radicando);
						printf("Raiz = %.4f\n\n", raiz);
						
						radicando_valido = true;
						encerrar_modulo = true;
					}
					else //RADICANDO NEGATIVO -> VALOR INVÁLIDO
					{
						printf("\n\nValor Inválido!!!");
						Sleep(1000);
					}
				}
				else //ÍNDICE IMPAR -> EFETUAÇÃO DO CÁLCULO
				{
					raiz = pow(radicando, 1/indice);
					system("cls");
					printf("RAIZ\n\n\n\n");
					
					//MOSTRANDO O RESULTADO FINAL
					printf("Resultado Final:\n\n\n");
					printf("Índice = %.0f\n\n", indice);
					printf("Radicando = %.2f\n\n", radicando);
					printf("Raiz = %.4f\n\n", raiz);
					
					radicando_valido = true;
					encerrar_modulo = true;
				}
			}
		}
		else //ÍNDICE INVÁLIDO INFORMADO
		{
			printf("\n\nÍndice Inválido!!!");
			Sleep(1000);
		}
	}
}

//OPERAÇÃO DE LOGARITMO
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
		
		if(logaritmando > 0) //LOGARITMANDO VÁLIDO
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
				
				if((base > 0) && (base != 1)) //TESTANDO SE A BASE É MAIOR QUE ZERO E DIFERENTE DE 1
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
				else //BASE INVÁLIDA
				{
					printf("Valor Inválido!!!\n\n\n");
					Sleep(1000);
				}
			}
		}
		else //LOGARITMANDO INVÁLIDO
		{
			printf("Valor Inválido!!!\n\n\n");
			Sleep(1000);
		}
	}
}

// ***************************************************************** OPERAÇÕES ARITMÉTICAS ***********************************************************


// ****************************************************************** FORMAS GEOMÉTRICAS *************************************************************
	
	// ######################################################## PERÍMETRO E ÁREA ######################################################
	
//PERÍMETRO E ÁREA DO QUADRADO
void quadrado_perimetroarea_fgeo(int tipo)
{
	float lado, perimetro, area;
	bool encerrar_modulo = false;
	
	if(tipo == 1)
	{
		while(encerrar_modulo == false)
		{
			system("cls");
			printf("PERÍMETRO: QUADRADO\n\n\n\n");
			printf("Insira o Valor do Lado: ");
			scanf("%f", &lado);
			
			if(lado > 0)
			{
				system("cls");
				perimetro = lado * 4;
				printf("PERÍMETRO: QUADRADO\n\n\n\n");
				printf("Resultado Final:\n\n\n");
				printf("Lado = %.2f Metros\n\n", lado);
				printf("Perímetro = %.2f Metros\n", perimetro);
				encerrar_modulo = true;
			}
			else
			{
				printf("Valor Inválido!!!\n\n");
				Sleep(1000);
			}
		}
	}
	else
	{
		while(encerrar_modulo == false)
		{
			system("cls");
			printf("ÁREA: QUADRADO\n\n\n\n");
			printf("Insira o Valor do Lado: ");
			scanf("%f", &lado);
			
			if(lado > 0)
			{
				system("cls");
				area = lado * lado;
				printf("ÁREA: QUADRADO\n\n\n\n");
				printf("Resultado Final:\n\n\n");
				printf("Lado = %.2f Metros\n\n", lado);
				printf("Área = %.2f Metros²\n", area);
				encerrar_modulo = true;
			}
			else
			{
				printf("Valor Inválido!!!\n\n");
				Sleep(1000);
			}
		}
	}
}

//PERÍMETRO E ÁREA DO RETÂNGULO
void retangulo_perimetroarea_fgeo(int tipo)
{
	float base, altura, perimetro, area;
	bool encerrar_modulo = false, altura_valida = false;
	
	if(tipo == 1)
	{
		while(encerrar_modulo == false)
		{
			system("cls");
			printf("PERÍMETRO: RETÂNGULO\n\n\n\n");
			printf("Insira o Valor da Base: ");
			scanf("%f", &base);
			
			if(base > 0)
			{
				while(altura_valida == false)
				{
					system("cls");
					printf("PERÍMETRO: RETÂNGULO\n\n\n\n");
					printf("Base = %.2f Metros\n\n", base);
					printf("Insira o Valor da Altura: ");
					scanf("%f", &altura);
					
					if(altura > 0)
					{
						perimetro = (base * 2) + (altura * 2);
						system("cls");
						printf("PERÍMETRO: RETÂNGULO\n\n\n\n");
						printf("Resultado Final:\n\n\n");
						printf("Base = %.2f Metros\n\n", base);
						printf("Altura = %.2f Metros\n\n", altura);
						printf("Perímetro = %.2f Metros\n", perimetro);
						altura_valida = true;
						encerrar_modulo = true;
					}
					else
					{
						printf("Valor Inválido!!!\n\n");
						Sleep(1000);
					}
				}
			}
			else
			{
				printf("Valor Inválido!!!\n\n");
				Sleep(1000);
			}
		}
	}
	else
	{
		while(encerrar_modulo == false)
		{
			system("cls");
			printf("ÁREA: RETÂNGULO\n\n\n\n");
			printf("Insira o Valor da Base: ");
			scanf("%f", &base);
			
			if(base > 0)
			{
				while(altura_valida == false)
				{
					system("cls");
					printf("ÁREA: RETÂNGULO\n\n\n\n");
					printf("Base = %.2f Metros\n\n", base);
					printf("Insira o Valor da Altura: ");
					scanf("%f", &altura);
					
					if(altura > 0)
					{
						area = base * altura;
						system("cls");
						printf("ÁREA: RETÂNGULO\n\n\n\n");
						printf("Resultado Final:\n\n\n");
						printf("Base = %.2f Metros\n\n", base);
						printf("Altura = %.2f Metros\n\n", altura);
						printf("Área = %.2f Metros²\n", area);
						altura_valida = true;
						encerrar_modulo = true;
					}
					else
					{
						printf("Valor Inválido!!!\n\n");
						Sleep(1000);
					}
				}
			}
			else
			{
				printf("Valor Inválido!!!\n\n");
				Sleep(1000);
			}
		}
	}
}

//PERÍMETRO E ÁREA DO TRIÂNGULO
void triangulo_perimetroarea_fgeo(int tipo)
{
	float lados[3], perimetro, area, base, altura;
	char escolha[3];
	int estagio = 1;
	bool encerrar_modulo = false;
	
	if(tipo == 1)
	{
		system("cls");	
		printf("PERÍMETRO: TRIÂNGULO\n\n\n\n");
		printf("O Polígono Em Questão é Um Triângulo Equilátero (Todos Os Lados São Iguais) ? <S/N>\n\n");
		scanf("%s", &escolha);
		
		if(!strcmp(escolha,"S") || !strcmp(escolha,"Sim") || !strcmp(escolha,"sim"))
		{
			while(encerrar_modulo == false)
			{
				system("cls");
				printf("PERÍMETRO: TRIÂNGULO\n\n\n\n");
				printf("Insira o Valor do Lado: ");
				scanf("%f", &lados[0]);
				
				if(lados[0] > 0)
				{
					system("cls");
					printf("PERÍMETRO: TRIÂNGULO\n\n\n\n");
					perimetro = lados[0]*3;
					printf("Resultado Final:\n\n\n");
					printf("Lado = %.2f Metros\n\n", lados[0]);
					printf("Perímetro = %.2f Metros\n\n", perimetro);
					encerrar_modulo = true;
				}
				else
				{
					printf("Valor Inválido!!!\n\n");
					Sleep(1000);
				}
			}
		}
		
		if(!strcmp(escolha,"N") || !strcmp(escolha,"Não") || !strcmp(escolha,"não"))
		{
			while(encerrar_modulo == false)
			{
				switch(estagio)
				{
					case 1:
						system("cls");
						printf("PERÍMETRO: TRIÂNGULO\n\n\n\n");
						printf("Insira o Valor do 1º Lado: ");
						scanf("%f", &lados[0]);
						
						if(lados[0] > 0)
						{
							estagio = 2;
						}
						else
						{
							printf("Valor Inválido!!!\n\n");
							Sleep(1000);
							break;
						}
					
					case 2:
						system("cls");
						printf("PERÍMETRO: TRIÂNGULO\n\n\n\n");
						printf("1º Lado = %.2f Metros\n\n", lados[0]);
						printf("Insira o Valor do 2º Lado: ");
						scanf("%f", &lados[1]);
						
						if(lados[1] > 0)
						{
							estagio = 3;
						}
						else
						{
							printf("Valor Inválido!!!\n\n");
							Sleep(1000);
							break;
						}
						
					case 3:
						system("cls");
						printf("PERÍMETRO: TRIÂNGULO\n\n\n\n");
						printf("1º Lado = %.2f Metros\n\n", lados[0]);
						printf("2º Lado = %.2f Metros\n\n", lados[1]);
						printf("Insira o Valor do 3º Lado: ");
						scanf("%f", &lados[2]);
						
						if(lados[2] > 0)
						{
							perimetro = lados[0] + lados[1] + lados[2];
							system("cls");
							printf("PERÍMETRO: TRIÂNGULO\n\n\n\n");
							printf("Resultado Final:\n\n\n");
							printf("1º Lado = %.2f Metros\n\n", lados[0]);
							printf("2º Lado = %.2f Metros\n\n", lados[1]);
							printf("3º Lado = %.2f Metros\n\n", lados[2]);
							printf("Perímetro = %.2f Metros\n\n", perimetro);
							encerrar_modulo = true;
						}
						else
						{
							printf("Valor Inválido!!!\n\n");
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
					printf("ÁREA: TRIÂNGULO\n\n\n\n");
					printf("Insira o Valor da Base: ");
					scanf("%f", &base);
					
					if(base > 0)
					{
						estagio = 2;
					}
					else
					{
						printf("Valor Inválido!!!\n\n");
						Sleep(1000);
						break;
					}
					
				case 2:
					system("cls");
					printf("ÁREA: TRIÂNGULO\n\n\n\n");
					printf("Base = %.2f Metros\n\n", base);
					printf("Insira o Valor da Altura: ");
					scanf("%f", &altura);
					
					if(altura > 0)
					{
						area = (base * altura) / 2;
						system("cls");
						printf("ÁREA: TRIÂNGULO\n\n\n\n");
						printf("Resultado Final:\n\n\n");
						printf("Base = %.2f Metros\n\n", base);
						printf("Altura = %.2f Metros\n\n", altura);
						printf("Área = %.2f Metros²\n\n", area);
						encerrar_modulo = true;
						break;
					}
					else
					{
						printf("Valor Inválido!!!\n\n");
						Sleep(1000);
						break;
					}
			}
		}			
	}
}

//PERÍMETRO E ÁREA DO CÍRCULO
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
			printf("PERÍMETRO: CÍRCULO\n\n\n\n");
			printf("Insira o Valor do Raio: ");
			scanf("%f", &raio);
			
			if(raio > 0)
			{
				perimetro=2*M_PI*raio;
				system("cls");
				printf("PERÍMETRO: CÍRCULO\n\n\n\n");
				printf("Resultado Final:\n\n\n");
				printf("Raio = %.2f Metros\n\n", raio);
				printf("Perímetro = %.3f Metros\n\n", perimetro);
				encerrar_modulo = true;
			}
			else
			{
				printf("Valor Inválido!!!\n\n");
				Sleep(1000);
			}
		}
	}
	else
	{
		while(encerrar_modulo == false)
		{
			system("cls");
			printf("ÁREA: CÍRCULO\n\n\n\n");
			printf("Insira o Valor do Raio: ");
			scanf("%f", &raio);
			if(raio > 0)
			{
				area = M_PI * pow(raio,2);
				system("cls");
				printf("ÁREA: CÍRCULO\n\n\n\n");
				printf("Resultado Final:\n\n\n");
				printf("Raio = %.2f Metros\n\n", raio);
				printf("Área = %.3f Metros²\n\n", area);
				encerrar_modulo = true;
			}
			else
			{
				printf("Valor Inválido!!!\n\n");
				Sleep(1000);
			}
		}
	}
}

//PERÍMETRO DE UMA FORMA GEOMÉTRICA GENÉRICA
void outros_perimetro_fgeo()
{
	float perimetro = 0;
	int i = 0, j, quantidade_lados;
	
	system("cls");
	printf("PERÍMETRO: OUTROS\n\n\n\n");
	printf("Informe a Quantidade de Lados do Polígono: ");
	scanf("%i", &quantidade_lados);
	
	if(quantidade_lados > 2)
	{
		float lados[quantidade_lados];
		
		while(i < quantidade_lados)
		{
			system("cls");
			printf("PERÍMETRO: OUTROS\n\n\n\n");
			
			if((i < quantidade_lados) && (i > 0))
			{
				printf("Valor Anterior: %iº Lado = %.2f Metros\n\n", i, lados[i-1]);
			}
			if(i < quantidade_lados)
			{
				printf("Informe o Valor do %iº Lado: ", i+1);
				scanf("%f",&lados[i]);
				perimetro += lados[i];
			}
			
			if((lados[i] > 0) || (i == quantidade_lados))
			{
				i++;
			}
			else
			{
				printf("Valor Inválido!!!\n\n");
				Sleep(1000);
			}
			
			if(i == quantidade_lados)
			{
				system("cls");
				printf("PERÍMETRO: OUTROS\n\n\n\n");
				printf("Resultado Final:\n\n\n");
				
				for(j=0;j<quantidade_lados;j++)
				{
					printf("%iº Lado = %.2f Metros\n\n", j+1, lados[j]);
				}
				
				printf("Perímetro = %.2f Metros\n\n", perimetro);
			}
		}
	}
}

//MÓDULO DE ESCOLHA DAS OPERAÇÕES DE FORMAS GEOMÉTRICAS -> SESSÃO PERÍMETRO
void perimetro_fgeo()
{
	int escolha; 
	bool encerrar_modulo = false; 
	
	system("cls");
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("PERÍMETRO\n\n\n\n");
		printf("OBS: Contas Realizadas em Metros - Sistema Internacional de Unidades\n\n\n");
		printf("1 - Quadrado\n\n");
		printf("2 - Retângulo\n\n");
		printf("3 - Triângulo\n\n");
		printf("4 - Círculo\n\n");
		printf("5 - Outros\n\n");
		printf("0 - Voltar Para o Menu Anterior\n\n");
		printf("Selecione um Polígono Pré-Determinado: ");
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
			
			//RETÂNGULO
			case 2:
				retangulo_perimetroarea_fgeo(1);
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
				
			//TRIÂNGULO
			case 3:
				triangulo_perimetroarea_fgeo(1);
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
			
			//CÍRCULO
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
			
			//INSERÇÃO DE UM DÍGITO INVÁLIDO
			default:
				printf("Opção Inválida!!!\n\n");
				Sleep(1000);
		}
	}
}
	
	// ######################################################## PERÍMETRO E ÁREA ######################################################



	// ############################################################## ÁREA ############################################################

//ÁREA DO PARALELOGRAMO
void paralelogramo_area_fgeo()
{
	float area, base, altura;
	int estagio = 1;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("ÁREA: PARALELOGRAMO\n\n\n\n");
		
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
					printf("Valor Inválido!!!\n\n");
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
					printf("ÁREA: PARALELOGRAMO\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Base = %.2f Metros\n\n", base);
					printf("Altura = %.2f Metros\n\n", altura);
					printf("Área = %.2f Metros²\n\n", area);
					encerrar_modulo = true;
					break;
				}
				else
				{
					printf("Valor Inválido!!!\n\n");
					Sleep(1000);
				}
			}
		}
}

//ÁREA DO LOSANGO
void losango_area_fgeo()
{
	float area, diagonal_maior, diagonal_menor;
	int estagio = 1;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("ÁREA: LOSANGO\n\n\n\n");
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
					printf("Valor Inválido!!!\n\n");
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
					printf("ÁREA: LOSANGO\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Diagonal Maior = %.2f Metros\n\n", diagonal_maior);
					printf("Diagonal Menor = %.2f Metros\n\n", diagonal_menor);
					printf("Área = %.2f Metros²\n\n", area);
					encerrar_modulo = true;
					break;
				}
				else
				{
					printf("Valor Inválido!!!\n\n");
					Sleep(1000);
				}
		}
	}	
}

//ÁREA DO TRAPÉZIO
void trapezio_area_fgeo()
{
	float area, base_maior, base_menor, altura;
	int estagio = 1;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("ÁREA: TRAPÉZIO\n\n\n\n");
		
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
					printf("Valor Inválido!!!\n\n");
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
					printf("Opção Inválida!!!\n\n");
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
					printf("ÁREA: TRAPÉZIO\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Base Maior = %.2f Metros\n\n", base_maior);
					printf("Base Menor = %.2f Metros\n\n", base_menor);
					printf("Altura = %.2f Metros\n\n", altura);
					printf("Área = %.2f Metros²\n\n", area);
					encerrar_modulo = true;
					break;
				}
				else
				{
					printf("Opção Inválida!!!\n\n");
					Sleep(1000);
					break;
				}
		}
	}
}

//MÓDULO DE ESCOLHA DAS OPERAÇÕES DE FORMAS GEOMÉTRICAS -> SESSÃO ÁREA
void area_fgeo()
{
	int escolha;
	bool encerrar_modulo = false; 
	
	system("cls");
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("ÁREA\n\n\n\n");
		printf("OBS: Contas Realizadas em Metros Quadrados - Sistema Internacional de Unidades\n\n\n");
		printf("1 - Quadrado\n\n");
		printf("2 - Retâgulo\n\n");
		printf("3 - Triângulo\n\n");
		printf("4 - Paralelogramo\n\n");
		printf("5 - Losango\n\n");
		printf("6 - Trapézio\n\n");
		printf("7 - Círculo\n\n");
		printf("0 - Voltar Para o Menu Anterior\n\n");
		printf("Selecione um Polígono Pré-Determinado: ");
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
				
			//RETÂNGULO
			case 2:
				retangulo_perimetroarea_fgeo(2);
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
					
			//TRIÂNGULO
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
					
			//TRAPÉZIO
			case 6:
				trapezio_area_fgeo();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
				
			//CÍRCULO
			case 7:
				circulo_perimetroarea_fgeo(2);
				encerrar_modulo = true;
				operacao_finalizada = true;
			
			//INSERÇÃO DE UM DÍGITO INVÁLIDO
			default:
				printf("Opção Inválida!!!\n\n");
				Sleep(1000);
		}
	}
}
	
	// ############################################################## ÁREA ############################################################
	
	
	
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
				
				if(lado > 0) //VERIFICANDO SE O VALOR DO LADO É POSITIVO
				{
					estagio = 2;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA O LADO
				{
					printf("Opção Inválida!!!\n\n");
					Sleep(1000);
					break;
				}
			
			//CAPTURA DO VALOR DA PROFUNDIDADE
			case 2:
				printf("Lado = %.2f Metros\n\n", lado);
				printf("Insira o Valor da Profundidade: ");
				scanf("%f", &profundidade);
				
				if(profundidade > 0) //VERIFICANDO SE O VALOR DA PROFUNDIDADE É POSITIVO
				{
					volume = lado * lado * profundidade;
					system("cls");
					printf("VOLUME: CUBO\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Lado = %.2f Metros\n\n", lado);
					printf("Profundidade = %.2f Metros\n\n", profundidade);
					printf("Volume = %.2f Metros²\n\n", volume);
					encerrar_modulo = true;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA A PROFUNDIDADE
				{
					printf("Opção Inválida!!!\n\n");
					Sleep(1000);
					break;
				}	
		}
	}
}

//VOLUME DO PARALELEPÍPEDO
void paralelepipedo_volume()
{
	int estagio = 1;
	float comprimento, largura, altura, volume;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("VOLUME: PARALELEPÍPEDO\n\n\n\n");
		
		switch(estagio)
		{
			//CAPTURA DO VALOR DO COMPRIMENTO
			case 1:
				printf("Insira o Valor do Comprimento: ");
				scanf("%f", &comprimento);
				
				if(comprimento > 0) //VERIFICANDO SE O VALOR DO COMPRIMENTO É POSITIVO
				{
					estagio = 2;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA O COMPRIMENTO
				{
					printf("Valor Inválido!!!\n\n");
					Sleep(1000);
					break;
				}
				
			//CAPTURA DO VALOR DA LARGURA
			case 2:
				printf("Comprimento = %.2f Metros\n\n", comprimento);
				printf("Insira o Valor da Largura: ");
				scanf("%f", &largura);
				
				if(largura > 0) //VERIFICANDO SE O VALOR DA LARGURA É POSITIVO
				{
					estagio = 3;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA A LARGURA
				{
					printf("Valor Inválido!!!\n\n");
					Sleep(1000);
					break;
				}
				
			//CAPTURA DO VALOR DA ALTURA
			case 3:
				printf("Comprimento = %.2f Metros\n\n", comprimento);
				printf("Largura = %.2f Metros\n\n", largura);
				printf("Insira o Valor da Altura: ");
				scanf("%f", &altura);
				
				if(altura > 0) //VERIFICANDO SE O VALOR DA ALTURA É POSITIVO
				{
					volume = comprimento * largura * altura;
					system("cls");
					printf("VOLUME: PARALELEPÍPEDO\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Comprimento = %.2f Metros\n\n", comprimento);
					printf("Largura = %.2f Metros\n\n", largura);
					printf("Altura = %.2f Metros\n\n", altura);
					printf("Volume = %.2f Metros²", volume);				
					encerrar_modulo = true;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA A ALTURA
				{
					printf("Valor Inválido!!!\n\n");
					Sleep(1000);
					break;
				}
				
		}
	}
}

//VOLUME DA PIRÂMIDE
void piramide_volume()
{
	int estagio = 1;
	float area_base, altura, volume;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("VOLUME: PIRÂMIDE\n\n\n\n");
		
		switch(estagio)
		{
			//CAPTURA DO VALOR DA ÁREA DA BASE
			case 1:
				printf("Insira o Valor da Área da Base: ");
				scanf("%f", &area_base);
				
				if(area_base > 0) //VERIFICANDO SE O VALOR DA ÁREA DA BASE É POSITIVO
				{
					estagio = 2;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA A ÁREA DA BASE
				{
					printf("Opção Inválida!!!\n\n");
					Sleep(1000);
					break;
				}
			
			//CAPTURA DO VALOR DA ALTURA
			case 2:
				printf("Área da Base = %.2f Metros²\n\n", area_base);
				printf("Insira o Valor da Altura: ");
				scanf("%f", &altura);
				
				if(altura > 0) //VERIFICANDO SE O VALOR DA ALTURA É POSITIVO
				{
					volume = (area_base * altura) / 3;
					system("cls");
					printf("VOLUME: PIRÂMIDE\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Área da Base = %.2f Metros²\n\n", area_base);
					printf("Altura = %.2f Metros\n\n", altura);
					printf("Volume = %.2f Metros²\n\n", volume);
					encerrar_modulo = true;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA A ALTURA
				{
					printf("Opção Inválida!!!\n\n");
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
				
				if(raio > 0) //VERIFICAÇÃO SE O RAIO TEM VALOR POSITIVO
				{
					estagio = 2;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA O RAIO
				{
					printf("Valor Inválido!!!\n\n");
					Sleep(1000);
					break;
				}
				
			//CAPTURANDO O VALOR DA ALTURA
			case 2:
				printf("Raio = %.2f Metros\n\n", raio);
				printf("Insira o Valor da Altura: ");
				scanf("%f", &altura);
				
				if(altura > 0) //VERIFICAÇÃO SE A ALTURA TEM VALOR POSITIVO
				{
					volume = (M_PI * pow(raio,2) * altura)/3;
					system("cls");
					printf("VOLUME: CONE\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Raio = %.2f Metros\n\n", raio);
					printf("Altura = %.2f Metros\n\n", altura);
					printf("Volume = %.2f Metros²\n\n", volume);
					encerrar_modulo = true;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA A ALTURA
				{
					printf("Opção Inválida!!!\n\n");
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
				
				if(raio > 0) //VERIFICAÇÃO SE O RAIO TEM VALOR POSITIVO
				{
					estagio = 2;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA O RAIO
				{
					printf("Valor Inválido!!!\n\n");
					Sleep(1000);
					break;
				}
			
			//CAPTURA DO VALOR DA ALTURA
			case 2:
				printf("Raio = %.2f Metros\n\n", raio);
				printf("Insira o Valor da Altura: ");
				scanf("%f", &altura);
				
				if(altura > 0) //VERIFICAÇÃO SE A ALTURA TEM VALOR POSITIVO
				{
					volume = M_PI * pow(raio,2) * altura;
					
					system("cls");
					printf("VOLUME: CILINDRO\n\n\n\n");
					printf("Resultado Final:\n\n\n");
					printf("Raio = %.2f Metros\n\n", raio);
					printf("Altura = %.2f Metros\n\n", altura);
					printf("Volume = %.2f Metros²\n\n", volume);
					encerrar_modulo = true;
					break;
				}
				else //VALOR NEGATIVO INFORMADO PARA A ALTURA
				{
					printf("Opção Inválida!!!\n\n");
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
		if(raio > 0) //VERIFICAÇÃO SE O RAIO TEM VALOR POSITIVO
		{
			volume = (4*M_PI*pow(raio,3))/3;
			system("cls");
			printf("VOLUME: ESFERA\n\n\n\n");
			printf("Resultado Final:\n\n\n");
			printf("Raio = %.2f Metros\n\n", raio);
			printf("Volume = %.2f Metros²\n\n", volume);
			encerrar_modulo = true;
		}
		else //VALOR NEGATIVO INFORMADO PARA O RAIO
		{
			printf("Valor Inválido!!!\n\n");
			Sleep(1000);
		}
	}
}

//MÓDULO DE ESCOLHA DAS OPERAÇÕES DE FORMAS GEOMÉTRICAS -> SESSÃO VOLUME
void volume_fgeo()
{
	int escolha, encerrar_modulo = false; 
	
	system("cls");
	
	while(encerrar_modulo == false)
	{
		system("cls");
		printf("VOLUME\n\n\n\n");
		printf("OBS: Contas Realizadas em Metros Cúbicos - Sistema Internacional de Unidades\n\n\n");
		printf("1 - Cubo\n\n");
		printf("2 - Paralelepípedo\n\n");
		printf("3 - Pirâmide\n\n");
		printf("4 - Cone\n\n");
		printf("5 - Cilindro\n\n");
		printf("6 - Esfera\n\n");
		printf("0 - Voltar Para o Menu Anterior\n\n");
		printf("Selecione um Polígono Pré-Determinado: ");
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
					
			//PIRÂMIDE
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
			
			//INSERÇÃO DE UM DÍGITO INVÁLIDO
			default:
				printf("Opção Inválida!!!\n\n");
				Sleep(1000);
		}
	}
}

	// ############################################################## VOLUME ##########################################################

// *************************************************************** FORMAS GEOMÉTRICAS *******************************************************



// ****************************************************************** CONVERSOR *************************************************************

//MÓDULO DE CONVERSÃO DE BINÁRIO PARA DECIMAL
void bi_de()
{
	int bi[8], n = 0, i;
	
	for(i=0;i<=7;i++)
	{
		system("cls");
		printf("CONVERSÃO BINÁRIO -> DECIMAL\n\n\n\n");
		printf("OBS: Insira Algarismo Por Algarismo\n\n\n");
		if(i == 0)
		{	
			printf("Insira o Número: ");
			scanf("%i", &bi[i]);
		}
		if(i == 1)
		{
			printf("Insira o Número: %i", bi[0]);
			scanf("%i", &bi[i]);
		}
		if(i == 2)
		{
			printf("Insira o Número: %i%i", bi[0], bi[1]);
			scanf("%i", &bi[i]);
		}
		if(i == 3)
		{
			printf("Insira o Número: %i%i%i", bi[0], bi[1], bi[2]);
			scanf("%i", &bi[i]);
		}
		if(i == 4)
		{
			printf("Insira o Número: %i%i%i%i", bi[0], bi[1], bi[2], bi[3]);
			scanf("%i", &bi[i]);
		}
		if(i == 5)
		{
			printf("Insira o Número: %i%i%i%i%i", bi[0], bi[1], bi[2], bi[3], bi[4]);
			scanf("%i", &bi[i]);
		}
		if(i == 6)
		{
			printf("Insira o Número: %i%i%i%i%i%i", bi[0], bi[1], bi[2], bi[3], bi[4], bi[5]);
			scanf("%i", &bi[i]);
		}
		if(i == 7)
		{
			printf("Insira o Número: %i%i%i%i%i%i%i", bi[0], bi[1], bi[2], bi[3], bi[4], bi[5], bi[6]);
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
	printf("CONVERSÃO BINÁRIO -> DECIMAL\n\n\n\n");
	printf("Número Binário: %i%i%i%i%i%i%i%i\n\n\n", bi[0], bi[1], bi[2], bi[3], bi[4], bi[5], bi[6], bi[7]);
	printf("Número Decimal: %i\n\n", n);
}

//MÓDULO DE CONVERSÃO DE DECIMAL PARA BINÁRIO
void de_bi()
{
	int n, np, i, resto[8];
	
	system("cls");
	printf("CONVERSÃO DECIMAL -> BINÁRIO\n\n\n\n");
	printf("Insira o Número: ");
	scanf("%i", &n);
	np = n;
	
	for(i=7;i>=0;i--)
	{
		resto[i] = n % 2;
		n = n / 2;
	}
	
	system("cls");
	printf("CONVERSÃO DECIMAL -> BINÁRIO\n\n\n\n");
	printf("Número Decimal: %i\n\n\n", np);
	printf("Número Binário: %i%i%i%i%i%i%i%i\n\n", resto[0], resto[1], resto[2], resto[3], resto[4], resto[5], resto[6], resto[7]);
}

//MÓDULO DE CONVERSÃO DE HEXADECIMAL PARA BINÁRIO
void hexa_bi()
{
	int n, np, i, resto[8];
	
	system("cls");
	printf("CONVERSÃO HEXADECIMAL -> BINÁRIO\n\n\n\n");
	printf("Insira o Número: ");
	scanf("%x", &n);
	np=n;
	
	for(i=7;i>=0;i--)
	{
		resto[i] = n % 2;
		n = n / 2;
	}
	
	system("cls");
	printf("CONVERSÃO DECIMAL -> BINÁRIO\n\n\n\n");
	printf("Número Hexadecimal: %x\n\n\n", np);
	printf("Número Binário: %i%i%i%i%i%%i%i\n\n", resto[0], resto[1], resto[2], resto[3], resto[4], resto[5], resto[6], resto[7]);
}

//MÓDULO DE CONVERSÃO DE BINÁRIO PARA HEXADECIMAL
void bi_hexa()
{
	int bi[8], n=0, i;
	
	for(i=0;i<=7;i++)
	{
		system("cls");
		printf("CONVERSÃO BINÁRIO -> HEXADECIMAL\n\n\n\n");
		printf("OBS: Insira Algarismo Por Algarismo\n\n\n");
		if(i == 0)
		{
			
			printf("Insira o Número: ");
			scanf("%i", &bi[i]);
		}
		if(i == 1)
		{
			printf("Insira o Número: %i", bi[0]);
			scanf("%i", &bi[i]);
		}
		if(i == 2)
		{
			printf("Insira o Número: %i%i", bi[0], bi[1]);
			scanf("%i", &bi[i]);
		}
		if(i == 3)
		{
			printf("Insira o Número: %i%i%i", bi[0], bi[1], bi[2]);
			scanf("%i", &bi[i]);
		}
		if(i == 4)
		{
			printf("Insira o Número: %i%i%i%i", bi[0], bi[1], bi[2], bi[3]);
			scanf("%i", &bi[i]);
		}
		if(i == 5)
		{
			printf("Insira o Número: %i%i%i%i%i", bi[0], bi[1], bi[2], bi[3], bi[4]);
			scanf("%i",&bi[i]);
		}
		if(i == 6)
		{
			printf("Insira o Número: %i%i%i%i%i%i", bi[0], bi[1], bi[2], bi[3], bi[4], bi[5]);
			scanf("%i", &bi[i]);
		}
		if(i == 7)
		{
			printf("Insira o Número: %i%i%i%i%i%i%i", bi[0], bi[1], bi[2], bi[3], bi[4], bi[5], bi[6]);
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
	printf("CONVERSÃO BINÁRIO -> HEXADECIMAL\n\n\n\n");
	printf("Número Binário: %i%i%i%i%i%i%i%i\n\n\n", bi[0], bi[1], bi[2], bi[3], bi[4], bi[5], bi[6], bi[7]);
	printf("Número Hexadecimal: %x\n\n", n);
}

//MÓDULO DE CONVERSÃO DE HEXADECIMAL PARA DECIMAL
void hexa_de()
{
	int n;
	
	system("cls");
	printf("CONVERSÃO HEXADECIMAL -> DECIMAL\n\n\n\n");
	printf("Insira o Número: ");
	scanf("%x", &n);
	system("cls");
	printf("CONVERSÃO HEXADECIMAL -> DECIMAL\n\n\n\n");
	printf("Número Hexadecimal: %x\n\n\n", n);
	printf("Número Decimal: %i\n\n", n);
}

//MÓDULO DE CONVERSÃO DE DECIMAL PARA HEXADECIMAL
void de_hexa()
{
	int n;
	
	system("cls");
	printf("CONVERSÃO DECIMAL -> HEXADECIMAL\n\n\n\n");
	printf("Insira o Número: ");
	scanf("%i", &n);
	system("cls");
	printf("CONVERSÃO DECIMAL -> HEXADECIMAL\n\n\n\n");
	printf("Número Decimal: %i\n\n\n", n);
	printf("Número Hexadecimal: %x\n\n", n);
}

// ****************************************************************** CONVERSOR *************************************************************


//MÓDULO DE ESCOLHA DAS OPERAÇÕES ARITMÉTICAS
void operacoes_aritmeticas()
{
	int escolha; 
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		
		printf("MENU: OPERAÇÕES BÁSICAS\n\n\n");
		printf("1 - Soma\n\n");
		printf("2 - Subtração\n\n");
		printf("3 - Multiplicação\n\n");
		printf("4 - Divisão\n\n");
		printf("5 - Potência\n\n");
		printf("6 - Raiz\n\n");
		printf("7 - Logaritmo\n\n");
		printf("0 - Retornar Ao Menu Inicial\n\n");
		printf("Escolha a Operação Desejada: ");
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
			
			//SUBTRAÇÃO		
			case 2:
				subtracao_operacoes();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
					
			//MULTIPLICAÇÃO
			case 3:
				multiplicacao_operacoes();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
				
			//DIVISÃO
			case 4:
				divisao_operacoes();
				encerrar_modulo = true;
				operacao_finalizada = true;
				break;
			
			//POTÊNCIA
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
			
			//INSERÇÃO DE UM DÍGITO INVÁLIDO
			default:
				encerrar_modulo = false;
				printf("Opção Inválida!!!");
				Sleep(1000);
		}
	}
}

//MÓDULO DE ESCOLHA DAS OPERAÇÕES DE FORMAS GEOMÉTRICAS
void formas_geometricas()
{
	int escolha;
	bool encerrar_modulo = false;
	
	while(encerrar_modulo == false)
	{
		system("cls");
		
		printf("MENU: CÁLCULOS DE FORMAS GEOMÉTRICAS\n\n\n\n");
		printf("1 - Perímetro\n\n");
		printf("2 - Área\n\n");
		printf("3 - Volume\n\n");
		printf("0 - Retornar ao Menu Inicial\n\n");
		printf("Escolha a Operação Desejada: ");
		scanf("%i", &escolha);
		
		switch(escolha)
		{
			//VOLTAR
			case 0:
				encerrar_modulo = true;
				operacao_finalizada = false;
				break;
				
			//PERÍMETRO
			case 1:
				perimetro_fgeo();
				if(operacao_finalizada == true)
				{
					encerrar_modulo = true;
				}
				break;
			
			//ÁREA
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
			
			//INSERÇÃO DE UM DÍGITO INVÁLIDO
			default:
				printf("Opção Inválida!!!\n\n");
				Sleep(1000);
		}
	}
}

//MÓDULO DE ESCOLHA DA OPERAÇÃO DE CONVERSÃO
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
			printf("MENU: CONVERSOR BINÁRIO/DECIMAL/HEXADECIMAL\n\n\n\n");
			printf("Selecione os Respectivos Números Que Representam Cada Tipo Para Escolher o Tipo de Conversão\n\n");
			printf("1 - Binário 	| 	2 - Decimal 	| 	3 - Hexadecimal");
			printf("\n\nDe: ");
			scanf("%i",&escolha1);
			
			if((escolha1 >= 1) && (escolha1 <= 3)) //ESCOLHA 1 VÁLIDA
			{
				estagio = 2;
			}
			else //ESCOLHA 1 INVÁLIDA
			{
				printf("Opção Inválida!!!\n\n");
				Sleep(1000);
			}
		}
		
		//SEGUNDA ESCOLHA
		if(estagio == 2)
		{
			system("cls");
			printf("MENU: CONVERSOR BINÁRIO/DECIMAL/HEXADECIMAL\n\n\n\n");
			printf("Selecione os Respectivos Números Que Representam Cada Tipo Para Escolher o Tipo de Conversão\n\n");
			printf("1 - Binário 	| 	2 - Decimal 	| 	3 - Hexadecimal");
			printf("\n\nDe: %i\n\n", escolha1);
			
			printf("Para: ");
			scanf("%i", &escolha2);
			
			if((escolha2 >= 1) && (escolha2 <= 3) && (escolha2 != escolha1)) //ESCOLHA 2 VÁLIDA
			{
				switch(escolha1)
				{
					//BINÁRIO
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
						if(escolha2 == 1) //PARA BINÁRIO
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
						if(escolha2 == 1) //PARA BINÁRIO
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
			else //ESCOLHA 2 INVÁLIDA
			{
				printf("Opção Inválida!!!\n\n");
				Sleep(1000);
			}
		}
	}
}

//MÓDULO PRINCIPAL - TELA DE SELEÇÃO
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
		printf("1 - Operações Aritméticas\n\n");
		printf("2 - Cálculos de Formas Geométricas\n\n");
		printf("3 - Conversor Binário/Decimal/Hexadecimal\n\n");
		printf("0 - Sair do Programa\n\n");
		printf("Escolha a Opção Desejada: ");
		scanf("%i",&escolha);
		
		switch(escolha)
		{
			
			//CHAMADA PELO MÓDULO DE OPERAÇÕES ARITMÉTICAS
			case 1:
				operacoes_aritmeticas();
				break;
			
			//CHAMADA PELO MÓDULO DE FORMAS GEOMÉTRICAS
			case 2:
				formas_geometricas();
				break;
				
			//CHAMADA PELO MÓDULO DE CONVERSÕES
			case 3:
				conversor();
				break;
				
			//ENCERRAR PROGRAMA
			case 0:
				encerrar = true;
				break;
			
			//INSERÇÃO DE UM DIGITO INVÁLIDO
			default:	
				printf("Opção Inválida!!!\n\n");
				Sleep(1000);
		}
		
		//FINALIZAÇÃO DE UMA FUNÇÃO COM OPÇÃO DE FECHAR O PROGRAMA OU RETORNAR AO MENU INICIAL
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
