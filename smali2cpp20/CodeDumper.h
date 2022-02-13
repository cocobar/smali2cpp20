
#ifndef __codeDumper_H__
#define __codeDumper_H__

#include "CBaseAssert.h"
#include <map>
#include <any>
#include <variant>
#include <typeinfo>
#include "stringhelper.h"
#include "instructionhelper.h"

class CodeDumper : public CBaseObject {

private:
	int nNestDepth;
	std::string strCppCode;
	std::vector<std::string> listString;

public:
	CodeDumper();
	void addIndent();
	void subIndent();

	template<typename ... Args>
	class CodeDumper& printf(const char* format, Args ... args) {
		auto size = std::snprintf(nullptr, 0, format, args ...) + 1;
		std::unique_ptr<char[]> buf(new char[size]);
		std::snprintf(buf.get(), size, format, args ...);
		strCppCode.append(std::string(buf.get(), buf.get() + size - 1));
		return (*this);
	}

	template<typename ... Args>
	class CodeDumper& printf(const std::string& format, Args ... args) {
		auto size = std::snprintf(nullptr, 0, format.c_str(), args ...) + 1;
		std::unique_ptr<char[]> buf(new char[size]);
		std::snprintf(buf.get(), size, format.c_str(), args ...);
		strCppCode.append(std::string(buf.get(), buf.get() + size - 1));
		return (*this);
	}

	class CodeDumper& newline();
	class CodeDumper& endl();
	class CodeDumper& add(const std::string p);
	class CodeDumper& add(const CodeDumper& p);
	class CodeDumper& add(const char* p);
	class CodeDumper& add(std::vector<std::string>& list);

	class CodeDumper& add2Head(const CodeDumper& p);

	void clear(void);
	bool dumpToFile(std::string strFilePath);
	void format();
};

#endif
