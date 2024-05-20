#include <iostream>
#include <locale.h>
#include <cstring>
#include <algorithm>
#include <string>

using namespace std;

// Função para verificar se o número é maior que 10
void exercicio1() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    if (num > 10) {
        cout << "O número digitado é maior que 10" << endl;
    }
}

// Função para verificar se o número é igual a 10
void exercicio2() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    if (num == 10) {
        cout << "O número é 10" << endl;
    }
}

// Função para verificar se o número é positivo ou negativo
void exercicio3() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    if (num > 0) {
        cout << "O número digitado é positivo!" << endl;
    } else {
        cout << "O número digitado é negativo!" << endl;
    }
}

// Função para verificar se o número é par ou ímpar
void exercicio4() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "O número digitado é par!" << endl;
    } else {
        cout << "O número digitado é ímpar!" << endl;
    }
}

// Função para comparar o número com 10
void exercicio5() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    if (num > 10) {
        cout << "Seu número é maior que 10" << endl;
    } else if (num == 10) {
        cout << "Seu número é igual a 10" << endl;
    } else {
        cout << "Seu número é menor que 10" << endl;
    }
}

// Função para verificar o dia da semana
void exercicio6() {
    int num;
    cout << "Digite um número de 1 a 7: ";
    cin >> num;

    while (num < 1 || num > 7) {
        cout << "Número inválido. Digite um número de 1 a 7: ";
        cin >> num;
    }

    switch (num) {
        case 1: cout << "Domingo" << endl; break;
        case 2: cout << "Segunda-feira" << endl; break;
        case 3: cout << "Terça-feira" << endl; break;
        case 4: cout << "Quarta-feira" << endl; break;
        case 5: cout << "Quinta-feira" << endl; break;
        case 6: cout << "Sexta-feira" << endl; break;
        case 7: cout << "Sábado" << endl; break;
    }
}

// Função para verificar se é maior de idade
void verificarMaioridade() {
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    if (idade >= 18) {
        cout << "Você é maior de idade!" << endl;
    } else {
        cout << "Você é menor de idade!" << endl;
    }
}

// Função para verificar se o número é múltiplo de 3 e 5
void exercicio7() {
    int num;
    cout << "Digite um número para verificar se é múltiplo de 3 e 5: ";
    cin >> num;
    if (num % 3 == 0 && num % 5 == 0) {
        cout << "O número digitado é múltiplo de 3 e 5" << endl;
    } else {
        cout << "O número digitado não é múltiplo de 3 e 5" << endl;
    }
}

// Função para verificar o tipo de triângulo
void exercicio8() {
    int a, b, c;
    cout << "Digite os três lados de um triângulo em ordem, com espaço: ";
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "O seu triângulo é um triângulo equilátero!" << endl;
    } else if (a == b || a == c || b == c) {
        cout << "O seu triângulo é um triângulo isósceles!" << endl;
    } else {
        cout << "O seu triângulo é um triângulo escaleno!" << endl;
    }
}

// Função para a calculadora
void exercicio9() {
    int resposta, num1, num2;
    cout << "Olá! Bem-vindo à calculadora, escolha o tipo de operação para fazer contas\n";
    cout << "1 para Somar\n";
    cout << "2 para Subtração\n";
    cout << "3 para Multiplicação\n";
    cout << "4 para Divisão\n";
    cin >> resposta;

    cout << "Digite os dois números para a operação: ";
    cin >> num1 >> num2;

    switch (resposta) {
        case 1: cout << "Sua soma é " << num1 + num2 << endl; break;
        case 2: cout << "Sua subtração é " << num1 - num2 << endl; break;
        case 3: cout << "Sua multiplicação é " << num1 * num2 << endl; break;
        case 4: 
            if (num2 != 0) {
                cout << "Sua divisão é " << num1 / num2 << endl;
            } else {
                cout << "Divisão por zero não permitida" << endl;
            }
            break;
        default: cout << "Operação inválida!" << endl; break;
    }
}

// Função para verificar se o ano é bissexto
void exercicio10() {
    int ano;
    cout << "Digite um ano para verificar se é bissexto: ";
    cin >> ano;
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << "O ano digitado é bissexto!" << endl;
    } else {
        cout << "O ano digitado não é bissexto!" << endl;
    }
}

// Função para converter temperatura de Celsius para Fahrenheit
void exercicio11() {
    float C, F;
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> C;
    F = (C * 9/5) + 32;
    cout << "A temperatura em Fahrenheit é: " << F << endl;
}

// Função para calcular o IMC
void exercicio12() {
    float peso, altura, IMC;
    cout << "Digite seu peso em quilogramas: ";
    cin >> peso;
    cout << "Digite sua altura em metros: ";
    cin >> altura;
    IMC = peso / (altura * altura);
    cout << "Seu IMC é " << IMC << endl;
    if (IMC < 18.5) {
        cout << "Categoria: Abaixo do peso" << endl;
    } else if (IMC >= 18.5 && IMC < 25) {
        cout << "Categoria: Peso normal" << endl;
    } else if (IMC >= 25 && IMC < 30) {
        cout << "Categoria: Sobrepeso" << endl;
    } else {
        cout << "Categoria: Obesidade" << endl;
    }
}

// Função para verificar o quadrante das coordenadas
void exercicio13() {
    int x, y;
    cout << "Digite as coordenadas X e Y para verificar em qual quadrante está localizado: ";
    cin >> x >> y;
    if (x > 0 && y > 0) {
        cout << "Suas coordenadas estão no primeiro quadrante!" << endl;
    } else if (x < 0 && y > 0) {
        cout << "Suas coordenadas estão no segundo quadrante!" << endl;
    } else if (x < 0 && y < 0) {
        cout << "Suas coordenadas estão no terceiro quadrante!" << endl;
    } else if (x > 0 && y < 0) {
        cout << "Suas coordenadas estão no quarto quadrante!" << endl;
    } else {
        cout << "As coordenadas estão no eixo!" << endl;
    }
}

// Função para simular saque bancário
void exercicio14() {
    int saldo = 5000, retirar;
    cout << "Você tem 5000 reais. Digite uma quantia para fazer o saque: ";
    cin >> retirar;

    if (retirar <= saldo) {
        saldo -= retirar;
        cout << "Você pode fazer a retirada! Saldo restante: " << saldo << " reais" << endl;
    } else {
        cout << "Você não tem saldo suficiente para a retirada" << endl;
    }
}

// Função para verificar quantidade de leads
void exercicio15() {
    int leads;
    cout << "Quantos leads recebemos este mês: ";
    cin >> leads;
    if (leads <= 5) {
        cout << "A quantidade de leads é baixa!" << endl;
    } else if (leads <= 10) {
        cout << "A quantidade de leads é esperada!" << endl;
    } else {
        cout << "A quantidade de leads é alta!" << endl;
    }
}

// Função para calcular média de notas e presença
void exercicio16() {
    int a, b, c, P;
    float media;
    cout << "Digite suas 3 notas em sequência: ";
    cin >> a >> b >> c;
    cout << "Digite sua presença em percentual: ";
    cin >> P;
    media = (a + b + c) / 3.0;
    if (media >= 7 && P >= 75) {
        cout << "Você foi aprovado! Parabéns :)" << endl;
    } else if (media >= 5) {
        cout << "Você ficou de recuperação" << endl;
    } else {
        cout << "Você foi reprovado :( " << endl;
    }
}

// Função para imprimir um array de inteiros
void imprimirArrayInt() {
    int array[5] = {1, 3, 5, 7, 8};
    for(int i = 0; i < 5; i++){
        cout << array[i]  << " ";
    }
    cout << "\n";
}

// Função para imprimir um array de caracteres
void imprimirArrayChar() {
    char array[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int i = 0;
    while (i < 6) {
        cout << array[i] << " ";
        i++;
    }
    cout << "\n";
}

// Função para imprimir os números pares de um array
void imprimirParesArray() {
    int array[7] = {1, 2, 3, 4, 5, 6, 7};
    for(int i = 0; i < 7; i++){
        if(array[i] % 2 == 0){
            cout << array[i] << " ";
        }
    }
    cout << "\n";
}

// Função para imprimir valores maiores que 5.0 de um array de floats
void imprimirMaioresQueCinco() {
    float array[8] = {1.1, 1.2, 3.4, 4.4, 5.5, 8.6, 6.9, 7.7};
    int i = 0;
    while(i < 8){
        if (array[i] > 5.0) {
            cout << array[i] << " ";
        }
        i++;
    }
    cout << "\n";
}

// Função para ler e imprimir um array de inteiros
void lerEImprimirArray() {
    int array[10];
    for(int a = 0; a < 10; a++){
        cout << "Digite um número: ";
        cin >> array[a];
    }
    for(int i = 0; i < 10; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
}

// Função para imprimir o tamanho de um array de caracteres
void imprimirTamanhoArrayChar() {
    char array[5] = {'a', 'b', 'c', 'd', 'c'};
    int tam = strlen(array);
    cout << tam << "\n";
}

// Função para realizar operações em um array de inteiros
void operacoesArrayInt() {
    int array[8] = {3, 7, 9, 12, 4, 6, 8, 10};
    cout << array[2] << "\n";

    int soma = array[5] + array[7];
    cout << soma << "\n";
    
    cout << array[1] - array[0] << "\n";
    if(array[5] > 6){
        cout << array[5] << "\n";
    }
    if(array[7] % 2 == 0){
        cout << array[7] << "\n";
    }
    if (array[0] == array[3] + array[7]) {
        cout << array[0] << "\n";
    }
}

// Função para calcular a média de notas
void calcularMediaNotas() {
    float array[10];
    float soma = 0;
    float media;
    for(int i = 0; i < 10; i++){
        cout << "Digite sua nota: ";
        cin >> array[i];
    }
    for(int i = 0; i < 10; i++){
        soma += array[i];
    }
    media = soma / 10;
    cout << media << "\n";
}

// Função para somar elementos de um array
void somarArray() {
    int array[10] = {3, 7, 9, 12, 4, 6, 8, 10, 7, 8};
    int soma = array[0] + array[1];
    for(int i = 2; i < 10; i++){
       soma += array[i]; 
    }
    cout << soma << "\n";
}

// Função para imprimir números maiores que 10 e divisíveis por 3
void imprimirDivisiveisPorTres() {
    int array[8] = {27, 13, 11, 12, 5, 15, 30, 9};
    for(int i = 0; i < 8; i++){
        if(array[i] % 3 == 0 && array[i] > 10){
            cout << array[i] <<  "\n";
        }
    }
}

// Função para encontrar o valor máximo e mínimo em um array
void encontrarMaxMin() {
    int array[12] = {31, 13, 11, 12, 5, 15, 30, 9, 20, 10, 20, 10};
    int maximo = array[0];
    int minimo = array[0];
    for(int i = 0; i < 12; i++){
        if(array[i] > maximo){
            maximo = array[i];
        }
        if (array[i] < minimo){
            minimo = array[i];
        }
    }
    cout << "O valor máximo desse array é: " << maximo << "\n";
    cout << "O valor mínimo desse array é: " << minimo << "\n";
}

// Função para calcular média ponderada
void calcularMediaPonderada() {
    float array[5];
    float array2[5];
    float soma = 0;
    float peso = 0;
    float mediaP;
    for(int i = 0; i < 5; i++){
        cout << "Digite suas notas: ";
        cin >> array[i];
    }
    for(int a = 0; a < 5; a++){
        cout << "Digite o peso de suas notas: ";
        cin >> array2[a];
    }
    for(int i = 0; i < 5; i++){
        soma += array[i] * array2[i];
        peso += array2[i];
    }
    mediaP = soma / peso;
    cout << mediaP << "\n";
}

// Menu principal
int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao;
    do {
        cout << "\nMenu de Opções:\n";
        cout << "1. Verificar se o número é maior que 10\n";
        cout << "2. Verificar se o número é igual a 10\n";
        cout << "3. Verificar se o número é positivo ou negativo\n";
        cout << "4. Verificar se o número é par ou ímpar\n";
        cout << "5. Comparar o número com 10\n";
        cout << "6. Verificar o dia da semana\n";
        cout << "7. Verificar se é maior de idade\n";
        cout << "8. Verificar se o número é múltiplo de 3 e 5\n";
        cout << "9. Verificar o tipo de triângulo\n";
        cout << "10. Calculadora\n";
        cout << "11. Verificar se o ano é bissexto\n";
        cout << "12. Converter temperatura de Celsius para Fahrenheit\n";
        cout << "13. Calcular o IMC\n";
        cout << "14. Verificar o quadrante das coordenadas\n";
        cout << "15. Simular saque bancário\n";
        cout << "16. Verificar quantidade de leads\n";
        cout << "17. Calcular média de notas e presença\n";
        cout << "18. Imprimir array de inteiros\n";
        cout << "19. Imprimir array de caracteres\n";
        cout << "20. Imprimir números pares do array\n";
        cout << "21. Imprimir valores maiores que 5.0\n";
        cout << "22. Ler e imprimir array de inteiros\n";
        cout << "23. Imprimir tamanho de array de caracteres\n";
        cout << "24. Realizar operações em array de inteiros\n";
        cout << "25. Calcular média de notas\n";
        cout << "26. Somar elementos de um array\n";
        cout << "27. Imprimir números divisíveis por 3 e maiores que 10\n";
        cout << "28. Encontrar valor máximo e mínimo em array\n";
        cout << "29. Calcular média ponderada\n";
        cout << "30. Exibir nome" << endl;
        cout << "31. Exibir vogais" << endl;
        cout << "32. Verificar vogal" << endl;
        cout << "33. Armazenar palavra em array" << endl;
        cout << "34. Armazenar frase em array" << endl;
        cout << "35. Exibir elementos do array" << endl;
        cout << "36. Exibir elemento do array de strings" << endl;
        cout << "37. Exibir dia da semana" << endl;
        cout << "38. Comparar palavras" << endl;
        cout << "39. Contar vogais em frase" << endl;
        cout << "40. Substituir vogais em frase" << endl;
        cout << "41. Inverter palavra" << endl;
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: exercicio1();
            break;
            case 2: exercicio2();
            break;
            case 3: exercicio3();
            break;
            case 4: exercicio4();
            break;
            case 5: exercicio5();
            break;
            case 6: exercicio6();
            break;
            case 7: verificarMaioridade();
            break;
            case 8: exercicio7();
            break;
            case 9: exercicio8();
            break;
            case 10: exercicio9();
            break;
            case 11: exercicio10();
            break;
            case 12: exercicio11();
            break;
            case 13: exercicio12();
            break;
            case 14: exercicio13();
            break;
            case 15: exercicio14();
            break;
            case 16: exercicio15();
            break;
            case 17: exercicio16();
            break;
            case 18: imprimirArrayInt();
            break;
            case 19: imprimirArrayChar();
            break;
            case 20: imprimirParesArray();
            break;
            case 21: imprimirMaioresQueCinco();
            break;
            case 22: lerEImprimirArray();
            break;
            case 23: imprimirTamanhoArrayChar();
            break;
            case 24: operacoesArrayInt();
            break;
            case 25: calcularMediaNotas();
            break;
            case 26: somarArray();
            break;
            case 27: imprimirDivisiveisPorTres();
            break;
            case 28: encontrarMaxMin();
            break;
            case 29: calcularMediaPonderada();
            break;
            case 30: exibirNome();
            break;
            case 31: exibirVogais();
            break;
            case 32: verificarVogal();
            break;
            case 33: armazenarPalavra();
            break;
            case 34: armazenarFrase();
            break;
            case 35: exibirElementosArray();
            break;
            case 36: exibirElementoArrayString();
            break;
            case 37: exibirDiaSemana();
            break;
            case 38: compararPalavras();
            break;
            case 39: contarVogais();
            break;
            case 40: substituirVogais();
            break;
            case 41: inverterPalavra();
            break;
            case 0: cout << "Saindo..." << endl; break;
            default: cout << "Opção inválida! Tente novamente." << endl; break;
        }
    } while (opcao != 0);

    return 0;
}
