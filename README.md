# MapOfTasks

## Informazioni sul progetto

- Formazione:

Algoritmi e Strutture Dati, SUPSI DTI 

- Studenti:

Alessi Gabriele, Bohrer Orlando

- Docenti:

Salani Matteo, Chiarabini Luca

- Deadlines:

Lunedì 19.12.2022 - Presentazione del progetto

Venerdì 20.01.2023 - Consegna documentazione e codice sorgente

## Analisi del problema

Viene fornita una mappa di dimensioni (N+1) x 2 di numeri interi rappresentante un albero di esercizi.
I primi due numeri rappresentano il totale di nodi dell’albero (N) e quanti nodi possono venire eliminati (C).
I restanti numeri, sempre in coppie di due, rappresentano i singoli nodi dell’albero e vengono numerati da 0 a N-1, in relazione alla riga della mappa in cui sono scritti, escludendo la prima che contiene le informazioni N e C. 
Il primo valore rappresenta la posizione del nodo da risolvere prima di poter eseguire l’esercizio corrente. Il nodo di partenza ha valore -1, mentre gli altri hanno un valore compreso fra 0 e N. Il secondo valore rappresenta il numero di ore richieste per completare l’esercizio e passare al successivo.
Nodi che appartengo a cammini diversi possono venire risolti in contemporanea.
Lo scopo dell’esercizio è di ottenere il tempo di risoluzione minimo degli esercizi.


## Progettazione

Prima di iniziare con lo sviluppo della soluzione è importante creare diagrammi e pseudocodici in modo da avere una visualizzazione iniziale delle proprie idee.

### Flowchart

In questo caso viene sviluppato innanzitutto un diagramma di flusso per capire come si comporta l'algoritmo in base alle diverse situazioni.

![flowchart](Progettazione/flowchart.png)

Il programma parte facendo una "scansione" dei dati ricevuti in input da parte dell'utente in modo da costruire in seguito la matrice di adiacenza del grafo.
\
Dopodiché si cerca di individuare i nodi foglia (gli ultimi compiti assegnati dal docente) per poi calcolare i rispettivi cammini per arrivare alla radice.
\
Quindi viene preso in considerazione il cammino di carico maggiore perché da questo verranno annullati i nodi più pesanti, così da calcolare infine il peso del grafo semplificato.

### Pseudocodice

Lo pseudocodice permette di avere una prima soluzione del problema senza dover scrivere effettivamente il codice sorgente. Questa versione semplificata serve per stendere l'algoritmo passo dopo passo e avere una visione generale delle funzioni che risolvono ogni piccola task.

Gli pseudocodici sviluppati si trovano in questo [link](Progettazione/pseudo.md)

## Implementazione



## Test

## Conclusioni

