#ifndef __java_lang_Iterable__
#define __java_lang_Iterable__
// H L:\smali2cpp20\x64\Release\out\java\lang\Iterable.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.util.Iterator.h"
#include "java.util.Objects.h"
#include "java.util.Spliterator.h"
#include "java.util.Spliterators.h"
#include "java.util.function.Consumer.h"

namespace java::lang{
template <typename T>
class Iterable : public java::lang::Object {
protected:
private:
public:
	void forEach(std::shared_ptr<java::util::function::Consumer<T>> action);
	std::shared_ptr<java::util::Iterator<T>> iterator();
	std::shared_ptr<java::util::Spliterator<T>> spliterator();
	Iterable(){ };
	virtual ~Iterable(){ };

}; // class Iterable
}; // namespace java::lang
// .method public forEach(Ljava/util/function/Consumer;)V
template <typename T>
void java::lang::Iterable<T>::forEach(std::shared_ptr<java::util::function::Consumer<T>> action)
{
	
	std::shared_ptr<java::util::Iterator> t_S_iterator;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 021        value = {
	// 022            "(",
	// 023            "Ljava/util/function/Consumer",
	// 024            "<-TT;>;)V"
	// 025        }
	// 026    .end annotation
	//    .local p0, "this":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	//    .local p1, "action":Ljava/util/function/Consumer;, "Ljava/util/function/Consumer<-TT;>;"
	java::util::Objects::requireNonNull(action);
	t_S_iterator = this->iterator();
	//    .local v1, "t$iterator":Ljava/util/Iterator;
	label_goto_7:
	if ( !(t_S_iterator->hasNext()) )  
		goto label_cond_15;
	//    .local v0, "t":Ljava/lang/Object;, "TT;"
	action->accept(t_S_iterator->next());
	goto label_goto_7;
	// 057    .line 77
	// 058    .end local v0    # "t":Ljava/lang/Object;, "TT;"
	label_cond_15:
	return;

}
// .method public abstract iterator()Ljava/util/Iterator;
template <typename T>
std::shared_ptr<java::util::Iterator<T>> java::lang::Iterable<T>::iterator()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 065        value = {
	// 066            "()",
	// 067            "Ljava/util/Iterator",
	// 068            "<TT;>;"
	// 069        }
	// 070    .end annotation

}
// .method public spliterator()Ljava/util/Spliterator;
template <typename T>
std::shared_ptr<java::util::Spliterator<T>> java::lang::Iterable<T>::spliterator()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 076        value = {
	// 077            "()",
	// 078            "Ljava/util/Spliterator",
	// 079            "<TT;>;"
	// 080        }
	// 081    .end annotation
	//    .local p0, "this":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	return java::util::Spliterators::spliteratorUnknownSize(this->iterator(), 0x0);

}

#endif //__java_lang_Iterable__

