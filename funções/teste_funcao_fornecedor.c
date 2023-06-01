#include<stdio.h>
#include<stdlib.h>
#include<locale.h> //necess�rio para usar setlocale
#include<string.h>

//Structs
typedef struct{
char nome[30];
char ende_forne[50];
} fornecedor;


//Fun��es
void CadastroFornecedor(fornecedor *lista_fornecedores,int i){
    printf("Insira o nome do fornecedor: ");
    scanf(" %s", lista_fornecedores[i].nome);

    printf("Insira o endere�o do ponto de coleta: ");
    scanf(" %s", lista_fornecedores[i].ende_forne);
}

/*void AtualizaFornecedor(fornecedor *lista_fornecedores, int i, int id){
    for(int j=0; j< i+1;j++){
        if(lista_fornecedores[j].id == id){
            printf("Insira o novo endere�o do fornecedor: ");
            scanf("%s",lista_fornecedores[i].ende_forne);
        }
    }
    printf("Informa��o atualizada com sucesso!");

  
}*/

void MenuFornecedor(fornecedor *lista_fornecedores, char opcao , int i){

  switch(opcao){
    case 'a':
    CadastroFornecedor(lista_fornecedores, i);
    break;

    /*case 'b':
    AtualizaFornecedor(fornecedor *lista_fornecedores, int i);
    break;
  }*/

    //Possibilidade de realizar alguma opera��o novamente
    printf("\nDeseja realizar outra opera��o na aba de fornecedores? (s) sim (n)n�o\n");
    scanf("%c",&opcao);  

}
}
int main() {
  
//Menu Principal
setlocale(LC_ALL,"Portuguese");
int i = 0;

fornecedor lista_fornecedores[100];
char resp_forne = 's';
char op_menu_p;
char op_aba;

do{
printf("---Bem vindo(a) ao Sistema Ecowise---\n\n");
printf("*Menu Principal*\n\n");
printf("Selecione a aba que voc� quer acessar:\n\n");
printf("(a)Res�duos\n(b)Fornecedores\n(c)Pontos de Coleta\n(d)Relat�rios\n");

  scanf(" %c",&op_menu_p);

switch(op_menu_p){
  case 'a': // Materiais
    printf("(a)Cadastrar material\n(b)Atualizar material\n");
    scanf(" %c",&op_aba);
    //chamar fun��o
    break;
  
  case 'b': //Fornecedores
    
    printf("(a)Cadastrar Fornecedor\n(b)Atualizar Informa��es\n");
    scanf(" %c",&op_aba);
    MenuFornecedor(lista_fornecedores, op_aba, i);
  /*do {  
  MenuFornecedor(op_aba, i);
  
//} while (resp_forne == 's');

    printf("Deseja fazer outra opera��o no Menu Fornecedores?\n");
  scanf(" %c", &resp_forne);  // L� o caractere dentro do loop
  i++;*/
    //chamar fun��o
  break;

  case 'c': // Pontos de Coleta
    printf("(a)Cadastrar Ponto de Coleta\n(b)Atualizar Informa��es\n");
    scanf(" %c",&op_aba);
    //chamar fun��o
  break;

  case 'd': //Relat�rios
    printf("(a)Estat�sticas\n(b)Lista de Pontos de Coleta\n(c)Lista de Fornecedores\n");
    //chamar fun��o
  break;
}
    printf("Quer realizar uma nova opera��o?");
    scanf(" %c",&resp_forne);
    
}while(resp_forne == 's');

  
  return 0;
}