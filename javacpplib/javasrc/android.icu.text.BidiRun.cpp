// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BidiRun.smali
#include "java2ctype.h"
#include "android.icu.text.BidiRun.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method constructor <init>()V
android::icu::text::BidiRun::BidiRun()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	android::icu::text::BidiRun::(cVar0, cVar0, cVar0);
	return;

}
// .method constructor <init>(IIB)V
android::icu::text::BidiRun::BidiRun(int start,int limit,unsigned char embeddingLevel)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "embeddingLevel"    # B
	// 038    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->start = start;
	this->limit = limit;
	this->level = embeddingLevel;
	return;

}
// .method copyFrom(Landroid/icu/text/BidiRun;)V
void android::icu::text::BidiRun::copyFrom(std::shared_ptr<android::icu::text::BidiRun> run)
{
	
	//    .param p1, "run"    # Landroid/icu/text/BidiRun;
	this->start = run->start;
	this->limit = run->limit;
	this->level = run->level;
	this->insertRemove = run->insertRemove;
	return;

}
// .method public getDirection()B
unsigned char android::icu::text::BidiRun::getDirection()
{
	
	return (unsigned char)(( this->level & 0x1));

}
// .method public getEmbeddingLevel()B
unsigned char android::icu::text::BidiRun::getEmbeddingLevel()
{
	
	return this->level;

}
// .method public getLength()I
int android::icu::text::BidiRun::getLength()
{
	
	return (this->limit -  this->start);

}
// .method public getLimit()I
int android::icu::text::BidiRun::getLimit()
{
	
	return this->limit;

}
// .method public getStart()I
int android::icu::text::BidiRun::getStart()
{
	
	return this->start;

}
// .method public isEvenRun()Z
bool android::icu::text::BidiRun::isEvenRun()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( ( this->level & 0x1) )     
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method public isOddRun()Z
bool android::icu::text::BidiRun::isOddRun()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
	if ( ( this->level & 0x1) != cVar0 )
		goto label_cond_8;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::BidiRun::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("BidiRun ")))->append(this->start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" - ")))->append(this->limit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" @ ")))->append(this->level)->toString();

}


