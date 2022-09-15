
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <limits.h>
#include <iomanip>

using namespace std;
struct struct_libri{
  string titolo;
  string autore;
  string argomento;
};
void es1();
void es2();
void es3();
void es4();
void es5();
void es17();
void es32();
void es55();
void es33();
void es75();

void bubble_sort(struct_libri Elenco[], int NLibri);
int CalcolaGiorno(int annoDaStampare);
int main()
{
    int scelta;
    do {
      cout<<endl;
      cout<<"1.Restituisce i valori inseriti nel vettore."<<endl;
      cout<<"2.Restituisce la posizione dei valori."<<endl;
      cout<<"3.Stampa la somma degli elementi."<<endl;
      cout<<"4.Determina se un numero è pari o dispari."<<endl;
      cout<<"5.Fa la somma dei numeri fino al primo 0."<<endl;
      cout<<"17.Calcola la frequenza di una lettera."<< endl;
      cout<<"32.Trova il massimo e lo sostituisce con 0."<<endl;
      cout<<"55.Stampa libri in ordine alfabetico." << endl;
      cout<<"33.Stampa calendario"<<endl;
      cout<<"75.Frequenza massima"<<endl;
      cout << "0. Fine!" << endl;
        cin >> scelta;
        switch (scelta) {
            case 0:
                cout << "good bye" << endl;
                break;
            case 1:
                es1();
                break;
            case 2:
                es2();
                break;
            case 3:
                es3();
                break;
            case 4:
                es4();
                break;
            case 5:
                es5();
                break;
            case 17:
                 es17();
                break;
            case 32:
                es32();
                break;
            case 55:
              es55();
              break;
            case 33:
              es33();
              break;
            case 75:
              es75();
              break;
            default:
              cout << "wrong chioce" << endl;
              break;

        }
        if(scelta != 0){
        string carattere;
        cout << "\nscrivi un carattere e digita invio" << endl;
        cin >> carattere;
      }
    } while (scelta != 0);

    return 0;
}
void es1(){
  cout<<"Caricare un vettore di N elementi con valori letti da tastiera"<<endl;
  cout<<endl;
  int N;
  cout<<"Quanti numeri vuoi inserire?"<<endl;
  cin>>N;
int vettore [N];
cout<<"Inserisci numeri"<<endl;
for (int i=0; i<N;i++){
  cin>>vettore[i];
}
cout<<endl;
cout<<"All' interno dell vettore ci sono: "<<endl;
for (int i=0; i<N;i++){
  cout<<" "<<vettore[i];
}
}
void es2(){
  cout<<"Costruire un vettore di N elementi, inserendo in ogni elemento il valore del suo indice."<<endl;
  cout<<endl;
  int N=51;
  int vettore[N];
  for (int i = 0;i<=N;i++) {
    vettore[i]=i;
  }
  for (int i = 0;i<N;i++) {
        cout<<vettore[i]<<" ";
  }
}
void es3(){
  cout<<"Caricare un vettore di N elementi, stampando la           somma dei suoi elementi."<<endl;
  cout<<endl;
  int N=5;
  int somma=0;
  int vettore[N];
  for (int i = 0;i<N;i++) {
    vettore[i]=rand() % 99+1;
  }
  for (int i=0; i<N; i++) {
      somma=somma+vettore[i];
  }
  cout<<" la somma è: "<<somma<<endl;
  cout<<"I valori sommati sono: "<<endl;
  for (int i = 0;i<N;i++) {
      cout<< vettore[i]<<" ";
  }
}
void es4(){
cout<<"Dato un vettore di N elementi, determinare se ciascun elemento e' pari o dispari(ovviamente gli elementi sono numeri interi) (l output sara l elenco degli elementi del vettore con a fianco la scritta pari o dispari)."<<endl;
cout<<endl;
int N=5;
int vettore[N];
string risposta;
    for(int i=0; i<N;i++){
      vettore[i]=rand()%99+1;    
    }
    for(int i = 0; i<N; i++){
       if (vettore[i]%2==0){
        cout<<"\nIl valore "<<vettore[i]<<" è pari";
    }
        if (vettore[i]%2!=0){
        cout<<"\nIl valore "<<vettore[i]<<" è dispari";
        }
    } 
}
void es5(){
  cout<<"Caricare un vettore di N elementi. Scorrendo il vettore, al primo zero incontrato stampare la somma di tutti gli elementi considerati e il loro numero"<<endl;
  int N=50;
  int vettore[N];
  int somma=0;
  int i=0;
  for(i=0;i<N;i++){
      vettore[i]=rand()%10;
      cout<<vettore[i]<<" ";
  }
  cout << endl;
  i=0;
  while(vettore[i]!= 0 ){
  somma=somma+vettore[i];
  i++;
  }
cout<<"La somma dei numeri dopo il primo 0 è "<<somma<<endl;
cout<<"La quantià di valori sommati è "<<i<<endl;
}


void es17(){
cout<<"Data una stringa di N caratteri alfabetici caricati in un vettore, calcolare la frequenza di una lettera data in input(invece di dare la stringa in input dovete caricare le lettere nel vettore con la funzione rand. I codici ASCII delle lettere sono A=65, Z=90, a=97,z=122). Se cerco la 'A' dovrò contare anche la 'a'"<<endl;
cout<<endl;
int lunghezza=5;
char vettore[]={'a','B','c','d','e'};
char carattere;
int frequenza=0;
  for(int i=0;i<5;i++){
    cout<<vettore[i]<<" ";
  }
  cout<<endl;
cout<<"lettera"<<endl;
cin>>carattere;
for(int i=0;i<lunghezza;i++){
  
if(carattere<=122&&carattere>=97&&(carattere==vettore[i]||carattere-32==vettore[i])){
  frequenza++;

}else if(carattere<=90&&carattere>=65&&(carattere==vettore[i]||carattere+32==vettore[i])){
  frequenza++;
 } 
}
cout<<"la lettera compare "<<frequenza<<" volte"<<endl;
}
void es32(){
  cout<<"Dato un vettore di dimensione N trovare il massimo,       stamparne la posizione e sostituirlo con zero; trovare il        successivo massimo stamparne la posizione e sostituirlo con      zero, e così via fino a quando tutti gli elementi del vettore    risulteranno nulli (ad ogni giro sostituirò il massimo con       zero e visualizzerò il nuovo vettore aspettando Invio (od un     tasto qualunque) per continuare, se continuo quando tutti gli    elementi sono zero otterrò un messaggio non c'è più niente da    fare (ovviamente avrò un carattere/stringa speciale per          uscire)."<<endl;
  cout<<endl;
  int N=5;
  int vettore[N];
  int max = 1;
  int position = 0;

  for(int i = 0; i < N; i++){
    vettore[i] = rand () % 10 + 1;
    cout << vettore[i] << " ";
  }
  cout << endl;
  while(max!=0){
    max = 0;
    for(int j = 0; j < N; j++){
      if(vettore[j] > max){
        max = vettore[j];
        position = j; 
      }
    }
    vettore[position]=0;
    if(max){
      cout << "max: " << max << " pos: " << position << "\n";
      for(int i = 0; i < N; i++){
        cout << vettore[i] << " ";
      }
      cout <<endl;
    }
  }
}

void es55(){
cout<<"Dato un elenco di libri, formato da titolo, autore, argomento, stampare l'elenco alfabetico per autore dei volumi riguardanti un argomento dato in input. Caricare il vettore nel codice usando una struttura."<<endl;
cout<<endl;

struct_libri libri[4];
string titoli[] = {"Goldoni e il teatro del secondo Settecento","Tempo di seconda mano","Novellieri del Quattrocento a cura di","Teatro; tomo terzo","Aquilegia","In viaggio su una gamba sola","Zibaldone di pensieri; tomo secondo","Carducci e il tramonto del classicismo di","Ragazzo di vetro","Il campo di concentrazione","I sommersi e i salvati","Contro il colonialismo digitale","Il sergente nella neve; ritorno sul Don","La cognizione del dolore","Fondazione anno zero","Il mulino del Po vol. 1 ","Pianeta in prestito","Insciallah","L' ingegner fantasia","I pugnalatori","Memorie scritte da lui medesimo","Il canzoniere; manoscritto autografo  volume II","L' eleganza del riccio","Invito alla lettura di Natalia Ginzburg","Shining","Le invenzioni della notte","Invito alla lettura di Giuseppe Berto","Requiem","La chiave a stella","Le commedie di Dario Fo","Decameron","Il console onorario","Il segno dei quattro","Pazienza","Una nuvola d'ira","Cobra","Ma le stelle quante sono","Il ventaglio","La partita","Cyrano de Bergerac","La letteratura verso Hiroshima e altri scritti 1959 -1975","Parti in fretta e non tornare","Tutti i sonetti romaneschi 5","Caracreatura","Una storia semplice","L' onorevole scolaro","Pascoli: la 'rivoluzione inconsapevole'","Mottetti","Il Gattopardo","Terra!","Calamità naturali","L' uomo della sabbia","Donne nella vita di Stefano Premuda","Ingannare l'attesa","Il pendolo di Foucault","Teatro","La capanna di Calibano","La ragazza in nero","Palomar","Quando si è qualcuno, la favola del figlio, i giganti","Invito alla lettura di Cesare Pavese","I magnifici sette del giallo a cura di","Tutti i nostri ieri","Odissea","La doppia notte dei tigli","Golpitalia","Il divertimento","I Malavoglia","Parco del Ticino","La musica in testa","Ludovico Ariosto - Il tempo e l'opera a cura di","Economia canaglia","Il servitore di due padroni","Le mosche del capitale","La luce del giorno","Il silenzio del corpo","Canzoniere","Le origini e La Scuola siciliana","Primavera a Trieste","Rosemary's Baby","Ultime notizie dalla famiglia","Bàrnabo delle montagne ; Il segreto del bosco vecchio","Il Conde","Ulysses","Modelli matematici per l'ecologia","Lo strappo","Certi bambini","Il bell'Antonio","Ambiente Italia 1991 ","La gallina di Saba","L' attività letteraria in Italia","Il Gattopardo","Dal Manzoni ai decadenti","Poesie pratiche","Afrique Centrale et Madagascar","La disubbidienza","Nozze in cielo","La Divina Commedia con floppy disk","La traduzione","I ragazzi del Campiello "};

string autore[] = {"NICASTRO, Guido","SVETLANA, Aleksievic","VARESE, Claudio","METASTASIO, Pietro","CERONETTI, Guido","MULLER, Herta","LEOPARDI, Giacomo","CONTARINO Rosario, MONASTRA Rosa Maria","CERAMI, Vincenzo","OTTIERI, Ottiero","LEVI, Primo","CASATI, Roberto","RIGONI STERN, Mario","GADDA, Carlo Emilio","ASIMOV, Isaac","BACCHELLI, Riccardo","AGOSTINELLI Mario, RAMPI Franco, TRONCONI Attilio,VALOTA R.","FALLACI, Oriana","GADDA, Carlo Emilio","SCIASCIA, Leonardo","CASANOVA, Giacomo Giovanni","SABA, Umberto","BARBERY, Muriel","CLEMENTELLI, Elena","KING, Stephen","GLAVINIC, Thomas","LOMBARDI, Olga","TABUCCHI, Antonio","LEVI, Primo","FO, Dario","BOCCACCIO, Giovanni","GREENE, Graham","DOYLE, Arthur Conan","NAGHIBIN, Jurij","ARPINO, Giovanni","ROSSI, Vittorio G.","CARCASI, Giulia","GOLDONI, Carlo","ONGARO, Alberto","ROSTAND, Edmond","GIUDICI, Giovanni","VARGAS, Fred","BELLI, Giuseppe Gioachino","ROVEREDO, Pino","SCIASCIA, Leonardo","LE CARRÈ, John","DEBENEDETTI, Giacomo","MONTALE, Eugenio","TOMASI DI LAMPEDUSA, Giuseppe","BENNI, Stefano","MIGLIORINI, Paolo","HOFFMANN, Ernst Theodor Amadeus","STUPARICH, Giani","CASSIERI, Giuseppe","ECO, Umberto","DE ROBERTO, Federico","COSTA, Romano","BIANCHINI, Angela","CALVINO, Italo","PIRANDELLO, Luigi","TONDO, Michele","TEDESCHI, Alberto","GINZBURG, Natalia","CUSSLER, Clive","LEVI, Carlo","VASCON, Nino","OTTIERI, Ottiero","VERGA, Giovanni","BOGLIANI Giuseppe, PIGAZZINI Vittorio","ALLEVI, Giovanni","MUSSINI, Massimo","NAPOLEONI, Loretta","GOLDONI, Carlo","VOLPONI, Paolo","AMBLER, Eric","CERONETTI, Guido","PETRARCA, Francesco","PASQUINI Emilio, QUAGLIO Antonio Enzo","QUARANTOTTI GAMBINI, Pier Antonio","LEVIN, Ira","PENNAC, Daniel","BUZZATI, Dino","MAGRIS, Claudio","JOYCE, James","MARSILI - LIBELLI, Stefano","ROTEM, Judith","DE SILVA, Diego","BRANCATI, Vitaliano","MELANDRI Giovanna, CONTE Giulio","LAVAGETTO, Mario","PETRONIO, Giuseppe","TOMASI DI LAMPEDUSA, Giuseppe","ULIVI, Ferruccio","BALESTRINI, Nanni","SILVANI, Mario","MORAVIA, Alberto","ELIADE, Mircea","ALIGHIERI, Dante","CECCHERINI, Silvano","FABBRI A., BALDANZI S., COLAVERO L., ROSSI M., VENEZIA L."
};
  
string argomento [4] = {"narrativa","avventura","scientifico", "storico"};
  int N = 4;  
  string sceltaArgomento;
  cout<<"argomento"<<endl;
  cin>>sceltaArgomento;
  for(int i = 0; i < N; i++){
    libri[i].titolo = titoli[i];
    libri[i].autore = autore[i];
    libri[i].argomento = argomento[rand() % 4];
     
  }

  
bubble_sort(libri,N);
for(int i=0;i < N;i++ ){
   if(libri[i].argomento==sceltaArgomento){
      cout<<"titolo: "<<libri[i].titolo<<" ";
      cout<<"autore: "<<libri[i].autore<<" ";
      cout<<"argomento: "<<libri[i].argomento<<endl;
    }



}
}

void bubble_sort(struct_libri Elenco[], int NLibri){
int i,j;
  for(i=0;i<NLibri;i++){
      for(j=0;j<NLibri-1;j++){
        if(Elenco[j].autore > Elenco[j+1].autore){
            struct_libri tmp=Elenco[j];
            Elenco[j]=Elenco[i];
            Elenco[i]=tmp;
        }
      }

  }
  
}
void es33(){
  cout<<"Si vuole stampare un calendario per un anno (dato in    input) compreso tra il 1975 ed il 2030. Si sa che il primo       gennaio 1975 era mercoledi'. Inoltre si sa che gli anni          bisestil isono quelli divisibili per 4, ma non sono bisestili    quegli anni che sono divisibili per 100 enon per 400. Il dato    di ingresso e' un numero compreso tra 1975 e 2010. Il            calendario deve essere in forma tabellare"<<endl;
  cout<<endl;
  int casella[8] [7];
  int settimana=1;
  int giornoMese = 1;
  string nomemesi[13]={" ","Gennaio","Febbraio","Marzo","Aprile","Maggio","Giugno","Luglio","Agosto","Settembre","Ottobre","Novembre","Dicembre"};
  int anno;
  cout<<"Di che anno vuoi il calendario?"<<endl;
  cin>>anno;
  int giornoIniziale= CalcolaGiorno(anno);
  int giorniDelMese[13] ={0,31,28,31,30,31,30,31,31,30,31,30,31};
  if(anno % 400 == 0 || (anno % 4 == 0 && anno % 100 != 0)){
    giorniDelMese[2] = 29;
  }
  for (int m = 1; m < 13; m++){
    giornoMese = 1;
      cout << "\n| " << nomemesi[m] <<" " <<anno << "\n| D| L| M| M| G| V| S|" <<endl;
      for(int casella = 1; casella < giorniDelMese[m] + giornoIniziale; casella++){
            if (casella < giornoIniziale){
               cout << "|  ";
            }else{
               if(giornoMese < 10 ){
                  cout <<"| " << giornoMese;
               }else{
                  cout << "|" << giornoMese;
               }
               giornoMese++;
            }
            settimana++;
            if (settimana > 7){
               cout << "| \n";
               settimana = 1;
            }
      }
      if(settimana != 1){
        for (int i = settimana; i <= 8; i++){
          cout << "|  ";
        }
      }
      cout << endl << endl;
      giornoIniziale = settimana;
      settimana = 1;
   } 
  
}
int CalcolaGiorno(int annoDaStampare){
  int anniPassati=annoDaStampare - 1975;
  int anniBisestili=0;
  int anniNonBisestili = 0;
  int giorniPassati = 0;
  int primoGiorno;
  for(int i=0;i < anniPassati;i++){
    if((1975+i) % 4 == 0){
      anniBisestili++;
      if((1975+i) % 100 == 0 && ((1975+i) % 400 != 0)){
        anniBisestili--;
      }
    } 
  }
  anniNonBisestili = anniPassati - anniBisestili;
  giorniPassati = 365 * anniNonBisestili + 366 * anniBisestili;
  primoGiorno= giorniPassati % 7 + 4;
  return primoGiorno;
}
void es75(){
  cout << "\nCONSEGNA: \nDato un vettore di numeri interi (positivi e negativi) si vuole sapere qual e' la porzione di sequenza che rende massima la somma dei suoi elementi. \n" << endl;

  int N=10;
  int vettore[N];
  int somma;
  int sommaMassima=INT_MIN;
  int sommaMassima2=INT_MIN;
  int sequenza2, sequenza;


  for(int i=0; i < N; i++)  {
    vettore[i] = rand() % 50 - 50;
    cout << vettore[i] << " ";
  }

  cout << endl;

  for(int i = 0; i < N-1; i++){  
    somma=vettore[i];
    for(int j=i+1; j < N; j++)  {
    somma=somma+vettore[j];
      if(somma > sommaMassima){
        sommaMassima=somma;
        sequenza=i;
        sequenza2=j;
      }
      
    }
  }
  cout << "\nSomma massima: " << sommaMassima << endl;
  cout << "La sequenza viene creata dal " << sequenza+1 << "° valore al " << sequenza2+1 << "° valore" << endl;
}

