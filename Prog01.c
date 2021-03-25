#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    void somar(float ar, float ai, float br, float bi){
        float SomaR = 0.0;
        float SomaI = 0.0;

        SomaR = ar + br;
        SomaI = ai + bi;

        if(SomaI < 0){
            printf("\nA + B = %f - %fi", SomaR, (-1)*SomaI);
        }
        else{
            printf("\nA + B = %f + %fi", SomaR, SomaI);
        }
    }

    void subtrair(float ar, float ai, float br, float bi){
        float SubR = 0.0;
        float SubI = 0.0;

        SubR = ar - br;
        SubI = ai - bi;
        if(SubI < 0){
            printf("\nA - B = %f - %fi", SubR, (-1)*SubI);
        }
        else{
            printf("\nA - B = %f + %fi", SubR, SubI);
        }
    }

    void multiplicar(float ar, float ai, float br, float bi){
        float MultR = 0.0;
        float MultI = 0.0;

        MultR = (ar*br) - (ai*bi);
        MultI = (ar*bi) + (ai*br);

        if(MultI < 0){
            printf("\nA x B = %f - %fi", MultR, (-1)*MultI);
        }
        else{
            printf("\nA x B = %f + %fi", MultR, MultI);
        }
    }

    void dividir(float ar, float ai, float br, float bi){
        float DivR = 0.0;
        float DivI = 0.0;

        DivR = (ar*br + ai*bi)/(br*br + bi*bi);
        DivI = (ai*br - ar*bi)/(br*br + bi*bi);

        if(DivI < 0){
            printf("\nA / B = %f - %fi", DivR, (-1)*DivI);
        }
        else{
            printf("\nA / B = %f + %fi", DivR, DivI);
        }
    }

    void formas(float ar, float ai, float br, float bi){
        float ModA = 0.0;
        float FaseA = 0.0;
        float ModB = 0.0;
        float FaseB = 0.0;

        ModA = sqrt(ar*ar + ai*ai);
        if(ar >= 0 && ai >= 0){
            FaseA = atan(ai/ar);
        }
        if(ar < 0 && ai >= 0){
            FaseA = atan(ai/ar) + 3.1415;
        }
        if(ar < 0 && ai < 0){
            FaseA = atan(ai/ar) + 3.1415;
        }
        if(ar >= 0 && ai < 0){
            FaseA = atan(ai/ar) + 2*3.1415;
        }
        ModB = sqrt(br*br + bi*bi);
        if(br >= 0 && bi >= 0){
            FaseB = atan(bi/br);
        }
        if(br < 0 && bi >= 0){
            FaseB = atan(bi/br) + 3.1415;
        }
        if(br < 0 && bi < 0){
            FaseB = atan(bi/br) + 3.1415;
        }
        if(br >= 0 && bi < 0){
            FaseB = atan(bi/br) + 2*3.1415;
        }

        printf("\nFORMA RETANGULAR:");
        if(ai < 0){
            printf("\nA = %f - %fi", ar, (-1)*ai);
        }
        else{
            printf("\nA = %f + %fi", ar, ai);
        }
        if(bi < 0){
            printf("\nB = %f - %fi", br, (-1)*bi);
        }
        else{
            printf("\nB = %f + %fi", br, bi);
        }

        printf("\n\nFORMA POLAR:");
        printf("\nA = %f|%f", ModA, FaseA);
        printf("\nB = %f|%f", ModB, FaseB);

        }

    int i = 0;
    struct num
    {
        float R;
        float I;
    };

    struct num A;
    struct num B;

    printf("Digite a parte real do numero A: ");
    scanf("%f",&A.R);
    printf("Digite a parte imaginaria do numero A: ");
    scanf("%f",&A.I);
    printf("Digite a parte real do numero B: ");
    scanf("%f",&B.R);
    printf("Digite a parte imaginaria do numero B: ");
    scanf("%f",&B.I);

    printf("\nSelecione um comando: \n1 - Somar A e B\n2 - Subtrair B de A\n3 - Multiplicar A e B\n4 - Dividir A por B\n5 - Mostrar as formas retangulares e polares de A e B\n\nComando: ");
    scanf("%d",&i);

    switch(i){
    case 1 : {
        somar(A.R,A.I,B.R,B.I);
        break;
    }
    case 2 : {
        subtrair(A.R,A.I,B.R,B.I);
        break;
    }
    case 3 : {
        multiplicar(A.R,A.I,B.R,B.I);
        break;
    }
    case 4 : {
        dividir(A.R,A.I,B.R,B.I);
        break;
    }
    case 5 : {
        formas(A.R,A.I,B.R,B.I);
        break;
    }
    default : {

    }
    }
    printf("\n");
    return 0;
}
