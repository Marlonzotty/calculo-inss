#include <iostream>

int main(int argc, char const *argv[])
{
    float salario, inss, ir, sal_liquido;


    printf("Digite seu salario bruto");
    scanf("%f", &salario);

    if(salario <= 1693.72)
    {
        inss = salario *0.08;
    }
    else
    if (salario >= 1693.73 && salario <= 2822.90)
    {
        inss = salario *0.09;
    }

    sal_liquido = (salario - inss) -ir;
    printf ("\nDesconto inss: %f\n", inss);
    printf ("\nSalario liquido %2.f\n", sal_liquido);

    
    return 0;
}
