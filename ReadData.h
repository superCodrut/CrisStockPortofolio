#ifndef _READDATA_H__
#define _READDATA_H__

#include <fstream>
#include <vector>
#include <string>

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

#endif
