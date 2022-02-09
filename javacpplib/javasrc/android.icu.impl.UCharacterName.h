#ifndef __android_icu_impl_UCharacterName__
#define __android_icu_impl_UCharacterName__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterName.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterName_S_AlgorithmName.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace android::icu::impl{
class UCharacterName : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> FILE_NAME_;
	static int GROUP_MASK_;
	static int GROUP_SHIFT_;
	static int LEAD_SURROGATE_;
	static int NON_CHARACTER_;
	static int OFFSET_HIGH_OFFSET_;
	static int OFFSET_LOW_OFFSET_;
	static int SINGLE_NIBBLE_MAX_;
	static int TRAIL_SURROGATE_;
	static std::shared_ptr<std::vector<java::lang::String>> TYPE_NAMES_;
	static std::shared_ptr<java::lang::String> UNKNOWN_TYPE_NAME_;
	std::shared_ptr<int[]> m_ISOCommentSet_;
	std::shared_ptr<std::vector<android::icu::impl::UCharacterName_S_AlgorithmName>> m_algorithm_;
	std::shared_ptr<char[]> m_groupinfo_;
	std::shared_ptr<char[]> m_grouplengths_;
	std::shared_ptr<char[]> m_groupoffsets_;
	std::shared_ptr<unsigned char[]> m_groupstring_;
	int m_maxISOCommentLength_;
	int m_maxNameLength_;
	std::shared_ptr<int[]> m_nameSet_;
	std::shared_ptr<unsigned char[]> m_tokenstring_;
	std::shared_ptr<char[]> m_tokentable_;
	std::shared_ptr<int[]> m_utilIntBuffer_;
	std::shared_ptr<java::lang::StringBuffer> m_utilStringBuffer_;
	UCharacterName();
	static int add(std::shared_ptr<int[]> set,std::shared_ptr<java::lang::String> str);
	static int add(std::shared_ptr<int[]> set,std::shared_ptr<java::lang::StringBuffer> str);
	static void add(std::shared_ptr<int[]> set,char ch);
	int virtual addAlgorithmName(int maxlength);
	int virtual addExtendedName(int maxlength);
	void virtual addGroupName(int maxlength);
	int virtual addGroupName(int offset,int length,std::shared_ptr<unsigned char[]> tokenlength,std::shared_ptr<int[]> set);
	static bool contains(std::shared_ptr<int[]> set,char ch);
	void virtual convert(std::shared_ptr<int[]> set,std::shared_ptr<android::icu::text::UnicodeSet> uset);
	std::shared_ptr<java::lang::String> virtual getAlgName(int ch,int choice);
	static int getExtendedChar(std::shared_ptr<java::lang::String> name,int choice);
	int virtual getGroupChar(int index,std::shared_ptr<char[]> length,std::shared_ptr<java::lang::String> name,int choice);
	int virtual getGroupChar(std::shared_ptr<java::lang::String> name,int choice);
	static int getType(int ch);
	bool virtual initNameSetsLengths();
public:
	static int EXTENDED_CATEGORY_;
	static std::shared_ptr<android::icu::impl::UCharacterName> INSTANCE;
	static int LINES_PER_GROUP_;
	int m_groupcount_;
	int m_groupsize_;
	static int _wrap0(std::shared_ptr<int[]> set,std::shared_ptr<java::lang::StringBuffer> str);
	static int _wrap1(std::shared_ptr<int[]> set,std::shared_ptr<java::lang::String> str);
	static void static_cinit();
	static int getCodepointMSB(int codepoint);
	static int getGroupLimit(int msb);
	static int getGroupMin(int msb);
	static int getGroupMinFromCodepoint(int codepoint);
	static int getGroupOffset(int codepoint);
	int virtual getAlgorithmEnd(int index);
	int virtual getAlgorithmLength();
	std::shared_ptr<java::lang::String> virtual getAlgorithmName(int index,int codepoint);
	int virtual getAlgorithmStart(int index);
	int virtual getCharFromName(int choice,std::shared_ptr<java::lang::String> name);
	void virtual getCharNameCharacters(std::shared_ptr<android::icu::text::UnicodeSet> set);
	std::shared_ptr<java::lang::String> virtual getExtendedName(int ch);
	std::shared_ptr<java::lang::String> virtual getExtendedOr10Name(int ch);
	int virtual getGroup(int codepoint);
	int virtual getGroupLengths(int index,std::shared_ptr<char[]> offsets,std::shared_ptr<char[]> lengths);
	int virtual getGroupMSB(int gindex);
	std::shared_ptr<java::lang::String> virtual getGroupName(int ch,int choice);
	std::shared_ptr<java::lang::String> virtual getGroupName(int index,int length,int choice);
	void virtual getISOCommentCharacters(std::shared_ptr<android::icu::text::UnicodeSet> set);
	int virtual getMaxCharNameLength();
	int virtual getMaxISOCommentLength();
	std::shared_ptr<java::lang::String> virtual getName(int ch,int choice);
	bool virtual setAlgorithm(std::shared_ptr<std::vector<android::icu::impl::UCharacterName_S_AlgorithmName>> alg);
	bool virtual setGroup(std::shared_ptr<char[]> group,std::shared_ptr<unsigned char[]> groupstring);
	bool virtual setGroupCountSize(int count,int size);
	bool virtual setToken(std::shared_ptr<char[]> token,std::shared_ptr<unsigned char[]> tokenstring);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::UCharacterName::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UCharacterName(){
	}

}; // class UCharacterName
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterName__

