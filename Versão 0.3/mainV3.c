///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Serido                     ///
///               Departamento de Computacao e Tecnologia                   ///
///                 Disciplina DCT1106 -- Programacao                       ///
///               Projeto de Agendamento de Clinica Dentaria                ///
///                Developed by  @gbrl08snts - Out, 2021                    ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>



/////
// Assinatura das funções
void telaSobre(void);
void telaPrincipal(void);
void telaEquipe(void);
void telaMenuPasciente(void);
void telaCadastrarPasciente(void);
void telaPesquisarPasciente(void);
void telaAlterarPasciente(void);
void telaDeletarPasciente(void);
void telaMenuDentista(void);
void telaCadastrarDentista(void);
void telaPesquisarDentista(void);
void telaAlterarDentista(void);
void telaDeletarDentista(void);
void telaMenuConsulta(void);
void telaCadastrarConsulta(void);
void telaPesquisarConsulta(void);
void telaAlterarConsulta(void);
void telaDeletarConsulta(void);




/////
// Programa Principal
int main(void) {
    telaSobre();
    telaPrincipal();
    telaEquipe();
    telaMenuPasciente();
    telaCadastrarPasciente();
    telaPesquisarPasciente();
    telaAlterarPasciente();
    telaDeletarPasciente();
    telaMenuDentista();
    telaCadastrarDentista();
    telaPesquisarDentista();
    telaAlterarDentista();
    telaDeletarDentista();
    telaMenuConsulta();
    telaCadastrarConsulta();
    telaPesquisarConsulta();
    telaAlterarConsulta();
    telaDeletarConsulta();
    return 0;
}



/////
// Funções

void telaSobre(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1180 -- Programação                      ///\n");
    printf("///               Projeto de Agenda para Clínica Dentária                   ///\n");
    printf("///                Developed by  @gbrl08snts - Out, 2021                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///         -= = = = = Sistema de Agendamentos Odontológico = = = = -       ///\n");
    printf("///                                                                         ///\n");
    printf("///   Programa da disciplina DCT1180 -  Programação para fins didáticos e   ///\n");
    printf("///   avaliativos. O programa contém os módulos principais e funções que    ///\n");
    printf("///   serão exigidos na avaliação.                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaPrincipal(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n"); 
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1180 -- Programação                      ///\n");
    printf("///               Projeto de Agenda para Clínica Dentária                   ///\n");
    printf("///                Developed by  @gbrl08snts - Out, 2021                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///         -= = = = = Sistema de Agendamentos Odontológico = = = = -       ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Módulo Agendamento Pasciente                              ///\n");
    printf("///            2. Módulo Dentista                                           ///\n");
    printf("///            3. Módulo Consulta                                           ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada:                                    ///\n");
    scanf("%c", &op);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaEquipe(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1180 -- Programação                      ///\n");
    printf("///               Projeto de Agenda para Clínica Dentária                   ///\n");
    printf("///                Developed by  @gbrl08snts - Out, 2021                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///         -= = = = = Sistema de Agendamentos Odontológico = = = = -       ///\n");
    printf("///                                                                         ///\n");
    printf("///           Este projeto foi desenvolvido por:                            ///\n");
    printf("///                                                                         ///\n");
    printf("///           Aluno: Gabriel José de Aquino Santos                          ///\n");
    printf("///           Email: gabriel.aquino.069@ufrn.edu.br                         ///\n");
    printf("///           Redes Sociais: @gbrl08snts                                    ///\n");
    printf("///           Repositório: https://github.com/gbrl08snts?tab=repositories   ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaMenuPasciente(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Out, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = = =  Menu Pasciente = = = = = = = =             ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           1. Cadastrar um novo pasciente.                             ///\n");     
    printf("///           2. Pesquisar informações do pasciente.                      ///\n");    
    printf("///           3. Atualizar o cadastro de um pasciente.                    ///\n");     
    printf("///           4. Excluir um pasciente do sistema.                         ///\n");    
    printf("///           0. Voltar ao menu anterior.                                 ///\n"); 
    printf("///                                                                       ///\n");
    printf("///           Escolha a opção desejada:                                   ///\n");
    scanf("%c", &op);
    getchar();
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaCadastrarPasciente(void) {
    char cpf[12];
    char nome[51];
    char email[51];
    char nasc[11];
    char celular[12];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Out, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = = Cadastrar Pasciente = = = = = = =             ///\n"); 
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           CPF (Somente Números):                                      ///\n");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///           Nome Completo:                                              ///\n");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("///           E-mail:                                                     ///\n");
    scanf("%[A-Za-z@._]", email);
    getchar();
    printf("///           Data de Nascimento (dd/mm/aaaa):                            ///\n");
    scanf("%[0-9/]", nasc);
    getchar();
    printf("///           Celular (Somente Números):                                  ///\n");
    scanf("%[0-9]", celular);
    getchar(); 
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaPesquisarPasciente(void) {
    char cpf[12];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Out, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = = Pesquisar Pasciente = = = = = = =             ///\n"); 
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe o CPF (Somente Números):                            ///\n");
    scanf("%[0-9]", cpf);
    getchar(); 
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaAlterarPasciente(void) {
    char cpf[12];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Jan, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = =   Alterar Pasciente   = = = = = =             ///\n");   
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe o CPF (Somente Números):                            ///\n");
    scanf("%[0-9]", cpf);
    getchar(); 
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaDeletarPasciente(void) {
    char cpf[12];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Jan, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = =  Deletar Pasciente  = = = = = = =             ///\n");  
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe o CPF (Somente Números):                            ///\n");
    scanf("%[0-9]", cpf);
    getchar(); 
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaMenuDentista(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Jan, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///            = = = = = = =   Menu Dentista   = = = = = = =              ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           1.  Cadastrar um novo dentista.                             ///\n");                           
    printf("///           2.  Pesquisar informações do dentista.                      ///\n");                                    
    printf("///           3.  Atualizar cadastro de um dentista.                      ///\n");                                      
    printf("///           4.  Excluir um dentista do sistema.                         ///\n");                                  
    printf("///           0.  Voltar para o menu anterior.                            ///\n");                               
    printf("///                                                                       ///\n");
    printf("///           Escolha a opção desejada:                                   ///\n");
    scanf("%c", &op);
    getchar();                         
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaCadastrarDentista(void) {
    char cpf[12];
    char nome[51];
    char email[51];
    char nasc[11];
    char celular[12];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Jan, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = = Cadastrar Dentista  = = = = = = =             ///\n"); 
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           CPF (Somente Números):                                      ///\n");
    scanf("%[0-9]", cpf);
    getchar();                        
    printf("///           Nome Completo:                                              ///\n");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();           
    printf("///           E-mail:                                                     ///\n");
    scanf("%[A-Za-z@._]", email);
    getchar();       
    printf("///           Data de Nascimento (dd/mm/aaaa):                            ///\n");
    scanf("%[0-9/]", nasc);
    getchar();                            
    printf("///           Celular (Somente Números):                                  ///\n");
    scanf("%[0-9]", celular);
    getchar();                                                                                    
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaPesquisarDentista(void) {
    char cpf[12];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Out, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = =  Pesquisar Dentista = = = = = = =             ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe o CPF (Somente Números):                            ///\n");
    scanf("%[0-9]", cpf);
    getchar(); 
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaAlterarDentista(void) {
    char cpf[12];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Jan, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = =   Alterar Dentista   = = = = = =              ///\n");  
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe o CPF (Somente Números):                            ///\n");
    scanf("%[0-9]", cpf);
    getchar(); 
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaDeletarDentista(void) {
    char cpf[12];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Jan, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = =   Deletar Dentista  = = = = = = =             ///\n");  
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe o CPF (Somente Números):                            ///\n");
    scanf("%[0-9]", cpf);
    getchar(); 
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaMenuConsulta(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Jan, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///            = = = = = = =   Menu Consulta   = = = = = = =              ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           1.  Agendar nova consulta.                                  ///\n");                      
    printf("///           2.  Pesquisar informações da consulta.                      ///\n");                                    
    printf("///           3.  Atualizar/Editar informações da consulta.               ///\n");                                             
    printf("///           4.  Excluir uma consulta do sistema.                        ///\n");                                   
    printf("///           0.  Voltar para o menu anterior.                            ///\n");                               
    printf("///                                                                       ///\n");
    printf("///           Escolha a opção desejada:                                   ///\n");
    scanf("%c", &op);
    getchar();                         
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaCadastrarConsulta(void) {
    char data[9];
    char hora[5];
    char cpf[12];
    char nome[51];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Jan, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = = Cadastrar Consulta  = = = = = = =             ///\n"); 
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Data:                                                       ///\n");
    scanf("%[0-9/]", data);
    getchar();
    printf("///           Horário:                                                    ///\n");
    scanf("%[0-9;]", hora);
    getchar();    
    printf("///           Pasciente (CPF - Apenas Números):                           ///\n");
    scanf("%[0-9]", cpf);
    getchar();                                                                                                                                                                             
    printf("///           Dentista (Nome Completo):                                   ///\n");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();                        
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaPesquisarConsulta(void) {
    char cpf[12];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Out, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = =  Pesquisar Consulta = = = = = = =             ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe o CPF (Somente Números):                            ///\n");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaAlterarConsulta(void) {
    char cpf[12];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Jan, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = =   Alterar Consulta   = = = = = =              ///\n");  
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe o CPF (Somente Números):                            ///\n");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaDeletarConsulta(void) {
    char cpf[12];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          ===================================================          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = Sistema de Agendamento Odontológico = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          ===================================================          ///\n");
    printf("///                Developed by  @gbrl08snts - Jan, 2021                  ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = =   Deletar Consulta  = = = = = = =             ///\n");  
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe o CPF (Somente Números):                            ///\n");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
