#ifndef __java_lang_Boolean__
#define __java_lang_Boolean__
// H L:\smali2cpp20\x64\Release\out\java\lang\Boolean.smali
#include "java2ctype.h"
#include "java.io.Serializable.h"
#include "java.lang.Class.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::lang{
class Boolean : public java::io::Serializable, public java::lang::Comparable<java::lang::Boolean> {
protected:
private:
	static long long serialVersionUID;
	bool value;
public:
	static std::shared_ptr<java::lang::Boolean> FALSE;
	static std::shared_ptr<java::lang::Boolean> TRUE;
	static std::shared_ptr<java::lang::Class<java::lang::Boolean>> TYPE;
	static void static_cinit();
	Boolean(std::shared_ptr<java::lang::String> s);
	Boolean(bool value);
	static int compare(bool x,bool y);
	static bool getBoolean(std::shared_ptr<java::lang::String> name);
	static int hashCode(bool value);
	static bool logicalAnd(bool a,bool b);
	static bool logicalOr(bool a,bool b);
	static bool logicalXor(bool a,bool b);
	static bool parseBoolean(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> toString(bool b);
	static std::shared_ptr<java::lang::Boolean> valueOf(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::Boolean> valueOf(bool b);
	bool virtual booleanValue();
	int virtual compareTo(std::shared_ptr<java::lang::Boolean> b);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Boolean::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Boolean(){
	}

}; // class Boolean
}; // namespace java::lang

#endif //__java_lang_Boolean__

