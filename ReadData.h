#ifndef _READDATA_H__
#define _READDATA_H__

#include <fstream>
#include <vector>
#include <string>

#include "Transaction.h"

using namespace std;

class FileHandler {
private:
	ifstream	inputFile;
	string		inputFileName;
	ofstream	outputFile;
	string		outputFileName;
public:
	FileHandler ();
	FileHandler (string inputName, string outputName);
	~FileHandler ();
	void setInputFileName(string name);
	string getInputFileName();
	void setOutputFileName(string name);
	string getOutputFileName();
	vector<string> getAllLinesFromInputFile();
};

class ReadTransactions: public FileHandler {
	private:
		vector<string> splitLine(string);
		TransactionType stringToTransactionType(string);
		Currency stringToCurrency(string);
		string transactionTypeToString (TransactionType);
		string currencyToString (Currency);
	public:
		ReadTransactions();
		ReadTransactions(string, string);
		~ReadTransactions();
		void getTransactions (vector<Transaction *>);
};
#endif
