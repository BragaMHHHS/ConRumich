#include <iostream>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;
void es1();
void es2();
void es3();
void es4();
void es5();
void es22();
void es39();
void es43();
void es57();
void es71();

int main()
{
    int scelta;
      do {
          
          cout << "------------" << endl;
          cout << "1. Crea un vettore" << endl;
          cout << "2. Utilizza gli indici per creare un vettore" << endl;
          cout << "3. Crea un vettore e stampa la somma" << endl;
          cout << "4. Determina da un vettore gli elementi pari e dispari" << endl;
          cout << "5. Fai la somma di tutti i numeri che ci sono prima di uno 0 in un vettore ranom" << endl;
          cout << "22. Ouput delle decadi di N numeri random" << endl;
          cout << "39. Numeri pari e dispari con output dei restanti" << endl;
          cout << "43. Media di 31 temperature e output di quelle sopra essa" << endl;
          cout << "57. Gestisci i prodotti in un magazzino" << endl;
          cout << "71. Massimi e minimi relativi di 30 numeri" << endl;
          cout << "0. Fine!" << endl;
        cin >> scelta;
        if(cin.fail()){
      cout << "wrong number" << endl;
      cin.clear();
      scelta = -1;
    } else {
      switch(scelta){
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
        case 22:
          es22();
          break;
        case 39:
          es39();
          break;
        case 43:
          es43();
          break;
        case 57:
          es57();
        break;
        case 71:
          es71();
          break;
        default:
          cout << "wrong choice" << endl;
      }
    }
     if(scelta != 0){
        cout << "\nscrivi un carattere e digita invio" << endl;
        string avanti;
        cin >> avanti;
      }
  }while(scelta != 0);
return 0;
}


void es1(){
cout << "Caricare un vettore di N elementi con valori letti da tastiera." << endl;
  int contaValori=5;
  int valori[contaValori];
  cout << "Dovrai inserire " << contaValori << " valori" << endl;
    for (int i = 0; i < contaValori; i++){
      cout << "inserisci il " << (i+1) << "Â° valore" << endl;
      cin >> valori[i];
    }
    for ( int i = 0; i < contaValori; i++){
      cout << valori[i] << ", ";
    }
    cout << "\nfatto" << endl;
}

void es2(){
cout << "Costruire un vettore di N elementi, inserendo in ogni elemento il valore del suo indice." << endl;
 int contaValori;
 cout <<"Inserisci il numero di valori che vuoi avere: ";
 cin >> contaValori;

 int vettore[contaValori];
  for(int i = 0; i < contaValori; i++){
    vettore[i] = i;
    cout << vettore[i] << " ";
  }
}

void es3(){
cout << "Caricare un vettore di N elementi, stampando la somma dei suoi elementi." << endl;
  int contaValori;
  cout <<"Inserisci il numero di valori che vuoi avere: ";
  cin >> contaValori;
  int vettore[contaValori];
  int somma = 0;
    for(int i = 0; i < contaValori; i++){
      vettore[i]=rand() % 9 + 1;
      
    }
      for(int i = 0; i < contaValori; i++){
        somma = somma + vettore[i];
      }

        for(int i = 0; i < contaValori; i++){
          cout << vettore[i] << " ";
        }
    cout << "la somma e': " << somma << endl;
  
}

void es4(){
cout << "Dato un vettore di N elementi, determinare se ciascun elemento e' pari o dispari." << endl;
  int contaValori;
  cout <<"Inserisci il numero di valori che vuoi avere: ";
  cin >> contaValori;
  int vettore[contaValori];
    for (int i = 0; i < contaValori; i++){
      vettore[i] = rand() % 100 + 1;
    }
      for(int i = 0; i < contaValori; i++){
        if(vettore[i] % 2 == 0){
          cout << vettore[i] << " pari " << endl;
        }else if(vettore[i] % 2 != 0){
          cout << vettore[i] << " dispari " << endl;
        }
      }
}

void es5(){
  cout << "Caricare un vettore di N elementi. Scorrendo il vettore, al primo zero incontrato stampare la somma di tutti gli elementi considerati e il loro numero." << endl;
  int n = 100;
  int numbers[n];
  int somma = 0;
    for (int i = 0; i < n; i++){
      numbers[i] = rand() % 10;
    }
   
    numbers[rand () % n] = 0;

    for(int i = 0; i < n; i++){
      if(i != n - 1){
        cout << numbers[i] << ", ";
      }else
      cout << numbers[i] << ".";
    }
    cout << endl;
    int i;
    for(i = 0; numbers[i] != 0 ; i++){
      somma = somma + numbers[i];
    }
  cout << "Ci sono "<<i<<" elementi prima dello 0 e la loro somma e': " << somma << "." << endl;
}

void es22() {
    cout << "Dato un vettore di N numeri aventi al massimo 3 cifre, interi positivi, contare le frequenze con le quali i numeri si ripartiscono nelle decadi 0-9, 10-19, ...., 980-999 e memorizzare tali frequenze nel vettore DEC." << endl;
//  int n = 11;
//  int numeri[]={12,65,34,87,14,63,78,90,8,18,75};
  struct Counter {
    int id, nLow, nHigt, counter;
  };
  struct Giri {
      int id, nLow, nHigt, verifica, ripetizioni;
  };
  int n = 20;
  Giri DEC[100];
  int numeri[n] ;
  // genera numeri
  for (int i = 0; i < n; i++ ) {
    numeri[i] = rand() % 999;
      cout << numeri[i] << " ";
  }
  // conta i valori
  int arrayPosition;
  arrayPosition = 0;
  int z = 0;
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < 1000; i = i+10) {
        if (i == 0) {
          if (numeri[z] > i && numeri[z] < i+10 ){
          DEC[arrayPosition] = {k, i, i+9};
          arrayPosition = arrayPosition + 1;
          }
        } else if (numeri[z] > i-1 && numeri[z] < i+10 ){
          DEC[arrayPosition] = {k, i, i+9};
          arrayPosition = arrayPosition + 1;
        }
    }
    z = z + 1;
  }
    cout << endl;
    for ( int i = 0; i < n; i++){
        cout << DEC[i].id << " " << DEC[i].nLow << " " << DEC[i].nHigt << endl;
    }
    
  for (int i = 0; i < n; i++) {
    DEC[i].ripetizioni = 1;
  }

  for(int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        if(DEC[i].nLow == DEC[j].nLow && DEC[i].id != DEC[j].id){
            DEC[i].ripetizioni = DEC[i].ripetizioni + 1;
            DEC[j].nLow = 1000;
        }
    }
  }
    
    for (int i = 0; i < n; i++) {
        if (DEC[i].nLow != 1000){
            if (DEC[i].ripetizioni > 1){
                cout << DEC[i].nLow << " " << DEC[i].nHigt << " " << DEC[i].ripetizioni << endl;
            } else {
                cout << DEC[i].nLow << " " << DEC[i].nHigt << " " << DEC[i].ripetizioni << endl;
            }
        }
    }
}

void es39() {
    cout << "Dati due vettori di dimensione N contenenti numeri interi positivi costruire un vettore C contenente alternativamente un elemento dispari e uno pari (provenienti indifferentemente dai due vettori A e B). Procedere alla costruzione di C fino a quando uno dei due insiemi (pari o dispari) finisce. Visualizzare C e, se i due insiemi non hanno lo stesso numero di elementi, gli elementi rimasti." << endl;
    int n = 10;
    int A[10] = {};
    int B[10] = {};
    int pari[20] = {};
    int dispari[20] = {};
    int C[20] = {};
    int resto = 0, posPari = 0, posDispari = 0, posC = 0;
    for (int i = 0; i < n; i++){
       A[i] = rand() % 10 + 1;
       B[i] = rand() % 10 + 1;
    }
    cout << "A:\n";
    for (int i = 0; i < n; i++) {
      cout << A[i] << " ";
    }
    cout << endl;
    cout << "B:\n";
    for (int i = 0; i < n; i++) {
      cout << B[i] << " ";
    }
    for (int i = 0; i < n; i++) {
      if(A[i] % 2 == 0) {
            
            pari[posPari] = A[i];

            posPari = posPari + 1;
            
        } else {

            dispari[posDispari] = A[i];

            posDispari = posDispari + 1;

        }
        if(B[i] % 2 == 0) {
          
            pari[posPari] = B[i];

            posPari = posPari + 1;
          
        } else {
          
            dispari[posDispari] = B[i];

            posDispari = posDispari + 1;

        }
    }
    cout << endl;
  
    if ( posPari > posDispari ) {
        for (int i = 0; i < posDispari ; i++) {
            C[posC] = pari[i];
            posC = posC + 1;
            C[posC] = dispari[i];
            posC = posC + 1;
        }
    } else {
        for (int i = 0; i < posPari ; i++) {
            C[posC] = pari[i];
            posC = posC + 1;
            C[posC] = dispari[i];
            posC = posC + 1;
        }
    }
  
    cout << "pari:\n";
    for (int i = 0; i < posPari; i++) {
        cout << pari[i] << " ";
    }
    cout << endl;
    cout << "dispari:\n";
    for (int i = 0; i < posDispari; i++) {
        cout << dispari[i] << " ";
    }
    cout << endl;
    cout << endl;
    
    if ( posPari > posDispari ) {
        for (int i = 0; i < posDispari*2; i++) {
            cout << C[i] << " ";
            resto = i;
        }
        cout << "\nrestanti: " << endl;
        for (int i = resto/2 +1; i < posPari; i++) {
            cout << pari[i] << " ";
        }
    } else {
        for (int i = 0; i < posPari*2; i++) {
            cout << C[i] << " ";
            resto = i;
        }
        cout << "\nrestanti: " << endl;
        for (int i = resto/2 +1; i < posDispari; i++) {
            cout << dispari[i] << " ";
        }
    }
    
    
}

void es43() {
    cout << "Le temperature minime registrate nei giorni di un mese sono organizzate in un vettore. Calcolare la media delle temperature rilevate nel mese e stamparla. Si stampino poi i giorni del mese in cui le temperature sono state inferiori alla media mensile." << endl;
  float media = 0;
  int sommaTemperature = 0;
  int temperature[31];
  for (int i = 0; i < 32; i++) {
    temperature[i] =  rand () % 15 + 20;
    sommaTemperature = sommaTemperature + temperature[i];
  }
  media = sommaTemperature/31;
  for (int i = 1; i < 32; i++) {
    if ( temperature[i] < media ) {
      cout << temperature[i] << endl;
      cout << "giorno: " << i << endl;
    }
  }
  cout << "--------------" << endl;
  cout << "la media e': " << media << endl;
}

void es57() {
    cout << "Si hanno N schede di magazzino riportanti: codice, descrizione, giacenza, prezzo di acquisto, prezzo di vendita.\nLeggere i movimenti effettuati durante una giornata lavorativa e aggiornare le schede del magazzino.\nI movimenti di magazzino sono descritti da codice articolo e quantita' (se la quantita' e' positiva si tratta di un carico se invece e' negativa di uno scarico).\nSe un articolo non e' in magazzino, stampare il messaggio: 'ARTICOLO ..... NON IN MAGAZZINO'\nSe la giacenza e' zero, stampare il messaggio: 'ARTICOLO ..... CON GIACENZA A ZERO'.\nSe la quantita' disponibile e' inferiore a quella richiesta, stampare il messaggio:'ARTICOLO ..... Q/TA' ..... - quantita' non sufficiente-'.\nStampare la situazione di magazzino prima e dopo la movimentazione.\nStampare il valore della merce presa in carico e il valore della merce venduta (cioe' scaricata.)" << endl;
  struct Scheda {
    int codice, giacenza;
    float prezzoAcquisto, prezzoVendita;
    string descrizione;
  };
  struct Movimento {
    int codice, quantita;
  };
  struct outputMovimento {
    int codice, quantita, errore;
  };
    outputMovimento outputMovimenti [] = {
  
    };
    Scheda prodotti[] = {
    {
      1, 1, 4.5, 5.5, "Apple"
    },
    {
      2, 3, 4.5, 5.5, "Windows"
    },
    {
      3, 4, 4.5, 5.5, "Linux"
    }
    };
  
    Scheda prodottiIniziali[] = {
    {
      1, 1, 4.5, 5.5, "Apple"
    },
    {
      2, 3, 4.5, 5.5, "Windows"
    },
    {
      3, 4, 4.5, 5.5, "Linux"
    }
    };
  string continua = "si";
  int t = 0;
  Movimento movimento;
  do {
    int n = 3, verify = 0, aggiornato = 0, i = 0, counter = 0;
      float valoreCarico = 0, valoreScarico = 0;
    cout << "movimenti ?" << endl;
    cin >> continua;
  if (continua == "no") {
      cout << "\n";
      cout << "cod" << "  " << "name" << "  " << "qta" << "  " << "PA/PV" << endl;
      for (int i = 0; i < n; i++) {
        if (prodottiIniziali[i].giacenza > 0) {
          cout << prodottiIniziali[i].codice << "  " << prodottiIniziali[i].descrizione << "  " << prodottiIniziali[i].giacenza << "  " << prodottiIniziali[i].prezzoAcquisto << "/" << prodottiIniziali[i].prezzoVendita << endl;
        } else {
          cout << "ARTICOLO: " << prodottiIniziali[i].descrizione << " CON GIACENZA 0" << endl;
        }
      }
    cout << "\nmovimenti\n";
    for (int i = 0; i < t; i++) {
    cout << outputMovimenti[i].codice;
        if (outputMovimenti[i].errore == 3){
            cout << " Prodotto non trovato";
        } else {
            cout << "  " << outputMovimenti[i].quantita;
        }
        if (outputMovimenti[i].errore == 2){
         cout << " ARTICOLO: " << outputMovimenti[i].codice << " Q/TA: " << outputMovimenti[i].quantita << " - quantita' insufficente" << endl;
        } else {
            cout << "\n";
        }
  }
    cout << "\n";
      cout << "cod" << "  " << "name" << "  " << "qta" << endl;
      for (int i = 0; i < n; i++) {
          if (prodotti[i].giacenza > 0) {
            cout << prodotti[i].codice << "  " << prodotti[i].descrizione << "  " << prodotti[i].giacenza << endl;
          } else {
            cout << "ARTICOLO: " << prodotti[i].descrizione << " CON GIACENZA 0" << endl;
          }
      }
    cout << endl;
     for (int i = 0; i < n; i++) {
          if (prodotti[i].giacenza != prodottiIniziali[i].giacenza ) {
              if (prodotti[i].giacenza < prodottiIniziali[i].giacenza ) {
                counter = prodottiIniziali[i].giacenza - prodotti[i].giacenza;
                  valoreScarico = prodotti[i].prezzoVendita * counter;
                counter = 0;
              } else {
                counter = prodotti[i].giacenza - prodottiIniziali[i].giacenza;
                  valoreCarico = prodotti[i].prezzoAcquisto * counter;
                counter = 0;
              }
          }
      }
    if (valoreCarico != 0) {
      cout << "valore di carico " << " = " << valoreCarico << endl;
    }
    if (valoreScarico != 0) {
      cout << "valore di scarico " << " = " << valoreScarico << endl;
    }
    
  } else {
      cout << "scrivi il numero del prodotto " <<endl;
      cin >> movimento.codice;
    
      outputMovimenti[t].codice = movimento.codice;
    
      do {
        for (int i = 0; i < 3; i++) {
          if (movimento.codice == prodotti[i].codice) {
          verify = 1;
          cout << "scrivi la quantita' " <<endl;
            cin >> movimento.quantita;
            outputMovimenti[t].quantita = movimento.quantita;
            if (aggiornato == 0 ) {
            for (int q = 0; q < n; q++) {
              if (movimento.codice == prodotti[q].codice) {
                if (prodotti[q].giacenza + movimento.quantita < 0) {
                  outputMovimenti[t].errore = 2;
                  cout << "ARTICOLO: " << prodotti[q].descrizione << " Q/TA: " << prodotti[q].giacenza << " - quantita' insufficente -" << endl;

                } else {
                  prodotti[q].giacenza = prodotti[q].giacenza + movimento.quantita;
                  aggiornato = 1;
                }
              }
            }
          }
          if (aggiornato == 1) {
            cout << "Movimeto aggiornato !" << endl;
          }
        }
            
        }
        if (verify == 0) {
            outputMovimenti[t].errore = 3;
            cout << "Prodotto non trovato" << endl;
        }
        t = t + 1;
        verify = 1;
      } while (verify != 1);
    }
  } while (continua != "no");
}

void es71(){
    cout << "Leggere un vettore V di N interi e scrivere gli indici degli elementi di massimo o minimo relativo. Un elemento A(i) e' un massimo/minimo relativo quando il precedente A(i-1) e il successivo A(i+1) sono entrambi minori/maggiori di A[i]." << endl;
  int numeri[31];
  cout << endl;
  for (int i = 0; i < 31; i++) {
    numeri[i] =  rand () % 100 + 0;
    cout << numeri[i] << " ";
  }
  cout << endl;
  cout << endl;
  for (int i =1 ; i < 30; i++) {
    if (numeri[i] > numeri[i-1] && numeri[i] > numeri[i+1]) {
      cout << "L'elemento con indice " << i << " e' un massimo relativo" << endl;
    } else if (numeri[i] < numeri[i-1] && numeri[i] < numeri[i+1]) {
      cout << "L'elemento con indice " << i << " e' un minimo relativo" << endl;
    }
  }
}
