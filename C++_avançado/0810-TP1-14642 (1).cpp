#include <stdio.h>
#include <iostream>
using namespace std;

const int numDCarros = 5;
const int numDPistas = 10;


struct CarroCompeticao {
    string nomePiloto;
    string modeloCarro;
    int numCarro;
    float tempoCorridaSegundos;
    int pontosAtribuidos;
};

struct PistasCircuito {
    string nomePista;
    string dataPista;
    string localPista;
    CarroCompeticao carros[numDCarros];
};


void registarCarros(CarroCompeticao carros[], int tamanho){

    carros[0].nomePiloto = "Lewis Hamilton";
    carros[0].modeloCarro = "Mercedes W11";
    carros[0].numCarro = 44;
    carros[0].tempoCorridaSegundos = 74.713;

    carros[1].nomePiloto = "Max Verstappen";
    carros[1].modeloCarro = "Red Bull Racing RB16B";
    carros[1].numCarro = 33;
    carros[1].tempoCorridaSegundos = 74.458;

    carros[2].nomePiloto = "Sebastian Vettel";
    carros[2].modeloCarro = "Ferrari SF70H";
    carros[2].numCarro = 5;
    carros[2].tempoCorridaSegundos = 74.498;

    carros[3].nomePiloto = "Ayrton Senna";
    carros[3].modeloCarro = "McLaren MP4/4";
    carros[3].numCarro = 12;
    carros[3].tempoCorridaSegundos = 83.052;

    carros[4].nomePiloto = "Nigel Mansell";
    carros[4].modeloCarro = "Williams FW14B";
    carros[4].numCarro = 10;
    carros[4].tempoCorridaSegundos = 66.961;

}

void registrarPistas(PistasCircuito pistas[]){

    // Informcao da pista
    pistas[0].nomePista = "Silverstone Circuit";
    pistas[0].dataPista = "8 de julho de 2018";
    pistas[0].localPista = "Silverstone, Gra-Bretanha";

    //Tempo de cada carro na pista
    pistas[0].carros[0].tempoCorridaSegundos = 74.231;
    pistas[0].carros[1].tempoCorridaSegundos = 85.654;
    pistas[0].carros[2].tempoCorridaSegundos = 92.871;
    pistas[0].carros[3].tempoCorridaSegundos = 80.456;
    pistas[0].carros[4].tempoCorridaSegundos = 78.923;

    // Informcao da pista
    pistas[1].nomePista = "Hockenheimring";
    pistas[1].dataPista = "22 de julho de 2018";
    pistas[1].localPista = "Hockenheim, Alemanha";

    //Tempo de cada carro na pista
    pistas[1].carros[0].tempoCorridaSegundos = 99.145;
    pistas[1].carros[1].tempoCorridaSegundos = 101.376;
    pistas[1].carros[2].tempoCorridaSegundos = 86.542;
    pistas[1].carros[3].tempoCorridaSegundos = 95.732;
    pistas[1].carros[4].tempoCorridaSegundos = 89.624;

    // Informcao da pista
    pistas[2].nomePista = "Autodromo Jose Carlos Pace (Interlagos)";
    pistas[2].dataPista = "25 de março de 1990";
    pistas[2].localPista = "Sao Paulo, Brasil";

    //Tempo de cada carro na pista
    pistas[2].carros[0].tempoCorridaSegundos = 110.324;
    pistas[2].carros[1].tempoCorridaSegundos = 82.967;
    pistas[2].carros[2].tempoCorridaSegundos = 90.123;
    pistas[2].carros[3].tempoCorridaSegundos = 84.567;
    pistas[2].carros[4].tempoCorridaSegundos = 76.852;

    // Informcao da pista
    pistas[3].nomePista = "Circuit de Monaco";
    pistas[3].dataPista = "26 de maio de 2019";
    pistas[3].localPista = "Monte Carlo, Monaco";

    //Tempo de cada carro na pista
    pistas[3].carros[0].tempoCorridaSegundos = 65.231;
    pistas[3].carros[1].tempoCorridaSegundos = 75.654;
    pistas[3].carros[2].tempoCorridaSegundos = 82.841;
    pistas[3].carros[3].tempoCorridaSegundos = 60.456;
    pistas[3].carros[4].tempoCorridaSegundos = 75.923;

    // Informcao da pista
    pistas[4].nomePista = "Circuit of the Americas";
    pistas[4].dataPista = "3 de novembro de 2019";
    pistas[4].localPista = "Austin, Estados Unidos";

    //Tempo de cada carro na pista
    pistas[4].carros[0].tempoCorridaSegundos = 70.235;
    pistas[4].carros[1].tempoCorridaSegundos = 65.634;
    pistas[4].carros[2].tempoCorridaSegundos = 97.821;
    pistas[4].carros[3].tempoCorridaSegundos = 81.423;
    pistas[4].carros[4].tempoCorridaSegundos = 69.323;

    // Informcao da pista
    pistas[5].nomePista = "Hungaroring";
    pistas[5].dataPista = "29 de julho de 2018";
    pistas[5].localPista = "Mogyorod, Hungria ";

    //Tempo de cada carro na pista
    pistas[5].carros[0].tempoCorridaSegundos = 76.241;
    pistas[5].carros[1].tempoCorridaSegundos = 80.554;
    pistas[5].carros[2].tempoCorridaSegundos = 75.671;
    pistas[5].carros[3].tempoCorridaSegundos = 69.456;
    pistas[5].carros[4].tempoCorridaSegundos = 78.923;

    // Informcao da pista
    pistas[6].nomePista = "Suzuka International Racing Course";
    pistas[6].dataPista = "8 de outubro de 2017";
    pistas[6].localPista = "Suzuka, Japao";

    //Tempo de cada carro na pista
    pistas[6].carros[0].tempoCorridaSegundos = 77.731;
    pistas[6].carros[1].tempoCorridaSegundos = 95.954;
    pistas[6].carros[2].tempoCorridaSegundos = 76.871;
    pistas[6].carros[3].tempoCorridaSegundos = 80.546;
    pistas[6].carros[4].tempoCorridaSegundos = 101.923;

    // Informcao da pista
    pistas[7].nomePista = "Circuito de Spa-Francorchamps";
    pistas[7].dataPista = "28 de agosto de 2016";
    pistas[7].localPista = " Stavelot, Belgica";

    //Tempo de cada carro na pista
    pistas[7].carros[0].tempoCorridaSegundos = 62.231;
    pistas[7].carros[1].tempoCorridaSegundos = 88.854;
    pistas[7].carros[2].tempoCorridaSegundos = 95.851;
    pistas[7].carros[3].tempoCorridaSegundos = 85.556;
    pistas[7].carros[4].tempoCorridaSegundos = 77.777;

    // Informcao da pista
    pistas[8].nomePista = "Circuito de Barcelona-Catalunha";
    pistas[8].dataPista = "9 de maio de 1993";
    pistas[8].localPista = "Montmelo, Espanha";

    //Tempo de cada carro na pista
    pistas[8].carros[0].tempoCorridaSegundos = 79.276;
    pistas[8].carros[1].tempoCorridaSegundos = 103.654;
    pistas[8].carros[2].tempoCorridaSegundos = 90.971;
    pistas[8].carros[3].tempoCorridaSegundos = 85.856;
    pistas[8].carros[4].tempoCorridaSegundos = 97.923;

    // Informcao da pista
    pistas[9].nomePista = "Autodromo Nazionale Monza";
    pistas[9].dataPista = "12 de setembro de 2010";
    pistas[9].localPista = "Monza, Italia";

    //Tempo de cada carro na pista
    pistas[9].carros[0].tempoCorridaSegundos = 104.731;
    pistas[9].carros[1].tempoCorridaSegundos = 68.674;
    pistas[9].carros[2].tempoCorridaSegundos = 59.871;
    pistas[9].carros[3].tempoCorridaSegundos = 76.886;
    pistas[9].carros[4].tempoCorridaSegundos = 88.823;
}

void campeao(PistasCircuito pistas[]){
     for (int i = 0; i < numDPistas; i++){
        for (int j = 0; j < numDCarros; j++){
            int posicao = 0;
            for (int x = 0; x < numDCarros; x++){
                if (pistas[x].carros[i].tempoCorridaSegundos < pistas[x].carros[i + 1].tempoCorridaSegundos){

                }
            }
        }
     }
}

//Ordernar o tempo do carro
void ordenarPorTempo(CarroCompeticao carros[], int tamanho){
    for (int i = 0; i < tamanho - 1; i++){
        for (int j = 0; j < tamanho - 1; j++) {
            if (carros[j].tempoCorridaSegundos > carros[j + 1].tempoCorridaSegundos) {

                CarroCompeticao tempo = carros[j];

                carros[j] = carros[j + 1];
                carros[j + 1] = tempo;
            }
        }
    }
}

void exibirResultados(CarroCompeticao carros[], int tamanho) {

    cout << "***CLASSIFICACAO***";

    for (int i = 0; i < tamanho; i++){
            cout << "\n\nPosicao " << i + 1 << ": " << carros[i].modeloCarro;
            cout << " / " << "Piloto: " << carros[i].nomePiloto << " / " << "Numero do carro: ";
            cout << carros[i].numCarro << " / " << "Com o tempo de: " << carros[i].tempoCorridaSegundos << " segundos.\n";
        }
}

void exibirPistas( PistasCircuito pistas[]) {

    cout << "\n\n***PISTAS***";

    for (int i = 0; i < numDPistas; i++){
            cout << "\n\nPista " << i + 1 << ": " << pistas[i].nomePista;
            cout << " / " << "Data: " << pistas[i].dataPista << " / " << "Local da pista: ";
            cout << pistas[i].localPista << "\n";
        }
}



int main (){
    CarroCompeticao carro[numDCarros];
    PistasCircuito pista[numDPistas];

    // Funcoes carros
    registarCarros(carro, numDCarros);
    ordenarPorTempo(carro, numDCarros);
    exibirResultados(carro, numDCarros);

    // Funcoes pistas
    registrarPistas(pista);
    exibirPistas(pista);


    return 0;
}
