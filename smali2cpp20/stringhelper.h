#ifndef __stringhelper_H__
#define __stringhelper_H__
#include <string>
#include <vector>
#include <cassert>
#include <memory>


class stringhelper
{

public:
	stringhelper() {};
	~stringhelper() {};

	template<typename ... Args>
	static std::string formatString(const std::string& format, Args ... args) {
		auto size = std::snprintf(nullptr, 0, format.c_str(), args ...) + 1;
		std::unique_ptr<char[]> buf(new char[size]);
		std::snprintf(buf.get(), size, format.c_str(), args ...);
		return std::string(buf.get(), buf.get() + size - 1);
	}

	template<typename ... Args>
	static std::string formatString(const char* format, Args ... args) {
		auto size = std::snprintf(nullptr, 0, format, args ...) + 1;
		std::unique_ptr<char[]> buf(new char[size]);
		std::snprintf(buf.get(), size, format, args ...);
		std::string reRet = std::string(buf.get(), buf.get() + size - 1);
		return reRet;
	}


	// 字符串替换
	static size_t replace(std::string& strValue, const std::string& strOld, const std::string& strNew) {
		size_t iCount = 0;
		if (strOld.empty())
			return iCount;
		std::string::size_type iFind = 0;
		while (true) {
			iFind = strValue.find(strOld, iFind);
			if (std::string::npos == iFind)
				break;
			strValue.replace(iFind, strOld.size(), strNew);
			++iCount;
			iFind += strNew.size();
		}
		return iCount;
	}

	static std::vector<std::string> split(std::string str, std::string pattern) {
		std::string::size_type pos;
		std::vector<std::string> result;
		str += pattern;//扩展字符串以方便操作
		int size = (int)str.size();
		for (int i = 0; i < size; i++) {
			pos = str.find(pattern, i);
			if ((int)pos < size) {
				std::string s = str.substr(i, pos - i);
				result.push_back(s);
				i = (int)(pos + pattern.size() - 1);
			}
		}
		return result;
	}

	// 只获得文本
	static std::string getOnlyString(std::string& str, std::string strdot) {
		std::string strnew = str;
		size_t s = strnew.find_first_of(strdot);
		size_t e = strnew.find_last_of(strdot);

		if ((s >= 0) && (e >= 0) && (e > (s + 1))) {
			strnew = strnew.substr(s + 1, e - s - 1);
			return strnew;
		}

		return std::string("");
	}

	// 去除前后空格
	static std::string trim(const std::string& str) {
		std::string strnew = str;
		replace(strnew, std::string("\t"), std::string(" "));
		replace(strnew, std::string("\n"), std::string(" "));
		replace(strnew, std::string("\r"), std::string(" "));
		int s = (int)strnew.find_first_not_of(" ");
		int e = (int)strnew.find_last_not_of(" ");
		if ((s >= 0) && (e >= 0) && (e >= s)) {
			strnew = strnew.substr(s, e - s + 1);
		}
		else {
			strnew = std::string("");
		}

		return strnew;
	}

	// .field public static final TAG:Ljava/lang/String; = "TangramDownloaderConfigure_stub  "
	// 这个函数要修改成 fast 函数，否者不能提速
	static std::vector<std::string> splitToSymbol(std::string& str) {
		std::string strnew = trim(str);
		std::vector<std::string> listSymbol;
		strnew.append(" ");
		size_t sLen = strnew.size();
		int nInQuotationMark = 0;
		int nStringStart = -1;
		for (size_t i = 0; i < sLen; i++) {
			if (nInQuotationMark > 0) {
				// 在引号内
				if (nInQuotationMark == 1) {
					if (strnew[i] == '\'') {
						listSymbol.push_back(strnew.substr(nStringStart, i - nStringStart + 1));
						nStringStart = -1;
						nInQuotationMark = 0;
					}
				}
				else if (nInQuotationMark == 2) {
					if (strnew[i] == '\"') {
						listSymbol.push_back(strnew.substr(nStringStart, i - nStringStart + 1));
						nStringStart = -1;
						nInQuotationMark = 0;
					}
				}
			}
			else {
				// 在引号外
				if (nStringStart == -1) {
					if (strnew[i] != ' ') {		// 开始
						nStringStart = (int)i;
						if (strnew[i] == '\'') {
							nInQuotationMark = 1;
						}
						else if (strnew[i] == '\"') {
							nInQuotationMark = 2;
						}
					}
				}
				else {
					if (strnew[i] == ' ') {
						listSymbol.push_back(strnew.substr(nStringStart, i - nStringStart));
						nStringStart = -1;
					}
					else if (strnew[i] == '\'') {
						listSymbol.push_back(strnew.substr(nStringStart, i - nStringStart));
						nStringStart = (int)i;
						nInQuotationMark = 1;
					}
					else if (strnew[i] == '\"') {
						listSymbol.push_back(strnew.substr(nStringStart, i - nStringStart));
						nStringStart = (int)i;
						nInQuotationMark = 2;
					}
				}
			}
		}
		return listSymbol;
	}
};

#endif
