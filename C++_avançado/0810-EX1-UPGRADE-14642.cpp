#include <stdio.h>
#include <iostream>
using namespace std;

const int turma1P2024 = 20;

struct Aluno {
    string nome;
    int idade;
    string curso;
    string localidade;
    bool concluido;
    string numeroAluno;
};

void iniciarTurma(){
    turma1P2024[0].nome = "Sergio Karaban";
    turma1P2024[0].idade = 15;
    turma1P2024[0].curso = "Programador Infomatico";
    turma1P2024[0].localidade = "Famalicao";
    turma1P2024[0].concluido = false;
    turma1P2024[0].numeroAluno = "14618";


    /*alunos[1].nome = "Tomas Fernandes Granja";
    alunos[1].idade = 15;
    alunos[1].curso = "Programador Infomatico";
    alunos[1].localidade = "Famalicao";
    alunos[1].concluido = true;
    alunos[1].numeroAluno = "14619";

    alunos[2].nome = "Frederico Pereira Fonseca";
    alunos[2].idade = 15;
    alunos[2].curso = "Programador Infomatico";
    alunos[2].localidade = "Famalicao";
    alunos[2].concluido = false;
    alunos[2].numeroAluno = "14620";

    alunos[3].nome = "Goncalo Ferreira Peixoto";
    alunos[3].idade = 15;
    alunos[3].curso = "Programador Infomatico";
    alunos[3].localidade = "Famalicao";
    alunos[3].concluido = true;
    alunos[3].numeroAluno = "14621";

    alunos[4].nome = "Andre Filipe Azevedo Silva";
    alunos[4].idade = 15;
    alunos[4].curso = "Programador Infomatico";
    alunos[4].localidade = "Ribeirao";
    alunos[4].concluido = false;
    alunos[4].numeroAluno = "14622";

    alunos[5].nome = "Henrique Silva Oliveira";
    alunos[5].idade = 15;
    alunos[5].curso = "Programador Infomático";
    alunos[5].localidade = "Ribeirao";
    alunos[5].concluido = true;
    alunos[5].numeroAluno = "14625";

    alunos[6].nome = "Goncalo Castro Ferreira";
    alunos[6].idade = 15;
    alunos[6].curso = "Programador Infomatico";
    alunos[6].localidade = "Ribeirao";
    alunos[6].concluido = false;
    alunos[6].numeroAluno = "14630";

    alunos[7].nome = "Renan Tertuliano Straquicini";
    alunos[7].idade = 16;
    alunos[7].curso = "Programador Infomatico";
    alunos[7].localidade = "Ribeirao";
    alunos[7].concluido = true;
    alunos[7].numeroAluno = "14642";

    alunos[8].nome = "Eduardo Ferreira Machado";
    alunos[8].idade = 16;
    alunos[8].curso = "Programador Infomatico";
    alunos[8].localidade = "Pacos de Ferreira";
    alunos[8].concluido = false;
    alunos[8].numeroAluno = "14662";

    alunos[9].nome = "Samuel Ribeiro Torres";
    alunos[9].idade = 15;
    alunos[9].curso = "Programador Infomatico";
    alunos[9].localidade = "Famalicao";
    alunos[9].concluido = true;
    alunos[9].numeroAluno = "14674";

    alunos[10].nome = "Gabriel da Costa Ferreira";
    alunos[10].idade = 16;
    alunos[10].curso = "Programador Infomatico";
    alunos[10].localidade = "Famalicao";
    alunos[10].concluido = false;
    alunos[10].numeroAluno = "14682";

    alunos[11].nome = "Ruben Cardoso Alves";
    alunos[11].idade = 15;
    alunos[11].curso = "Programador Infomatico";
    alunos[11].localidade = "Famalicao";
    alunos[11].concluido = true;
    alunos[11].numeroAluno = "14685";

    alunos[12].nome = "Rui Duarte Silva Leite";
    alunos[12].idade = 15;
    alunos[12].curso = "Programador Infomatico";
    alunos[12].localidade = "Famalicao";
    alunos[12].concluido = false;
    alunos[12].numeroAluno = "14688";

    alunos[13].nome = "Martim Ribeiro Amorim";
    alunos[13].idade = 16;
    alunos[13].curso = "Programador Infomatico";
    alunos[13].localidade = "Pacos de Ferreira";
    alunos[13].concluido = true;
    alunos[13].numeroAluno = "14692";

    alunos[14].nome = "Mateus Arante";
    alunos[14].idade = 15;
    alunos[14].curso = "Programador Infomatico";
    alunos[14].localidade = "Famalicao";
    alunos[14].concluido = false;
    alunos[14].numeroAluno = "14695";

    alunos[15].nome = "David Santos Oliveira";
    alunos[15].idade = 15;
    alunos[15].curso = "Programador Infomatico";
    alunos[15].localidade = "Trofa";
    alunos[15].concluido = true;
    alunos[15].numeroAluno = "14711";

    alunos[16].nome = "Santiago Amorim Pereira";
    alunos[16].idade = 15;
    alunos[16].curso = "Programador Infomatico";
    alunos[16].localidade = "Famalicao";
    alunos[16].concluido = false;
    alunos[16].numeroAluno = "14712";

    alunos[17].nome = "Tomas Sousa Ferreira";
    alunos[17].idade = 17;
    alunos[17].curso = "Programador Infomatico";
    alunos[17].localidade = "Trofa";
    alunos[17].concluido = true;
    alunos[17].numeroAluno = "14713";

    alunos[18].nome = "Tiago Rafael Lopes Pinheiro";
    alunos[18].idade = 15;
    alunos[18].curso = "Programador Infomatico";
    alunos[18].localidade = "Vizela";
    alunos[18].concluido = false;
    alunos[18].numeroAluno = "14715";

    alunos[19].nome = "Marcelo Alexandre Palamaryuk";
    alunos[19].idade = 15;
    alunos[19].curso = "Programador Infomatico";
    alunos[19].localidade = "Famalicao";
    alunos[19].concluido = true;
    alunos[19].numeroAluno = "14721";*/
}

/*void mostraInfo (Aluno xpto) {
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

/*double mediaAlunos(Aluno x, Aluno y) {
return (x.idade + y.idade) / 2 ;
}*/



int main (){

    Aluno turma1P2024[numAlunos];

    iniciarTurma(alunos);







    /*mostraInfo (aluno1);
    mostraInfo (aluno2);
    cout << "\n\n A media de idade dos 2 alunos e: ";
    cout << mediaAlunos(aluno1, aluno2) << "\n\n";*/


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
