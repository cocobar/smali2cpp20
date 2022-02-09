#ifndef __android_icu_impl_UCharacterName_S_AlgorithmName__
#define __android_icu_impl_UCharacterName_S_AlgorithmName__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterName$AlgorithmName.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace android::icu::impl{
class UCharacterName_S_AlgorithmName : public java::lang::Object {
protected:
private:
	std::shared_ptr<char[]> m_factor_;
	std::shared_ptr<unsigned char[]> m_factorstring_;
	std::shared_ptr<java::lang::String> m_prefix_;
	int m_rangeend_;
	int m_rangestart_;
	unsigned char m_type_;
	std::shared_ptr<int[]> m_utilIntBuffer_;
	std::shared_ptr<java::lang::StringBuffer> m_utilStringBuffer_;
	unsigned char m_variant_;
	bool virtual compareFactorString(std::shared_ptr<int[]> index,int length,std::shared_ptr<java::lang::String> str,int offset);
	std::shared_ptr<java::lang::String> virtual getFactorString(std::shared_ptr<int[]> index,int length);
public:
	static int TYPE_0_;
	static int TYPE_1_;
	static int _get0(std::shared_ptr<android::icu::impl::UCharacterName_S_AlgorithmName> _this);
	static int _get1(std::shared_ptr<android::icu::impl::UCharacterName_S_AlgorithmName> _this);
	UCharacterName_S_AlgorithmName();
	int virtual add(std::shared_ptr<int[]> set,int maxlength);
	void virtual appendName(int ch,std::shared_ptr<java::lang::StringBuffer> str);
	bool virtual contains(int ch);
	int virtual getChar(std::shared_ptr<java::lang::String> name);
	bool virtual setFactor(std::shared_ptr<char[]> factor);
	bool virtual setFactorString(std::shared_ptr<unsigned char[]> string);
	bool virtual setInfo(int rangestart,int rangeend,unsigned char type,unsigned char variant);
	bool virtual setPrefix(std::shared_ptr<java::lang::String> prefix);
public:
	virtual ~UCharacterName_S_AlgorithmName(){
	}

}; // class UCharacterName_S_AlgorithmName
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterName_S_AlgorithmName__

