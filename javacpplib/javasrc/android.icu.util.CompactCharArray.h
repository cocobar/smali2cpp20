#ifndef __android_icu_util_CompactCharArray__
#define __android_icu_util_CompactCharArray__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\CompactCharArray.smali
#include "java2ctype.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class CompactCharArray : public java::lang::Cloneable {
protected:
private:
	std::shared_ptr<int[]> hashes;
	std::shared_ptr<char[]> indices;
	bool isCompact;
	std::shared_ptr<char[]> values;
	int virtual FindOverlappingPosition(int start,std::shared_ptr<char[]> tempValues,int tempCount);
	bool virtual blockTouched(int i);
	void virtual expand();
	void virtual touchBlock(int i,int value);
public:
	static int BLOCKCOUNT;
	static int BLOCKMASK;
	static int BLOCKSHIFT;
	static int INDEXCOUNT;
	static int INDEXSHIFT;
	static int UNICODECOUNT;
	char defaultValue;
	CompactCharArray();
	CompactCharArray(char defaultValue);
	CompactCharArray(std::shared_ptr<java::lang::String> indexArray,std::shared_ptr<java::lang::String> valueArray);
	CompactCharArray(std::shared_ptr<char[]> indexArray,std::shared_ptr<char[]> newValues);
	static bool arrayRegionMatches(std::shared_ptr<char[]> source,int sourceStart,std::shared_ptr<char[]> target,int targetStart,int len);
	std::shared_ptr<java::lang::Object> virtual clone();
	void virtual compact();
	void virtual compact(bool exhaustive);
	char virtual elementAt(char index);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	char virtual getIndexArray();
	char virtual getValueArray();
	int virtual hashCode();
	void virtual setElementAt(char index,char value);
	void virtual setElementAt(char start,char end,char value);
public:
	virtual ~CompactCharArray(){
	}

}; // class CompactCharArray
}; // namespace android::icu::util

#endif //__android_icu_util_CompactCharArray__

