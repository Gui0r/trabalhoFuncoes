#include <iostream>
#include <locale.h>
#include <cstring>
#include <algorithm>
#include <string>
#include <cstdlib>

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
void exibirNome(){
    string nome = "Guilherme";
    cout << "Seu nome é: " << nome;
}

void exibirVogais(){
    char array[] = {'a', 'e', 'i', 'o', 'u'};

    cout << "Palavra 1: " << array[0];
    cout << "Palavra 2: " << array[1];
    cout << "Palavra 3: " << array[2];
    cout << "Palavra 4: " << array[3];
    cout << "Palavra 5: " << array[4];
}

void verificarVogal(){
    string letra;

    cout << "Digite uma letra em minusculo: ";
    getline(cin, letra);

    if(letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u"){
        cout << "A letra digitada é vogal!";
    }else{
        cout << "A letra digitada não é vogal!";
    }
}

void armazenarPalavra(){
     char array[9] = {};

    cout << "Digite uma palavra de 10 letras para armazenar em um array: ";
    cin >> array;

    cout << "A palavra digitada é: " << array;
}
void armazenarFrase(){
     char array[19] = {};

    cout << "Digite uma frase de 20 letras ou menos LETRA por LETRA: "; 
    cin >> array[0];
    cin >> array[1];
    cin >> array[2];
    cin >> array[3];
    cin >> array[4];
    cin >> array[5];
    cin >> array[6];
    cin >> array[7];
    cin >> array[8];
    cin >> array[9];
    cin >> array[10];
    cin >> array[11];
    cin >> array[12];
    cin >> array[13];
    cin >> array[14];
    cin >> array[15];
    cin >> array[16];
    cin >> array[17];
    cin >> array[18];
    cin >> array[19];

}
void exibirElementosArray(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};

    cout << array[1] << endl;
    cout << array[3] << endl;
    cout << array[5] << endl;
    cout << array[7] << endl;
    cout << array[9] << endl;
}

void exibirElementosArrayString(){
    string array[5] = {"Maça", "Pêssego", "Banana", "Abacaxi", "Kiwi"};

    cout << array[2];

}
void exibirCores(){
     int num;
    string array[7] = {"Vermelho", "Amarelo", "Preto", "Verde", "Branco", "Azul", "Roxo"};

    cout << "Digite um número de 1 a 7: ";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << array[0];
        break;
    case 2:
        cout << array[1];
        break;
     case 3:
        cout << array[2];
        break;
     case 4:
        cout << array[3];
        break;
     case 5:
        cout << array[4];
        break;
     case 6:
        cout << array[5];
        break;
    case 7:
        cout << array[6];
        break;
    }
}
void compararPalavras(){
     char letra;
    string array[10] = {"vaca", "crocodilo", "gato", "peixe", "hamster", "sapo", "leão", "macaco", "porco", "rã"};

    cout << "Digite uma letra para verificar se um animal com essa letra existe no array: ";
    cin >> letra;

    if(letra == 'v'){
        cout << array[0];
    }else if(letra == 'c'){
        cout << array[1];
    }else if(letra == 'g'){
        cout << array[2];
    }else if(letra == 'p'){
        cout << array[3];
    }else if(letra == 'h'){
        cout << array[4];
    }else if(letra == 's'){
        cout << array[5];
    }else  if(letra == 'l'){
        cout << array[6];
    }else if(letra == 'm'){
        cout << array[7];
    }else if(letra == 'p'){
        cout << array[8];
    }else if(letra == 'r'){
        cout << array[9];
    }else{
        cout << "Não temos um animal com esta letra!";
    }
}
void contarVogais(){
    char frase1[20];
    int numVogais = 0;

    if(frase1[0] == 'a' || frase1[0] == 'e' || frase1[0] == 'i' || frase1[0] == 'o' || frase1[0] == 'u')numVogais++;
    if(frase1[1] == 'a' || frase1[1] == 'e' || frase1[1] == 'i' || frase1[1] == 'o' || frase1[1] == 'u')numVogais++;
    if(frase1[2] == 'a' || frase1[2] == 'e' || frase1[2] == 'i' || frase1[2] == 'o' || frase1[2] == 'u')numVogais++;
    if(frase1[3] == 'a' || frase1[3] == 'e' || frase1[3] == 'i' || frase1[3] == 'o' || frase1[3] == 'u')numVogais++;
    if(frase1[4] == 'a' || frase1[4] == 'e' || frase1[4] == 'i' || frase1[4] == 'o' || frase1[4] == 'u')numVogais++;
    if(frase1[5] == 'a' || frase1[5] == 'e' || frase1[5] == 'i' || frase1[5] == 'o' || frase1[5] == 'u')numVogais++;
    if(frase1[6] == 'a' || frase1[6] == 'e' || frase1[6] == 'i' || frase1[6] == 'o' || frase1[6] == 'u')numVogais++;
    if(frase1[7] == 'a' || frase1[7] == 'e' || frase1[7] == 'i' || frase1[7] == 'o' || frase1[7] == 'u')numVogais++;
    if(frase1[8] == 'a' || frase1[8] == 'e' || frase1[8] == 'i' || frase1[8] == 'o' || frase1[8] == 'u')numVogais++;
    if(frase1[9] == 'a' || frase1[9] == 'e' || frase1[9] == 'i' || frase1[9] == 'o' || frase1[9] == 'u')numVogais++;
    if(frase1[10] == 'a' || frase1[10] == 'e' || frase1[10] == 'i' || frase1[10] == 'o' || frase1[10] == 'u')numVogais++;
    if(frase1[11] == 'a' || frase1[11] == 'e' || frase1[11] == 'i' || frase1[11] == 'o' || frase1[11] == 'u')numVogais++;
    if(frase1[12] == 'a' || frase1[12] == 'e' || frase1[12] == 'i' || frase1[12] == 'o' || frase1[12] == 'u')numVogais++;
    if(frase1[13] == 'a' || frase1[13] == 'e' || frase1[13] == 'i' || frase1[13] == 'o' || frase1[13] == 'u')numVogais++;
    if(frase1[14] == 'a' || frase1[14] == 'e' || frase1[14] == 'i' || frase1[14] == 'o' || frase1[14] == 'u')numVogais++;
    if(frase1[15] == 'a' || frase1[15] == 'e' || frase1[15] == 'i' || frase1[15] == 'o' || frase1[15] == 'u')numVogais++;
    if(frase1[16] == 'a' || frase1[16] == 'e' || frase1[16] == 'i' || frase1[16] == 'o' || frase1[16] == 'u')numVogais++;
    if(frase1[17] == 'a' || frase1[17] == 'e' || frase1[17] == 'i' || frase1[17] == 'o' || frase1[17] == 'u')numVogais++;
    if(frase1[18] == 'a' || frase1[18] == 'e' || frase1[18] == 'i' || frase1[18] == 'o' || frase1[18] == 'u')numVogais++;
    if(frase1[19] == 'a' || frase1[19] == 'e' || frase1[19] == 'i' || frase1[19] == 'o' || frase1[19] == 'u')numVogais++;

    cout << "Seu número de vogais é" << numVogais;


}

void substituirVogais(){
      char texto[50];
    cout << "Digite um texto: ";
    cin.getline(texto, 50);

    char *ptr = strchr(texto, 'a');

    if (ptr != nullptr) {
        int posicao = ptr - texto;
        cout << "A primeira ocorrencia da letra 'a' esta na posicao: " << posicao << endl;
    } else {
        cout << "Nao foi encontrada nenhuma ocorrencia da letra 'a'." << endl;
    }

}
void inverterPalavra(){
    string string1;

    cout << "Digite uma palavra de no maximo 10 letras: ";
    cin >> string1;
    //   getline(string1, cin);

    reverse(string1.begin(), string1.end());

    cout << "Sua palavra invertida é: " << string1;
}

void exibirNomeIdade(){
    char nomes[50];
    int idades[10];

    for (int i = 0; i < 10; ++i) {
        cout << "Digite o nome da " << i + 1 << "ª pessoa: ";
        cin >> nomes[i];
        cout << "Digite a idade da " << i + 1 << "ª pessoa: ";
        cin >> idades[i];
    }
    cout << "\nNomes\t\tIdades\n";
    for (int i = 0; i < 10; ++i) {
        cout << nomes[i] << "\t\t" << idades[i] << endl;
    }
}
void nomeProdutoPreco(){
char produtos[10][50];
float precos[10];

for (int i = 0; i < 10; ++i) {
    cout << "\nDigite o nome do " << i + 1 << "º produto: ";
    cin >> produtos[i];
    cout << "Digite o preço do " << i + 1 << "º produto: ";
    cin >> precos[i];
}

// Impressão de produtos e preços
cout << "\nProdutos\tPreços\n";
for (int i = 0; i < 10; ++i) {
    cout << produtos[i] << "\t\t" << precos[i] << endl;
}
}
void calculaPalavras(){
    char texto[50];
    cout << "\nDigite um texto: ";
    cin.getline(texto, 50);

int numPalavras = 1;  // começa com 1 porque a primeira palavra não tem espaço antes
for (int i = 0; i < strlen(texto); ++i) {
    if (texto[i] == ' ') {
        numPalavras++;
    }
}
cout << "O texto contém " << numPalavras << " palavras.\n";
}

void palavraMaisLonga(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char frase[50];
    cout << "\nDigite uma frase: ";
    cin.getline(frase, 50);

    char delimitador = ' ';
    int inicioPalavra = 0;
    int tamanhoPalavraMaisLonga = 0;
    int inicioPalavraMaisLonga = 0;
    int comprimentoAtual = 0;

    for (int i = 0; frase[i] != '\0'; ++i) {
        if (frase[i] == delimitador) {
            if (comprimentoAtual > tamanhoPalavraMaisLonga) {
                tamanhoPalavraMaisLonga = comprimentoAtual;
                inicioPalavraMaisLonga = inicioPalavra;
            }
            comprimentoAtual = 0;
            inicioPalavra = i + 1;
        } else {
            ++comprimentoAtual;
        }
    }

    // Verificar a última palavra
    if (comprimentoAtual > tamanhoPalavraMaisLonga) {
        tamanhoPalavraMaisLonga = comprimentoAtual;
        inicioPalavraMaisLonga = inicioPalavra;
    }

    char palavraMaisLonga[50];
    strncpy(palavraMaisLonga, &frase[inicioPalavraMaisLonga], tamanhoPalavraMaisLonga);
    palavraMaisLonga[tamanhoPalavraMaisLonga] = '\0';

    cout << "A palavra mais longa é: " << palavraMaisLonga << endl;

}
// Menu principal
int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao;

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
        cout << "30. Exibir nome \n";
        cout << "31. Exibir vogais \n";
        cout << "32. Verificar vogal \n";
        cout << "33. Armazenar palavra em array \n";
        cout << "34. Armazenar frase em array \n";
        cout << "35. Exibir elementos do array \n";
        cout << "36. Exibir elemento do array de strings \n";
        cout << "37. Exibir dia da semana \n";
        cout << "38. Comparar palavras \n";
        cout << "39. Substituir vogais em frase \n";
        cout << "40. Inverter palavra \n";
        cout << "41. Exibir o nome e idade da pessoa dentro de um array \n";
        cout << "42. Exibir o nome do produto e seu preço \n";
        cout << "43. Calcula o número de palavras em um texto \n";
        cout << "44. Exibir a palavra mais longa de uma frase \n";
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
            case 36: exibirCores();
            break;
            case 37: compararPalavras();
            break;
            case 38: contarVogais();
            break;
            case 39: substituirVogais();
            break;
            case 40: inverterPalavra();
            break;
            case 41: exibirNomeIdade();
            break;
            case 42: nomeProdutoPreco();
            break;
            case 43: calculaPalavras();
            break;
            case 44: palavraMaisLonga();
            break;
            case 0: cout << "Saindo..." << endl; break;
            default: cout << "Opção inválida! Tente novamente." << endl; break;
        }
    return 0;
}

