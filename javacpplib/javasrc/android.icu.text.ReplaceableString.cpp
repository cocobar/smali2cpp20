// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ReplaceableString.smali
#include "java2ctype.h"
#include "android.icu.text.ReplaceableString.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

// .method public constructor <init>()V
android::icu::text::ReplaceableString::ReplaceableString()
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	
	// 019    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::lang::StringBuffer>();
	this->buf = cVar0;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::ReplaceableString::ReplaceableString(std::shared_ptr<java::lang::String> str)
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	
	//    .param p1, "str"    # Ljava/lang/String;
	// 038    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::lang::StringBuffer>(str);
	this->buf = cVar0;
	return;

}
// .method public constructor <init>(Ljava/lang/StringBuffer;)V
android::icu::text::ReplaceableString::ReplaceableString(std::shared_ptr<java::lang::StringBuffer> buf)
{
	
	//    .param p1, "buf"    # Ljava/lang/StringBuffer;
	// 057    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->buf = buf;
	return;

}
// .method public char32At(I)I
int android::icu::text::ReplaceableString::char32At(int offset)
{
	
	//    .param p1, "offset"    # I
	return android::icu::text::UTF16::charAt(this->buf, offset);

}
// .method public charAt(I)C
char android::icu::text::ReplaceableString::charAt(int offset)
{
	
	//    .param p1, "offset"    # I
	return this->buf->charAt(offset);

}
// .method public copy(III)V
void android::icu::text::ReplaceableString::copy(int start,int limit,int dest)
{
	
	int cVar0;
	std::shared<std::vector<char[]>> text;
	
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "dest"    # I
	cVar0 = 0x0;
	if ( start != limit )
		goto label_cond_e;
	if ( start < 0 ) 
		goto label_cond_e;
	if ( start >  this->buf->length() )
		goto label_cond_e;
	return;
	// 123    .line 176
label_cond_e:
	text = std::make_shared<std::vector<char[]>>((limit - start));
	//    .local v3, "text":[C
	this->getChars(start, limit, text, cVar0);
	this->replace(dest, dest, text, cVar0, (limit - start));
	return;

}
// .method public getChars(II[CI)V
void android::icu::text::ReplaceableString::getChars(int srcStart,int srcLimit,std::shared_ptr<char[]> dst,int dstStart)
{
	
	//    .param p1, "srcStart"    # I
	//    .param p2, "srcLimit"    # I
	//    .param p3, "dst"    # [C
	//    .param p4, "dstStart"    # I
	if ( srcStart == srcLimit )
		goto label_cond_7;
	this->buf->getChars(srcStart, srcLimit, dst, dstStart);
label_cond_7:
	return;

}
// .method public hasMetaData()Z
bool android::icu::text::ReplaceableString::hasMetaData()
{
	
	return 0x0;

}
// .method public length()I
int android::icu::text::ReplaceableString::length()
{
	
	return this->buf->length();

}
// .method public replace(IILjava/lang/String;)V
void android::icu::text::ReplaceableString::replace(int start,int limit,std::shared_ptr<java::lang::String> text)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "text"    # Ljava/lang/String;
	this->buf->replace(start, limit, text);
	return;

}
// .method public replace(II[CII)V
void android::icu::text::ReplaceableString::replace(int start,int limit,std::shared_ptr<char[]> chars,int charsStart,int charsLen)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "chars"    # [C
	//    .param p4, "charsStart"    # I
	//    .param p5, "charsLen"    # I
	this->buf->delete(start, limit);
	this->buf->insert(start, chars, charsStart, charsLen);
	return;

}
// .method public substring(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ReplaceableString::substring(int start,int limit)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	return this->buf->substring(start, limit);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ReplaceableString::toString()
{
	
	return this->buf->toString();

}


