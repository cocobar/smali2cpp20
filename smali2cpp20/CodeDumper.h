
#ifndef __codeDumper_H__
#define __codeDumper_H__

#include "BaseObject.h"
#include <map>
#include <any>
#include <variant>
#include <typeinfo>
#include "stringhelper.h"
#include "instructionhelper.h"

class codeNestDepthHolder;
class CodeDumper : public CBaseObject {
public:
	CodeDumper();
	void addNestDepth();
	void subNestDepth();

private:
	int nNestDepth;
	std::string strCppCode;
	std::vector<std::string> listString;

public:
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

	void clear(void);
	std::string dump();
	void dumpAll();
	bool dumpToFile(std::string strFilePath);

	void reFormat();
};

#endif
