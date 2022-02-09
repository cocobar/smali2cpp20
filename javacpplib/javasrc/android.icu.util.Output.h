#ifndef __android_icu_util_Output__
#define __android_icu_util_Output__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Output.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
template <typename T>
class Output : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<T> value;
	Output();
	Output(std::shared_ptr<T> value);
	std::shared_ptr<java::lang::String> toString();
public:
	virtual ~Output(){
	}

}; // class Output
}; // namespace android::icu::util
// .method public constructor <init>()V
template <typename T>
android::icu::util::Output<T>::Output()
{
	
	//    .local p0, "this":Landroid/icu/util/Output;, "Landroid/icu/util/Output<TT;>;"
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/Object;)V
template <typename T>
android::icu::util::Output<T>::Output(std::shared_ptr<T> value)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 043        value = {
	// 044            "(TT;)V"
	// 045        }
	// 046    .end annotation
	//    .local p0, "this":Landroid/icu/util/Output;, "Landroid/icu/util/Output<TT;>;"
	//    .local p1, "value":Ljava/lang/Object;, "TT;"
	// 052    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->value = value;
	return;

}
// .method public toString()Ljava/lang/String;
template <typename T>
std::shared_ptr<java::lang::String> android::icu::util::Output<T>::toString()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .local p0, "this":Landroid/icu/util/Output;, "Landroid/icu/util/Output<TT;>;"
	if ( this->value )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("null"));
	label_goto_7:
	return cVar0;
	label_cond_8:
	cVar0 = this->value->toString();
	goto label_goto_7;

}

#endif //__android_icu_util_Output__

