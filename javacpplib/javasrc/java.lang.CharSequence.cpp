// CPP L:\smali2cpp20\x64\Release\out\java\lang\CharSequence.smali
#include "java2ctype.h"
#include "java.lang.__S_Lambda_S_S9HjrJh0nDg7IyU6wZdPArnZWRQ.h"
#include "java.lang.CharSequence_S_1CharIterator.h"
#include "java.lang.CharSequence_S_1CodePointIterator.h"
#include "java.lang.CharSequence.h"
#include "java.util.Spliterator_S_OfInt.h"
#include "java.util.Spliterators.h"
#include "java.util.stream.IntStream.h"
#include "java.util.stream.StreamSupport.h"

// .method public chars()Ljava/util/stream/IntStream;
std::shared_ptr<java::util::stream::IntStream> java::lang::CharSequence::chars()
{
	
	unsigned char cVar0;
	std::shared_ptr<java::lang::__S_Lambda_S_S9HjrJh0nDg7IyU6wZdPArnZWRQ> cVar1;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<java::lang::__S_Lambda_S_S9HjrJh0nDg7IyU6wZdPArnZWRQ>(cVar0, this);
	return java::util::stream::StreamSupport::intStream(cVar1, 0x4050, cVar0);

}
// .method public codePoints()Ljava/util/stream/IntStream;
std::shared_ptr<java::util::stream::IntStream> java::lang::CharSequence::codePoints()
{
	
	std::shared_ptr<java::lang::__S_Lambda_S_S9HjrJh0nDg7IyU6wZdPArnZWRQ> cVar0;
	
	cVar0 = std::make_shared<java::lang::__S_Lambda_S_S9HjrJh0nDg7IyU6wZdPArnZWRQ>(0x1, this);
	return java::util::stream::StreamSupport::intStream(cVar0, 0x10, 0x0);

}
// .method public synthetic lambda$-java_lang_CharSequence_6032()Ljava/util/Spliterator$OfInt;
std::shared_ptr<java::util::Spliterator_S_OfInt> java::lang::CharSequence::lambda_S__java_lang_CharSequence_6032()
{
	
	std::shared_ptr<java::lang::CharSequence_S_1CharIterator> cVar0;
	
	cVar0 = std::make_shared<java::lang::CharSequence_S_1CharIterator>(this);
	return java::util::Spliterators::spliterator(cVar0, (long long)(this->length()), 0x10);

}
// .method public synthetic lambda$-java_lang_CharSequence_8746()Ljava/util/Spliterator$OfInt;
std::shared_ptr<java::util::Spliterator_S_OfInt> java::lang::CharSequence::lambda_S__java_lang_CharSequence_8746()
{
	
	std::shared_ptr<java::lang::CharSequence_S_1CodePointIterator> cVar0;
	
	cVar0 = std::make_shared<java::lang::CharSequence_S_1CodePointIterator>(this);
	return java::util::Spliterators::spliteratorUnknownSize(cVar0, 0x10);

}


