// CPP L:\smali2cpp20\x64\Release\out\java\lang\-$Lambda$S9HjrJh0nDg7IyU6wZdPArnZWRQ.smali
#include "java2ctype.h"
#include "java.lang.__S_Lambda_S_S9HjrJh0nDg7IyU6wZdPArnZWRQ.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.util.Spliterator_S_OfInt.h"

// .method private final synthetic $m$0()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::lang::__S_Lambda_S_S9HjrJh0nDg7IyU6wZdPArnZWRQ::_S_m_S_0()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	cVar0 = this->__S_f0;
	cVar0->checkCast("java::lang::CharSequence");
	return cVar0->lambda$-java_lang_CharSequence_6032();

}
// .method private final synthetic $m$1()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::lang::__S_Lambda_S_S9HjrJh0nDg7IyU6wZdPArnZWRQ::_S_m_S_1()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	cVar0 = this->__S_f0;
	cVar0->checkCast("java::lang::CharSequence");
	return cVar0->lambda$-java_lang_CharSequence_8746();

}
// .method public synthetic constructor <init>(BLjava/lang/Object;)V
java::lang::__S_Lambda_S_S9HjrJh0nDg7IyU6wZdPArnZWRQ::__S_Lambda_S_S9HjrJh0nDg7IyU6wZdPArnZWRQ(unsigned char var0,std::shared_ptr<java::lang::Object> var1)
{
	
	// 049    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_S_id = var0;
	this->__S_f0 = var1;
	return;

}
// .method public final get()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::lang::__S_Lambda_S_S9HjrJh0nDg7IyU6wZdPArnZWRQ::get()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	// switch
	{
	auto item = ( this->_S_id );
	if (item == 0) goto label_pswitch_b;
	if (item == 1) goto label_pswitch_10;
	}
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
label_pswitch_b:
	return this->$m$0();
label_pswitch_10:
	return this->$m$1();
	// 088    nop
	// 090    :pswitch_data_16
	// 091    .packed-switch 0x0
	// 092        :pswitch_b
	// 093        :pswitch_10
	// 094    .end packed-switch

}


