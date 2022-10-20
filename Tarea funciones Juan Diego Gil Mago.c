/*Programa que permite elegir las funciones aritmeticas a traves de funciones y luego
 * haga la operacion tomando 2 numeros pedidos*/

#include <stdio.h>
//Se declaran las 4 funciones de Suma, Resta, Multiplication y Divicion
int Sum(int a, int b);
int Rest(int a, int b);
int Mult(int a, int b);
int Div(int a, int b);

int main() {

    int num1, num2, menu;
    printf("Porfavor Ingrese los 2 valores a trabajar\n Valor 1:  ");
    scanf("%d", &num1);
    printf("\nValor 2: ");
    scanf("%d", &num2);
    do{
        printf("Porfavor coloque el numero el cual indique la opecacion que desea realizar:");
        printf("\n 1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division\n 5. Terminar Programa\n");
        scanf("%d", &menu);

        //Swich se usa para generar un menu, al parecer es mejor que hacerlo en bucles
        switch(menu){
            case 1:
                printf("El valor de la suma de %d y %d es: %d\n ", num1, num2, Sum(num1, num2));
            break;
            case 2:
                printf("El valor de la resta de %d y %d es: %d \n", num1, num2, Rest(num1, num2));
            break;
            case 3:
                printf("El valor de la multiplicasion de %d y %d es: %d\n", num1, num2, Mult(num1, num2));
            break;
            case 4:
                printf("El valor de la divicion de %d y %d es: %d\n", num1, num2, Div(num1, num2));
            break;
            case 5:
                break;
            default:
                printf("El numero que marco no es una opcion, porfavor ingrese de nuevo un numero\n");
        }
    } while(menu != 5);
    return 0;
}
int Sum (int a, int b){
    int resultado;
    resultado = a + b;
    return resultado;
}
int Rest (int a, int b){
    int resultado;
    resultado = a - b;
    return resultado;
}
int Mult (int a, int b){
    int resultado;
    resultado = a * b;
    return resultado;
}
int Div (int a, int b){
    int resultado;
    resultado = a / b;
    return resultado;
}
