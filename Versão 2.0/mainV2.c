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
void telaEditarPasciente(void);
void telaDeletarPasciente(void);

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
    return 0;
}

/////
// Funções

void telaSobre(void) {
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
}



void telaPrincipal(void) {
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
    printf("///            3. Módulos Consulta                                          ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}



void telaEquipe(void) {
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
}



void telaMenuPasciente(void) {
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
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaCadastrarPasciente(void) {
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
    printf("///           Matrícula (Somente Números):                                ///\n"); 
    printf("///           Nome Completo:                                              ///\n");
    printf("///           E-mail:                                                     ///\n");
    printf("///           Data de Nascimento (dd/mm/aaaa):                            ///\n");
    printf("///           Celular (Somente Números):                                  ///\n"); 
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaPesquisarPasciente(void) {
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
    printf("///           Informe a Matrícula (Somente Números):                      ///\n"); 
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaAlterarPasciente(void) {
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
    printf("///           Informe a Matrícula (Somente Números):                      ///\n"); 
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaDeletarPasciente(void) {
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
    printf("///           Informe a Matrícula (Somente Números):                      ///\n"); 
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}