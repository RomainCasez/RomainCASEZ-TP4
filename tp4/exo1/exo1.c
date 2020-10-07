#include<stdio.h>
#include<stdlib.h>
#include"tp4.h"

main() {
	HEURE HeureDebut = { 12,30 };
	HEURE HeureFin;
	HEURE Duree = { 00,45 };
	HeureFin.heure = HeureDebut.heure + Duree.heure + (int)((HeureDebut.minute + Duree.minute) / 60);
	HeureFin.minute = ((HeureDebut.minute + Duree.minute) % 60);
	printf("%d:%d", HeureFin.heure, HeureFin.minute);
}
	
