#include <stdio.h>
#include <iostream>
using namespace std;

struct Modulo {
    string codModulo;
    string nomeModulo;
    string disciplina;
    int notaModulo;
    bool concluido;
};

void mostraInfo (Modulo xpto) {
    cout << "\n";
    cout << " O modulo " << xpto.nomeModulo;
    cout << ", com o codigo: " << xpto.codModulo << ",";
    cout << " da disciplina de " << xpto.disciplina;
    if (xpto.concluido == true){
        cout << " foi concluido";
        cout << " e a nota foi: " << xpto.notaModulo;
    } else {
        cout << " nao foi concluido";
        cout << " como nao foi concluido nao tem nota portanto a note e: " << xpto.notaModulo;
    }
    cout << "\n";
}

double mediaDisciplina(Modulo a, Modulo b, Modulo c, Modulo d) {
    return (a.notaModulo + b.notaModulo + c.notaModulo + d.notaModulo)/4.0;
}

string concluidoDisciplina(Modulo a, Modulo b, Modulo c, Modulo d, Modulo e, Modulo f, Modulo g){
    string modulosFeitos;

    if (a.concluido == true){
        modulosFeitos = a.nomeModulo;
    } else {}
    if (b.concluido == true){
        modulosFeitos = modulosFeitos + ", " + b.nomeModulo;
    } else {}
    if (c.concluido == true){
        modulosFeitos = modulosFeitos + ", " + c.nomeModulo;
    } else {}
    if (d.concluido == true){
        modulosFeitos = modulosFeitos + ", " + d.nomeModulo;
    } else {}
    if (e.concluido == true){
        modulosFeitos = modulosFeitos + ", " + e.nomeModulo;
    } else {}
    if (f.concluido == true){
        modulosFeitos = modulosFeitos + ", " + f.nomeModulo;
    } else {}
    if (g.concluido == true){
        modulosFeitos = modulosFeitos + ", " + g.nomeModulo;
    } else {}

    return modulosFeitos;

}

string porconcluirDisciplina(Modulo a, Modulo b, Modulo c, Modulo d, Modulo e, Modulo f, Modulo g){
    string modulosNaoFeitos;

    if (a.concluido == false){
        modulosNaoFeitos = a.nomeModulo;
    } else {}
    if (b.concluido == false){
        modulosNaoFeitos = modulosNaoFeitos + ", " + b.nomeModulo;
    } else {}
    if (c.concluido == false){
        modulosNaoFeitos = modulosNaoFeitos + ", " + c.nomeModulo;
    } else {}
    if (d.concluido == false){
        modulosNaoFeitos = modulosNaoFeitos + ", " + d.nomeModulo;
    } else {}
    if (e.concluido == false){
        modulosNaoFeitos = modulosNaoFeitos + ", " + e.nomeModulo;
    } else {}
    if (f.concluido == false){
        modulosNaoFeitos = modulosNaoFeitos + ", " + f.nomeModulo;
    } else {}
    if (g.concluido == false){
        modulosNaoFeitos = modulosNaoFeitos + ", " + g.nomeModulo;
    } else {}

    return modulosNaoFeitos;
}

int main (){
    Modulo modulo1;
    Modulo modulo2;
    Modulo modulo3;
    Modulo modulo4;
    Modulo modulo5;
    Modulo modulo6;
    Modulo modulo7;

    modulo1.codModulo = "0804";
    modulo1.nomeModulo = "Algoritmos";
    modulo1.disciplina = "Programacao";
    modulo1.notaModulo = 17;
    modulo1.concluido = true;

    modulo2.codModulo = "0805";
    modulo2.nomeModulo = "Estruturas de Dados";
    modulo2.disciplina = "Programacao";
    modulo2.notaModulo = 17;
    modulo2.concluido = true;

    modulo3.codModulo = "0806";
    modulo3.nomeModulo = "Principios metodologicos de Programacao";
    modulo3.disciplina = "Programacao";
    modulo3.notaModulo = 13;
    modulo3.concluido = true;

    modulo4.codModulo = "0807";
    modulo4.nomeModulo = "Programacao em C/C++ - fundamentos";
    modulo4.disciplina = "Programacao";
    modulo4.notaModulo = 19;
    modulo4.concluido = true;

    modulo5.codModulo = "0808";
    modulo5.nomeModulo = "Programacao em C/C++ - avancada";
    modulo5.disciplina = "Programacao";
    modulo5.notaModulo = 0;
    modulo5.concluido = false;

    modulo6.codModulo = "0809";
    modulo6.nomeModulo = "Programacao de sistemas distribuidos - JAVA";
    modulo6.disciplina = "Programacao";
    modulo6.notaModulo = 0;
    modulo6.concluido = false;

    modulo7.codModulo = "0810";
    modulo7.nomeModulo = "Desenvolvimento de aplicacoes web em JAVA";
    modulo7.disciplina = "Programacao";
    modulo7.notaModulo = 0;
    modulo7.concluido = false;

    mostraInfo (modulo1);
    mostraInfo (modulo2);
    mostraInfo (modulo3);
    mostraInfo (modulo4);
    mostraInfo (modulo5);
    mostraInfo (modulo6);
    mostraInfo (modulo7);
    cout << "\n A media das notas dos modulos concluidos e: ";
    cout << mediaDisciplina(modulo1, modulo2, modulo3, modulo4) << "\n";
    cout << "Modulos concluidos: ";
    cout << concluidoDisciplina (modulo1, modulo2, modulo3, modulo4, modulo5, modulo6, modulo7);
    cout << "\n\nModulos nao concluidos: ";
    cout << porconcluirDisciplina (modulo1, modulo2, modulo3, modulo4, modulo5, modulo6, modulo7);



}
