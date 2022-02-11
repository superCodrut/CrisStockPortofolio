
#include "Transaction.h"


Transacation::Transacation() {}

Transacation::~Transaction() {}

Transacation::Transaction (string name, string symbol, TransactionType t,
	       Curency c, double conv, int d, int m, int y) {
	companyName = name;
	companySymbol = symbol;
	type = t;
	curency = c;
	curencyConversion = conv;
	day = d;
	month = m;
	year = y;
}

void Transacation::setCompanyName (string name) {
	companyName = name;
}

string Transacation::getCompanyName () {
	return companyName;
}

void Transacation::setCompanySymbol (string s) {
	companySymbol = s;
}

string Transacation::getCompanySymbol () {
	return cumpanySymbol;
}

void Transacation::setType (TransactionType t) {
	type = t;
}

TransactionType Transacation::getType () {
	return type;
}

void Transacation::setCurency (Curency c) {
	curency = c;
}

Curency Transacation::getCurency () {
	return curency;
}

void Transacation::setCurencyConversion (double co) {
	curencyConversion = co;
}

double Transacation::getCurencyConversion () {
	return curencyConversion;
}

void Transacation::setDay (int day) {
	day = day;
}

int Transacation::getDay () {
	return day;
}

void Transacation::setMonth (int m) {
	month = m;
}

int Transacation::getMonth () {
	return month;
}

void Transacation::setYear (int y) {
	year = y;
}

int Transacation::getYear () {
	return year;
}


