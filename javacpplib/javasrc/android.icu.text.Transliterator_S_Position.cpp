// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Transliterator$Position.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "java.lang.AssertionError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::Transliterator_S_Position::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::text::Transliterator_S_Position::static_cinit()
{
	
	android::icu::text::Transliterator_S_Position::_assertionsDisabled = ( android::icu::text::Transliterator_S_Position()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>()V
android::icu::text::Transliterator_S_Position::Transliterator_S_Position()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	android::icu::text::Transliterator_S_Position::(cVar0, cVar0, cVar0, cVar0);
	return;

}
// .method public constructor <init>(III)V
android::icu::text::Transliterator_S_Position::Transliterator_S_Position(int contextStart,int contextLimit,int start)
{
	
	//    .param p1, "contextStart"    # I
	//    .param p2, "contextLimit"    # I
	//    .param p3, "start"    # I
	android::icu::text::Transliterator_S_Position::(contextStart, contextLimit, start, contextLimit);
	return;

}
// .method public constructor <init>(IIII)V
android::icu::text::Transliterator_S_Position::Transliterator_S_Position(int contextStart,int contextLimit,int start,int limit)
{
	
	//    .param p1, "contextStart"    # I
	//    .param p2, "contextLimit"    # I
	//    .param p3, "start"    # I
	//    .param p4, "limit"    # I
	// 086    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->contextStart = contextStart;
	this->contextLimit = contextLimit;
	this->start = start;
	this->limit = limit;
	return;

}
// .method public constructor <init>(Landroid/icu/text/Transliterator$Position;)V
android::icu::text::Transliterator_S_Position::Transliterator_S_Position(std::shared_ptr<android::icu::text::Transliterator_S_Position> pos)
{
	
	//    .param p1, "pos"    # Landroid/icu/text/Transliterator$Position;
	// 110    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->set(pos);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::Transliterator_S_Position::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::Transliterator_S_Position> pos;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(obj->instanceOf("android::icu::text::Transliterator_S_Position")) )  
		goto label_cond_22;
	pos = obj;
	pos->checkCast("android::icu::text::Transliterator_S_Position");
	//    .local v0, "pos":Landroid/icu/text/Transliterator$Position;
	if ( this->contextStart != pos->contextStart )
		goto label_cond_21;
	if ( this->contextLimit != pos->contextLimit )
		goto label_cond_21;
	if ( this->start != pos->start )
		goto label_cond_21;
	if ( this->limit != pos->limit )
		goto label_cond_21;
	cVar1 = 0x1;
label_cond_21:
	return cVar1;
	// 173    .line 362
	// 174    .end local v0    # "pos":Landroid/icu/text/Transliterator$Position;
label_cond_22:
	return cVar1;

}
// .method public hashCode()I
int android::icu::text::Transliterator_S_Position::hashCode()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 182    .end annotation
	if ( android::icu::text::Transliterator_S_Position::_assertionsDisabled )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hashCode not designed")));
	// throw
	throw cVar0;
	// 198    .line 375
label_cond_d:
	return 0x2a;

}
// .method public set(Landroid/icu/text/Transliterator$Position;)V
void android::icu::text::Transliterator_S_Position::set(std::shared_ptr<android::icu::text::Transliterator_S_Position> pos)
{
	
	//    .param p1, "pos"    # Landroid/icu/text/Transliterator$Position;
	this->contextStart = pos->contextStart;
	this->contextLimit = pos->contextLimit;
	this->start = pos->start;
	this->limit = pos->limit;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Transliterator_S_Position::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[cs=")))->append(this->contextStart)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", s=")))->append(this->start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", l=")))->append(this->limit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", cl=")))->append(this->contextLimit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString();

}
// .method public final validate(I)V
void android::icu::text::Transliterator_S_Position::validate(int length)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "length"    # I
	if ( this->contextStart < 0 ) 
		goto label_cond_a;
	if ( this->start >= this->contextStart )
		goto label_cond_58;
label_cond_a:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid Position {cs=")))->append(this->contextStart)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", s=")))->append(this->start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", l=")))->append(this->limit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", cl=")))->append(this->contextLimit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}, len=")))->append(length)->toString());
	// throw
	throw cVar0;
	// 425    .line 399
label_cond_58:
	if ( this->limit <  this->start )
		goto label_cond_a;
	if ( this->contextLimit <  this->limit )
		goto label_cond_a;
	if ( length <  this->contextLimit )
		goto label_cond_a;
	return;

}


