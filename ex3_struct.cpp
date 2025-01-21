#include <stdio.h>
#include <iostream>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    string curso;
    string localidade;
    bool concluido;
};

void mostraInfo (Aluno xpto) {
    cout << "\n\n";
    cout << " O aluno chamado " << xpto.nome;
    cout << " tens " << xpto.idade << " anos";
    cout << " e do curso " << xpto.curso;
    cout << " e mora em " << xpto.localidade;
    if (xpto.concluido){
        cout << " e concluiu seu curso.";
    } else {
        cout << " nao concluiu seu curso.";
    }
    cout << "\n\n";
}

double mediaAlunos(Aluno x, Aluno y) {
return (x.idade + y.idade) / 2 ;
}

int main (){
    Aluno aluno1;
    Aluno aluno2;

    aluno1.nome = "Luis";
    aluno1.idade = 25;
    aluno1.curso = "Programador Infomático";
    aluno1.localidade = "Famalicao";
    aluno1.concluido = true;

    aluno2.nome = "Fred";
    aluno2.idade = 15;
    aluno2.curso = "Programador Infomático";
    aluno2.localidade = "Famalicodeas";
    aluno2.concluido = false;

    mostraInfo (aluno1);
    mostraInfo (aluno2);
    cout << "\n\n A media de idade dos 2 alunos e: ";
    cout << mediaAlunos(aluno1, aluno2) << "\n\n";


    /*cout << "\n\n";
    cout << " O aluno chamado " << aluno1.nome;
    cout << " tens " << aluno1.idade << " anos";
    cout << " e do curso " << aluno1.curso;
    cout << " e mora em " << aluno1.localidade;
    if (aluno1.concluido){
        cout << " e concluiu seu curso.";
    } else {
        cout << " nao concluiu seu curso.";
    }
    cout << "\n\n";

    cout << "\n\n";
    cout << " O aluno chamado " << aluno1.nome;
    cout << " tens " << aluno1.idade << " anos";
    cout << " e do curso " << aluno1.curso;
    cout << " e mora em " << aluno1.localidade;
    if (aluno2.concluido){
        cout << " e concluiu seu curso.";
    } else {
        cout << " nao concluiu seu curso.";
    }
    cout << "\n\n";*/
    return 0;
}
