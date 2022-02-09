
#ifndef __SmaliImportSaver_H__
#define __SmaliImportSaver_H__

#include "BaseObject.h"
#include <vector>
#include <string>
#include <unordered_map>
#include "CodeDumper.h"
#include "BaseAssert.h"

class SmaliImportSaver : public CBaseObject {

private:
	std::vector<std::string> listSmaliType;

	bool isJavaClassName(std::string str) {
		if ((str[0] == 'L') && (str[str.size() - 1]) == ';') return true;

		BaseAssert(0);
		return false;
	}

	std::vector<std::string> listStaticInit;

	std::string strDestructor;

public:
	void clearCache() {
		listSmaliType.clear();
		listStaticInit.clear();
		strDestructor.clear();
	}

	std::vector<std::string> getCachedClassType() {
		return listSmaliType;
	}

	bool hasStaticInit() {
		if (listStaticInit.size() > 0) {
			return true;
		}
		return false;
	}

	bool setDestructor(std::string str) {
		strDestructor = str;
		return true;
	}

	bool dumpDestructor(CodeDumper* d) {
		if (!strDestructor.empty()) {
			d->add("public:").newline();
			{
				d->addNestDepth();
				d->add(strDestructor).add("{").newline();
				d->add("}").newline();
				d->subNestDepth();
			}

			return true;
		}

		return false;
	}

	bool addStaticInited(std::string str) {
		listStaticInit.push_back(str);
		return true;
	}

	// 生成静态初始化的调用代码
	void dumpStaticInited(CodeDumper* d) {
		d->add("private:").newline();
		{
			d->addNestDepth();
			d->add("class static_init_class {").newline();
			d->add("public:").newline();
			d->addNestDepth();
			d->add("static_init_class(){").newline();
			{
				d->addNestDepth();
				for (auto a = listStaticInit.begin(); a != listStaticInit.end(); a++) {
					d->add(*a).endl().newline();
				}
				d->subNestDepth();
			}
			d->add("}").newline();
			d->subNestDepth();
			d->add("};").newline();
			d->add("static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>()").endl().newline();
			d->subNestDepth();
		}
	}

	bool checkJavaClass(std::string str) {
		if (str.size() > 0) {
			if (isJavaClassName(str)) {
				auto it = std::find(listSmaliType.begin(), listSmaliType.end(), str);
				if (it == listSmaliType.end()) {
					listSmaliType.push_back(str);
					return true;
				}
			}
		}
		return false;
	}
	bool remove(std::string str) {
		auto it = std::find(listSmaliType.begin(), listSmaliType.end(), str);
		if (it != listSmaliType.end()) {
			listSmaliType.erase(it);
			return true;
		}
		return false;
	}
};
#endif
