#ifndef __sun_security_util_ObjectIdentifier__
#define __sun_security_util_ObjectIdentifier__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\ObjectIdentifier.smali
#include "java2ctype.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.Serializable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "sun.security.util.DerInputBuffer.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"

namespace sun::security::util{
class ObjectIdentifier : public java::io::Serializable {
protected:
private:
	static long long serialVersionUID;
	int componentLen;
	std::shared_ptr<java::lang::Object> components;
	bool componentsCalculated;
	std::shared_ptr<unsigned char[]> encoding;
	std::shared_ptr<java::lang::String> stringForm;
	static void check(std::shared_ptr<unsigned char[]> encoding);
	static void checkCount(int count);
	static void checkFirstComponent(int first);
	static void checkFirstComponent(std::shared_ptr<java::math::BigInteger> first);
	static void checkOtherComponent(int i,int num);
	static void checkOtherComponent(int i,std::shared_ptr<java::math::BigInteger> num);
	static void checkSecondComponent(int first,int second);
	static void checkSecondComponent(int first,std::shared_ptr<java::math::BigInteger> second);
	void virtual init(std::shared_ptr<int[]> components,int length);
	static unsigned char pack(std::shared_ptr<unsigned char[]> in,int ioffset,int ilength,int iw,int ow);
	static int pack7Oid(int input,std::shared_ptr<unsigned char[]> out,int ooffset);
	static int pack7Oid(std::shared_ptr<java::math::BigInteger> input,std::shared_ptr<unsigned char[]> out,int ooffset);
	static int pack7Oid(std::shared_ptr<unsigned char[]> in,int ioffset,int ilength,std::shared_ptr<unsigned char[]> out,int ooffset);
	static int pack8(std::shared_ptr<unsigned char[]> in,int ioffset,int ilength,std::shared_ptr<unsigned char[]> out,int ooffset);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> is);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> os);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	ObjectIdentifier(std::shared_ptr<java::lang::String> oid);
	ObjectIdentifier(std::shared_ptr<sun::security::util::DerInputBuffer> buf);
	ObjectIdentifier(std::shared_ptr<sun::security::util::DerInputStream> in);
	ObjectIdentifier(std::shared_ptr<int[]> values);
	static std::shared_ptr<sun::security::util::ObjectIdentifier> newInternal(std::shared_ptr<int[]> values);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	bool virtual equals(std::shared_ptr<sun::security::util::ObjectIdentifier> other);
	int virtual hashCode();
	int virtual toIntArray();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::ObjectIdentifier::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ObjectIdentifier(){
	}

}; // class ObjectIdentifier
}; // namespace sun::security::util

#endif //__sun_security_util_ObjectIdentifier__

