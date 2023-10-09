#ifndef FUNCIONES_CALCU_H_INCLUDED
#define FUNCIONES_CALCU_H_INCLUDED

    /// PROTOTIPOS ------
    void sumar ();
    void restar ();
    void multiplicar ();
    void dividir ();
    void logartimoNatural ();
    void logaritmoBase10 ();

    ///------------------



    /// FUNCIONES -----------------------------------------


    ///SUMA
    void sumar (){

        float n1, n2;
        cout << "Ingrese el primer numero :";
        cin >> n1;
        cout << "Ingrese el segundo numero :";
        cin >> n2;

        float resultado = n1+n2;

        cout << "El resultado de la suma es: " << resultado;
        cout << endl;
        cout << endl;
    }


    ///RESTA
    void restar (){

        float n1, n2;
        cout << "Ingrese el primer numero :";
        cin >> n1;
        cout << "Ingrese el segundo numero :";
        cin >> n2;

        float resultado = n1-n2;

        cout << "El resultado de la resta es: " << resultado;
        cout << endl;
        cout << endl;
    }



    ///MULTIPLICACIÓN
    void multiplicar (){

        float n1, n2;
        cout << "Ingrese el primer numero :";
        cin >> n1;
        cout << "Ingrese el segundo numero :";
        cin >> n2;

        float resultado = n1*n2;

        cout << "El resultado de la multiplicacion es: " << resultado;
        cout << endl;
        cout << endl;
    }


    ///DIVISIÓN
    void dividir (){

        float n1, n2;
        cout << "Ingrese el primer numero :";
        cin >> n1;
        cout << "Ingrese el segundo numero :";
        cin >> n2;
        if(n2 == 0){
            cout << "Error, no se puede dividir por cero." << endl;
            cout << "Por favor, ingrese nuevamente el segundo numero :";
            cin >> n2;
        }

        float resultado = n1/n2;

        cout << "El resultado de la division es: " << resultado;
        cout << endl;
        cout << endl;
    }


    ///LOGARITMO NATURAL
    void logaritmoNatural() {

        float n;
        cout << "Ingrese el numero para calcular el logaritmo natural: ";
        cin >> n;

        if (n <= 0) {
            cout << "Error, el logaritmo natural no esta definido para numeros no positivos." << endl;
            return;
        }

        float resultado = log(n);

        cout << "El resultado del logaritmo natural es: " << resultado << endl << endl;
    }


    ///LOGARITMO BASE 10
    void logaritmoBase10() {

        float n;
        cout << "Ingrese el numero para calcular el logaritmo en base 10: ";
        cin >> n;

        if (n <= 0) {
            cout << "Error, el logaritmo en base 10 no esta definido para numeros no positivos." << endl;
            return;
        }

        float resultado = log10(n);

        cout << "El resultado del logaritmo en base 10 es: " << resultado << endl << endl;
    }


    /// MENU PRINCIPAL --------------------------------------------------------

    void menuPrincipal (){

        while (true){

            int opc;
            const int SUMAR = 1;
            const int RESTAR = 2;
            const int MULTIPLICAR = 3;
            const int DIVIDIR = 4;
            const int LOGARITMO_NATURAL = 5;
            const int LOGARITMO_BASE10 = 6;
            const int SALIR = 0;

            system ("cls");
            cout << "-------- CALCULADORA -------- " << endl;
            cout << "1) Sumar                      " << endl;
            cout << "2) Restar                     " << endl;
            cout << "3) Multiplicar                " << endl;
            cout << "4) Dividir                    " << endl;
            cout << "5) Logaritmo Natural          " << endl;
            cout << "6) Logaritmo Base 10          " << endl;
            cout << "------------------------------" << endl;
            cout << "0) Salir                      " << endl;

            cout << "Ingrese una opcion:" << endl;
            cout << endl;
            cin>>opc;
            system("cls");

            switch (opc){

            case SUMAR: sumar ();
                break;
            case RESTAR: restar ();
                break;
            case MULTIPLICAR: multiplicar ();
                break;
            case DIVIDIR: dividir ();
                break;
            case LOGARITMO_NATURAL: logaritmoNatural ();
                break;
            case LOGARITMO_BASE10: logaritmoBase10 ();
                break;
            case SALIR: return ;
                break;
            default: cout << "Usted a ingresado una opcion invalida. Por favor, vuelva a ingresar una opcion valida." <<endl;
                break;
            }
            cout << endl;
            system ("pause");
        }
    }

#endif // FUNCIONES_CALCU_H_INCLUDED
