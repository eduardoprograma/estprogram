/*(A Peneira de Eratóstenes) Um inteiro primo é qualquer inteiro que só pode ser dividido exatamente por si mesmo e por 1. A Peneira de Eratóstenes é um método de encontrar números primos. Ele funciona da seguinte maneira: 
1) Crie um array com todos os elementos inicializados com 1 (verdadeiro). Os elementos do array com subscritos primos permanecerão 1. Todos os outros elementos do array serão definidos posteriormente como zero. 
2) Começando com o subscrito 2 do array (o subscrito 1 deve ser primo), sempre que for encontrado um elemento do array cujo valor seja 1, faça um loop pelo restante do array e defina como zero todos os elementos cujo subscrito seja múltiplo do subscrito com valor 1. Para o subscrito 2 do array, todos os elementos além do 2 que forem múltiplos de 2 serão definidos como zero (subscritos 4, 6, 8, 10 etc). Para o subscrito 3 do array, todos os elementos além do 3 que forem múltiplos de 3 serão definidos como zero (subscritos 6, 9, 12, 15 etc). 
Quando esse processo for concluído, os elementos do array que ainda estiverem definidos como 1 indicam que o subscrito é um número primo. Esses subscritos podem ser impressos. Escreva um programa que use um array de 1000 elementos para determinar e imprimir os números primos entre 1 e 999. Ignore o elemento 0 do array.*/