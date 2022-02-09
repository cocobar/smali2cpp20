// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$ScriptSet.smali
#include "java2ctype.h"
#include "android.icu.lang.UScript.h"
#include "android.icu.text.SpoofChecker_S_ScriptSet.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::SpoofChecker_S_ScriptSet::serialVersionUID = 0x1L;
// .method constructor <init>()V
android::icu::text::SpoofChecker_S_ScriptSet::SpoofChecker_S_ScriptSet()
{
	
	// 027    invoke-direct {p0}, Ljava/util/BitSet;-><init>()V
	return;

}
// .method public and(I)V
void android::icu::text::SpoofChecker_S_ScriptSet::and(int script)
{
	
	//    .param p1, "script"    # I
	this->clear(0x0, script);
	this->clear(( script + 0x1), 0xaf);
	return;

}
// .method public appendStringTo(Ljava/lang/StringBuilder;)V
void android::icu::text::SpoofChecker_S_ScriptSet::appendStringTo(std::shared_ptr<java::lang::StringBuilder> sb)
{
	
	int script;
	
	//    .param p1, "sb"    # Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("{ ")));
	if ( !(this->isEmpty()) )  
		goto label_cond_19;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("- ")));
label_cond_12:
label_goto_12:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}")));
	return;
	// 087    .line 1950
label_cond_19:
	if ( !(this->isFull()) )  
		goto label_cond_26;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("* ")));
	goto label_goto_12;
	// 102    .line 1953
label_cond_26:
	script = 0x0;
	//    .local v0, "script":I
label_goto_27:
	if ( script >= 0xaf )
		goto label_cond_12;
	if ( !(this->get(script)) )  
		goto label_cond_3e;
	sb->append(android::icu::lang::UScript::getShortName(script));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")));
label_cond_3e:
	script = ( script + 0x1);
	goto label_goto_27;

}
// .method public isFull()Z
bool android::icu::text::SpoofChecker_S_ScriptSet::isFull()
{
	
	bool cVar0;
	
	if ( this->cardinality() != 0xaf )
		goto label_cond_a;
	cVar0 = 0x1;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public setAll()V
void android::icu::text::SpoofChecker_S_ScriptSet::setAll()
{
	
	this->set(0x0, 0xaf);
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SpoofChecker_S_ScriptSet::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("<ScriptSet ")));
	this->appendStringTo(sb);
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(">")));
	return sb->toString();

}


