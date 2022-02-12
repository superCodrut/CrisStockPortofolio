#ifndef _READDATA_CPP__
#define _READDATA_CPP__

#include <sstream>
#include <boost/algorithm/string.hpp>

// local libraries
#include "ReadData.h"

FileHandler::FileHandler () {}


FileHandler::FileHandler (string inputName, string outputName) {
	inputFileName = inputName;
	outputFileName = outputName;
}

FileHandler::~FileHandler () {}

void FileHandler::setInputFileName(string name) {
	inputFileName = name;
}

string FileHandler::getInputFileName() {
	return inputFileName;
}

void FileHandler::setOutputFileName(string name) {
	outputFileName = name;
}

string FileHandler::getOutputFileName() {
	return outputFileName;
}


vector<string> FileHandler::getAllLinesFromInputFile() {
	vector<string> allLines;
	string line;

	inputFile.open(inputFileName);
	while (getline(inputFile, line) ) {
		allLines.push_back(line);
	}
	inputFile.close();
	return allLines;
}



ReadTransactions::ReadTransactions() {}

ReadTransactions::ReadTransactions(string input, string output) {
	FileHandler(input, output);
}

ReadTransactions::~ReadTransactions() {}

void ReadTransactions::getTransactions (vector<Transaction *> *transactions) {
	for (string tran: getAllLinesFromInputFile()) {
		auto split = splitLine(tran);
		boost::to_upper(split[COMPANY]);
		boost::to_upper(split[SYMBOL]);
		Transaction *t = new Transaction(split[COMPANY],
			       split[SYMBOL],
			       Transaction::stringToTransactionType(split[TYPE]),
			       Transaction::stringToCurrency(split[CURRENCY]),
			       stod(split[CURRENCY_CONVERSION]),
			       stoi(split[DAY]),
			       stoi(split[MONTH]),
			       stoi(split[YEAR]),
			       stoi(split[NO_SHARES]),
			       stod(split[PRICE]),
			       stod(split[COMISSION]) );
		transactions->push_back(t);

	}
}

vector<string> ReadTransactions::splitLine(string line) {
	vector<string> splitLine;
	stringstream ss(line);
	while(ss.good() ) {
		string substr;
		getline(ss, substr, ',');
		splitLine.push_back(substr);
	}
	return splitLine;
}

#endif
