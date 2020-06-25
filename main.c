#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Geometria() // CORRIGIDO
{
    int opcao, resposta, respostaf;

    float lado, area1;         //case 1
    float lado1, lado2, area2; //case 2
    float raio, area3;         //case 3
    float base, altura, area4; //case 4

    printf("[1] Cálculo de área: Quadrado\n");
    printf("[2] Cálculo de área: Retângulo\n");
    printf("[3] Cálculo de área: Círculo\n");
    printf("[4] Cálculo de área: Triângulo Retângulo\n");

    scanf("%d", &opcao);

    switch (opcao)
    {

    case 1: // Cálculo da área do quadrado

        printf("Por favor informe o tamanho de um dos lados do quadrado: \n");
        scanf("%f", &lado);

        area1 = lado * lado;

        printf("\nÁrea do quadrado = %.2f m2\n\n\n\n\n", area1);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM GEOMETRIA\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Geometria();
        }
        else
        {
            main();
        }

        break;

    case 2: // Cálculo da área do retângulo

        printf("Por favor digite a altura do retângulo: \n");
        scanf("%f", &lado1);
        printf("Por favor digite a largura do retângulo: \n");
        scanf("%f", &lado2);

        area2 = lado1 * lado2;

        printf("\nÁrea do retângulo = %.2f metros quadrados\n\n\n\n\n", area2);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM GEOMETRIA\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Geometria();
        }
        else
        {
            main();
        }

        break;

    case 3: // Cálculo da área do círculo

        printf("Por favor, digite a medida do raio da circunferência: \n");
        scanf("%f", &raio);

        area3 = (raio * raio) / 3.14;

        printf("\nÁrea do Círculo = %.2f metros quadrados\n\n\n\n\n", area3);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM GEOMETRIA\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Geometria();
        }
        else
        {
            main();
        }

        break;

    case 4: // cálculo da área do triângulo retângulo

        printf("Por favor digite a medida da altura do triângulo: \n");
        scanf("%f", &altura);
        printf("Por favor digite a medida da base do retângulo: \n");
        scanf("%f", &base);

        area4 = (base * altura) / 2;

        printf("\nArea do Triângulo = %.2f metro quadrados\n\n\n\n\n", area4);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM GEOMETRIA\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Geometria();
        }
        else
        {
            main();
        }

        break;
    }

    printf("\nDIGITE:\n");

    printf("\n[1] PARA CONTINUAR EM GEOMETRIA\n");
    printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
    scanf("%d", &resposta);

    if (resposta == 1)
    {
        Geometria();
    }
    else
    {
        main();
    }
}

void Matematicabasica() // CORRIGIDO
{

    int opcao, respostaf;
    int numero, contador, resposta; //case 1

    float nota1, nota2, nota3, mediapon;
    int peso1, peso2, peso3; // case 2

    float capital, juros, taxa, tempo, montante;
    char nome; // case 3

    float x, y, soma, raiz; // case 4

    printf("[1] Tabuada\n");
    printf("[2] Média Ponderada\n");
    printf("[3] Cálculo Juros Simples\n");
    printf("[4] Cálculo de Raiz Quadrada\n");

    scanf("%d", &opcao);

    switch (opcao)
    {

    case 1:

        printf("\n=================================\n\n");
        printf("\n");
        printf("\n========= T A B U A D A =========\n\n");
        printf("\n");
        printf("\n=================================\n\n");

        printf("\nDigite o número para calcular: ");
        scanf("%d", &numero);

        for (contador = 0; contador <= 10; contador++)
        {
            printf("%d x %d = %d\n", numero, contador, numero * contador);
        }
        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM MATEMÁTICA BÁSICA\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Matematicabasica();
        }
        else
        {
            main();
        }

        break;

    case 2:

        // A média ponderada se da por meio de pesos

        printf("\nDigite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite o peso da primeira nota: ");
        scanf("%d", &peso1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite o peso da segunda nota: ");
        scanf("%d", &peso2);

        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
        printf("Digite o peso da terceira nota: ");
        scanf("%d", &peso3);

        mediapon = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
        printf("\nA media ponderada e: %.1f\n", mediapon);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM MATEMÁTICA BÁSICA\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Matematicabasica();
        }
        else
        {
            main();
        }

        break;

    case 3:

        printf("\n        CÁLCULO JUROS SIMPLES        \n\n");
        printf("\n");

        printf("\nDigite o seu nome: ");
        scanf("%s", &nome);
        printf("Digite o valor do capital: ");
        scanf("%f", &capital);
        printf("Digite a porcentagem da taxa: ");
        scanf("%f", &taxa);
        printf("Digite a quantidade de meses em número: ");
        scanf("%f", &tempo);

        juros = (capital * taxa * tempo) / 100;

        printf("\n\nO valor do juros é de: R$ %.2f ao ano.\n\n", juros);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM MATEMÁTICA BÁSICA\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Matematicabasica();
        }
        else
        {
            main();
        }

        break;

    case 4:

        printf("\n       R A I Z   Q U A D R A D A   C O M       \n");
        printf("    S O M A   D E   D O I S   N Ú M E R O S        ");
        printf("\n");

        printf("\nDigite o primeiro número: ");
        scanf("%f", &x);

        printf("Digite o segundo número: ");
        scanf("%f", &y);

        soma = (x + y);
        raiz = sqrt(x + y);

        ceil(sqrt(soma));
        printf("A raiz quadrada de %.2f e: %.2f\n", soma, sqrt(x + y));

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM MATEMÁTICA BÁSICA\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Matematicabasica();
        }
        else
        {
            main();
        }

        break;
    }
}

void Fisica() // CORRIGIDO
{
    int opcao, resposta, respostaf; //menu

    float Vm, Ds, Dt, Si, Sf, Ti, Tf; //case 1
    float Am, Dv, DT, Vi, Vf, TI, TF; //case 2
    float Q, c, m, Do, oi, of;        //case 3
    float R, U, i;                    //case 4
    float P, E, dt, ti, tf;           //case 5
    float F, M, a;                    //case 6

    printf("[1]Velocidade Média\n");
    printf("[2]Aceleração\n");
    printf("[3]Calor Sensível\n");
    printf("[4]Resistência\n");
    printf("[5]Potência\n");
    printf("[6]Segunda Lei de Newton\n\n\n\n");

    scanf("%d", &opcao);

    switch (opcao)
    {

    case 1:

        printf("\nInforme o Espaço Inicial em Metros:\n");
        scanf("%f", &Si);
        printf("Informe o Espaço Final em Metros:\n");
        scanf("%f", &Sf);
        Ds = Sf - Si;
        printf("Informe o Tempo Inicial em Segundos:\n");
        scanf("%f", &Ti);
        printf("Informe o Tempo Final em Segundos:\n");
        scanf("%f", &Tf);
        Dt = Tf - Ti;
        Vm = Ds / Dt;

        printf("Vm = %.2f m/s\n", Vm);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM FÍSICA\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Fisica();
        }
        else
        {
            main();
        }

        break;

    case 2:

        printf("\nInforme a Velocidade Inicial em m/s:\n");
        scanf("%f", &Vi);
        printf("Informe a Velocidade Final em m/s:\n");
        scanf("%f", &Vf);
        Dv = Vf - Vi;
        printf("Informe o Tempo Inicial em Segundos:\n");
        scanf("%f", &TI);
        printf("Informe o Tempo Final em Segundos:\n");
        scanf("%f", &TF);
        DT = TF - TI;
        Am = Dv / DT;

        printf("Am = %.2f m/s.s\n", Am);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM FÍSICA\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Fisica();
        }
        else
        {
            main();
        }

        break;

    case 3:

        printf("\nInforme o Calor Específico em cal/gC:\n");
        scanf("%f", &c);
        printf("Informe a Massa do Corpo em g:\n");
        scanf("%f", &m);
        printf("Informe a Temperatura Inicial em C:\n");
        scanf("%f", &oi);
        printf("Informe a Temperatura Final em C:\n");
        scanf("%f", &of);
        Do = of - oi;
        Q = c * m * Do;

        printf("Q = %.2f cal \n", Q);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM FÍSICA\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Fisica();
        }
        else
        {
            main();
        }

        break;

    case 4:

        printf("\nInforme a Tensão em Volt:\n");
        scanf("%f", &U);
        printf("Informe a Intensidade em Amperes:\n");
        scanf("%f", &i);
        R = U * i;

        printf("R = %.2f Ohms \n", R);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM FÍSICA\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Fisica();
        }
        else
        {
            main();
        }

        break;

    case 5:

        printf("\nInforme a Energia em Joule:\n");
        scanf("%f", &E);
        printf("Informe o Tempo Inicial em Segundos:\n");
        scanf("%f", &Ti);
        printf("Informe o Tempo Final em Segundos:\n");
        scanf("%f", &Tf);
        dt = tf - ti;
        P = E / dt;

        printf("P = %.2f Watts \n", P);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM FÍSICA\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Fisica();
        }
        else
        {
            main();
        }

        break;

    case 6:

        printf("\nInforme a Massa em Kg:\n");
        scanf("%f", &M);
        printf("Informe a Aceleração em  m/s.s:\n");
        scanf("%f", &a);
        F = M * a;

        printf("F = %.2f N \n", F);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM FÍSICA\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Fisica();
        }
        else
        {
            main();
        }

        break;
    }
    printf("\nDIGITE:\n");

    printf("\n[1] PARA CONTINUAR EM FÍSICA\n");
    printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
    scanf("%d", &resposta);

    if (resposta == 1)
    {
        Fisica();
    }
    else
    {
        main();
    }
}

void Laboratorio() // CORRIGIDO
{
    int opcao, resposta, respostaf;
    float ci, vi, cf, vf;  //case 1
    float MM, M, V, massa; //case 2
    float mili3, micro3;   //case 3
    float mili4, micro4;   //case 4

    printf("[1] Ci*Vi = Cf*Vf\n");
    printf("[2] m = MM*M*V\n");
    printf("[3] Conversão de mililitro(mL) para microlitro(uL)\n");
    printf("[4] Conversão de microlitro(uL) para mililitro(mL)\n");

    scanf("%d", &opcao);

    switch (opcao)
    {

    case 1:

        printf("Por favor, digite a concentração inicial em molar: ");
        scanf("%f", &ci);

        printf("Agora digite a concentração final em molar desejada: ");
        scanf("%f", &cf);

        printf("Digite o volume final desejado em ml: \n\n\n\n\n");
        scanf("%f", &vf);

        vi = (cf * vf) / ci;

        printf("O volume inicial a ser utilizado e de %.2f ml\n\n\n\n\n", vi);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM LABORATÓRIO\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Laboratorio();
        }
        else
        {
            main();
        }

        break;

    case 2:

        printf("Por favor digite a massa molar do reagente a ser utilizado: ");
        scanf("%f", &MM);

        printf("\nDigite a concentração desejada em molar: ");
        scanf("%f", &M);
        printf("\nDigite o volume final desejado em litros: ");
        scanf("%f", &V);

        massa = MM * M * V;

        printf("\n\nA massa de reagente a ser pesada é de= %.2f gramas\n\n\n\n\n", massa);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM LABORATÓRIO\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Laboratorio();
        }
        else
        {
            main();
        }

        break;

    case 3:

        printf("Por favor, digite o volume em mL= ");
        scanf("%f", &mili3);

        micro3 = mili3 * 1000;

        printf("\nO valor a ser utilizado é de=%.2f microlitros\n\n\n\n\n", micro3);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM LABORATÓRIO\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Laboratorio();
        }
        else
        {
            main();
        }

        break;

    case 4:

        printf("Por favor, digite o volume em microlitro = ");
        scanf("%f", &micro4);

        mili4 = micro4 / 1000;

        printf("O valor a ser utilizado é de=%.2f mL", mili4);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM LABORATÓRIO\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Laboratorio();
        }
        else
        {
            main();
        }

        break;
    }
    printf("\nDIGITE:\n");

    printf("\n[1] PARA CONTINUAR EM LABORATÓRIO\n");
    printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
    scanf("%d", &resposta);

    if (resposta == 1)
    {
        Laboratorio();
    }
    else
    {
        main();
    }
}

void Contabilidade() // CORRIGIDO
{
    int opcao, resposta, respostaf;
    float salario, meses, decimo; //case 1

    float salariobruto, porcentagem = 11, desconto;
    char contautnome; //case 2

    float salariobruto2, porcentagem2 = 5, desconto2;
    char contautnome2; //case 3

    printf("\n[1] Cálculo de 13o salário\n");
    printf("[2] Cálculo INSS Plano Simplificado Previdência/ Facultativo\n");
    printf("[3] Cálculo INSS Plano Simplificado Previdência/ Individual\n");
    printf("\n\n\n\n");

    scanf("%d", &opcao);

    switch (opcao)
    {

    case 1:

        printf("Por favor, digite o valor bruto total do seu salário: \n");
        scanf("%f", &salario);

        printf("Por favor, digite o número de meses trabalhados: \n");
        scanf("%f", &meses);

        decimo = (salario / 12) * meses;

        printf("\nO valor do seu 13o será = %.2f\n\n\n\n\n", decimo);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM CONTABILIDADE\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Contabilidade();
        }
        else
        {
            main();
        }

        break;

    case 2:

        printf("\n-----------------------------------------------------\n");
        printf("|     INSS CONTRIBUINTE INDIVIDUAL / FACULTATIVO      | \n");
        printf("-----------------------------------------------------\n\n");
        printf("\n\n");
        printf("PLANO SIMPLIFICADO PREVIDÊNCIA FACULTATIVO - 11 PORCENTO - R$ 880.00 = 96,80\n\n\n\n");

        printf("Digite o nome do contribuinte: ");
        scanf("%s", &contautnome);

        printf("Digite o valor do sálario: ");
        scanf("%f", &salariobruto);

        printf("Desconto de: %.0f porcento\n\n", porcentagem);

        desconto = (0.11 * salariobruto) - salariobruto;
        printf("O novo sálario, já aplicado o desconto de 11 porcento do salário bruto é de: %.2f\n", desconto);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM CONTABILIDADE\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Contabilidade();
        }
        else
        {
            main();
        }

        break;

    case 3:

        printf("\n-----------------------------------------------------\n");
        printf("|     INSS CONTRIBUINTE INDIVIDUAL/ FACULTATIVO      | \n");
        printf("-----------------------------------------------------\n\n");
        printf("\n\n");
        printf("PLANO SIMPLIFICADO PREVIDÊNCIA INDIVIDUAL - 5 PORCENTO - R$ 880.00 = 44,00\n\n\n\n");

        printf("Digite o nome do contribuinte: ");
        scanf("%s", &contautnome2);

        printf("Digite o valor do salário: ");
        scanf("%f", &salariobruto2);

        printf("Desconto de: %.0f porcento\n\n", porcentagem2);

        desconto2 = (0.05 * salariobruto2) - salariobruto2;
        printf("O novo salário, já aplicado o desconto de 5 porcento do salário bruto é de: %.2f\n", desconto2);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM CONTABILIDADE\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &respostaf);

        if (respostaf == 1)
        {
            Contabilidade();
        }
        else
        {
            main();
        }

        break;
    }
    printf("\nDIGITE:\n");

    printf("\n[1] PARA CONTINUAR EM CONTABILIDADE\n");
    printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
    scanf("%d", &resposta);

    if (resposta == 1)
    {
        Contabilidade();
    }
    else
    {
        main();
    }
}

void Administracao() // CORRIGIDO
{

    int opcao, resposta; // menu

    float CPP, MP, MOD, CIP;                  // case 1
    float CPV, SME, GE;                       // case 2
    float quanti, quantf, estmedio, cpv, pme; // case 3

    printf("[1] Custo de Produção do Período\n");
    printf("[2] Giro de Estoque\n");
    printf("[3] Prazo Médio de Estocagem\n");

    scanf("%d", &opcao);

    switch (opcao)
    {

    case 1:

        printf("Informe o custo da matéria prima: ");
        scanf("%f", &MP);

        printf("Informe o custo da mão de obra: ");
        scanf("%f", &MOD);

        printf("Informe se existir custo indireto na producao (exemplo: frete, terceiração de serviços, etc.): ");
        scanf("%f", &CIP);

        CPP = MP + MOD + CIP;
        printf("O custo total da produção foi de: R$ %.2f", CPP);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM ADMINISTRAÇÃO\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &resposta);

        if (resposta == 1)
        {
            Administracao();
        }
        else
        {
            main();
        }

        break;

    case 2:

        printf("Informe o valor bruto dos produtos vendidos: ");
        scanf("%f", &CPV);

        printf("Informe o saldo total de produtos em estoque: ");
        scanf("%f", &SME);

        GE = CPV / SME;

        printf("O valor do giro de estoque é de: R$ %.2f\n\n", GE);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM ADMINISTRAÇÃO\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &resposta);

        if (resposta == 1)
        {
            Administracao();
        }
        else
        {
            main();
        }

        break;

    case 3:

        printf("Informe a quantidade inicial de produtos em estoque no prazo de 30 dias: ");
        scanf("%f", &quanti);

        printf("Informe a quantidade final de produtos em estoque no mesmo prazo: ");
        scanf("%f", &quantf);

        estmedio = (quanti + quantf) / 2;

        printf("Informe o custo dos produtos vendidos: ");
        scanf("%f", &cpv);

        pme = (estmedio / cpv) * 365;

        printf("O Prazo Médio de Estocagem é: %.0f dias", pme);

        printf("\nDIGITE:\n");

        printf("\n[1] PARA CONTINUAR EM ADMINISTRAÇÃO\n");
        printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
        scanf("%d", &resposta);

        if (resposta == 1)
        {
            Administracao();
        }
        else
        {
            main();
        }

        break;
    }
    printf("\nDIGITE:\n");

    printf("\n[1] PARA CONTINUAR EM ADMINISTRAÇÃO\n");
    printf("[2] PARA RETORNAR AO MENU PRINCIPAL\n\n\n\n\n\n\n\n");
    scanf("%d", &resposta);

    if (resposta == 1)
    {
        Administracao();
    }
    else
    {
        main();
    }
}

int main() // CORRIGIDO
{

    int opcao, resposta;
    setlocale(LC_ALL, "portuguese");

    do
    {
        printf("++++++++++;   ,+++++++'     ++++++++++,   `+'       .+;   '+       `+    ++             ++                        \n");
        printf("++````````   '++`    +++    ++``````.++   `++       ++;   '+       `+    ++            `++:                       \n");
        printf("++          .++       :++   ++        +,  `+++     +++;   '+       `+    ++            ++++                       \n");
        printf("++          ++         ++   ++       .+.  `+`++   ,+.+;   '+       `+    ++           `+: +:                      \n");
        printf("+++++++:    ++         ,+   ++''''''+++   `+`;+`  ++ +;   '+       `+    ++           ++  ++                      \n");
        printf("+++++++:    +'         `+`  ++++++++++    `+` ++ ++  +;   '+       `+    ++          `+:   +:                     \n");
        printf("++          ++         :+   ++     ++     `+`  +++`  +;   '+       `+    ++          ++````++                     \n");
        printf("++          ++         ++   ++      ++    `+`  :++   +;   '+       .+    ++          ++++++++:                    \n");
        printf("++           ++       ++,   ++      '+    `+`   +    +;   :+`      ++    ++         ++      ++                    \n");
        printf("++           .+++` `;++'    ++       ++   `+`        +;    ++;   `+++    ++++++++++ +:       +:                   \n");
        printf("++             +++++++`     ++       `+:  `+`        +;    `++++++++     ++++++++++++        ++                   \n");
        printf("\n");
        printf("++++++++++++++++++;      ++                 ,+++++++++++          +++`      +++                \n");
        printf("++++++++++++++++++;     ++++              ,+++++++++++++++        +++`      +++                \n");
        printf("+++,```````````````    :++++:            +++++,       ;++++:      +++`      +++                \n");
        printf("+++.                   ++++++           ++++`           :+++      +++`      +++                \n");
        printf("+++.                  +++;;+++         '+++              `:       +++`      +++                \n");
        printf("+++.                 `+++  +++`        +++                        +++`      +++                \n");
        printf("+++;:::::::::        +++    +++       .+++                        +++`      +++                \n");
        printf("+++++++++++++       '+++    +++'      ;++'                        +++`      +++                \n");
        printf("+++++++++++++       +++      +++      '++;                        +++`      +++                \n");
        printf("+++.               +++,      ,+++     :+++                        +++`      +++                \n");
        printf("+++.              .++++++++++++++,     +++                        +++`      +++                \n");
        printf("+++.              ++++++++++++++++     ++++               +,      +++`      +++                \n");
        printf("+++.             +++'          '+++     ++++             ++++     +++`      +++                \n");
        printf("+++.             +++            +++     `++++,         '++++      +++`      +++                \n");
        printf("+++.            +++`            `+++      +++++++;:;++++++'       +++`      ++++++++++++++++++ \n");
        printf("+++.           :+++              +++;      ,+++++++++++++         +++`      ++++++++++++++++++ \n");
        printf("                                              ,++++++;`                                        \n");

        printf("\n");

        printf("[1] Matemática Básica\n");
        printf("[2] Geometria\n");
        printf("[3] Física\n");
        printf("[4] Laboratório\n");
        printf("[5] Contabilidade\n");
        printf("[6] Administração\n");

        printf("---------------------------------------------------------------\n");
        printf("Sistemas de Informação 8º Período\n\n");

        printf("Alunos:\n");
        printf("        João Paulo Neves R. F. de Assis\n");
        printf("        William Gouveia de Jesus\n");
        printf("---------------------------------------------------------------\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            Matematicabasica();
            break;
        case 2:
            Geometria();
            break;
        case 3:
            Fisica();
            break;
        case 4:
            Laboratorio();
            break;
        case 5:
            Contabilidade();
            break;
        case 6:
            Administracao();
            break;
        }

        printf("\n[0] PARA CONTINUAR\n");
        printf("[2] PARA SAIR\n");
        scanf("%d", &resposta);

    } while (resposta == 0);

    return 0;
}
