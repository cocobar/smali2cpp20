
#include "CodeDumper.h"
#include <iostream>
#include <fstream>
#include <regex>
#include "CBaseAssert.h"
#include "CRegexString.h"

CodeDumper::CodeDumper() {
	strCppCode = "";
	nNestDepth = 0;
};

void CodeDumper::addIndent() {
	nNestDepth++;
	strCppCode = "";
	if (nNestDepth > 0) {
		for (int i = 0; i < (nNestDepth - 0); i++) {
			strCppCode.append(std::string("\t"));
		}
	}
}

void CodeDumper::subIndent() {
	CBaseAssert(nNestDepth > 0);
	nNestDepth--;
	strCppCode = "";
	if (nNestDepth > 0) {
		for (int i = 0; i < (nNestDepth - 0); i++) {
			strCppCode.append(std::string("\t"));
		}
	}
}

class CodeDumper& CodeDumper::newline() {
	//strCppCode.append(std::string("\n"));
	listString.push_back(strCppCode);
	strCppCode = "";
	if (nNestDepth > 0) {
		for (int i = 0; i < (nNestDepth); i++) {
			strCppCode.append(std::string("\t"));
		}
	}
	return (*this);
}

class CodeDumper& CodeDumper::endl() {
	strCppCode.append(std::string(";"));
	return (*this);
}

class CodeDumper& CodeDumper::add(const std::string p) {
	strCppCode.append(p);
	return (*this);
}

class CodeDumper& CodeDumper::add(const CodeDumper& p) {
	std::string strCode;

	std::smatch m;
	if (std::regex_search(this->strCppCode, m, std::regex("^[\t]*$")) && (m.size() == 1)) {

	}
	else {
		this->newline();
	}

	for (auto a = p.listString.begin(); a != p.listString.end(); a++) {
		this->add(*a).newline();;
	}
	this->add(p.strCppCode);
	return (*this);
}

class CodeDumper& CodeDumper::add2Head(const CodeDumper& p) {

	CodeDumper tmp;
	tmp.nNestDepth = this->nNestDepth;

	for (auto a = p.listString.begin(); a != p.listString.end(); a++) {
		tmp.add(*a).newline();
	}

	std::smatch m;
	if (std::regex_search(p.strCppCode, m, std::regex("^[\t]*$")) && (m.size() == 1)) {
	}
	else {
		tmp.add(p.strCppCode).newline();
	}

	for (auto a = tmp.listString.begin(); a != tmp.listString.end(); a++) {
		this->listString.insert(this->listString.end(), *a);
	}

	return (*this);
}

class CodeDumper& CodeDumper::add(const char* p) {
	return add(std::string(p));
}

class CodeDumper& CodeDumper::add(std::vector<std::string>& list) {
	if (list.size() == 1) {
		for (auto a = list.begin(); a != list.end(); a++) {
			if (*a != std::string(" ")) {
				add(*a);
			}
		}
	}
	else {
		for (auto a = list.begin(); a != list.end(); a++) {
			if (*a != std::string(" ")) {
				add(*a);
				auto b = a;
				b++;
				if (b < list.end()) {
					newline();
				}
			}
		}
	}
	return (*this);
}

void CodeDumper::clear(void) {
	strCppCode = "";
	listString.clear();
}

bool CodeDumper::dumpToFile(std::string strFilePath) {
	//std::filesystem::path fsPath(strFilePath);
	//if (std::filesystem::exists(fsPath)) 
	{
		std::ofstream ifile(strFilePath, std::ofstream::out);
		if (ifile.is_open()) {
			for (auto a = listString.begin(); a != listString.end(); a++) {
				ifile << (*a) << "\n";
			}
			ifile << strCppCode << "\n";
			ifile.close();
			return true;
		}
	}
	return false;
}
void CodeDumper::format() {
	for (auto a = this->listString.begin(); a != this->listString.end(); a++) {
		std::smatch m;
		if (std::regex_search((*a), m, CRegexString::reformatLabel) && (m.size() == 2)) {
			(*a) = m[1];
		}
	}
}
