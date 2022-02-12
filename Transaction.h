#ifndef _TRANSACTION_H__
#define _TRANSACTION_H__


#include <iostream>
#include <string>
#include <boost/algorithm/string.hpp>


#include "Utils.h"

using namespace std;


class Transaction {
	private:
		string			companyName;
		string			companySymbol;
		TransactionType		type;
		Currency			currency;
		double			currencyConversion;
		int			day;
		int			month;
		int			year;
		int			no_shares;
		double			price;
		double			comission;
	public:
		Transaction();
		~Transaction();
		Transaction (string, string, TransactionType, Currency,
				double, int, int, int, int, double, double);

		void setCompanyName (string);
		string getCompanyName ();
		void setCompanySymbol (string);
		string getCompanySymbol ();
		void setType (TransactionType);
		TransactionType getType ();
		void setCurrency (Currency);
		Currency getCurrency ();
		void setCurrencyConversion (double);
		double getCurrencyConversion ();
		void setDay (int);
		int getDay ();
		void setMonth (int);
		int getMonth ();
		void setYear (int);
		int getYear ();
		void setNoOfShares (int);
		int getNoOfShares ();
		void setPriceOfShare (double);
		double getPriceOfShare ();
		void setComission (double);
		double getComission ();
		static TransactionType stringToTransactionType(string);
		static Currency stringToCurrency(string);
		static string transactionTypeToString (TransactionType);
		static string currencyToString (Currency);
		void printTransaction();

};


#endif
