#ifndef __java_lang_AbstractStringBuilder__
#define __java_lang_AbstractStringBuilder__
// H L:\smali2cpp20\x64\Release\out\java\lang\AbstractStringBuilder.smali
#include "java2ctype.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace java::lang{
class AbstractStringBuilder : public java::lang::Appendable, public java::lang::CharSequence {
protected:
private:
	static int MAX_ARRAY_SIZE;
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual appendNull();
	void virtual ensureCapacityInternal(int minimumCapacity);
	int virtual hugeCapacity(int minCapacity);
	int virtual newCapacity(int minCapacity);
	void virtual reverseAllValidSurrogatePairs();
public:
	int count;
	std::shared_ptr<char[]> value;
	AbstractStringBuilder();
	AbstractStringBuilder(int capacity);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual append(char c);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual append(double d);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual append(float f);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual append(int i);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual append(long long l);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual append(std::shared_ptr<java::lang::AbstractStringBuilder> asb);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual append(std::shared_ptr<java::lang::CharSequence> s);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual append(std::shared_ptr<java::lang::CharSequence> cVar0,int start,int end);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual append(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual append(std::shared_ptr<java::lang::String> str);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual append(std::shared_ptr<java::lang::StringBuffer> sb);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual append(bool b);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual append(std::shared_ptr<char[]> str);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual append(std::shared_ptr<char[]> str,int offset,int len);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual appendCodePoint(int codePoint);
	int virtual capacity();
	char virtual charAt(int index);
	int virtual codePointAt(int index);
	int virtual codePointBefore(int index);
	int virtual codePointCount(int beginIndex,int endIndex);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual _delete_(int start,int cVar1);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual deleteCharAt(int index);
	void virtual ensureCapacity(int minimumCapacity);
	void virtual getChars(int srcBegin,int srcEnd,std::shared_ptr<char[]> dst,int dstBegin);
	char virtual getValue();
	int virtual indexOf(std::shared_ptr<java::lang::String> str);
	int virtual indexOf(std::shared_ptr<java::lang::String> str,int fromIndex);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual insert(int offset,char c);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual insert(int offset,double d);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual insert(int offset,float f);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual insert(int offset,int i);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual insert(int offset,long long l);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual insert(int dstOffset,std::shared_ptr<java::lang::CharSequence> cVar0);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual insert(int dstOffset,std::shared_ptr<java::lang::CharSequence> s,int start,int end);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual insert(int offset,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual insert(int offset,std::shared_ptr<java::lang::String> cVar1);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual insert(int offset,bool b);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual insert(int offset,std::shared_ptr<char[]> str);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual insert(int index,std::shared_ptr<char[]> str,int offset,int len);
	int virtual lastIndexOf(std::shared_ptr<java::lang::String> str);
	int virtual lastIndexOf(std::shared_ptr<java::lang::String> str,int fromIndex);
	int virtual length();
	int virtual offsetByCodePoints(int index,int codePointOffset);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual replace(int start,int cVar3,std::shared_ptr<java::lang::String> str);
	std::shared_ptr<java::lang::AbstractStringBuilder> virtual reverse();
	void virtual setCharAt(int index,char ch);
	void virtual setLength(int newLength);
	std::shared_ptr<java::lang::CharSequence> virtual subSequence(int start,int end);
	std::shared_ptr<java::lang::String> virtual substring(int start);
	std::shared_ptr<java::lang::String> virtual substring(int start,int end);
	std::shared_ptr<java::lang::String> toString() = 0;
	void virtual trimToSize();
public:
	virtual ~AbstractStringBuilder(){
	}

}; // class AbstractStringBuilder
}; // namespace java::lang

#endif //__java_lang_AbstractStringBuilder__

