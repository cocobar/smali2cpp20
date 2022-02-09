#ifndef __sun_security_util_DerIndefLenConverter__
#define __sun_security_util_DerIndefLenConverter__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\DerIndefLenConverter.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.util.ArrayList.h"

namespace sun::security::util{
class DerIndefLenConverter : public java::lang::Object {
protected:
private:
	static int CLASS_MASK;
	static int FORM_MASK;
	static int LEN_LONG;
	static int LEN_MASK;
	static int SKIP_EOC_BYTES;
	static int TAG_MASK;
	std::shared_ptr<unsigned char[]> data;
	int dataPos;
	int dataSize;
	int index;
	std::shared_ptr<java::util::ArrayList<java::lang::Object>> ndefsList;
	std::shared_ptr<unsigned char[]> newData;
	int newDataPos;
	int numOfTotalLenBytes;
	int unresolved;
	unsigned char virtual getLengthBytes(int curLen);
	int virtual getNumOfLenBytes(int len);
	bool virtual isEOC(int tag);
	int virtual parseLength();
	void virtual parseTag();
	void virtual parseValue(int curLen);
	void virtual writeLength(int curLen);
	void virtual writeLengthAndValue();
	void virtual writeTag();
	void virtual writeValue(int curLen);
public:
	DerIndefLenConverter();
	static bool isIndefinite(int lengthByte);
	static bool isLongForm(int lengthByte);
	unsigned char virtual convert(std::shared_ptr<unsigned char[]> indefData);
public:
	virtual ~DerIndefLenConverter(){
	}

}; // class DerIndefLenConverter
}; // namespace sun::security::util

#endif //__sun_security_util_DerIndefLenConverter__

