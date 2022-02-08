#ifndef _READDATA_CPP__
#define _READDATA_CPP__

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
	while (inputFile) {
		getline(inputFile, line);
		allLines.push_back(line);
	}
	inputFile.close();
	return allLines;
}

#endif
