#include <stdio.h> 

 

// --- Funções Recursivas para as Peças --- 

 

// Função recursiva para o movimento da Torre 

// A cada chamada, imprime a direção e decrementa o contador. 

// A recursão termina quando o contador chega a 0. 

void moverTorre(int passos) { 

    if (passos > 0) { 

        printf("Direita\n"); 

        moverTorre(passos - 1); // Chamada recursiva para o próximo passo 

    } 

} 

 

// Função recursiva para o movimento da Rainha 

// Similar à Torre, mas para o movimento da Rainha (esquerda). 

void moverRainha(int passos) { 

    if (passos > 0) { 

        printf("Esquerda\n"); 

        moverRainha(passos - 1); // Chamada recursiva 

    } 

} 

 

// Função recursiva e aninhada para o movimento do Bispo 

// A lógica é dividida: o loop externo controla o número de passos, 

// e a recursão interna garante que as duas direções sejam impressas. 

// Esta implementação usa loops aninhados para o Bispo, conforme solicitado. 

void moverBispo(int passos) { 

    printf("Simulando o movimento do Bispo:\n"); 

    // Loop externo para o movimento vertical (Cima) 

    for (int i = 0; i < passos; i++) { 

        printf("Cima, "); 

        // Loop interno para o movimento horizontal (Direita) 

        // Usamos um loop 'do-while' para demonstrar a aninhamento. 

        int j = 1; 

        do { 

            printf("Direita\n"); 

            j--; 

        } while (j > 0); 

    } 

} 

 

int main() { 

    // --- Simulação do Movimento da Torre (Recursividade) --- 

    printf("Simulando o movimento da Torre:\n"); 

    moverTorre(5); 

    printf("--- Fim do movimento da Torre ---\n\n"); 

 

    // --- Simulação do Movimento do Bispo (Recursividade e Loops Aninhados) --- 

    moverBispo(5); 

    printf("--- Fim do movimento do Bispo ---\n\n"); 

 

    // --- Simulação do Movimento da Rainha (Recursividade) --- 

    printf("Simulando o movimento da Rainha:\n"); 

    moverRainha(8); 

    printf("--- Fim do movimento da Rainha ---\n\n"); 

 

    // --- Simulação do Movimento do Cavalo (Loops Complexos) --- 

    printf("Simulando o movimento do Cavalo:\n"); 

 

    int movimentos_verticais = 2; 

    int movimentos_horizontais = 1; 

 

    // Loop externo para o movimento vertical (duas casas para cima) 

    for (int i = 0; i < movimentos_verticais; i++) { 

        printf("Cima\n"); 

    } 

 

    // Loop interno para o movimento horizontal (uma casa para a direita) 

    // Usamos um 'do-while' com 'break' e 'continue' para demonstrar controle de fluxo. 

    // Embora simples, a lógica serve para ilustrar o conceito. 

    int i = 0; 

    do { 

        i++; 

        if (i > movimentos_horizontais) { 

            break; // Sai do loop após o número de movimentos necessários. 

        } 

        printf("Direita\n"); 

    } while (1); // Loop infinito, controlado pelo 'break' 

 

    printf("--- Fim do movimento do Cavalo ---\n\n"); 

 

    return 0; 

} 