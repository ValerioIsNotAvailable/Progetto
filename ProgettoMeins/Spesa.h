#pragma once
#include <string>
#include "Data.h"
#include "Utente.h"
using namespace std;
class Spesa {
private:
	static const int MAX_PARTECIPANTI = 20;
	string nome;
	Data data;
	double importo;
	Utente partecipanti[MAX_PARTECIPANTI];
	Utente pagatore;
	unsigned int npartecipanti;
public:
	Spesa() {
		this->nome = "";
		this->data.giorno = 0;
		this->data.mese = 0;
		this->data.anno = 0;
		this->importo = 0;
		this->npartecipanti = 0;
		this->partecipanti[npartecipanti] = Utente();
		this->pagatore = Utente();
	}
	Spesa(string nome,Data data,double importo,unsigned int npartecipanti,Utente p[],Utente pagatore) {
		this->nome = nome;
		this->data = data;
		this->importo = importo;
		this->npartecipanti = npartecipanti;
		for (int i = 0; i < npartecipanti; i++) {
			this->partecipanti[i] = p[i];
		}
		this->pagatore = pagatore;
	}

};