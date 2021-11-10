#include <iostream>
#include <string>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h> //pt system("cls")
#include <string.h>

using namespace std;

//Functii ajutatoare
int citeste_optiune_meniu(int max_optiuni);


// Functii care reprezinta optiuni de meniu sau parte din cerinta proiectului
void afisare_nume();

//mp - meniu principal
void meniu_principal();
void mp_optiune_functii_predefinite();
void mp_optiune_functii_definite_utilizator();

void ms_1_clasificare();

void ms_2_definire();
void ms_2_1_f_procedural();
void ms_2_2_f_operand();

void ms_3_apelare();
void ms_3_1_f_procedural();
void ms_3_2_f_operand();

void ms_4_declarare();

void ms_5_transmiterea_parametrilor_formali();

void ms_6_aplicatii();
void ms_6_1_f_procedural();
void ms_6_2_f_procedural();
void ms_6_3_f_operand();
void ms_6_4_f_operand();


//Functii care vor fi date ca exemplu de functii definite de utilizator
void cifre_care_apar_o_singura_data(int);
void numarimpar(int);
int suma(int a, int b);
int produs(int , int );

/************************************************
    MAIN
 ************************************************/
int main() {
    //int rulare_program = 1;

    afisare_nume();
    meniu_principal();

    return 0;
}

/********************************************
    Functii ajutatoare
 ********************************************/
int citeste_optiune_meniu(int max_optiuni) {
    int r;
    int incercare = 0;
    cout << "Alegeti o optiune de meniu (ex: 1 / 2 ... )." << endl;
    do {
        if(incercare > 0)
            cout << "Alegeti o optiune de meniu (ex: 1 / 2 ... ). Optiunea selectata: " << r << endl;

        incercare++;
        cin >> r;
    } while ( r < 0 || r > max_optiuni );

    return r;
}



/********************************************
    Functii meniu
 ********************************************/

void afisare_nume() {

    string buffer; //variabila necesara pentru a putea utilizat getline
    //               - in acest caz doar astept enter


    //stergere ecran - foloseste functie din strlib.h
    system("cls");
    cout << "Chende-Roman Teodora" << endl;
    cout << "Cl: XI C" << endl;
    cout << "Proiect Informatica. Semestrul 1.";

    getline(cin, buffer);
    //getch();
}

void meniu_principal() {
    int o;

    do {

        system("cls");

        //int rulare_program = 1;

        //afisare meniu
        cout << "Meniu principal:" << endl << endl;

        cout << "      1. Functii predefinite" << endl << endl;

        cout << "      2. Functii definite de utiizator" << endl << endl;

        cout << "      3. IESIRE" << endl << endl;

        cout << " --- (alegeti cifra (1, 2, ... ) corespunzatoare optiunii dorite) ---" << endl;


        o = citeste_optiune_meniu(3);

        cout << "MP. Ales: " << o << endl;

        switch(o) {
        case 1:
            mp_optiune_functii_predefinite();
            break;

        case 2:
            mp_optiune_functii_definite_utilizator();
            break;

        case 3:
            cout << "Ati ales optiunea '3' -> Terminare program";
            break;
        }
    } while(o != 3);


}

//mp - de la meniu principal
void mp_optiune_functii_predefinite() {

    string buffer;
    getline(cin, buffer); // curatare buffer de intrare - tasttura. Avem ceva acolo pt ca suntem bucla meniului principal
    //afiseaza ceva
    system("cls");


    cout << "Functii predefinite - exemple" << endl;

    cout << "\n\n\
    - biblioteca iostream : cin, cout - citire si afisare\n\
    - biblioteca ctype: toupper(c) - transforamre litere in litere mari\n\
                                     tolower(c) - transformare litere in litere mari\n\n\
    - biblioteca math: squrt(x) - caculare radacina patrata \n\
                                  pow(x, y) - calculare putere a unui numar\n\
                                  abs(x) - returneaza modulul unui numar\n\n\
                                  ceil(x) - rotunjeste un nr x la cel mai apropiat nr intreg mai mare ca x\n\
                                  floor(x) - rotunjeste un numar x la cel mai apropiat nr intreg mai mic ca x";

    cout << endl << "Apasati 'Enter' pentru a va intoarce la meniul principal" << endl;

    getch();
    getline(cin, buffer);
}

void mp_optiune_functii_definite_utilizator(){
    int o;

    do {
        system("cls");



        //afisare meniu
    cout << "Meniu Functii definite de utilizator:" << endl << endl;

    cout << "      1. Clasificare" << endl << endl;

    cout << "      2. Definire" << endl << endl;

    cout << "      3. Apelare" << endl << endl;

    cout << "      4. Declarare" << endl << endl;

    cout << "      5. Transmiterea parametrilor formali" << endl << endl;

    cout << "      6. Aplicatii" << endl << endl;

    cout << "      7. REVENIRE" << endl << endl;

    cout << " --- (alegeti cifra (1, 2, ... ) corespunzatoare optiunii dorite) ---" << endl;

        o = citeste_optiune_meniu(7);

        cout << "MP. Ales: " << o << endl;

        switch(o) {
        case 1:
            ms_1_clasificare();
            break;

        case 2:
            ms_2_definire();
            break;

        case 3:
            ms_3_apelare();
            break;

        case 4:
            ms_4_declarare();
            break;

        case 5:
            ms_5_transmiterea_parametrilor_formali();
            break;

        case 6:
            ms_6_aplicatii();
            break;

        case 7:
            cout << "Ati ales optiunea '7' -> Revenire in meniul principal" << endl;
            break;
        }
    } while(o != 7);

}

//meniu 2 optiunea 1
void ms_1_clasificare() {
    string buffer;
    getline(cin, buffer); // curatare buffer de intrare - tasttura. Avem ceva acolo pt ca suntem bucla meniului principal
    //afiseaza ceva
    system("cls");


    cout << "1. Clasificare functii definite de utilizator" << endl;
    cout <<" \n\
    Functia de tip operand =  subprogram care returneaza una,\n\
                                mai multe sau nici o valoare.\n\
                                Valorile se returneaza prin intermediul parametrilor.\n\n\n\
    Functia de tip procedural = subprograme care returneaza una,\n\
                                mai multe sau nici o valoare.\n\
                                Valorile se returneaza prin intermediul parametrilor." << endl << endl;

    cout << "Apasati 'Enter' pentru a va intoarce la meniul principal" << endl;

    getch();
    getline(cin, buffer);
}

//meniu 2 optiunea 2
void ms_2_definire() {
    int op;

    do {

        system("cls");

        //int rulare_program = 1;

        //afisare meniu
        cout << "2. Meniu definire functii:" << endl << endl;

        cout << "      1. Functii de tip procedural" << endl << endl;

        cout << "      2. Functii de tip operand" << endl << endl;

        cout << "      3. REVENIRE" << endl << endl;

        cout << " --- (alegeti cifra (1, 2, ... ) corespunzatoare optiunii dorite) ---" << endl;


        op = citeste_optiune_meniu(3);

        cout << "MP. Ales: " << op << endl;

        switch(op) {
        case 1:
            ms_2_1_f_procedural();
            break;

        case 2:
            ms_2_2_f_operand();
            break;

        case 3:
            cout << "Ati ales optiunea '3' -> Revenire la meniul 2";
            break;
        }
    } while(op != 3);

}

//meniu optiunea 2 - opiunea 1
void ms_2_1_f_procedural() {
    string buffer;
    getline(cin, buffer); // curatare buffer de intrare - tasttura. Avem ceva acolo pt ca suntem bucla meniului principal
    //afiseaza ceva
    system("cls");


    cout << "2.1. Functii de tip procedural" << endl << endl;

    cout << "\n\
    Orice subprogram trebuie declarat si definit. \n\
    Declararea poate fi facuta fie prin: \n\
            - prototip: declararea se face inainte de functia main,\n\
            iar definirea se va face dupa fuctia main\n\n\
            - definitia lui: antetul si corpul subprogramului, inainte de functia main\n\n\
    Antetul functiei cuprinde cuvantul 'void',\n\
    identificatorul functiei si lista de parametrii formali.\n\n\
    n cazul functiei procedurale, prin intermediul functiei se afiseaza, nu se returneaza valori.\n\n\
    Ex: void divizor (int n)\n\
    void = indica faptul ca functia nu trebuie sa returneze ceva\n\
    divizor = identificator\n\
    n = parametrul formal al functiei, de tip int. " << endl << endl;

    cout << "Apasati 'Enter' pentru a va intoarce la meniul principal" << endl;

    getch();
    getline(cin, buffer);
}

//meniu optiunea 2 - optiunea 2
void ms_2_2_f_operand() {
    string buffer;
    getline(cin, buffer); // curatare buffer de intrare - tasttura. Avem ceva acolo pt ca suntem bucla meniului principal
    //afiseaza ceva
    system("cls");


    cout << "2.2. Functii de tip operand" << endl << endl;
    cout << "\n\
    Orice subprogram trebuie declarat si definit. \n\
    Declararea poate fi facuta fie prin: \n\
            - prototip: declararea se face inainte de functia main,\n\
            iar definirea se va face dupa fuctia main\n\n\
            - definitia lui: antetul si corpul subprogramului, inainte de functia main\n\n\
    Antetul functiei cuprinde tipul variabilei returnate de functie,\n\
    identificatorul functiei si lista de parametrii formali.\n\n\
    Ex: int divizor (int n)\n\
    int = tipul varabileireturnate de functie\n\
    divizor = identificator\n\
    n = parametrul formal al functiei, de tip int. " << endl << endl;


    cout << "Apasati 'Enter' pentru a va intoarce la meniul principal" << endl;

    getch();
    getline(cin, buffer);
}


// meniu 2 - optiunea 3
void ms_3_apelare() {
    int ot;

    do {

        system("cls");

        //int rulare_program = 1;

        //afisare meniu
        cout << "3. Meniu apelare functii:" << endl << endl;

        cout << "      1. Functii de tip procedural" << endl << endl;

        cout << "      2. Functii de tip operand" << endl << endl;

        cout << "      3. REVENIRE" << endl << endl;

        cout << " --- (alegeti cifra (1, 2, ... ) corespunzatoare optiunii dorite) ---" << endl;


        ot = citeste_optiune_meniu(3);

        //cout << "MP. Ales: " << ot << endl;

        switch(ot) {
        case 1:
            ms_3_1_f_procedural();
            break;

        case 2:
            ms_3_2_f_operand();
            break;

        case 3:
            cout << "Ati ales optiunea '3' -> Revenire la meniul 2";
            break;
        }
    } while(ot != 3);

}

//meniu optiunea 3 - opiunea 1
void ms_3_1_f_procedural() {
    string buffer;
    getline(cin, buffer); // curatare buffer de intrare - tasttura. Avem ceva acolo pt ca suntem bucla meniului principal
    //afiseaza ceva
    system("cls");


    cout << "3.1. Functii de tip procedural" << endl << endl;
    cout << "\n\
    Apelul subprogramului  = executare  subprogram\n\n\
    Apelul se realizeaza printr-o instructiune procedurala:\n\
            nume_subprogram([lista_parametri]);\n\n\
    Ex: divizor (10); \n\
    - identificator = 'divizor'\n\
    - parametru efectiv = 10" << endl << endl;

    cout << "Apasati 'Enter' pentru a va intoarce la meniul principal" << endl;

    getch();
    getline(cin, buffer);
}

//meniu optiunea 3 - opiunea 2
void ms_3_2_f_operand() {
    string buffer;
    getline(cin, buffer); // curatare buffer de intrare - tasttura. Avem ceva acolo pt ca suntem bucla meniului principal
    //afiseaza ceva
    system("cls");


    cout << "3.2. Functii de tip operand" << endl;
    cout << "\n\
    Apelul subprogramului  = executare  subprogram\n\n\
    Apelul se realizeaza in interiorul unei expresii unde este folosit ca operand.\n\
    Expresia poate sa apara fie in membrul drept al unei instructiuni de atribuire,\n\
    fie in cadrul unei instructiuni de control, fie in lista de parametri ai unei \n\
    alte functii (functie operand sau instructiune procedurala).\n\n\
    Ex: cout << nume_subprogram([lista_parametri];\n\n\
    Ex: cout << divizor (10); \n\
    (pentru a apela functia am folosit functia prefedinita 'cout' cu ajutorul careia\n\
    afisez variabila returnata in urma executarii functiei definite de utilizator,\n\n\
    - identificator = 'divizor'\n\
    - parametru efectiv = 10" << endl << endl;

    cout << "Apasati 'Enter' pentru a va intoarce la meniul principal" << endl;

    getch();
    getline(cin, buffer);
}

//meniu 2 - optiunea 4
void ms_4_declarare() {
    string buffer;
    getline(cin, buffer); // curatare buffer de intrare - tasttura. Avem ceva acolo pt ca suntem bucla meniului principal
    //afiseaza ceva
    system("cls");


    cout << "4. Declararea functiilor definite de utilizator" << endl << endl;

    cout << "\n\
    Orice subprogram trebuie declarat si definit.\n\n\
    Declararea poate fi facuta:\n\
        -prin prototip - declararea se face inainte de functia main\n\
        iar definirea se va face dupa fuctia main\n\
        -prin definitia lui - antetul si corpul subprogramului, inainte de functia main" << endl << endl;

    cout << "Apasati 'Enter' pentru a va intoarce la meniul principal" << endl;

    getch();
    getline(cin, buffer);
}

//meniu 2 - optiunea 5
void ms_5_transmiterea_parametrilor_formali() {
    string buffer;
    getline(cin, buffer); // curatare buffer de intrare - tasttura. Avem ceva acolo pt ca suntem bucla meniului principal
    //afiseaza ceva
    system("cls");


    cout << "5. Transmiterea parametrilor formali" << endl;

    cout << "\n\
    Parametrii formali se transmit prin: \n\n\
    - Valoare: se realizeaza o copie a valorii parametrilor si orice modificare\n\
      realizata asupra parametrilor in functia definite, va ramane cunoscuta doar \n\
      la nivelul acelei functii.\n\n\
    Ex: int divizor (int n); \n\n\
    - Adresa: se lucreaza direct asupra varibilei. Pentru a preciza ca parametrul\n\
      este transmis prin adresa se foloseste caracterul '&'.\n\n\
    Ex: int divizor (int &n);\n\n\
    Daca parametrii sunt: \n\
    - Date de intrare: se transmit prin valoare\n\
    - Date de iesire: se transmit prin adresa \n\
    - Date de intrare: iesire – se transmit prin adresa \n\n\
    Observatie!!! \n\
    Tablourile se transmit tot timpul automat prin adresa (nu trebuie folosit carcaterul '&')." << endl << endl;

    cout << "Apasati 'Enter' pentru a va intoarce la meniul principal" << endl;

    getch();
    getline(cin, buffer);
}

//meniu 2 - optiunea 6
void ms_6_aplicatii() {
    int oi;

    do {

        system("cls");

        //int rulare_program = 1;

        //afisare meniu
        cout << "6. Meniu aplicatii functii definite de utilizator:" << endl << endl;

        cout << "      1. Problema 1 - f. procedurala" << endl << endl;

        cout << "      2. Problema 2 - f. procedurala" << endl << endl;

        cout << "      3. Problema 3 - f. operand" << endl << endl;

        cout << "      4. Problema 4 - f. operand" << endl << endl;

        cout << "      5. REVENIRE" << endl << endl;

        cout << " --- (alegeti cifra (1, 2, ... ) corespunzatoare optiunii dorite) ---" << endl;


        oi = citeste_optiune_meniu(5);

        cout << "MP. Ales: " << oi << endl;

        switch(oi) {
        case 1:
            ms_6_1_f_procedural();
            break;

        case 2:
            ms_6_2_f_procedural();
            break;

        case 3:
            ms_6_3_f_operand();
            break;

        case 4:
            ms_6_4_f_operand();
            break;

        case 5:
            cout << "Ati ales optiunea '5' -> Revenire la meniul optiunii 2";
            break;
        }
    } while(oi != 5);

}

//meniu optiunea 6 - opiunea 1
void ms_6_1_f_procedural() {
    string buffer;

    int param_functie;

    getline(cin, buffer); // curatare buffer de intrare - tasttura. Avem ceva acolo pt ca suntem bucla meniului principal
    //afiseaza ceva
    system("cls");


    cout << "6.1. Problema 1 - f tip procedural" << endl << endl;
    cout << "cerinta: \n\n\
    Subprogramul Cifre are un singur parametru, n, numar ntural.\n\
    Subprogramul afiseaza toate cifrele distincte care apar in scrierea lui n.\n\
    Scrieti definitia completa a subprogramului." << endl << endl;
    cout << "Cod functie:"<< endl;
    cout << "\n\
    void cifre_care_apar_o_singura_data(int n) {\n\
    int contor, cont, copie = n, i;\n\
    for(i = 9; i >= 0; i--){\n\
        cont = 0;\n\
        while(copie > 0) {\n\
            if(copie % 10 == i) {\n\
                cont++;\n\
            }\n\
            copie = copie / 10;\n\
        }\n\
        if(cont == 1) {\n\
            cout << ' - cif unica: ' << i << endl;\n\
        }\n\
        copie = n;\n\
        }\n\
    }" << endl << endl;
    // pune cod care cere sa dai un numar
    cout << "Dati numarul de folosit ca parametru pentru functie: ";
    cin >> param_functie;
    cout << endl;
    cifre_care_apar_o_singura_data(param_functie);
    cout << endl;
    cout << "Apasati 'Enter' pentru a va intoarce la meniul principal" << endl;

    //getch();
    getline(cin, buffer); //curata buffer cin
    getline(cin, buffer); //se opreste pana la apasare tasta Enter
}

//meniu optiunea 6 - opiunea 2
void ms_6_2_f_procedural() {
    string buffer;
    getline(cin, buffer); // curatare buffer de intrare - tasttura. Avem ceva acolo pt ca suntem bucla meniului principal
    //afiseaza ceva
    system("cls");

    int param_fct;
    cout << "6.2. Problema 2 - f tip procedural" << endl << endl;

    cout << "cerinta: \n\n\
    Subprogramul numarimpar are un singur parametru, n, numar natural.\n\
    Subprogramul afiseaza cel mai mic numar impar mai mare ca n.\n\
    Scrieti definitia completa a subprogramului." << endl << endl;

     cout << "Cod functie:"<< endl;
     cout << "\n\
     void numarimpar(int n) {\n\
        if(n % 2 == 0) {\n\
            cout << 'cel mai mic numar impar mai mare ca n: ' << n + 1;\n\
        } else {\n\
        cout << 'cel mai mic numar impar mai mare ca n: ' << n + 2;\n\
        }\n\
    }" << endl << endl;
    // pune cod care cere sa dai un numar
    cout << "executie: " << endl;
    cout << "Dati numarul de folosit ca parametru pentru functie: ";
    cin >> param_fct;
    cout << endl;
    numarimpar(param_fct);
    cout << endl;

    cout <<endl << "Apasati 'Enter' pentru a va intoarce la meniul principal" << endl;

    getch();
    getline(cin, buffer);
    getline(cin, buffer); //se opreste pana la apasare tasta Enter
}

//meniu optiunea 6 - opiunea 3
void ms_6_3_f_operand() {
    string buffer;
    getline(cin, buffer); // curatare buffer de intrare - tasttura. Avem ceva acolo pt ca suntem bucla meniului principal
    //afiseaza ceva
    system("cls");

    int a, b;
    cout << "6.3. Problema 3 - f tip operand" << endl;
    cout << "cerinta: \n\n\
    Subprogramul suma are doi parametrii, a, b, numare naturale.\n\
    Subprogramul returneaza suma celor doua numere.\n\
    Scrieti definitia completa a subprogramului." << endl << endl;

     cout << "Cod functie:"<< endl;
     cout << "\n\
     int suma(int a, int b) {\n\
        int suma;\n\
        suma = a + b;\n\
        return suma;\n\
    }" << endl << endl;

    cout << "executie: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << endl;
    cout << "suma numere: " << suma(a, b);
    cout << endl;


    cout << "Apasati 'Enter' pentru a va intoarce la meniul principal" << endl;

    getch();
    getline(cin, buffer);
    getline(cin, buffer);
}

//meniu optiunea 6 - opiunea 4
void ms_6_4_f_operand() {
    string buffer;
    getline(cin, buffer); // curatare buffer de intrare - tasttura. Avem ceva acolo pt ca suntem bucla meniului principal
    //afiseaza ceva
    system("cls");

    int x, y;
    cout << "6.4. Problema 4 - f tip operand" << endl;
    cout << "cerinta: \n\n\
    Subprogramul produs are doi parametrii, x, y, numere naturale.\n\
    Subprogramul returneaza produsul celor doua numere.\n\
    Scrieti definitia completa a subprogramului." << endl << endl;

     cout << "Cod functie:"<< endl;
     cout << "\n\
     int produs(int x, int y) {\n\
        return x * y;\n\
     }\n\ " << endl << endl;

    cout << "executie: " << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << endl;
    cout << "suma numere: " << produs(x, y);
    cout << endl;

    cout << "Apasati 'Enter' pentru a va intoarce la meniul principal" << endl;

    getch();
    getline(cin, buffer);
    getline(cin, buffer);
}


/**********************************************************
 Functii care vor fi date ca exemplu de functii utilizator
 **********************************************************/
void cifre_care_apar_o_singura_data(int n) {
    int contor, cont, copie = n, i;
    for(i = 9; i >= 0; i--){
        cont = 0;
        while(copie > 0) {
            if(copie % 10 == i) {
                cont++;
            }

            copie = copie / 10;
        }
        if(cont == 1) {
            cout << " - cif unica: " << i << endl;
            //contor++;
        }
        copie = n;

     }
}

void numarimpar(int n) {
    if(n % 2 == 0) {
        cout << "cel mai mic numar impar mai mare ca n: " << n + 1;
    } else {
        cout << "cel mai mic numar impar mai mare ca n: " << n + 2;
    }
}

int suma(int a, int b) {
    int suma;
    suma = a + b;
    return suma;
}

int produs(int x, int y) {
    return x * y;
}
