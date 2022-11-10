# GraphisoftITechChallenge2022
## Dobolás
### Feladat

Pistikének teljesült régi vágya, kapott szülinapjára egy dobot, végre megtanulhat dobolni! A dobolás úgy zajlik, hogy elindítja a metronómot, ami egyenletes ütemben kattog, és minden kattanásra vagy megüti a dobot, vagy nem. Két kattanás közötti időintervallumot tekintünk egy időegységnek. Egy ritmus úgy néz ki, hogy egy N időegységből álló minta ismétlődik végtelenségig. Egy N hosszú mintát N hosszú szöveggel ábrázolunk, úgy, hogy az 1-es jelenti a leütést, a 0 a kihagyást. Pl. N=2 esetén így nézhet ki egy minta: 01, az ehhez tartozó végtelen ritmus a következő: ...010101010101... Mivel hosszú dobolás során a minták összefolynak, nem tudjuk hol van a periódus eleje, és hol a vége, ezért az 10 minta is ugyanezt a ritmust írja le, mint a 01. Segítsetek Pistikének és mondjátok meg, hogy hány olyan ritmust lehet eldobolni, ami N hosszúságú periódust tartalmaz. Mivel ez a szám nagyon nagy lehet, az eredményt moduló 1000000007 szerint kérjük kiírni.
### Bemenet

A bemenet egyetlen számot tartalmaz: N - a periódus hossza.
### Kimenet

Az N hosszú rimusokból álló periódusok száma.
###Korlátok:
```
1 <= N <= 10^16
```
Futásidő: max 6 mp / teszteset

Memória: max 256 MB / teszteset
### Pontozás:

Minden egyes teszteset helyes megoldása 1 pontot ér. Összesen 100 teszteset van, így maximálisan 100 pont kapható a feladatra.

10 tesztest van, ahol N <= 30

További 10 eset, ahol N <= 1000

További 20 eset, ahol N <= 1000000

További 20 eset, ahol N <= 10^12

További 40 eset, az eredeti korlátokkal.
### Példák
#### Példa 1:

Bemenet
```
2
```
Kimenet
```
3
```
Megjegyzés: ...01010101... ...00000000... és ...11111111...

#### Példa 2:

Bemenet
```
4
```
Kimenet
```
6
```
#### Példa 3:

Bemenet
```
24
```
Kimenet
```
699252
```
