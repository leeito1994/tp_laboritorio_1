#include "test3.h"

void calcular(float num1, float num2)
{
    float resultadoSuma=0;
    float resultadoResta=0;
    float resultadoMultiplicacion=0;
    float resultadoDivision=0;
    float resultadoFactorial1=0;
    float resultadoFactorial2=0;
    int flag =0;
    int flagCase1=0;
    int flagCase2=0;
    int operador;

    while(flag == 0)
    {
        printf("\n 1. ingresar el primer numero\n 2. ingresar el segundo numero\n 3. calcular\n 4. mostrar resultados\n 5. salir \n\n   ");
        scanf("%d",&operador);

        switch(operador)
        {

        case 1:
            num1 = pedir();
            flagCase1=1;
            break;

        case 2:
            num2 = pedir();
            flagCase2=1;
            break;

            if(flagCase1 == 1 && flagCase2 == 1)
            {

            case 3:

                resultadoSuma = sumar(num1,num2);
                resultadoResta = restar(num1,num2);
                resultadoMultiplicacion = multiplicacion(num1,num2);
                resultadoDivision = division(num1,num2);
                resultadoFactorial1 = factorial1(num1);
                resultadoFactorial2 = factorial2(num2);

                printf("\ncalculos hechos. \n");

                break;
            }

        case 4:

            if(flagCase1 == 1 || flagCase2 == 1)
            {
                printf("\n\nla suma entre %f y %f es %f\n",num1,num2,resultadoSuma);
                printf("la resta entre %f y %f es %f\n",num1,num2,resultadoResta);
                printf("el producto entre %f y %f es %f\n",num1,num2,resultadoMultiplicacion);

                if(num2 != 0)
                {
                    printf("la division entre %f y %f es %f\n",num1,num2,resultadoDivision);
                }
                else
                {
                    printf("Error, no es posible realizar una division por cero.\n");
                }
                printf("el factorial de %f es %f\n",num1,resultadoFactorial1);

                printf("el factorial de %f es %f",num2,resultadoFactorial2);

                printf("\n\n 5 para salir o ingrese numeros nuevamente. \n");
            }
                if(flagCase1 == 0 && flagCase2 == 0)
                {
                    printf("\a\aError, no se ingresaron datos. ");
                }

                break;

        case 5:
            flag=1;
            break;

        default:
            printf("opcion incorrecta, intentelo nuevamente \n");
        }
    }
}
float sumar(float num1, float num2)
{
    float resultado;
    resultado = num1+num2;
    return resultado;
}

float restar(float num1, float num2)
{
    float resultado;
    resultado = num1-num2;
    return resultado;
}

float multiplicacion(float num1, float num2)
{
    float resultado;
    resultado = num1*num2;
    return resultado;
}

float division(float num1, float num2)
{
    float resultado;
    resultado = num1/num2;
    return resultado;
}

float factorial1(float num1)
{
    float resultado=1;
    float fact;

    for(fact=num1;fact>0;fact--)
    {
        resultado = resultado * fact;
    }

    return resultado;
}

float factorial2(float num2)

{
    float resultado=1;
    float fact;

    for(fact=num2;fact>0;fact--)
    {
        resultado = resultado * fact;
    }

    return resultado;
}

float pedir()
{
    float num1;
    printf("ingrese numero ");
    scanf("%f",&num1);
    return num1;
}
