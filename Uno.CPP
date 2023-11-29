////////////////////////
//                    //
//        Uno         //
//                    //
//                    //
//   Curnis Manuel    //
//                    //
//                    //
//                    //
////////////////////////

//////////////////////////////LIBRERIE

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cstring>
#include<time.h>
#include<windows.h>
#define random(x) rand() % x
#define randomize srand((unsigned)time(NULL))

using namespace std;

////////////////////////////MAZZI

//struct contenente le informazioni delle carte
struct nodo{
                int numero;
                char colore;
                int indice; //utile nel programma, ma mai mostrato all'utente
                nodo *succ;
            };
typedef nodo *tipomazzo;

//liste contenenti le carte dei 3 giocatori
tipomazzo mazzo_giocatore1=NULL;
tipomazzo mazzo_giocatore2=NULL;
tipomazzo mazzo_giocatore3=NULL;
tipomazzo mazzo_giocatore4=NULL;
tipomazzo mazzo_giocatore5=NULL;

//lista contenenti inizialmente tutte le 36 carte
tipomazzo mazzo_totale=NULL;
//lista contenente le 21 carte non distribuite ai giocatori
tipomazzo mazzo_pesca=NULL;
//lista inizialmente vuota contenente le carte gia' giocate
tipomazzo mazzo_scarti=NULL;

////////////////////////////NOMI GIOCATORI

//struct contenenti i nomi dei giocatori
struct nome{
    char *name;
    int n; //indica di che g e' il nome. Utile nel proseguimento del programma
    nome *succ;
};
typedef nome *tiponome;

//lista contenente i nomi dei giocatori
tiponome nomi_giocatori=NULL;

////////////////////////////////UTILITY

void SetColor(unsigned short color) {

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);

}

int caso(int max)
{ return (random(max)+1); }

//////////////////////////////////VITTORIA

void vittoria()
{
    cout<<endl<<endl;
    //HAI
    //riga 1
    //H
    SetColor(240);
    cout<<"\t\t\t   ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //A
    SetColor(204);
    cout<<"        ";
    SetColor(240);
    cout<<"  ";

    //I
    SetColor(204);
    cout<<"  "<<endl;

    //riga 2
    //H
    SetColor(240);
    cout<<"\t\t\t   ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //A
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //I
    SetColor(204);
    cout<<"  "<<endl;

    //riga 3
    //H
    SetColor(240);
    cout<<"\t\t\t   ";
    SetColor(204);
    cout<<"        ";
    SetColor(240);
    cout<<"  ";

    //A
    SetColor(204);
    cout<<"        ";
    SetColor(240);
    cout<<"  ";

    //I
    SetColor(204);
    cout<<"  "<<endl;

    //riga 4
    //H
    SetColor(240);
    cout<<"\t\t\t   ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //A
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //I
    SetColor(204);
    cout<<"  "<<endl;

    //riga 5
    //H
    SetColor(240);
    cout<<"\t\t\t   ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //A
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //I
    SetColor(204);
    cout<<"  "<<endl<<endl<<endl;

    //VINTO
    //riga 1
    //V
    SetColor(240);
    cout<<"\t\t";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //I
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //N
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //T
    SetColor(204);
    cout<<"        ";
    SetColor(240);
    cout<<"  ";

    //O
    SetColor(204);
    cout<<"        ";
    SetColor(240);
    cout<<"  ";

    //
    SetColor(204);
    cout<<"  "<<endl;


    //riga 2
    //V
    SetColor(240);
    cout<<"\t\t";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //I
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //N
    SetColor(204);
    cout<<"   ";
    SetColor(240);
    cout<<"   ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //T
    SetColor(240);
    cout<<"   ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"     ";

    //O
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //
    SetColor(204);
    cout<<"  "<<endl;

    //riga 3
    //V
    SetColor(240);
    cout<<"\t\t";
    SetColor(240);
    cout<<" ";
    SetColor(204);
    cout<<" ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<" ";
    SetColor(240);
    cout<<"   ";

    //I
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //N
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<" ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<" ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //T
    SetColor(240);
    cout<<"   ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"     ";

    //O
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //
    SetColor(204);
    cout<<"  "<<endl;

    //riga 4
    //V
    SetColor(240);
    cout<<"\t\t";
    SetColor(240);
    cout<<" ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"   ";

    //I
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //N
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"   ";
    SetColor(204);
    cout<<"   ";
    SetColor(240);
    cout<<"  ";

    //T
    SetColor(240);
    cout<<"   ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"     ";

    //O
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  "<<endl;

    //riga 5
    //V
    SetColor(240);
    cout<<"\t\t";
    SetColor(240);
    cout<<"   ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"     ";

    //I
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //N
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"    ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"  ";

    //T
    SetColor(240);
    cout<<"   ";
    SetColor(204);
    cout<<"  ";
    SetColor(240);
    cout<<"     ";

    //O
    SetColor(204);
    cout<<"        ";
    SetColor(240);
    cout<<"  ";

    //
    SetColor(204);
    cout<<"  "<<endl;

    SetColor(240);

}

////////////////////////////////TITOLO UNO

void titolo()
{
    //procedura che manda a video il titolo, vengono indicate sia le righe che le lettere
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    // 1
    // U
    SetColor(255);
    cout<<"                         ";
    SetColor(192);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    SetColor(192);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    //N
    SetColor(144);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    SetColor(144);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    //O
    SetColor(224);
    cout<<"        \n";


    // 2
    // U
    SetColor(255);
    cout<<"                         ";
    SetColor(192);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    SetColor(192);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    //N
    SetColor(144);
    cout<<"   ";
    SetColor(255);
    cout<<"   ";
    SetColor(144);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    //O
    SetColor(224);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    SetColor(224);
    cout<<"  \n";


    // 3
    // U
    SetColor(255);
    cout<<"                         ";
    SetColor(192);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    SetColor(192);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    //N
    SetColor(144);
    cout<<"  ";
    SetColor(255);
    cout<<" ";
    SetColor(144);
    cout<<"  ";
    SetColor(255);
    cout<<" ";
    SetColor(144);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    //O
    SetColor(224);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    SetColor(224);
    cout<<"  \n";


    // 4
    // U
    SetColor(255);
    cout<<"                         ";
    SetColor(192);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    SetColor(192);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    //N
    SetColor(144);
    cout<<"  ";
    SetColor(255);
    cout<<"   ";
    SetColor(144);
    cout<<"   ";
    SetColor(255);
    cout<<"    ";
    //O
    SetColor(224);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    SetColor(224);
    cout<<"  \n";


    // 5
    // U
    SetColor(255);
    cout<<"                         ";
    SetColor(192);
    cout<<"        ";
    SetColor(255);
    cout<<"    ";
    //N
    SetColor(144);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    SetColor(144);
    cout<<"  ";
    SetColor(255);
    cout<<"    ";
    //O
    SetColor(224);
    cout<<"        \n";

    SetColor(240);

    cout<<endl<<"\t \t \t";

    SetColor(170);
    cout<<"                                  ";

    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    SetColor(240);
}

////////////////////////////////CREAZIONE MAZZI

void inserimento_mazzo_totale(tipomazzo &mazzo_total, tipomazzo nu)
{
    //inserimento in testa
    nu->succ=mazzo_total;
    mazzo_total=nu;
}

void carica_cambia_colore(int &indic, tipomazzo &mazzo_totall)
{
    //creo 4 carte jolly con colore indefinito e numero 9

    for(int k=1; k<=4; k++)
    {
        tipomazzo nuov=NULL;
        nuov=new nodo;
        nuov->colore='?';
        nuov->indice=indic;
        indic++;
        nuov->numero=9;
        inserimento_mazzo_totale(mazzo_totall,nuov);
    }
}

void carica_pesca(int color, int &indi, tipomazzo &mazzo_to)
{
    //alle carte pesca assegno il numero 8 in modo che siano riconoscibili
    tipomazzo nuo=NULL;
    nuo=new nodo;
    switch(color)
        {
            case 1: {
                        nuo->colore='R';
                        break;
                    }
            case 2: {
                        nuo->colore='G';
                        break;
                    }
            case 3: {
                        nuo->colore='V';
                        break;
                    }
            case 4: {
                        nuo->colore='B';
                        break;
                    }
        }
    nuo->indice=indi;
    indi++;
    nuo->numero=8;
    inserimento_mazzo_totale(mazzo_to,nuo);
}

void carica_numeri_mazzo_totale(int &ind, tipomazzo &mazzo_tota, int color)
{
    //per ogni colore considero i 7 numeri, i jolly e le carte pesca e inserisco i nodi creati nel mazzo totale
    for(int r=1; r<=7; r++)
    {
        tipomazzo nuovo=NULL;
        nuovo=new nodo;
        switch(color)
        {
            case 1: {
                        nuovo->colore='R';
                        break;
                    }
            case 2: {
                        nuovo->colore='G';
                        break;
                    }
            case 3: {
                        nuovo->colore='V';
                        break;
                    }
            case 4: {
                        nuovo->colore='B';
                        break;
                    }
        }

        //ad ogni carta attribuisco un indice, in modo che sia pi� facile utilizzare la funzione random in seguito
        nuovo->indice=ind;
        nuovo->numero=r;
        inserimento_mazzo_totale(mazzo_tota,nuovo);
        ind++;
    }
    //creo una carta pesca per ogni colore
    carica_pesca(color,ind,mazzo_tota);
}

void carica_mazzo_totale(tipomazzo &mazzo_tot)
{
    int cont=1;
    char col;
    //considero i 4 casi corrispondenti ai 4 colori delle carte
    for(int i=1;i<=4;i++)
    {
        carica_numeri_mazzo_totale(cont,mazzo_tot,i);
    }

    carica_cambia_colore(cont,mazzo_tot);
}

tipomazzo ricerca_sequenziale(int cercato, tipomazzo mazzo_tot)
{
    tipomazzo n,temp;

    temp=mazzo_tot;
    while(temp->succ!=NULL && temp->indice!=cercato){
                                                        temp=temp->succ;
                                                    }
    if(temp->indice==cercato){
                                n=temp;
                             }
    else{
            n=NULL;
        }
    return n;
}

tipomazzo estrai(int cerca, tipomazzo &mazzo_tot)
{
    tipomazzo trov,temp;
    trov=ricerca_sequenziale(cerca,mazzo_tot);
    if (trov!=NULL) {
                        temp=mazzo_tot;
                        if(temp==trov){
                                          mazzo_tot=mazzo_tot->succ;
                                      }

                        else{
                                while(temp->succ!=trov)
                                {
                                    temp=temp->succ;
                                }
                                temp->succ=trov->succ;
                            }
                    }
    return trov;
}

void estrai_carte(int cerc, tipomazzo &trovato,tipomazzo &mazzo_tot,int ciclo, tipomazzo &gioc1, tipomazzo &gioc2, tipomazzo &gioc3, tipomazzo &gioc4, tipomazzo &gioc5)
{
    //estraggo un numero casuale e individuo la carta che ha quell'indice
    cerc=caso(36);
    trovato=estrai(cerc,mazzo_tot);
    if(trovato==NULL){
                        //se la carta con indice estratto non � presente (perch� gi� estratta) richiamo la procedura in modo che il procedimento si ripeta con un altro numero casuale
                        estrai_carte(cerc,trovato,mazzo_tot,ciclo,gioc1,gioc2,gioc3, gioc4,gioc5);
                    }
    else{
            //a seconda del ciclo che sta avvenendo assegno la carta al giocatore 1 o 2 o 3
            switch(ciclo)
            {
                case 1: {
                            trovato->succ=gioc1;
                            gioc1=trovato;
                            break;
                        }
                case 2: {
                            trovato->succ=gioc2;
                            gioc2=trovato;
                            break;
                        }
                case 3: {
                            trovato->succ=gioc3;
                            gioc3=trovato;
                            break;
                        }
                case 4: {
                            trovato->succ=gioc4;
                            gioc4=trovato;
                            break;
                        }
                case 5: {
                            trovato->succ=gioc5;
                            gioc5=trovato;
                            break;
                        }
            }
        }
}

void carica_mazzi_giocatori(tipomazzo &mazzo_tot,tipomazzo &gio1, tipomazzo &gio2, tipomazzo &gio3,tipomazzo &gio4, tipomazzo &gio5, int num_g)
{
    //per ogni giocatore devo estrarre 5 carte casuali
    int cercato;
    tipomazzo trovato=NULL;
    for(int i=1; i<=num_g; i++)
    {
        for(int j=1; j<=5; j++)
        {
            estrai_carte(cercato,trovato,mazzo_tot,i,gio1,gio2,gio3,gio4,gio5);
        }
    }
}

void estrai_mazzo_pesca(int cerc, tipomazzo &trovato,tipomazzo &mazzo_tot, tipomazzo &mazzo_pescare)
{
    //estraggo un numero casuale, individuo la carta con quell'indice e la sposto nel mazzo pesca
    cerc=caso(36);
    trovato=estrai(cerc,mazzo_tot);
    if(trovato==NULL){
                        //se la carta con quell'indice non � presente (perch� gi� estratta) richiamo la procedura in modo che il processo avvenga nuovamente, ma con un altro numero
                        estrai_mazzo_pesca(cerc,trovato,mazzo_tot,mazzo_pescare);
                    }
    else{
            trovato->succ=mazzo_pescare;
            mazzo_pescare=trovato;
        }
}

void carica_mazzo_pesca(tipomazzo &mazzo_tot, tipomazzo &mazzo_pescar, int num_g)
{
    //dato che il mazzo contenente le carte restanti � ordinato devo mescolarle, e lo faccio estraendole tutte in modo casuale e posizionandole in un nuovo mazzo
    int cercato;
    tipomazzo trovato=NULL;

    //calcolo il numero di carte rimaste
    int ca;
    if(num_g==3) ca=21;
    else if(num_g==4) ca=16;
    else if(num_g==5) ca=11;

    for(int i=1; i<=ca; i++)
    {
        estrai_mazzo_pesca(cercato,trovato,mazzo_tot,mazzo_pescar);
    }
}

void generare_mazzi(tipomazzo &mazzo_giocatore1, tipomazzo &mazzo_giocatore2, tipomazzo &mazzo_giocatore3, tipomazzo &mazzo_giocatore4, tipomazzo &mazzo_giocatore5, tipomazzo &mazzo_pesca, tipomazzo &mazzo_totale, int num_g)
{
    //generare i mazzi
    carica_mazzo_totale(mazzo_totale);
    carica_mazzi_giocatori(mazzo_totale,mazzo_giocatore1,mazzo_giocatore2,mazzo_giocatore3,mazzo_giocatore4,mazzo_giocatore5, num_g);
    carica_mazzo_pesca(mazzo_totale,mazzo_pesca, num_g);
}

////////////////////////////////////////REGOLE

void spiegazione_carte()
{
    cout<<"Si gioca con 36 carte, suddivise per 4 colori (";SetColor(192);cout<<"rosso";SetColor(240);cout<<", ";SetColor(224);cout<<"giallo";SetColor(240);cout<<", ";SetColor(160);cout<<"verde";SetColor(240);cout<<", ";SetColor(144);cout<<"blu";
    SetColor(240);
    cout<<"):\n\t- 7 carte numerate da 1 a 7 per ogni colore;\n\t- 1 carta Pesca per ogni colore;\n\t- 4 carte Jolly.\n";
}

void svolgimento_gioco()
{
    cout<<"\n\nInizialmente vengono distribuite casualmente 5 carte ad ognuno dei 3 giocatori e viene scoperta la prima carta, necessariamente numerata.\nQuando e' il proprio turno, il giocatore deve scartare una carta che abbia colore o numero uguale a quella precedente. Questo vale anche per la carta pesca. Il jolly puo' invece essere sempre utilizzato.\nSe il giocatore non ha alcuna carta da giocare deve pescare. Se la carta pescata si abbina all'ultima, deve essere scartata.\n\nVince il giocatore che per primo finisce le sue carte. Se nessun giocatore resta senza carte una volta esaurito il mazzo, il gioco termina in parita'.\n\n\n\n";
}

void regole()
{
    system("cls");

    spiegazione_carte();
    svolgimento_gioco();

    cout<<endl<<endl;
    system("pause");
    system("cls");
}

///////////////////////////////////////CREAZIONE GIOCATORI

bool test_vuota_nomi(tiponome lista)
{
    if(lista==NULL) return true;
    return false;
}

void fifo_nomi(tiponome &nomi_giocatori, tiponome &nuovo)
{
    if(test_vuota_nomi(nomi_giocatori)){
        nomi_giocatori=nuovo;
        nuovo->succ=NULL;
    }
    else{
        tiponome app=nomi_giocatori;

        while(app->succ!=NULL) app=app->succ;

        app->succ=nuovo;
        nuovo->succ=NULL;
    }
}

//trasforma il nome inserito in maiuscole, cos� da poter controllare che i nomi dei giocatori siano realmente diversi
void trasforma_nome(char *&nome)
{
    for(int i=0; i<strlen(nome); i++)
    {
        switch (nome[i])
        {
            case 'q': nome[i]='Q'; break;
            case 'w': nome[i]='W'; break;
            case 'e': nome[i]='E'; break;
            case 'r': nome[i]='R'; break;
            case 't': nome[i]='T'; break;
            case 'y': nome[i]='Y'; break;
            case 'u': nome[i]='U'; break;
            case 'i': nome[i]='I'; break;
            case 'o': nome[i]='O'; break;
            case 'p': nome[i]='P'; break;
            case 'a': nome[i]='A'; break;
            case 's': nome[i]='S'; break;
            case 'd': nome[i]='D'; break;
            case 'f': nome[i]='F'; break;
            case 'g': nome[i]='G'; break;
            case 'h': nome[i]='H'; break;
            case 'j': nome[i]='J'; break;
            case 'k': nome[i]='K'; break;
            case 'l': nome[i]='L'; break;
            case 'z': nome[i]='Z'; break;
            case 'x': nome[i]='X'; break;
            case 'c': nome[i]='C'; break;
            case 'v': nome[i]='V'; break;
            case 'b': nome[i]='B'; break;
            case 'n': nome[i]='N'; break;
            case 'm': nome[i]='M'; break;
            default: nome[i]=nome[i];
        }
    }
}

void inserimento_nomi(tiponome &nomi_giocatori, tiponome &nuovo, int ind, int j)
{
    int i=0; //utile nella comunicazione con l'utente

    nuovo->n=ind;
    nuovo->name=new char;

    do{
        //comunicazioni di eventuali errori
        if(j==1){ cout<<"Nome non disponibile.\n"; j=0;}
        else if(i==1) cout<<"Il nome inserito non e' valido.\n";
        i=1;

        cout<<"Inserire nome del "<<nuovo->n<<"o giocatore.\t";
        fflush(stdin);
        gets(nuovo->name);

    //impedisco che un nome sia invio
    }while(nuovo->name[0]=='\0');

    trasforma_nome(nuovo->name);
}

//se trova nomi uguali nella lista, torna true
bool diverso(tiponome nomi_giocatori, char *cercato)
{
    while(nomi_giocatori!=NULL){
        if(strcmp(nomi_giocatori->name, cercato)==0)    return true;
        nomi_giocatori=nomi_giocatori->succ;
    }
    return false;
}

int creazione_nomi(tiponome &nomi_giocatori)
{
    tiponome n1=NULL;
    n1=new nome;
    int num_g;
    int ind=1; //corrisponde al nomi_giocatori->n
    int j=0, f=0; //utilizzati per comunicare errori all'utente

    //chiedo all'utente quanti giocatori partecipano
    do{
        if(f==0){
            cout<<"Inserire il numero dei giocatori (da 3 a 5):\t";
            f=1;
        }
        else cout<<"Numero inserito non valido. Riprovare:\t"; //messaggio di errore
        cin>>num_g;
    }while(num_g<3 || num_g>5);

    //nome g1
    inserimento_nomi(nomi_giocatori, n1, ind, j);
    fifo_nomi(nomi_giocatori, n1);

    ind++;
    tiponome n2=NULL;
    n2=new nome;

    //nome g2
    do{
        inserimento_nomi(nomi_giocatori, n2, ind, j);
        j=1;
    }while(diverso(nomi_giocatori, n2->name)); //il gioco non permette nomi uguali
    fifo_nomi(nomi_giocatori, n2);

    ind++;
    tiponome n3=NULL;
    n3=new nome;
    j=0;

    //nome g3
    do{
        inserimento_nomi(nomi_giocatori, n3, ind, j);
        j=1;
    }while(diverso(nomi_giocatori, n3->name));
    fifo_nomi(nomi_giocatori, n3);

    if(num_g>=4){
                            ind++;
                            tiponome n4=NULL;
                            n4=new nome;
                            j=0;

                            //nome g4
                            do{
                                inserimento_nomi(nomi_giocatori, n4, ind, j);
                                j=1;
                            }while(diverso(nomi_giocatori, n4->name));
                            fifo_nomi(nomi_giocatori, n4);

                            if(num_g==5){
                                            ind++;
                                            tiponome n5=NULL;
                                            n5=new nome;
                                            j=0;

                                            //nome g5
                                            do{
                                                inserimento_nomi(nomi_giocatori, n5, ind, j);
                                                j=1;
                                            }while(diverso(nomi_giocatori, n5->name));
                                            fifo_nomi(nomi_giocatori, n5);
                            }
    }

    return num_g; //cos� da saper facilmente il numero di giocatori
}

//////////////////////////////////////MOSTRA CARTA SCARTATA

//mostra l'ultima carta giocata
void mostra_carta_scartata(tipomazzo &mazzoscarti)
{

    tipomazzo app=NULL;
    app=mazzoscarti;
        switch(app->colore)
        {
            case 'R':
            case 'r':{
                        SetColor(204);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'G':
            case 'g':{
                        SetColor(238);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'V':
            case 'v':{
                        SetColor(170);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'B':
            case 'b':{
                        SetColor(153);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            default:{
                        SetColor(204);
                        cout<<" ";
                        SetColor(238);
                        cout<<" ";
                        SetColor(153);
                        cout<<" ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
        }
    cout<<endl;
         switch(app->colore)
        {
            case 'R':
            case 'r':{
                        SetColor(204);
                        cout<<" ";
                        SetColor(192);
                        switch(app->numero)
                        {
                            case 1:{
                                        cout<<"1";
                                        break;
                                    }
                            case 2:{
                                        cout<<"2";
                                        break;
                                    }
                            case 3:{
                                        cout<<"3";
                                        break;
                                    }
                            case 4:{
                                        cout<<"4";
                                        break;
                                    }
                            case 5:{
                                        cout<<"5";
                                        break;
                                    }
                            case 6:{
                                        cout<<"6";
                                        break;
                                    }
                            case 7:{
                                        cout<<"7";
                                        break;
                                    }
                            case 8:{
                                        cout<<"P";
                                        break;
                                    }
                            case 9:{
                                        cout<<"J";
                                        break;
                                    }
                        }
                        SetColor(204);
                        cout<<" ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'G':
            case 'g':{
                        SetColor(238);
                        cout<<" ";
                        SetColor(224);
                        switch(app->numero)
                        {
                            case 1:{
                                        cout<<"1";
                                        break;
                                    }
                            case 2:{
                                        cout<<"2";
                                        break;
                                    }
                            case 3:{
                                        cout<<"3";
                                        break;
                                    }
                            case 4:{
                                        cout<<"4";
                                        break;
                                    }
                            case 5:{
                                        cout<<"5";
                                        break;
                                    }
                            case 6:{
                                        cout<<"6";
                                        break;
                                    }
                            case 7:{
                                        cout<<"7";
                                        break;
                                    }
                            case 8:{
                                        cout<<"P";
                                        break;
                                    }
                            case 9:{
                                        cout<<"J";
                                        break;
                                    }
                        }
                        SetColor(238);
                        cout<<" ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'V':
            case 'v':{
                        SetColor(170);
                        cout<<" ";
                        SetColor(160);
                        switch(app->numero)
                        {
                            case 1:{
                                        cout<<"1";
                                        break;
                                    }
                            case 2:{
                                        cout<<"2";
                                        break;
                                    }
                            case 3:{
                                        cout<<"3";
                                        break;
                                    }
                            case 4:{
                                        cout<<"4";
                                        break;
                                    }
                            case 5:{
                                        cout<<"5";
                                        break;
                                    }
                            case 6:{
                                        cout<<"6";
                                        break;
                                    }
                            case 7:{
                                        cout<<"7";
                                        break;
                                    }
                            case 8:{
                                        cout<<"P";
                                        break;
                                    }
                            case 9:{
                                        cout<<"J";
                                        break;
                                    }
                        }
                        SetColor(170);
                        cout<<" ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'B':
            case 'b':{
                        SetColor(153);
                        cout<<" ";
                        SetColor(159);
                        switch(app->numero)
                        {
                            case 1:{
                                        cout<<"1";
                                        break;
                                    }
                            case 2:{
                                        cout<<"2";
                                        break;
                                    }
                            case 3:{
                                        cout<<"3";
                                        break;
                                    }
                            case 4:{
                                        cout<<"4";
                                        break;
                                    }
                            case 5:{
                                        cout<<"5";
                                        break;
                                    }
                            case 6:{
                                        cout<<"6";
                                        break;
                                    }
                            case 7:{
                                        cout<<"7";
                                        break;
                                    }
                            case 8:{
                                        cout<<"P";
                                        break;
                                    }
                            case 9:{
                                        cout<<"J";
                                        break;
                                    }
                        }
                        SetColor(153);
                        cout<<" ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            default:{
                        SetColor(170);
                        cout<<" ";
                        SetColor(240);
                        cout<<"J";
                        SetColor(204);
                        cout<<" ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
        }
    cout<<endl;

        switch(app->colore)
        {
            case 'R':
            case 'r':{
                        SetColor(204);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'G':
            case 'g':{
                        SetColor(238);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'V':
            case 'v':{
                        SetColor(170);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'B':
            case 'b':{
                        SetColor(153);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            default:{
                        SetColor(238);
                        cout<<" ";
                        SetColor(153);
                        cout<<" ";
                        SetColor(170);
                        cout<<" ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
        }

    cout<<endl<<endl;

}

/////////////////////////////////////TEST VUOTA (sui mazzi)

bool test_vuota_mazzo(tipomazzo lista)
{
    if(lista==NULL) return true;
    return false;
}

////////////////////////////////////MOSTRA MAZZO

void mostra_mazzo_giocatore(tipomazzo mazzo)
{
    //grazie ad un appoggio che passa carta per carta mostro al giocatore le sue carte in orizzontale, quindi le mando a video riga per riga
    tipomazzo app=mazzo;

    do{
        switch(app->colore)
        {
            case 'R':{
                        SetColor(204);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'G':{
                        SetColor(238);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'V':{
                        SetColor(170);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'B':{
                        SetColor(153);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            default:{
                        SetColor(204);
                        cout<<" ";
                        SetColor(238);
                        cout<<" ";
                        SetColor(153);
                        cout<<" ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
        }

        app=app->succ;
    }while(app!=NULL);
    cout<<endl;
    //alla fine del ciclo per ogni riga resetto app in modo che riparta dall'inizio della lista
    app=mazzo;

    do{
        switch(app->colore)
        {
            case 'R':{
                        SetColor(204);
                        cout<<" ";
                        SetColor(192);
                        switch(app->numero)
                        {
                            case 1:{
                                        cout<<"1";
                                        break;
                                    }
                            case 2:{
                                        cout<<"2";
                                        break;
                                    }
                            case 3:{
                                        cout<<"3";
                                        break;
                                    }
                            case 4:{
                                        cout<<"4";
                                        break;
                                    }
                            case 5:{
                                        cout<<"5";
                                        break;
                                    }
                            case 6:{
                                        cout<<"6";
                                        break;
                                    }
                            case 7:{
                                        cout<<"7";
                                        break;
                                    }
                            case 8:{
                                        cout<<"P";
                                        break;
                                    }
                            case 9:{
                                        cout<<"J";
                                        break;
                                    }
                        }
                        SetColor(204);
                        cout<<" ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'G':{
                        SetColor(238);
                        cout<<" ";
                        SetColor(224);
                        switch(app->numero)
                        {
                            case 1:{
                                        cout<<"1";
                                        break;
                                    }
                            case 2:{
                                        cout<<"2";
                                        break;
                                    }
                            case 3:{
                                        cout<<"3";
                                        break;
                                    }
                            case 4:{
                                        cout<<"4";
                                        break;
                                    }
                            case 5:{
                                        cout<<"5";
                                        break;
                                    }
                            case 6:{
                                        cout<<"6";
                                        break;
                                    }
                            case 7:{
                                        cout<<"7";
                                        break;
                                    }
                            case 8:{
                                        cout<<"P";
                                        break;
                                    }
                            case 9:{
                                        cout<<"J";
                                        break;
                                    }
                        }
                        SetColor(238);
                        cout<<" ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'V':{
                        SetColor(170);
                        cout<<" ";
                        SetColor(160);
                        switch(app->numero)
                        {
                            case 1:{
                                        cout<<"1";
                                        break;
                                    }
                            case 2:{
                                        cout<<"2";
                                        break;
                                    }
                            case 3:{
                                        cout<<"3";
                                        break;
                                    }
                            case 4:{
                                        cout<<"4";
                                        break;
                                    }
                            case 5:{
                                        cout<<"5";
                                        break;
                                    }
                            case 6:{
                                        cout<<"6";
                                        break;
                                    }
                            case 7:{
                                        cout<<"7";
                                        break;
                                    }
                            case 8:{
                                        cout<<"P";
                                        break;
                                    }
                            case 9:{
                                        cout<<"J";
                                        break;
                                    }
                        }
                        SetColor(170);
                        cout<<" ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'B':{
                        SetColor(153);
                        cout<<" ";
                        SetColor(159);
                        switch(app->numero)
                        {
                            case 1:{
                                        cout<<"1";
                                        break;
                                    }
                            case 2:{
                                        cout<<"2";
                                        break;
                                    }
                            case 3:{
                                        cout<<"3";
                                        break;
                                    }
                            case 4:{
                                        cout<<"4";
                                        break;
                                    }
                            case 5:{
                                        cout<<"5";
                                        break;
                                    }
                            case 6:{
                                        cout<<"6";
                                        break;
                                    }
                            case 7:{
                                        cout<<"7";
                                        break;
                                    }
                            case 8:{
                                        cout<<"P";
                                        break;
                                    }
                            case 9:{
                                        cout<<"J";
                                        break;
                                    }
                        }
                        SetColor(153);
                        cout<<" ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            default:{
                        SetColor(170);
                        cout<<" ";
                        SetColor(240);
                        cout<<"J";
                        SetColor(204);
                        cout<<" ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
        }
        app=app->succ;
    }while(app!=NULL);
    cout<<endl;
    //alla fine del ciclo per ogni riga resetto app in modo che riparta dall'inizio della lista
    app=mazzo;

    do{
        switch(app->colore)
        {
            case 'R':{
                        SetColor(204);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'G':{
                        SetColor(238);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'V':{
                        SetColor(170);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            case 'B':{
                        SetColor(153);
                        cout<<"   ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
            default:{
                        SetColor(238);
                        cout<<" ";
                        SetColor(153);
                        cout<<" ";
                        SetColor(170);
                        cout<<" ";
                        SetColor(240);
                        cout<<"\t";
                        break;
                    }
        }

        app=app->succ;
    }while(app!=NULL);
    cout<<endl<<endl;

}

/////////////////////////////////////////

//trasformo il numero in char contenuto nella stringa in int
int converti_int(char ins)
{
    switch(ins)
    {
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
    }
}

///////////////////////////////////

tipomazzo ricerca(char *inserito, tipomazzo mazzo_giocatore)
{
    tipomazzo temp=mazzo_giocatore;

    int num=converti_int(inserito[0]);

    while(temp!=NULL && (temp->colore!=inserito[1] || temp->numero!=num))
    {
        temp=temp->succ;
    }
    return temp;
}

tipomazzo estrarre(char *inserito, tipomazzo &mazzo_giocatore)
{
    tipomazzo pos=ricerca(inserito, mazzo_giocatore);
    tipomazzo temp=mazzo_giocatore;

    if(temp==pos) mazzo_giocatore=mazzo_giocatore->succ;
    else{
        while(temp->succ!=pos)
        {
                temp=temp->succ;
        }
        temp->succ=pos->succ;
        }
   return pos;
}

//////////////////////////////////////////CAMBIARE COLORE JOLLY

void cambia_colore_jolly(tipomazzo &jolly)
{
    //se l'utente sceglie di giocare il jolly bisogna modificarne il colore
    char scelta;

    while(scelta!='r' && scelta!='g' && scelta!='v' && scelta!='b' && scelta!='R' && scelta!='G' && scelta!='V' && scelta!='B')
    {
        cout<<"Di che colore vuoi far diventare il jolly?"<<endl;
        cin>>scelta;
    }

    switch(scelta)
     {
        case 'r':{
                    scelta='R';
                    break;
                    }
        case 'g':{
                    scelta='G';
                    break;
                    }
        case 'v':{
                    scelta='V';
                    break;
                    }
        case 'b':{
                    scelta='B';
                    break;
                    }
     }

    jolly->colore=scelta;
}

/////////////////////////////////SCARTARE CARTA

void sposta (tipomazzo &a, tipomazzo &b)
{
    a->succ=b;
    b=a;
}

void scarta_carta(tipomazzo &mazzo_giocatore, char *inserito, tipomazzo &mazzo_scarti)
{
    //"elimino" da mazzo_giocatore la carta
    tipomazzo pos=estrarre(inserito, mazzo_giocatore);
    if(pos->numero==9){
                        cambia_colore_jolly(pos);
                        }
    //sposto la carta in mazzo_scarti
    sposta(pos, mazzo_scarti);

}

/////////////////////////PRIMA CARTA SCOPERTA

void lifo_1(tipomazzo mazzo_pesca, tipomazzo &mazzo)
{
    tipomazzo nuovo;
    nuovo=new nodo;

    //copio le info
    nuovo->colore=mazzo_pesca->colore;
    nuovo->numero=mazzo_pesca->numero;
    nuovo->indice=mazzo_pesca->indice;

    nuovo->succ=mazzo;
    mazzo=nuovo;
}


void prima_carta_scoperta(tipomazzo &mazzo_scarti, tipomazzo &mazzo_pesca)
{
    //copio il primo nodo del mazzo_pesca in mazzo_scarti
    cout<<"\n";
    lifo_1(mazzo_pesca, mazzo_scarti); //fifo perch� deve l'ultima inserita deve essere la prima visualizzata
    //"elimino" dal mazzo_pesca la prima carta
    mazzo_pesca=mazzo_pesca->succ;
}

/////////////////////////////////////RESTART

void reset_jolly (tipomazzo &mazzo_sc)
{
    //se si vuole continuare a giocare dopo che sono finite le carte da pescare, prima di spostare le carte scartate bisogna ri-impostare il colore del jolly a "non definito"
    tipomazzo app=mazzo_sc;

    do{
        if(app->numero==9){
                            app->colore='?';
                        }
        app=app->succ;
    }while(app!=NULL);

}

void reset_mazzo_scarti(tipomazzo &mazzo_sca, tipomazzo &mazzo_pescare)
{
    //estraggo un numero casuale, individuo la carta con quell'indice e la sposto nel mazzo pesca
    int cerc;
    cerc=caso(36);

    tipomazzo trovato=estrai(cerc, mazzo_sca);

    if(trovato==NULL){
                        //se la carta con quell'indice non � presente (perch� gi� estratta) richiamo la procedura in modo che il processo avvenga nuovamente, ma con un altro numero
                        reset_mazzo_scarti(mazzo_sca,mazzo_pescare);
                    }
    else{
            trovato->succ=mazzo_pescare;
            mazzo_pescare=trovato;
        }
}

void reset_mazzo_pesca(tipomazzo &mazzo_scarti, tipomazzo &mazzo_pesca)
{
    //spostando semplicemente il mazzo_scarti nel mazzo_pesca le carte sarebbero nell'ordine in cui sono state scartate, quindi le estraggo in modo casuale per poi riposizionarle nel mazzo_pesca
    do{
        reset_mazzo_scarti(mazzo_scarti, mazzo_pesca);
    }while(mazzo_scarti!=NULL);
}

void restart (tipomazzo &mazzo_pesca, tipomazzo &mazzo_scarti, bool &continua)
{
    char sc; //scelta utente

    do{
        cout<<"Il mazzo da cui peschi e' ora vuoto. Vuoi continuare a giocare mischiando le carte giocate? Inserire 's'=si, 'n'=no"<<endl;
        cin>>sc;
    }while(sc!='s' && sc!='S' && sc!='n' && sc!='N'); //controlli

    if(sc=='s' || sc=='S'){
                            tipomazzo app=mazzo_scarti;
                            app=app->succ;

                            reset_jolly(app);
                            reset_mazzo_pesca(app, mazzo_pesca);
                        }
    else{
        system("cls");
        cout<<"Il gioco e' finito in parita'.\n";
        continua=false;
    }
}

////////////////////////////////CONTROLLI SULLA CARTA INSERITA

//controllo la lunghezza della stringa. Tnendo conto dei jolly
bool lunghezza(char *inserito)
{
    if(strlen(inserito)==1 && inserito[0]=='J')return true;
    if(strlen(inserito)==2) return true;
    return false;
}

//inverti i due caratteri della stringa ( da R9 a 9R)
void inverti_coppia(char *inserito)
{
    char app;

    app=inserito[0];
    inserito[0]=inserito[1];
    inserito[1]=app;
}

//controllo che il contenuto della stringa corrisponde a una carta UNO
bool contenuto(char *&inserito)
{
    //pesca
    if(inserito[0]=='P'){
        if(inserito[1]=='R' || inserito[1]=='V' || inserito[1]=='B' || inserito[1]=='G') return true;
        return false;
    }
    if(inserito[1]=='P'){
        if(inserito[0]=='R' || inserito[0]=='V' || inserito[0]=='B' || inserito[0]=='G'){
                                                                                            inverti_coppia(inserito);
                                                                                            return true;
                                                                                        }
        return false;
    }

    if(inserito[0]=='J'){
        if(inserito[1]=='\0') return true;
        return false;
    }

    if(inserito[0]=='1' || inserito[0]=='2' || inserito[0]=='3' || inserito[0]=='4' || inserito[0]=='5' || inserito[0]=='6' || inserito[0]=='7'){
        if(inserito[1]=='R' || inserito[1]=='V' || inserito[1]=='B' || inserito[1]=='G') return true;
        return false;
    }
    if(inserito[1]=='1' || inserito[1]=='2' || inserito[1]=='3' || inserito[1]=='4' || inserito[1]=='5' || inserito[1]=='6' || inserito[1]=='7'){
        if(inserito[0]=='R' || inserito[0]=='V' || inserito[0]=='B' || inserito[0]=='G'){
                                                                                            inverti_coppia(inserito);
                                                                                            return true;
                                                                                        }
        return false;
    }

    return false;
}

//controllo se la carta inserita � presente nel mazzo del giocatore
bool presente_mazzo(tipomazzo mazzo_giocatore, char *inserito)
{
    tipomazzo app=mazzo_giocatore;

    //trasformo il jolly e il pesca in modo tale che corrispondano alle carte generate
    if(inserito[0]=='J'){
        inserito[0]='9';
        inserito[1]='?';
        inserito[2]='\0';
    }
    else if(inserito[0]=='P'){
        inserito[0]='8';
    }

    int num=converti_int(inserito[0]);

    while(app!=NULL && (app->colore!=inserito[1] || app->numero!=num)){
        app=app->succ;
    }

    if(app!=NULL) return true;
    return false;
}

//controllo se puo' essere calata
bool compatibile(char *inserito, tipomazzo mazzo_scarti)
{
    int num=converti_int(inserito[0]);

    //modifico il pesca
    if(inserito[0]=='P'){
        inserito[0]='8';
    }

    //jolly va sempre bene
    if(inserito[0]=='9') return true;
    //controllo che il colore o il numero sia uguale
    if(inserito[1]==mazzo_scarti->colore || num==mazzo_scarti->numero) return true;
    return false;
}

void gioca_carta(tipomazzo &mazzo_giocatore, tipomazzo &mazzo_scarti)
{
    char *inserito;
    inserito=new char;

    int i=0, f=0;

    do{
        if(f==1){
                    cout<<"La carta inserita non puo' essere calata.\n";
        }

        do{
            if(i==0) cout<<"\nInserire carta da giocare ('j' per il jolly, 'p' e il colore per il pesca):\t";
            else cout<<"La carta inserita non e' valida. Riprovare:\t";
            fflush(stdin);
            gets(inserito);

            //trasformo quello che ha inserito in maiuscole
            trasforma_nome(inserito);
            i=1;
        }while(lunghezza(inserito)==false || contenuto(inserito)==false || presente_mazzo(mazzo_giocatore, inserito)==false);

        i=0;
        f=1;
    }while(compatibile(inserito, mazzo_scarti)==false);

    scarta_carta(mazzo_giocatore, inserito, mazzo_scarti);

}

///////////////////////////////////controlla se pu� GIOCARE o e' obbligato a PESCARE

bool gioca_pesca(tipomazzo mazzo_scarti, tipomazzo mazzo_giocatore)
{
    tipomazzo app=mazzo_giocatore;

    while(app!=NULL && (app->colore!=mazzo_scarti->colore && app->numero!=mazzo_scarti->numero && app->numero!=9))
    {
        app=app->succ;
    }

    if(app!=NULL) return true;
    return false;
}

///////////////////////////////////SCARTA CARTA/PESCARE

void scarta_carta_corta(tipomazzo &mazzo_giocatore, tipomazzo &mazzo_scarti)
{
    //"sposto" la prima carta di mazzo_g in mazzo_scarti
    lifo_1(mazzo_giocatore, mazzo_scarti);
    //modifico mazzo_g
    mazzo_giocatore=mazzo_giocatore->succ;
    //mostra mazzo_g
    mostra_mazzo_giocatore(mazzo_giocatore);
}

void pescare(tipomazzo &mazzo_giocatore, tipomazzo &mazzo_pesca, tipomazzo &mazzo_scarti, int &uno)
{
    cout<<"Non puoi giocare nessuna carta. Devi pescare:\n\n";

    //"sposto" la prima carta del mazzo_pesca in mazzo_giocatore
    lifo_1(mazzo_pesca, mazzo_giocatore);
    //modifico il pesca
    mazzo_pesca=mazzo_pesca->succ;
    //mostra mazzo
    mostra_mazzo_giocatore(mazzo_giocatore);
    //controllo se pu� essere giocata
    if(mazzo_giocatore->colore==mazzo_scarti->colore || mazzo_giocatore->numero==mazzo_scarti->numero || mazzo_giocatore->numero==9){
        cout<<"\nPuoi giocare la carta pescata!\n\n";

        scarta_carta_corta(mazzo_giocatore, mazzo_scarti);

        if(mazzo_scarti->numero==8) uno=0; //necessario per il pesca
        if(mazzo_scarti->numero==9) cambia_colore_jolly(mazzo_scarti);
    }
}

///////////////////////////////////CARTA PESCA

void pesca(tipomazzo &mazzo_pesca, tipomazzo &mazzo_giocatore, tipomazzo &mazzo_scarti, bool &continua)
{
    //1a carta

    //"sposto" la prima carta del mazzo_pesca in mazzo_giocatore
    lifo_1(mazzo_pesca, mazzo_giocatore);
    //modifico il pesca
    mazzo_pesca=mazzo_pesca->succ;

    //controllo se il mazzo da cui si pesca e' finito
    if(test_vuota_mazzo(mazzo_pesca)) restart(mazzo_pesca, mazzo_scarti, continua);

    //2a carta

    //"sposto" la prima carta del mazzo_pesca in mazzo_giocatore
    lifo_1(mazzo_pesca, mazzo_giocatore);
    //modifico il pesca
    mazzo_pesca=mazzo_pesca->succ;
}

void carta_pesca(tipomazzo &mazzo_giocatore,tipomazzo &mazzo_pesca,tipomazzo &mazzo_scarti,bool &continua)
{
    pesca(mazzo_pesca, mazzo_giocatore, mazzo_scarti, continua);

    cout<<"\nIl giocatore precedente ha giocato una carta 'Pesca'! Devi pescare due carte e saltare il turno.\n\n";

    //mostra mazzo
    mostra_mazzo_giocatore(mazzo_giocatore);

}

//////////////////////////////PRIMA CARTA

void prima_carta(tipomazzo &mazzo_scarti, tipomazzo &mazzo_pesca)
{
    do{
        if(test_vuota_mazzo(mazzo_scarti)==false) cout<<"\nLa carta pescata non e' numerata, quindi ne va pescata un'altra:\n";

        prima_carta_scoperta(mazzo_scarti, mazzo_pesca);

        tipomazzo app;
        app=mazzo_scarti;
        app->succ=NULL;
        mostra_mazzo_giocatore(mazzo_scarti);

    }while(mazzo_scarti->numero==9 || mazzo_scarti->numero==8);
}

//////////////////////////////////////////////TURNO

//mpostro a chi tocca e chi non deve guardare
void turno (tiponome ap, tiponome nomi_giocatori, int num_g)
{
    tiponome app=ap;

    cout<<"\n\nTocca a "<<app->name<<". ";
        if(app->succ==NULL) app=nomi_giocatori;
        else app=app->succ;

    if(num_g>3){
                cout<<app->name<<", ";

                if(app->succ==NULL){app=nomi_giocatori;}
                else app=app->succ;

                if(num_g==4){
                                cout<<app->name<<" e ";

                                if(app->succ==NULL){app=nomi_giocatori;}
                                else app=app->succ;
                                cout<<app->name<<" non guardate! ";
                }
                else{
                        cout<<app->name<<", ";

                        if(app->succ==NULL){app=nomi_giocatori;}
                        else app=app->succ;
                        cout<<app->name<<" e ";

                        if(app->succ==NULL){app=nomi_giocatori;}
                        else app=app->succ;
                        cout<<app->name<<" non guardate! ";
                }
    }

    else {
        cout<<app->name<< " e ";

        if(app->succ==NULL){app=nomi_giocatori;}
        else app=app->succ;
        cout<<app->name<<" non guardate! ";
    }

    system("pause");
}

////////////////////////////////////CONTA CARTE

//conta le carte del mazzo
int conta_carte(tipomazzo mazzo)
{
    int cont=0;
    tipomazzo app=mazzo;

    while(app!=NULL)
    {
        cont++;
        app=app->succ;
    }

    return cont;
}

//"invia" diversi mazzi a seconda del numero associato al nome
int numero_carte(tiponome app,tipomazzo mazzo_giocatore1,tipomazzo mazzo_giocatore2,tipomazzo mazzo_giocatore3,tipomazzo mazzo_giocatore4,tipomazzo mazzo_giocatore5)
{
    switch (app->n)
    {
        case 1: return conta_carte(mazzo_giocatore1);
        case 2: return conta_carte(mazzo_giocatore2);
        case 3: return conta_carte(mazzo_giocatore3);
        case 4: return conta_carte(mazzo_giocatore4);
        case 5: return conta_carte(mazzo_giocatore5);
    }
}

//mostra il numero delle carte degli avversari
void conto_avversari(tipomazzo mazzo_giocatore1,tipomazzo mazzo_giocatore2,tipomazzo mazzo_giocatore3,tipomazzo mazzo_giocatore4,tipomazzo mazzo_giocatore5,tiponome nomi_giocatori,tiponome primo)
{
    tiponome app=primo;
    if(app->succ==NULL){app=nomi_giocatori;}
    else app=app->succ;

    cout<<"CARTE DEGLI AVVERSARI\n";
    do{
        cout<<"Numero carte di "<< app->name<<":\t";
        if(numero_carte(app, mazzo_giocatore1, mazzo_giocatore2, mazzo_giocatore3, mazzo_giocatore4, mazzo_giocatore5)==1){ SetColor(252);cout<<numero_carte(app, mazzo_giocatore1, mazzo_giocatore2, mazzo_giocatore3, mazzo_giocatore4, mazzo_giocatore5)<<endl; SetColor(240);}
        else cout<<numero_carte(app, mazzo_giocatore1, mazzo_giocatore2, mazzo_giocatore3, mazzo_giocatore4, mazzo_giocatore5)<<endl;

        //porto al nome successivo
        if(app->succ==NULL){app=nomi_giocatori;}
        else app=app->succ;
    }while(app!=primo);  //finche "fa un giro" completo dei nomi
}

/////////////////////////////////CICLO di GIOCO

void case_uni(tipomazzo &mazzo_giocatore, tipomazzo &mazzo_scarti, tipomazzo &mazzo_pesca, bool &continua, int &uno, tiponome app)
{
    bool g_p;

    cout<<"\nMAZZO DI "<<app->name<<":\n\n";
    //mostro mazzo
    mostra_mazzo_giocatore(mazzo_giocatore);

    //controllo se l'ultima carta giocata era un pesca
    if(mazzo_scarti->numero==8 && uno==0){
                                    carta_pesca(mazzo_giocatore, mazzo_pesca, mazzo_scarti, continua);
                                    uno=1;
    }
    else{
            //stabilisco se puo' giocare o no
            g_p=gioca_pesca(mazzo_scarti, mazzo_giocatore);
            //se si
            if(g_p==true){
                            //chiedo la carta e la metto gi�
                            gioca_carta(mazzo_giocatore, mazzo_scarti);
                            cout<<endl;

                            //mostro la carta appena giocata
                            mostra_carta_scartata(mazzo_scarti);

                            if(mazzo_scarti->numero==8) uno=0; //necessario per il pesca

                            //controllo se ha vinto
                            if(test_vuota_mazzo(mazzo_giocatore)){
                                                                //comunico la vittoria
                                                                system("cls");
                                                                vittoria();

                                                                cout<<endl<<endl;
                                                                system("pause");
                                                                system("cls");

                                                                continua=false;
                            }
            }
            //se no
            else{
                //pesco
                pescare(mazzo_giocatore, mazzo_pesca, mazzo_scarti, uno);
            }
    }
    //controllo se il mazzo da cui si pesca e' finito
    if(test_vuota_mazzo(mazzo_pesca)) restart(mazzo_pesca, mazzo_scarti, continua);
}

void gioco(tiponome nomi_giocatori, tipomazzo mazzo_giocatore1, tipomazzo mazzo_giocatore2, tipomazzo mazzo_giocatore3, tipomazzo mazzo_pesca, tipomazzo mazzo_scarti, tipomazzo mazzo_totale)
{
    system("cls");

    //creazione dei nomi giocatori
    cout<<"CREAZIONE NOMI GIOCATORI\n\n";
    int num_g=creazione_nomi(nomi_giocatori); //torna il numero dei giocatori

    //generazione mazzi
    generare_mazzi(mazzo_giocatore1, mazzo_giocatore2, mazzo_giocatore3, mazzo_giocatore4, mazzo_giocatore5, mazzo_pesca, mazzo_totale, num_g);

    //mostro nuovamente i nomi inseriti e spiego il giro
    tiponome app=nomi_giocatori;
    turno(app, nomi_giocatori, num_g);

    system("cls");

    //sposto e mostro la prima carta
    cout<<"PRIMA CARTA\n";
    prima_carta(mazzo_scarti, mazzo_pesca);

    //ciclo
    int cont=0, uno=0;
    bool continua=true;

    do{
        //mostro il numero delle carte degli avversari
        conto_avversari(mazzo_giocatore1, mazzo_giocatore2, mazzo_giocatore3, mazzo_giocatore4, mazzo_giocatore5, nomi_giocatori, app);

        //mostro l'ultima carta giocata
        if(cont==1){ //se � il primo turno non serve
            cout<<"\nCARTA PRECEDENTE:\n\n";
            mostra_carta_scartata(mazzo_scarti);
        }
        cont=1;

        //case in base al numero dei giocatore, contenuto assieme al suo nome
        switch (app->n)
        {
           case 1: case_uni(mazzo_giocatore1, mazzo_scarti, mazzo_pesca, continua, uno, app); break;

           case 2: case_uni(mazzo_giocatore2, mazzo_scarti, mazzo_pesca, continua, uno, app); break;

           case 3: case_uni(mazzo_giocatore3, mazzo_scarti, mazzo_pesca, continua, uno, app); break;

           case 4: case_uni(mazzo_giocatore4, mazzo_scarti, mazzo_pesca, continua, uno, app); break;

           case 5: case_uni(mazzo_giocatore5, mazzo_scarti, mazzo_pesca, continua, uno, app); break;
        }

        //"sposto in avanti" la lista dei nomi
        if(continua==true){
                            if(app->succ==NULL) app=nomi_giocatori; //se e' in fondo la ri-inizializzo
                            else app=app->succ;

                            turno(app, nomi_giocatori, num_g); //mostro a chi tocca
                            system("cls");
                        }
    }while(continua);
}
/////////////////////////////////MAIN


void scegli(int &scelta)
{
     cout<<"Benvenuti a ";
     SetColor(249); cout<<"U";
     SetColor(252); cout<<"N";
     SetColor(242); cout<<"O";
     SetColor(243); cout<<"!";
     SetColor(240);
     cout<<" Inserire:\n\t";
     cout<<" ";
     SetColor(249); cout<<"- '1'"; SetColor(240); cout<<" per iniziare una partita;\n\t ";
     SetColor(252); cout<<"- '2'"; SetColor(240); cout<<" per visualizzare le regole;\n\t ";
     SetColor(242); cout<<"- '0'"; SetColor(240); cout<<" per uscire dal gioco.\n";
     cin>>scelta;
}
int main()
{

    //fondamentale nella generazione dei mazzi
    randomize;

    //sfondo
    system("color f0");

    //titolo
    titolo();
    cout<<endl<<endl<<endl;
    system("pause");
    system("cls");

    //menu'
    int scelta;

    do{
         scegli(scelta);

        switch (scelta)
        {
            case 1: gioco(nomi_giocatori, mazzo_giocatore1, mazzo_giocatore2, mazzo_giocatore3, mazzo_pesca, mazzo_scarti, mazzo_totale); break;
            case 2: regole(); break;
            case 0: cout<<"\nGrazie e arrivederci!\n\n"; break;
            default: cout<<"\nIl carattere inserito non corrisponde a nessuna funzione. Riprovare:\n";
        }
    }while(scelta!=0);

    system("pause");
}
