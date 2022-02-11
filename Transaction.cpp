
#include "Transaction.h"


Transaction::Transaction() {}

Transaction::~Transaction() {}

Transaction::Transaction (string name, string symbol, TransactionType t,
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

void Transaction::setCompanyName (string name) {
	companyName = name;
}

string Transaction::getCompanyName () {
	return companyName;
}

void Transaction::setCompanySymbol (string s) {
	companySymbol = s;
}

string Transaction::getCompanySymbol () {
	return companySymbol;
}

void Transaction::setType (TransactionType t) {
	type = t;
}

TransactionType Transaction::getType () {
	return type;
}

void Transaction::setCurency (Curency c) {
	curency = c;
}

Curency Transaction::getCurency () {
	return curency;
}

void Transaction::setCurencyConversion (double co) {
	curencyConversion = co;
}

double Transaction::getCurencyConversion () {
	return curencyConversion;
}

void Transaction::setDay (int day) {
	day = day;
}

int Transaction::getDay () {
	return day;
}

void Transaction::setMonth (int m) {
	month = m;
}

int Transaction::getMonth () {
	return month;
}

void Transaction::setYear (int y) {
	year = y;
}

int Transaction::getYear () {
	return year;
}


