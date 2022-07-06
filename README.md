# <p align="center"> Calculadora Universal em C <Font size="7px"> &#x1F5A9; </Font></p> <center> ![logo_linguagem_C](c.png) </center>

> Tipo de Projeto: <Font color="#8fbde3"> Pessoal &#x1F4DA; </Font>

> Status do Projeto: <Font color="#27A135"> Finalizado &#10004;</Font>  

## <Font color="#8e909c"> 1. Descrição </Font> ##

O projeto consiste em uma calculadora com diversas funcionalidades básicas feita na linguagem C, fazendo uso do prompt de comando para interagir com o usuário.

## <Font color="#8e909c"> 2. Objetivo </Font> ##

<p>A produção deste projeto teve início em 2020 e teve como objetivo testar meus conhecimentos, principalmente no que diz respeito à <i>Lógica de Programação</i>, adquiridos na matéria <i>"Fundamentos de Programação e Estruturas de Dados"</i>, cursada durante o 1º ano do Curso Técnico em Informática Integrado ao Ensino Médio do IFF Campus Campos Centro. Dito isto, diversas limitações e a falta de interatividade do programa se devem à minha falta de domínio e conhecimento aprofundado sobre a linguagem C, levando em conta que o objetivo principal do projeto era trabalhar Lógica de Programação com as ferramentas da linguagem que foram ensinadas durante a formação técnica.</p>

## <Font color="#8e909c"> 3. Bibliotecas Utilizadas </Font> ##

<p>Na construção deste projeto, foram utilizadas as seguintes bibliotecas para atender as respectivas necessidades:</p>

> <Font color="#22669c">***stdlib.h*** (Funções básicas da linguagem)</Font>

> <Font color="#22669c">***stdio.h*** (Funções de entrada e saída de dados)</Font>

> <Font color="#22669c">***string.h*** (Manipulação de Strings)</Font>

> <Font color="#22669c">***math.h*** (Funções Matemáticas)</Font>

> <Font color="#22669c">***locale.h*** (Exibição de caracteres especiais e acentuação)</Font>

> <Font color="#22669c">***windows.h*** (Congelar o programa por um determinado período de tempo)</Font>

## <Font color="#8e909c"> 4. Funcionalidades </Font> ##

<p>Durante o ciclo de vida do programa, é retornado para o usuário um menu de opções com uma linha de comando, onde ele poderá navegar entre as funcionalidades até iniciar uma função desejada.</p>

![tela_inicial](tela_inicial.png)
<Font size="2"><center>*Menu Inicial do Programa*</Font></center>

<p>A calculadora possui 3 principais grupos de funcionalidades:</p>

* <Font color="#507da3"> Operações Aritméticas </Font>

* <Font color="#507da3"> Cálculos de Formas Geométricas </Font>

* <Font color="#507da3"> Conversor Binário &xharr; Decimal &xharr; Hexadecimal </Font>

<p>Os tópicos a seguir são dedicados a detalhar cada um dos grupos de funcionalidades citados acima.</p>

### <Font color="#507da3"> 4.1 Operações Aritméticas </Font> ###

<p>O módulo de <i>Operações Aritméticas</i> é destinado às operações básicas da matemática, utilizadas para construir e solucionar equações. Nele estão disponíveis os seguintes cálculos:</p>

<Font color="#8babc7">

1. **Soma**
2. **Subtração**
3. **Multiplicação**
4. **Divisão**
5. **Potência**
6. **Raiz**
7. **Logaritmo**

</Font>

<Font color="#bf3b3b">Observação: </Font> Para os cálculos de *Soma*, *Subtração*, *Multiplicação* e *Divisão*, é necessário informar a quantidade de operandos que devem ser calculados, enquanto as demais funções realizam apenas um cálculo por vez. 

### <Font color="#507da3"> 4.2 Cálculos de Formas Geométricas </Font> ###

<p>O módulo de Cálculos de Formas Geométricas é destinado às relações matemáticas geométricas de polígonos planos e sólidos. Desta forma, ele é subdivido em 3 principais tipos de cálculos geométricos: <i><b>Perímetro</i></b>, <i><b>Área</i></b> e <i><b>Volume</i></b>. Segue abaixo a lista de formas geométricas disponíveis para cálculo em cada uma das operações:</p>

<Font color="#8babc7">

1. **Perímetro**

</Font>

<Font color="#d19a66">

* Quadrado
* Retângulo
* Triângulo
* Círculo
* Outros *(Informa-se a quantidade de lados do polígono e o tamanho de cada lado)*

</Font>

<Font color="#8babc7">

2. **Área**

</Font>

<Font color="#d19a66">

* Quadrado
* Retângulo
* Triângulo
* Paralelogramo
* Losango
* Trapézio
* Círculo

</Font>

<Font color="#8babc7">

3. **Volume**

</Font>

<Font color="#d19a66">

* Cubo
* Paralelepípedo
* Pirâmide
* Cone
* Cilindro
* Esfera


</Font>

### <Font color="#507da3"> 4.3 Conversor Binário &xharr; Decimal &xharr; Hexadecimal </Font> ###

<p>O módulo de Conversões é destinado a realizar conversões de um número entre os sistemas numéricos <b><i>binário</i></b>, <b><i>decimal</i></b> e <b><i>hexadecimal</i></b>. Desta forma, o usuário primeiramente deve escolher em qual sistema númerico irá informar o número e para qual sistema númerico ele deve ser convertido. </p>

## <Font color="#8e909c"> 5. Como acessar/utilizar o programa ? </Font> ##

<p>

Para acessar o programa, basta realizar um desses passos: 

1. Fazer download do arquivo Calculadora_Universal.exe e executar;

2. Fazer download do arquivo Calculadora_Universal.cpp, abrir o arquivo em algum compilador de C/C++  
(Ex.: Dev-C++) e executar o código.

</p>

___