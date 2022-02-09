// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SourceTargetUtility.smali
#include "java2ctype.h"
#include "android.icu.lang.CharSequences.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.SourceTargetUtility.h"
#include "android.icu.text.Transform.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.Set.h"

static android::icu::text::SourceTargetUtility::NFC;
static android::icu::text::SourceTargetUtility::NON_STARTERS;
// .method static constructor <clinit>()V
void android::icu::text::SourceTargetUtility::static_cinit()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[:^ccc=0:]")));
	android::icu::text::SourceTargetUtility::NON_STARTERS = cVar0->freeze();
	android::icu::text::SourceTargetUtility::NFC = android::icu::text::Normalizer2::getNFCInstance({const[class].FS-Param});
	return;

}
// .method public constructor <init>(Landroid/icu/text/Transform;)V
android::icu::text::SourceTargetUtility::SourceTargetUtility(std::shared_ptr<android::icu::text::Transform<java::lang::String,java::lang::String>> transform)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 071        value = {
	// 072            "(",
	// 073            "Landroid/icu/text/Transform",
	// 074            "<",
	// 075            "Ljava/lang/String;",
	// 076            "Ljava/lang/String;",
	// 077            ">;)V"
	// 078        }
	// 079    .end annotation
	//    .local p1, "transform":Landroid/icu/text/Transform;, "Landroid/icu/text/Transform<Ljava/lang/String;Ljava/lang/String;>;"
	android::icu::text::SourceTargetUtility::(transform, 0x0);
	return;

}
// .method public constructor <init>(Landroid/icu/text/Transform;Landroid/icu/text/Normalizer2;)V
android::icu::text::SourceTargetUtility::SourceTargetUtility(std::shared_ptr<android::icu::text::Transform<java::lang::String,java::lang::String>> transform,std::shared_ptr<android::icu::text::Normalizer2> normalizer)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<java::util::HashSet> cVar1;
	int i;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::Object> d;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	
	//    .param p2, "normalizer"    # Landroid/icu/text/Normalizer2;
	//    .annotation system Ldalvik/annotation/Signature;
	// 096        value = {
	// 097            "(",
	// 098            "Landroid/icu/text/Transform",
	// 099            "<",
	// 100            "Ljava/lang/String;",
	// 101            "Ljava/lang/String;",
	// 102            ">;",
	// 103            "Landroid/icu/text/Normalizer2;",
	// 104            ")V"
	// 105        }
	// 106    .end annotation
	//    .local p1, "transform":Landroid/icu/text/Transform;, "Landroid/icu/text/Transform<Ljava/lang/String;Ljava/lang/String;>;"
	// 111    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->transform = transform;
	if ( !(normalizer) )  
		goto label_cond_3a;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[:^ccc=0:]")));
	this->sourceCache = cVar0;
label_goto_11:
	cVar1 = std::make_shared<java::util::HashSet>();
	this->sourceStrings = cVar1;
	i = 0x0;
	//    .local v2, "i":I
label_goto_19:
	if ( i >  0x10ffff )
		goto label_cond_69;
	s = transform->transform(android::icu::text::UTF16::valueOf(i));
	s->checkCast("java::lang::String");
	//    .local v3, "s":Ljava/lang/String;
	0x0;
	//    .local v0, "added":Z
	if ( android::icu::lang::CharSequences::equals(i, s) )     
		goto label_cond_35;
	this->sourceCache->add(i);
label_cond_35:
	if ( normalizer )     
		goto label_cond_42;
label_cond_37:
label_goto_37:
	i = ( i + 0x1);
	goto label_goto_19;
	// 187    .line 61
	// 188    .end local v0    # "added":Z
	// 189    .end local v2    # "i":I
	// 190    .end local v3    # "s":Ljava/lang/String;
label_cond_3a:
	cVar2 = std::make_shared<android::icu::text::UnicodeSet>();
	this->sourceCache = cVar2;
	goto label_goto_11;
	// 200    .line 74
	// 201    .restart local v0    # "added":Z
	// 202    .restart local v2    # "i":I
	// 203    .restart local v3    # "s":Ljava/lang/String;
label_cond_42:
	d = android::icu::text::SourceTargetUtility::NFC->getDecomposition(i);
	//    .local v1, "d":Ljava/lang/String;
	if ( !(d) )  
		goto label_cond_37;
	s = transform->transform(d);
	//    .end local v3    # "s":Ljava/lang/String;
	s->checkCast("java::lang::String");
	//    .restart local v3    # "s":Ljava/lang/String;
	if ( d->equals(s) )     
		goto label_cond_5b;
	this->sourceStrings->add(d);
label_cond_5b:
	if ( 0x1 )     
		goto label_cond_37;
	if ( normalizer->isInert(i) )     
		goto label_cond_37;
	this->sourceCache->add(i);
	goto label_goto_37;
	// 254    .line 114
	// 255    .end local v0    # "added":Z
	// 256    .end local v1    # "d":Ljava/lang/String;
	// 257    .end local v3    # "s":Ljava/lang/String;
label_cond_69:
	this->sourceCache->freeze();
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/Transliterator;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::SourceTargetUtility::addSourceTargetSet(std::shared_ptr<android::icu::text::Transliterator> transliterator,std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> myFilter;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> affectedCharacters;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::CharSequence> cVar1;
	std::shared_ptr<java::lang::String> t;
	
	//    .param p1, "transliterator"    # Landroid/icu/text/Transliterator;
	//    .param p2, "inputFilter"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p4, "targetSet"    # Landroid/icu/text/UnicodeSet;
	myFilter = transliterator->getFilterAsUnicodeSet(inputFilter);
	//    .local v1, "myFilter":Landroid/icu/text/UnicodeSet;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(this->sourceCache);
	affectedCharacters = cVar0->retainAll(myFilter);
	//    .local v0, "affectedCharacters":Landroid/icu/text/UnicodeSet;
	sourceSet->addAll(affectedCharacters);
	s_S_iterator = affectedCharacters->iterator();
	//    .local v3, "s$iterator":Ljava/util/Iterator;
label_goto_16:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_2e;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .local v2, "s":Ljava/lang/String;
	cVar1 = this->transform->transform(s);
	cVar1->checkCast("java::lang::CharSequence");
	targetSet->addAll(cVar1);
	goto label_goto_16;
	// 331    .line 125
	// 332    .end local v2    # "s":Ljava/lang/String;
label_cond_2e:
	s_S_iterator = this->sourceStrings->iterator();
label_cond_34:
label_goto_34:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_5b;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .restart local v2    # "s":Ljava/lang/String;
	if ( !(myFilter->containsAll(s)) )  
		goto label_cond_34;
	t = this->transform->transform(s);
	t->checkCast("java::lang::String");
	//    .local v4, "t":Ljava/lang/String;
	if ( s->equals(t) )     
		goto label_cond_34;
	targetSet->addAll(t);
	sourceSet->addAll(s);
	goto label_goto_34;
	// 387    .line 134
	// 388    .end local v2    # "s":Ljava/lang/String;
	// 389    .end local v4    # "t":Ljava/lang/String;
label_cond_5b:
	return;

}


