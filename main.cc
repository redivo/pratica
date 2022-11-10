#include <iostream>
#include <vector>
#include <string>
#include <time.h>

using namespace std;

/**************************************************************************************************/

vector<string> global_Participantes {
    "00 ",
    "01 ",
    "02 ",
    "03 ",
    "04 ",
    "05 ",
    "06 ",
    "07 ",
    "08 ",
    "09 ",
    "10 ",
    "11 ",
    "12 ",
    "13 ",
    "14 ",
    "15 ",
    "16 ",
    "17 ",
    "18 ",
    "19 ",
    "20 ",
    "21 ",
    "22 ",
    "23 ",
    "24 ",
    "25 ",
    "26 ",
    "27 ",
    "28 ",
    "29 ",
    "30 ",
    "31 ",
    "32 ",
    "33 ",
    "34 ",
    "35 ",
    "36 ",
    "37 ",
    "38 ",
    "39 ",
    "40 ",
};

/**************************************************************************************************/

/* lista de opções do menu */
typedef enum {
    INVALIDA = -1,
    LISTA = 1,
    SORTEIA = 2,
} opcao_t;

/**************************************************************************************************/

opcao_t menu()
{
    int opcao;

    // Exibe menu
    cout << endl;
    cout << "Escolha sua opcao:" << endl;
    cout << " 1 - listar participantes" << endl;
    cout << " 2 - sortear 1 participante" << endl;
    cout << endl;
    cout << "> ";

    // Pega valor
    cin >> opcao;

    // Verifica valor
    if (opcao != LISTA && opcao != SORTEIA) {
        cout << "Opcao invalida!!!" << endl;
        return INVALIDA;
    } else {
        // Converte valor e retorna
        return (opcao_t)opcao;
    }
}

/**************************************************************************************************/

void lista_participantes()
{
    // Mostra titulo
    cout << endl;
    cout << "Lista de participantes:" << endl;

    // Itera sobre os participantes exibindo os nomes
    for (auto participante : global_Participantes) {
        cout << "  " << participante << endl;
    }
}

/**************************************************************************************************/

void sorteia_participante()
{
    // Inicializa gerador randomico
    srand(time(0));

    // Sorteia um indice de participante
    size_t indice = rand() % global_Participantes.size();

    // Exibe o paricipante sorteado
    cout << endl;
    cout << "=== Praticipante sorteadu: " << global_Participantes[indice] << endl;
}

/**************************************************************************************************/

int main()
{
    //

    // Exibe menu e pega a opcao do usuario
    opcao_t opcao = menu();

    // Trata opcao escolhida
    switch (opcao) {
        case LISTA:
            lista_participantes();
            break;

        case SORTEIA:
            sorteia_participante();
            break;

        default:
            break;
    }

    return 0;
}
