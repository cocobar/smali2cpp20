#ifndef __android_icu_util_CompactByteArray__
#define __android_icu_util_CompactByteArray__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\CompactByteArray.smali
#include "java2ctype.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class CompactByteArray : public java::lang::Cloneable {
protected:
private:
	static int BLOCKCOUNT;
	static int BLOCKMASK;
	static int BLOCKSHIFT;
	static int INDEXCOUNT;
	static int INDEXSHIFT;
	std::shared_ptr<int[]> hashes;
	std::shared_ptr<char[]> indices;
	bool isCompact;
	std::shared_ptr<unsigned char[]> values;
	bool virtual blockTouched(int i);
	void virtual expand();
	void virtual touchBlock(int i,int value);
public:
	static int UNICODECOUNT;
	unsigned char defaultValue;
	CompactByteArray();
	CompactByteArray(unsigned char defaultValue);
	CompactByteArray(std::shared_ptr<java::lang::String> indexArray,std::shared_ptr<java::lang::String> valueArray);
	CompactByteArray(std::shared_ptr<char[]> indexArray,std::shared_ptr<unsigned char[]> newValues);
	static bool arrayRegionMatches(std::shared_ptr<unsigned char[]> source,int sourceStart,std::shared_ptr<unsigned char[]> target,int targetStart,int len);
	std::shared_ptr<java::lang::Object> virtual clone();
	void virtual compact();
	void virtual compact(bool exhaustive);
	unsigned char virtual elementAt(char index);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	char virtual getIndexArray();
	unsigned char virtual getValueArray();
	int virtual hashCode();
	void virtual setElementAt(char index,unsigned char value);
	void virtual setElementAt(char start,char end,unsigned char value);
public:
	virtual ~CompactByteArray(){
	}

}; // class CompactByteArray
}; // namespace android::icu::util

#endif //__android_icu_util_CompactByteArray__

