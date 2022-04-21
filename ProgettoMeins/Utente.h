/*!
\file Utente.h
\brief definizione e implementazione della classe Utente
\author G. Bartoli, V. D'Amico, S. Villarosa
*/
#pragma once
#include <string>
#include "Spesa.h"
#include "Progetto.h"

using namespace std;
//! \brief classe per la rappresentazione di un singolo utente
class Utente {
private:
	string nome;
	double saldo;
public:
	/*!
	\brief costruttore standard
	\param[in] nome nome dell'utente
	\param[in] saldo saldo dell'utente
	*/
	Utente(string nome, double saldo) {
		this->nome = nome;
		this->saldo = saldo;
	}
	//! \brief costruttore predefinito
	Utente() {
		this->nome = "";
		this->saldo = 0;
	}

	/*!
	\brief acquisizione del nome dell'utente
	\return nome dell'utente
	*/
	string getNome() {
		return this->nome;
	}
	/*!
	\brief acquisizione del saldo dell'utente
	\return saldo dell'utente
	*/
	double getSaldo() {
		return this->saldo;
	}
	/*!
	\brief impostazione del nome dell'utente
	\param[in] nome nome dell'utente
	*/
	void setNome(string nome) {
		this->nome = nome;
	}
	/*!
	\brief impostazione del saldo dell'utente
	\param[in] saldo saldo dell'utente
	*/
	void setSaldo(double saldo) {
		this->saldo = saldo;
	}

	void creaProgetto(string nome, Spesa s) {
		Progetto p;
	}

	void eliminaProgetto(Progetto p) {

	}

};