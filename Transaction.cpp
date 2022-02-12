
#include "Transaction.h"


Transaction::Transaction() {}

Transaction::~Transaction() {}

Transaction::Transaction (string name, string symbol, TransactionType t,
	       Currency c, double conv, int d, int m, int y, int shares,
	       double p, double com) {
	companyName = name;
	companySymbol = symbol;
	type = t;
	currency = c;
	currencyConversion = conv;
	day = d;
	month = m;
	year = y;
	no_shares = shares;
	price = p;
	comission = com;

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

void Transaction::setCurrency (Currency c) {
	currency = c;
}

Currency Transaction::getCurrency () {
	return currency;
}

void Transaction::setCurrencyConversion (double co) {
	currencyConversion = co;
}

double Transaction::getCurrencyConversion () {
	return currencyConversion;
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

void Transaction::setNoOfShares (int sh) {
	no_shares = sh;
}

int Transaction::getNoOfShares () {
	return no_shares;
}

void Transaction::setPriceOfShare (double pr) {
	price = pr;
}

double Transaction::getPriceOfShare () {
	return price;
}

void Transaction::setComission (double com) {
	comission = com;
}

double Transaction::getComission () {
	return comission;
}


TransactionType Transaction::stringToTransactionType(string type) {
	boost::to_upper(type);
	if (type == string("SELL"))
		return SELL;
	else if ( type == string("BUY"))
		return BUY;
	return NON_TYPE;
}

string Transaction::transactionTypeToString(TransactionType t) {
	switch (t) {
		case SELL:
			return string("SELL");
		case BUY:
			return string("BUY");
	}
	return string("NON_TYPE");
}

string Transaction::currencyToString (Currency c) {
	switch (c) {
		case USD:
			return string("USD");
		case RON:
			return string("RON");
		case EURO:
			return string("EURO");
	}
	return string ("NON_CURRENCY");
}

Currency Transaction::stringToCurrency(string currency) {
	boost::to_upper(currency);
	if (currency == string("USD"))
		return USD;
	if (currency == string("RON"))
		return RON;
	if (currency == string("EURO"))
		return EURO;
	return NON_CURRENCY;
}

void Transaction::printTransaction() {
	cout << companyName << "\t\t"
		<< companySymbol << "\t\t"
		<< Transaction::transactionTypeToString(type) <<"\t\t"
		<< Transaction::currencyToString(currency) << "\t\t"
		<< currencyConversion << "\t\t"
		<< day << "\t\t"
		<< month << "\t\t"
		<< year << "\t\t"
		<< no_shares << "\t\t"
		<< price << "\t\t"
		<< comission;

	cout << "\n";
}
