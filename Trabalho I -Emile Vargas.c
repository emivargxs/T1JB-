#include <stdio.h>

int main() {
    int dependentes, anos_casa, anoatual;
    double salario_base, acrescimo_dependente,salario_final, acrescimo_bissexto;
    double acrescimoanos6d, acrescimoanos7d;
    printf("-- Abangu Corporation -- Calculo do salario final--\n\n");

    printf("**Preencha conforme solicitado**\n\n");

    printf("Introduza o salario base do funcionario:\n");
    scanf("%lf", &salario_base);

    printf("Introduza o numero de dependentes do funcionario:\n");
    scanf("%d", &dependentes);

    printf("Introduza o tempo de casa do funcionario (em anos):\n");
    scanf("%d", &anos_casa);

    printf("Introduza o ano atual:\n");
    scanf("%d", &anoatual);

    if (dependentes <= 5) {
        acrescimo_dependente = (0.03 * dependentes) * salario_base;
    } else if(dependentes > 5) {
        acrescimo_dependente = (5 * 0.03) * salario_base;
    }

   if (dependentes < 4 && anos_casa >= 5 && anos_casa <= 30) {

    int num_acrescimos = (float)anos_casa / 5.0;
    float acrescimo_total = salario_base * (1.0 + num_acrescimos * 0.04);

    acrescimoanos6d = acrescimo_total - salario_base;
  } else {
    acrescimoanos6d = 0;
  }
  
if (dependentes >= 4 && anos_casa >= 6 && anos_casa <= 42) {

    int num_acrescimos = (float)anos_casa / 6.0;
    float acrescimo_total = salario_base * (1.0 + num_acrescimos * 0.07);

    acrescimoanos7d = acrescimo_total - salario_base;
  } else {
    acrescimoanos7d = 0;
  }
  


    if ((anoatual % 4 == 0 && anoatual % 100 != 0) || anoatual % 400 == 0) {
        acrescimo_bissexto = 0.01 * salario_base;
    } else {
        acrescimo_bissexto = 0;
    }

   salario_final = salario_base + acrescimo_dependente + acrescimoanos7d + acrescimoanos6d + acrescimo_bissexto;
    printf("O salario final R$: %2.lf\n", salario_final);
    
    printf("Calculo final executado\n");

    return 0;
}
