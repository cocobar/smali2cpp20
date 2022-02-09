// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CanonicalIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_DecomposeNormalizer2.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.CanonicalIterator.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.Normalizer.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.text.UnicodeSetIterator.h"
#include "java.io.PrintStream.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.ArrayList.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.Set.h"

static android::icu::text::CanonicalIterator::PROGRESS;
static android::icu::text::CanonicalIterator::SET_WITH_NULL_STRING;
static android::icu::text::CanonicalIterator::SKIP_ZEROS;
// .method static constructor <clinit>()V
void android::icu::text::CanonicalIterator::static_cinit()
{
	
	std::shared_ptr<java::util::HashSet> cVar0;
	
	android::icu::text::CanonicalIterator::PROGRESS = 0x0;
	android::icu::text::CanonicalIterator::SKIP_ZEROS = 0x1;
	cVar0 = std::make_shared<java::util::HashSet>();
	android::icu::text::CanonicalIterator::SET_WITH_NULL_STRING = cVar0;
	android::icu::text::CanonicalIterator::SET_WITH_NULL_STRING->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::CanonicalIterator::CanonicalIterator(std::shared_ptr<java::lang::String> source)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_DecomposeNormalizer2> allModes;
	
	//    .param p1, "source"    # Ljava/lang/String;
	// 078    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->buffer = cVar0;
	allModes = android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param});
	//    .local v0, "allModes":Landroid/icu/impl/Norm2AllModes;
	this->nfd = allModes->decomp;
	this->nfcImpl = allModes->impl->ensureCanonIterData();
	this->setSource(source);
	return;

}
// .method private extract(ILjava/lang/String;ILjava/lang/StringBuffer;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::CanonicalIterator::extract(int comp,std::shared_ptr<java::lang::String> segment,int segmentPos,std::shared_ptr<java::lang::StringBuffer> buf)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> decomp;
	int decompPos;
	int decompCp;
	int i;
	int cp;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> remainder;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "comp"    # I
	//    .param p2, "segment"    # Ljava/lang/String;
	//    .param p3, "segmentPos"    # I
	//    .param p4, "buf"    # Ljava/lang/StringBuffer;
	//    .annotation system Ldalvik/annotation/Signature;
	// 121        value = {
	// 122            "(I",
	// 123            "Ljava/lang/String;",
	// 124            "I",
	// 125            "Ljava/lang/StringBuffer;",
	// 126            ")",
	// 127            "Ljava/util/Set",
	// 128            "<",
	// 129            "Ljava/lang/String;",
	// 130            ">;"
	// 131        }
	// 132    .end annotation
	if ( !(android::icu::text::CanonicalIterator::PROGRESS) )  
		goto label_cond_38;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" extract: ")))->append(android::icu::impl::Utility::hex(android::icu::text::UTF16::valueOf(comp)))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(android::icu::impl::Utility::hex(segment->substring(segmentPos)))->toString());
label_cond_38:
	decomp = this->nfcImpl->getDecomposition(comp);
	//    .local v1, "decomp":Ljava/lang/String;
	if ( decomp )     
		goto label_cond_44;
	decomp = android::icu::text::UTF16::valueOf(comp);
label_cond_44:
	//    .local v5, "ok":Z
	decompPos = 0x0;
	//    .local v3, "decompPos":I
	decompCp = android::icu::text::UTF16::charAt(decomp, 0x0);
	//    .local v2, "decompCp":I
	decompPos = ( android::icu::text::UTF16::getCharCount(decompCp) + 0x0);
	buf->setLength(0x0);
	i = segmentPos;
	//    .local v4, "i":I
label_goto_56:
	if ( i >= segment->length() )
		goto label_cond_9a;
	cp = android::icu::text::UTF16::charAt(segment, i);
	//    .local v0, "cp":I
	if ( cp != decompCp )
		goto label_cond_ad;
	if ( !(android::icu::text::CanonicalIterator::PROGRESS) )  
		goto label_cond_87;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  matches: ")))->append(android::icu::impl::Utility::hex(android::icu::text::UTF16::valueOf(cp)))->toString());
label_cond_87:
	if ( decompPos != decomp->length() )
		goto label_cond_9e;
	buf->append(segment->substring((android::icu::text::UTF16::getCharCount(cp) +  i)));
	//    .end local v0    # "cp":I
label_cond_9a:
	if ( 0x0 )     
		goto label_cond_d6;
	return 0x0;
	// 326    .line 391
	// 327    .restart local v0    # "cp":I
label_cond_9e:
	decompCp = android::icu::text::UTF16::charAt(decomp, decompPos);
	decompPos = (decompPos +  android::icu::text::UTF16::getCharCount(decompCp));
label_goto_a7:
	i = (i +  android::icu::text::UTF16::getCharCount(cp));
	goto label_goto_56;
	// 350    .line 395
label_cond_ad:
	if ( !(android::icu::text::CanonicalIterator::PROGRESS) )  
		goto label_cond_d2;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  buffer: ")))->append(android::icu::impl::Utility::hex(android::icu::text::UTF16::valueOf(cp)))->toString());
label_cond_d2:
	android::icu::text::UTF16::append(buf, cp);
	goto label_goto_a7;
	// 392    .line 412
	// 393    .end local v0    # "cp":I
label_cond_d6:
	if ( !(android::icu::text::CanonicalIterator::PROGRESS) )  
		goto label_cond_e2;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Matches")));
label_cond_e2:
	if ( buf->length() )     
		goto label_cond_eb;
	return android::icu::text::CanonicalIterator::SET_WITH_NULL_STRING;
	// 417    .line 414
label_cond_eb:
	remainder = buf->toString();
	//    .local v6, "remainder":Ljava/lang/String;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	if ( !(android::icu::text::Normalizer::compare(cVar3->append(android::icu::text::UTF16::valueOf(comp))->append(remainder)->toString(), segment->substring(segmentPos), 0x0)) )  
		goto label_cond_111;
	return 0x0;
	// 461    .line 426
label_cond_111:
	return this->getEquivalents2(remainder);

}
// .method private getEquivalents(Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CanonicalIterator::getEquivalents(std::shared_ptr<java::lang::String> segment)
{
	
	std::shared_ptr<java::util::HashSet> result;
	std::shared_ptr<java::util::HashSet> permutations;
	std::shared_ptr<java::util::Iterator> it;
	std::shared_ptr<java::lang::String> item;
	std::shared_ptr<java::util::Iterator> it2;
	std::shared_ptr<java::lang::String> possible;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared<std::vector<std::vector<java::lang::String>>> finalResult;
	
	//    .param p1, "segment"    # Ljava/lang/String;
	result = std::make_shared<java::util::HashSet>();
	//    .local v7, "result":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .local v0, "basic":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	permutations = std::make_shared<java::util::HashSet>();
	//    .local v5, "permutations":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	it = this->getEquivalents2(segment)->iterator();
	//    .local v2, "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
label_cond_13:
	if ( !(it->hasNext()) )  
		goto label_cond_84;
	item = it->next();
	item->checkCast("java::lang::String");
	//    .local v4, "item":Ljava/lang/String;
	permutations->clear();
	android::icu::text::CanonicalIterator::permute(item, android::icu::text::CanonicalIterator::SKIP_ZEROS, permutations);
	it2 = permutations->iterator();
	//    .local v3, "it2":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
label_cond_2b:
label_goto_2b:
	if ( !(it2->hasNext()) )  
		goto label_cond_13;
	possible = it2->next();
	possible->checkCast("java::lang::String");
	//    .local v6, "possible":Ljava/lang/String;
	if ( android::icu::text::Normalizer::compare(possible, segment, 0x0) )     
		goto label_cond_62;
	if ( !(android::icu::text::CanonicalIterator::PROGRESS) )  
		goto label_cond_5e;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Adding Permutation: ")))->append(android::icu::impl::Utility::hex(possible))->toString());
label_cond_5e:
	result->add(possible);
	goto label_goto_2b;
	// 592    .line 273
label_cond_62:
	if ( !(android::icu::text::CanonicalIterator::PROGRESS) )  
		goto label_cond_2b;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-Skipping Permutation: ")))->append(android::icu::impl::Utility::hex(possible))->toString());
	goto label_goto_2b;
	// 626    .line 279
	// 627    .end local v3    # "it2":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	// 628    .end local v4    # "item":Ljava/lang/String;
	// 629    .end local v6    # "possible":Ljava/lang/String;
label_cond_84:
	finalResult = std::make_shared<std::vector<std::vector<java::lang::String>>>(result->size());
	//    .local v1, "finalResult":[Ljava/lang/String;
	result->toArray(finalResult);
	return finalResult;

}
// .method private getEquivalents2(Ljava/lang/String;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::CanonicalIterator::getEquivalents2(std::shared_ptr<java::lang::String> segment)
{
	
	std::shared_ptr<java::util::HashSet> result;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuffer> workingBuffer;
	std::shared_ptr<android::icu::text::UnicodeSet> starts;
	int i;
	int cp;
	std::shared_ptr<android::icu::text::UnicodeSetIterator> iter;
	int cp2;
	std::shared_ptr<java::lang::Iterable> remainder;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::Iterator> item_S_iterator;
	std::shared_ptr<java::lang::String> item;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "segment"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 649        value = {
	// 650            "(",
	// 651            "Ljava/lang/String;",
	// 652            ")",
	// 653            "Ljava/util/Set",
	// 654            "<",
	// 655            "Ljava/lang/String;",
	// 656            ">;"
	// 657        }
	// 658    .end annotation
	result = std::make_shared<java::util::HashSet>();
	//    .local v8, "result":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(android::icu::text::CanonicalIterator::PROGRESS) )  
		goto label_cond_26;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Adding: ")))->append(android::icu::impl::Utility::hex(segment))->toString());
label_cond_26:
	result->add(segment);
	workingBuffer = std::make_shared<java::lang::StringBuffer>();
	//    .local v10, "workingBuffer":Ljava/lang/StringBuffer;
	starts = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v9, "starts":Landroid/icu/text/UnicodeSet;
	i = 0x0;
	//    .local v2, "i":I
label_goto_34:
	if ( i >= segment->length() )
		goto label_cond_9e;
	cp = segment->codePointAt(i);
	//    .local v0, "cp":I
	if ( this->nfcImpl->getCanonStartSet(cp, starts) )     
		goto label_cond_4c;
label_cond_46:
	i = (i +  java::lang::Character::charCount(cp));
	goto label_goto_34;
	// 750    .line 305
label_cond_4c:
	iter = std::make_shared<android::icu::text::UnicodeSetIterator>(starts);
	//    .local v5, "iter":Landroid/icu/text/UnicodeSetIterator;
label_cond_51:
	if ( !(iter->next()) )  
		goto label_cond_46;
	cp2 = iter->codepoint;
	//    .local v1, "cp2":I
	remainder = this->extract(cp2, segment, i, workingBuffer);
	//    .local v7, "remainder":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(remainder) )  
		goto label_cond_51;
	//    .local v6, "prefix":Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	item_S_iterator = remainder->iterator();
	//    .local v4, "item$iterator":Ljava/util/Iterator;
label_goto_7d:
	if ( !(item_S_iterator->hasNext()) )  
		goto label_cond_51;
	item = item_S_iterator->next();
	item->checkCast("java::lang::String");
	//    .local v3, "item":Ljava/lang/String;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	result->add(cVar2->append(cVar1->append(segment->substring(0x0, i))->append(android::icu::text::UTF16::valueOf(cp2))->toString())->append(item)->toString());
	goto label_goto_7d;
	// 847    .line 320
	// 848    .end local v0    # "cp":I
	// 849    .end local v1    # "cp2":I
	// 850    .end local v3    # "item":Ljava/lang/String;
	// 851    .end local v4    # "item$iterator":Ljava/util/Iterator;
	// 852    .end local v5    # "iter":Landroid/icu/text/UnicodeSetIterator;
	// 853    .end local v6    # "prefix":Ljava/lang/String;
	// 854    .end local v7    # "remainder":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_9e:
	return result;

}
// .method public static permute(Ljava/lang/String;ZLjava/util/Set;)V
void android::icu::text::CanonicalIterator::permute(std::shared_ptr<java::lang::String> source,bool skipZeros,std::shared_ptr<java::util::Set<java::lang::String>> output)
{
	
	std::shared_ptr<java::util::HashSet> subpermute;
	int i;
	int cp;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "skipZeros"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 864        value = {
	// 865            "(",
	// 866            "Ljava/lang/String;",
	// 867            "Z",
	// 868            "Ljava/util/Set",
	// 869            "<",
	// 870            "Ljava/lang/String;",
	// 871            ">;)V"
	// 872        }
	// 873    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 876    .end annotation
	//    .local p2, "output":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( source->length() >  0x2 )
		goto label_cond_13;
	if ( android::icu::text::UTF16::countCodePoint(source) >  0x1 )
		goto label_cond_13;
	output->add(source);
	return;
	// 905    .line 176
label_cond_13:
	subpermute = std::make_shared<java::util::HashSet>();
	//    .local v6, "subpermute":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	i = 0x0;
	//    .local v2, "i":I
label_goto_19:
	if ( i >= source->length() )
		goto label_cond_80;
	cp = android::icu::text::UTF16::charAt(source, i);
	//    .local v1, "cp":I
	if ( !(skipZeros) )  
		goto label_cond_33;
	if ( !(i) )  
		goto label_cond_33;
	if ( android::icu::lang::UCharacter::getCombiningClass(cp) )     
		goto label_cond_33;
label_cond_2d:
	i = (i +  android::icu::text::UTF16::getCharCount(cp));
	goto label_goto_19;
	// 950    .line 190
label_cond_33:
	subpermute->clear();
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	android::icu::text::CanonicalIterator::permute(cVar0->append(source->substring(0x0, i))->append(source->substring((android::icu::text::UTF16::getCharCount(cp) +  i)))->toString(), skipZeros, subpermute);
	//    .local v0, "chStr":Ljava/lang/String;
	s_S_iterator = subpermute->iterator();
	//    .local v5, "s$iterator":Ljava/util/Iterator;
label_goto_5f:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_2d;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .local v4, "s":Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "piece":Ljava/lang/String;
	output->add(cVar1->append(android::icu::text::UTF16::valueOf(source, i))->append(s)->toString());
	goto label_goto_5f;
	// 1038    .line 202
	// 1039    .end local v0    # "chStr":Ljava/lang/String;
	// 1040    .end local v1    # "cp":I
	// 1041    .end local v3    # "piece":Ljava/lang/String;
	// 1042    .end local v4    # "s":Ljava/lang/String;
	// 1043    .end local v5    # "s$iterator":Ljava/util/Iterator;
label_cond_80:
	return;

}
// .method public getSource()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CanonicalIterator::getSource()
{
	
	return this->source;

}
// .method public next()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CanonicalIterator::next()
{
	
	int cVar0;
	int i;
	std::shared_ptr<int[]> cVar1;
	
	cVar0 = 0x0;
	if ( !(this->done) )  
		goto label_cond_7;
	return 0x0;
	// 1075    .line 88
label_cond_7:
	this->buffer->setLength(cVar0);
	i = 0x0;
	//    .local v0, "i":I
label_goto_d:
	if ( i >= this->pieces->size() )
		goto label_cond_24;
	this->buffer->append(this->pieces[i][this->current[i]]);
	i = ( i + 0x1);
	goto label_goto_d;
	// 1112    .line 92
label_cond_24:
	//    .local v1, "result":Ljava/lang/String;
	i = ( this->current->size() + -0x1);
label_goto_2f:
	if ( i >= 0 )
		goto label_cond_35;
	this->done = 0x1;
label_cond_34:
	return this->buffer->toString();
	// 1141    .line 101
label_cond_35:
	cVar1 = this->current;
	cVar1[i] = ( cVar1[i] + 0x1);
	if ( this->current[i] <  this->pieces[i]->size() )
		goto label_cond_34;
	this->current[i] = cVar0;
	i = ( i + -0x1);
	goto label_goto_2f;

}
// .method public reset()V
void android::icu::text::CanonicalIterator::reset()
{
	
	bool cVar0;
	int i;
	
	cVar0 = 0x0;
	this->done = cVar0;
	i = 0x0;
	//    .local v0, "i":I
label_goto_4:
	if ( i >= this->current->size() )
		goto label_cond_10;
	this->current[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_4;
	// 1205    .line 75
label_cond_10:
	return;

}
// .method public setSource(Ljava/lang/String;)V
void android::icu::text::CanonicalIterator::setSource(std::shared_ptr<java::lang::String> newSource)
{
	
	int cVar0;
	bool cVar1;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar2;
	std::shared_ptr<java::util::ArrayList> segmentList;
	int start;
	int i;
	int cp;
	std::shared_ptr<java::lang::String> cVar3;
	
	//    .param p1, "newSource"    # Ljava/lang/String;
	cVar0 = 0x1;
	cVar1 = 0x0;
	this->source = this->nfd->normalize(newSource);
	this->done = cVar1;
	if ( newSource->length() )     
		goto label_cond_26;
	this->pieces = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(cVar0);
	this->current = std::make_shared<std::vector<int[]>>(cVar0);
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar2[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->pieces[cVar1] = cVar2;
	return;
	// 1262    .line 126
label_cond_26:
	segmentList = std::make_shared<java::util::ArrayList>();
	//    .local v2, "segmentList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	start = 0x0;
	//    .local v3, "start":I
	i = android::icu::text::UTF16::findOffsetFromCodePoint(this->source, cVar0);
	//    .local v1, "i":I
label_goto_32:
	if ( i >= this->source->length() )
		goto label_cond_58;
	cp = this->source->codePointAt(i);
	//    .local v0, "cp":I
	if ( !(this->nfcImpl->isCanonSegmentStarter(cp)) )  
		goto label_cond_52;
	segmentList->add(this->source->substring(start, i));
	start = i;
label_cond_52:
	i = (i +  java::lang::Character::charCount(cp));
	goto label_goto_32;
	// 1330    .line 142
	// 1331    .end local v0    # "cp":I
label_cond_58:
	segmentList->add(this->source->substring(start, i));
	this->pieces = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(segmentList->size());
	this->current = std::make_shared<std::vector<int[]>>(segmentList->size());
	i = 0x0;
label_goto_72:
	if ( i >= this->pieces->size() )
		goto label_cond_94;
	if ( !(android::icu::text::CanonicalIterator::PROGRESS) )  
		goto label_cond_83;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("SEGMENT")));
label_cond_83:
	cVar3 = segmentList->get(i);
	cVar3->checkCast("java::lang::String");
	this->pieces[i] = this->getEquivalents(cVar3);
	i = ( i + 0x1);
	goto label_goto_72;
	// 1401    .line 151
label_cond_94:
	return;

}


