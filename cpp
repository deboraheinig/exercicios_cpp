// Faça um algoritmo que peça um número e então mostre a mensagem O número informado foi [número].

#include <iostream>

int main()
{
    int num;

    std::cout << "Insira um número: ";
    std::cin >> num;
    std::cout << "O número digitado foi: " << num;
}

// Faça um algoritmo que peça dois números e imprima a soma.

#include <iostream>

int main()
{
    int num1;
    int num2;
    int soma;

    std::cout << "Insira o primeiro número: ";
    std::cin >> num1;
    std::cout << "Insira o segundo número: ";
    std::cin >> num2;
    soma = num1 + num2;
    std::cout << "A soma desses números é: " << soma;
}


// 3. Faça um algoritmo que peça as 4 notas bimestrais e mostre a média.

#include <iostream>

int main()
{
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    int media;

    std::cout << "Insira a sua primeira nota: ";
    std::cin >> nota1;
    std::cout << "Insira a sua segunda nota: ";
    std::cin >> nota2;
    std::cout << "Insira a sua terceira nota: ";
    std::cin >> nota3;
    std::cout << "Insira a quarta nota: ";
    std::cin >> nota4;
    media = (nota1 + nota2 + nota3 + nota4) / 4;

        std::cout << "Sua media e: " << media;
}

// 4. Faça um algoritmo que peça o raio de um círculo, calcule e mostre sua área.

#include <iostream>
//Definindo o valor de PI
#define PI 3.14159265358979323846 
int main()
{
    int raio;
    int area;
   
    std::cout << "Insira o raio do circulo: ";
    std::cin >> raio;
    //Cálculo da área
    area = PI * (raio * raio);
        std::cout << "A área do círculo é igual a: " << area;

}

// 5. Faça um algoritmo que calcule a área de um quadrado, em seguida mostre o dobro desta área para o
usuário.

#include <iostream>
int main()
{
    int lado;
    int area;
    int areaDobro;
   
    std::cout << "Digite o valor do lado de um quadrado: ";
    std::cin >> lado;
    //Cálculo da área
    area = 2 * (lado * lado);
    areaDobro = area * 2;
    std::cout << "O dobro da área do quadrado é igual a: " << areaDobro;

}

// 6. Faça um algoritmo que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. o C = (5 * (F-32) / 9).

#include <iostream>
int main()
{
    int temperatura;
    int celsius;
   
    std::cout << "Insira a temperatura em Fahrenheit: ";
    std::cin >> temperatura;
    //Cálculo
    celsius = (temperatura - 32) * 5 / 9;
    std::cout << "A temperatura que voce inseriu em graus Celsius e: " << celsius;

}

// 7. Faça um algoritmo que peça 2 números inteiros e um número real. Calcule e mostre: o o produto do dobro do primeiro com metade do segundo. o a soma do triplo do primeiro com o terceiro. o o terceiro elevado ao cubo.

#include <iostream>
int main()
{
    int num1;
    int num2;
    int real;
    int dobro;
    int metade;
    int triplo;
    int cubo;
    int soma;
    int produto;
   
    std::cout << "Insira o primeiro numero inteiro: ";
    std::cin >> num1;
    std::cout << "Insira o segundo numero inteiro: ";
    std::cin >> num2;
    std::cout << "Insira um numero real: ";
    std::cin >> real;

    dobro = num1 * 2;
    metade = num2 / 2;
    produto = dobro * metade;
    std::cout << "O produto do dobro do primeiro com metade do segundo e: " << produto;

    triplo = num1 * 3;
    soma = triplo + real;
    std::cout << "A soma do triplo do primeiro com o terceiro é: " << soma;

    cubo = real * *3;
    std::cout << "O terceiro elevado ao cubo e: " << cubo;
    
}

// 8. João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.

#include <iostream>
int main()
{
    int peso;
    int excesso;
    int multa;
   
    std::cout << "Insira o peso dos peixes em kg: ";
    std::cin >> peso;

    if (peso > 50) {
        excesso = peso - 50;
    }
    multa = excesso * 4.00;
    std::cout << "Joao esta com " << excesso << "quilos excedentes. A multa que devera ser paga e de: " << multa;
}

// 9.  Faça um algoritmo que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: o salário bruto. o quanto pagou ao INSS. o quanto pagou ao sindicato. o o salário líquido. o calcule os descontos e o salário líquido, conforme abaixo: ➢ + Salário Bruto : R ➢−IR(11  ➢ - INSS (8%) : R ➢−Sindicato(5  ➢ = Salário Liquido : R$ Obs.: Salário Bruto - Descontos = Salário Líquido.

#include <iostream>
int main()
{
    int salarioHora;
    int horasTrab;
    int salario;
    int salarioLiq;
    int imposto;
    int inss;
    int sindicato;

    std::cout << "Quanto voce ganha por hora? " << std::endl;
    std::cin >> salarioHora;

    std::cout << "E quantas horas voce trabalha por mes? " << std::endl;
    std::cin >> horasTrab;
    salario = salarioHora * horasTrab;

    std::cout << "Seu salario bruto e de: " << salario << std::endl;

    imposto = salario / 1100;
    inss = salario / 800;
    sindicato = salario / 500;
    salarioLiq = salario - imposto - inss - sindicato;

    std::cout << "Voce pagou: R$" << inss << "ao INSS." << std::endl;
    std::cout << "Voce pagou: R$" << sindicato << "ao sindicato." << std::endl;
    std::cout << "Seu salario liquido e de: R$" << salarioLiq << std::endl;
}
// 10. Faça um código para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$80,00. Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
#include <iostream>

int main()
{
    int area;
    int totalLatas;
    int valorTotal;

    std::cout << "Digite, em metros quadrados, o tamanho da area a ser pintada.\n";
    std::cin >> area;

    totalLatas = area / 54;
    valorTotal = totalLatas * 80;

    if (area < 54) {
        std::cout << "Uma lata de tinta será suficiente, custando R$80,00.";
    }
     else {
     std::cout << "Voce ira precisar de " << totalLatas << " latas, totalizando em: R$" << valorTotal;
     }
}

//12. Faça um código que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).

#include <iostream>

int main()
{
	int arquivo;
	int velocidade;
	int tempo;

	std::cout << "Digite o tamanho do arquivo para download em MB: ";
	std::cin >> arquivo;

	std::cout << "Agora digite a velocidade da sua internet em Mbps: ";
	std::cin >> velocidade;

	tempo = arquivo / (velocidade * 60);

	std::cout << "O tempo aproximado de download do arquivo e de: " << tempo << " minutos.";
}

