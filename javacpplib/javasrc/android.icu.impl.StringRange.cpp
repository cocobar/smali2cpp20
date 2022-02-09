// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\StringRange.smali
#include "java2ctype.h"
#include "android.icu.impl.Relation.h"
#include "android.icu.impl.StringRange_S_1.h"
#include "android.icu.impl.StringRange_S_Adder.h"
#include "android.icu.impl.StringRange_S_Ranges.h"
#include "android.icu.impl.StringRange.h"
#include "android.icu.lang.CharSequences.h"
#include "android.icu.util.ICUException.h"
#include "java.lang.Character.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collection.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedList.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"
#include "java.util.TreeSet.h"

static android::icu::impl::StringRange::COMPARE_INT_ARRAYS;
static android::icu::impl::StringRange::DEBUG;
// .method static constructor <clinit>()V
void android::icu::impl::StringRange::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::StringRange_S_1> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::StringRange_S_1>();
	android::icu::impl::StringRange::COMPARE_INT_ARRAYS = cVar0;
	return;

}
// .method public constructor <init>()V
android::icu::impl::StringRange::StringRange()
{
	
	// 051    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static add(II[I[ILjava/lang/StringBuilder;Ljava/util/Collection;)V
void android::icu::impl::StringRange::add(int endIndex,int startOffset,std::shared_ptr<int[]> starts,std::shared_ptr<int[]> ends,std::shared_ptr<java::lang::StringBuilder> builder,std::shared_ptr<java::util::Collection<java::lang::String>> output)
{
	
	int start;
	int end;
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	int i;
	
	//    .param p0, "endIndex"    # I
	//    .param p1, "startOffset"    # I
	//    .param p2, "starts"    # [I
	//    .param p3, "ends"    # [I
	//    .param p4, "builder"    # Ljava/lang/StringBuilder;
	//    .annotation system Ldalvik/annotation/Signature;
	// 064        value = {
	// 065            "(II[I[I",
	// 066            "Ljava/lang/StringBuilder;",
	// 067            "Ljava/util/Collection",
	// 068            "<",
	// 069            "Ljava/lang/String;",
	// 070            ">;)V"
	// 071        }
	// 072    .end annotation
	//    .local p5, "output":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	start = starts[(endIndex + startOffset)];
	//    .local v10, "start":I
	end = ends[endIndex];
	//    .local v7, "end":I
	if ( start <= end )
		goto label_cond_11;
	cVar0 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Range must have x\u1d62 \u2264 y\u1d62 for each index i")));
	// throw
	throw cVar0;
	// 098    .line 276
label_cond_11:
	if ( endIndex != ( ends->size() + -0x1) )
		goto label_cond_36;
	//    .local v9, "last":Z
label_goto_17:
	//    .local v11, "startLen":I
	i = start;
	//    .local v8, "i":I
label_goto_1c:
	if ( i >  end )
		goto label_cond_45;
	builder->appendCodePoint(i);
	if ( !(0x1) )  
		goto label_cond_38;
	output->add(builder->toString());
label_goto_2e:
	builder->setLength(builder->length());
	i = ( i + 0x1);
	goto label_goto_1c;
	// 151    .line 276
	// 152    .end local v8    # "i":I
	// 153    .end local v9    # "last":Z
	// 154    .end local v11    # "startLen":I
label_cond_36:
	0x0;
	//    .restart local v9    # "last":Z
	goto label_goto_17;
	// 161    .line 283
	// 162    .restart local v8    # "i":I
	// 163    .restart local v11    # "startLen":I
label_cond_38:
	android::icu::impl::StringRange::add(( endIndex + 0x1), startOffset, starts, ends, builder, output);
	goto label_goto_2e;
	// 181    .line 287
label_cond_45:
	return;

}
// .method private static compact(ILjava/util/Set;)Ljava/util/LinkedList;
std::shared_ptr<java::util::LinkedList<android::icu::impl::StringRange_S_Ranges>> android::icu::impl::StringRange::compact(int size,std::shared_ptr<java::util::Set<android::icu::impl::StringRange_S_Ranges>> inputRanges)
{
	
	std::shared_ptr<java::util::LinkedList> ranges;
	int i;
	std::shared_ptr<android::icu::impl::StringRange_S_Ranges> last;
	std::shared_ptr<java::util::Iterator> it;
	std::shared_ptr<android::icu::impl::StringRange_S_Ranges> item;
	
	//    .param p0, "size"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 190        value = {
	// 191            "(I",
	// 192            "Ljava/util/Set",
	// 193            "<",
	// 194            "Landroid/icu/impl/StringRange$Ranges;",
	// 195            ">;)",
	// 196            "Ljava/util/LinkedList",
	// 197            "<",
	// 198            "Landroid/icu/impl/StringRange$Ranges;",
	// 199            ">;"
	// 200        }
	// 201    .end annotation
	//    .local p1, "inputRanges":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/impl/StringRange$Ranges;>;"
	ranges = std::make_shared<java::util::LinkedList>(inputRanges);
	//    .local v4, "ranges":Ljava/util/LinkedList;, "Ljava/util/LinkedList<Landroid/icu/impl/StringRange$Ranges;>;"
	i = ( size + -0x1);
	//    .local v0, "i":I
label_goto_7:
	if ( i < 0 ) 
		goto label_cond_2d;
	last = 0x0;
	//    .local v3, "last":Landroid/icu/impl/StringRange$Ranges;
	it = ranges->iterator();
	//    .end local v3    # "last":Landroid/icu/impl/StringRange$Ranges;
	//    .local v1, "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/StringRange$Ranges;>;"
label_goto_e:
	if ( !(it->hasNext()) )  
		goto label_cond_2a;
	item = it->next();
	item->checkCast("android::icu::impl::StringRange_S_Ranges");
	//    .local v2, "item":Landroid/icu/impl/StringRange$Ranges;
	if ( last )     
		goto label_cond_1e;
	//    .local v3, "last":Landroid/icu/impl/StringRange$Ranges;
	goto label_goto_e;
	// 253    .line 127
	// 254    .end local v3    # "last":Landroid/icu/impl/StringRange$Ranges;
label_cond_1e:
	if ( !(last->merge(i, item)) )  
		goto label_cond_28;
	it->remove();
	goto label_goto_e;
	// 267    .line 130
label_cond_28:
	last = item;
	//    .restart local v3    # "last":Landroid/icu/impl/StringRange$Ranges;
	goto label_goto_e;
	// 274    .line 121
	// 275    .end local v2    # "item":Landroid/icu/impl/StringRange$Ranges;
	// 276    .end local v3    # "last":Landroid/icu/impl/StringRange$Ranges;
label_cond_2a:
	i = ( i + -0x1);
	goto label_goto_7;
	// 282    .line 134
	// 283    .end local v1    # "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/StringRange$Ranges;>;"
label_cond_2d:
	return ranges;

}
// .method public static compact(Ljava/util/Set;Landroid/icu/impl/StringRange$Adder;Z)V
void android::icu::impl::StringRange::compact(std::shared_ptr<java::util::Set<java::lang::String>> source,std::shared_ptr<android::icu::impl::StringRange_S_Adder> adder,bool shorterPairs)
{
	
	//    .param p1, "adder"    # Landroid/icu/impl/StringRange$Adder;
	//    .param p2, "shorterPairs"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 293        value = {
	// 294            "(",
	// 295            "Ljava/util/Set",
	// 296            "<",
	// 297            "Ljava/lang/String;",
	// 298            ">;",
	// 299            "Landroid/icu/impl/StringRange$Adder;",
	// 300            "Z)V"
	// 301        }
	// 302    .end annotation
	//    .local p0, "source":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	android::icu::impl::StringRange::compact(source, adder, shorterPairs, 0x0);
	return;

}
// .method public static compact(Ljava/util/Set;Landroid/icu/impl/StringRange$Adder;ZZ)V
void android::icu::impl::StringRange::compact(std::shared_ptr<java::util::Set<java::lang::String>> source,std::shared_ptr<android::icu::impl::StringRange_S_Adder> adder,bool shorterPairs,bool moreCompact)
{
	
	int start;
	std::shared_ptr<java::lang::String> end;
	int lastCp;
	int prefixLen;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::lang::String> s;
	int currentCp;
	auto end;
	auto start;
	std::shared_ptr<java::util::TreeMap> cVar0;
	std::shared_ptr<android::icu::impl::Relation> lengthToArrays;
	std::shared_ptr<android::icu::impl::StringRange_S_Ranges> item;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<java::lang::Integer> cVar1;
	std::shared_ptr<java::util::Set> cVar2;
	std::shared_ptr<java::util::Iterator> ranges_S_iterator;
	std::shared_ptr<android::icu::impl::StringRange_S_Ranges> ranges;
	
	//    .param p1, "adder"    # Landroid/icu/impl/StringRange$Adder;
	//    .param p2, "shorterPairs"    # Z
	//    .param p3, "moreCompact"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 321        value = {
	// 322            "(",
	// 323            "Ljava/util/Set",
	// 324            "<",
	// 325            "Ljava/lang/String;",
	// 326            ">;",
	// 327            "Landroid/icu/impl/StringRange$Adder;",
	// 328            "ZZ)V"
	// 329        }
	// 330    .end annotation
	//    .local p0, "source":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( moreCompact )     
		goto label_cond_8d;
	start = 0x0;
	//    .local v16, "start":Ljava/lang/String;
	end = 0x0;
	//    .local v5, "end":Ljava/lang/String;
	lastCp = 0x0;
	//    .local v9, "lastCp":I
	prefixLen = 0x0;
	//    .local v11, "prefixLen":I
	s_S_iterator = source->iterator();
	//    .end local v5    # "end":Ljava/lang/String;
	//    .end local v16    # "start":Ljava/lang/String;
	//    .local v15, "s$iterator":Ljava/util/Iterator;
label_goto_b:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_75;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .local v14, "s":Ljava/lang/String;
	if ( !(start) )  
		goto label_cond_50;
	if ( !(s->regionMatches(0x0, start, 0x0, prefixLen)) )  
		goto label_cond_46;
	currentCp = s->codePointAt(prefixLen);
	//    .local v4, "currentCp":I
	if ( currentCp != ( lastCp + 0x1) )
		goto label_cond_46;
	if ( s->length() != (java::lang::Character::charCount(currentCp) + prefixLen) )
		goto label_cond_46;
	end = s;
	//    .local v5, "end":Ljava/lang/String;
	lastCp = currentCp;
	goto label_goto_b;
	// 434    .line 77
	// 435    .end local v4    # "currentCp":I
	// 436    .end local v5    # "end":Ljava/lang/String;
label_cond_46:
	if ( end )     
		goto label_cond_68;
	end = 0x0;
label_cond_49:
label_goto_49:
	adder->add(start, end);
label_cond_50:
	start = s;
	//    .local v16, "start":Ljava/lang/String;
	end = 0x0;
	//    .local v5, "end":Ljava/lang/String;
	lastCp = s->codePointBefore(s->length());
	prefixLen = (s->length() - java::lang::Character::charCount(lastCp));
	goto label_goto_b;
	// 483    .line 78
	// 484    .end local v5    # "end":Ljava/lang/String;
	// 485    .end local v16    # "start":Ljava/lang/String;
label_cond_68:
	if ( !(shorterPairs) )  
		goto label_cond_49;
	end = end->substring(prefixLen, end->length());
	goto label_goto_49;
	// 502    .line 87
	// 503    .end local v14    # "s":Ljava/lang/String;
label_cond_75:
	if ( end )     
		goto label_cond_80;
	end = 0x0;
label_cond_78:
label_goto_78:
	adder->add(start, end);
	//    .end local v9    # "lastCp":I
	//    .end local v11    # "prefixLen":I
label_cond_7f:
	return;
	// 523    .line 88
	// 524    .restart local v9    # "lastCp":I
	// 525    .restart local v11    # "prefixLen":I
label_cond_80:
	if ( !(shorterPairs) )  
		goto label_cond_78;
	end = end->substring(prefixLen, end->length());
	goto label_goto_78;
	// 542    .line 94
	// 543    .end local v9    # "lastCp":I
	// 544    .end local v11    # "prefixLen":I
	// 545    .end local v15    # "s$iterator":Ljava/util/Iterator;
label_cond_8d:
	cVar0 = std::make_shared<java::util::TreeMap>();
	lengthToArrays = android::icu::impl::Relation::of(cVar0, java::util::TreeSet());
	//    .local v10, "lengthToArrays":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<Ljava/lang/Integer;Landroid/icu/impl/StringRange$Ranges;>;"
	s_S_iterator = source->iterator();
	//    .restart local v15    # "s$iterator":Ljava/util/Iterator;
label_goto_9c:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_b7;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .restart local v14    # "s":Ljava/lang/String;
	item = std::make_shared<android::icu::impl::StringRange_S_Ranges>(s);
	//    .local v8, "item":Landroid/icu/impl/StringRange$Ranges;
	lengthToArrays->put(item->size(), item);
	goto label_goto_9c;
	// 595    .line 100
	// 596    .end local v8    # "item":Landroid/icu/impl/StringRange$Ranges;
	// 597    .end local v14    # "s":Ljava/lang/String;
label_cond_b7:
	entry_S_iterator = lengthToArrays->keyValuesSet()->iterator();
	//    .local v7, "entry$iterator":Ljava/util/Iterator;
label_cond_bf:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_7f;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v6, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Integer;Ljava/util/Set<Landroid/icu/impl/StringRange$Ranges;>;>;"
	cVar1 = entry->getKey();
	cVar1->checkCast("java::lang::Integer");
	cVar2 = entry->getValue();
	cVar2->checkCast("java::util::Set");
	//    .local v3, "compacted":Ljava/util/LinkedList;, "Ljava/util/LinkedList<Landroid/icu/impl/StringRange$Ranges;>;"
	ranges_S_iterator = android::icu::impl::StringRange::compact(cVar1->intValue(), cVar2)->iterator();
	//    .local v13, "ranges$iterator":Ljava/util/Iterator;
label_goto_e7:
	if ( !(ranges_S_iterator->hasNext()) )  
		goto label_cond_bf;
	ranges = ranges_S_iterator->next();
	ranges->checkCast("android::icu::impl::StringRange_S_Ranges");
	//    .local v12, "ranges":Landroid/icu/impl/StringRange$Ranges;
	adder->add(ranges->start(), ranges->end(shorterPairs));
	goto label_goto_e7;

}
// .method public static expand(Ljava/lang/String;Ljava/lang/String;ZLjava/util/Collection;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::lang::String>> android::icu::impl::StringRange::expand(std::shared_ptr<java::lang::String> start,std::shared_ptr<java::lang::String> end,bool requireSameLength,std::shared_ptr<java::util::Collection<java::lang::String>> output)
{
	
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	std::shared_ptr<int[]> startCps;
	std::shared_ptr<int[]> endCps;
	int startOffset;
	std::shared_ptr<android::icu::util::ICUException> cVar1;
	std::shared_ptr<android::icu::util::ICUException> cVar2;
	std::shared_ptr<android::icu::util::ICUException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> builder;
	int i;
	
	//    .param p0, "start"    # Ljava/lang/String;
	//    .param p1, "end"    # Ljava/lang/String;
	//    .param p2, "requireSameLength"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 696        value = {
	// 697            "(",
	// 698            "Ljava/lang/String;",
	// 699            "Ljava/lang/String;",
	// 700            "Z",
	// 701            "Ljava/util/Collection",
	// 702            "<",
	// 703            "Ljava/lang/String;",
	// 704            ">;)",
	// 705            "Ljava/util/Collection",
	// 706            "<",
	// 707            "Ljava/lang/String;",
	// 708            ">;"
	// 709        }
	// 710    .end annotation
	//    .local p3, "output":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	if ( !(start) )  
		goto label_cond_5;
	if ( end )     
		goto label_cond_e;
label_cond_5:
	cVar0 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Range must have 2 valid strings")));
	// throw
	throw cVar0;
	// 731    .line 250
label_cond_e:
	startCps = android::icu::lang::CharSequences::codePoints(start);
	//    .local v2, "startCps":[I
	endCps = android::icu::lang::CharSequences::codePoints(end);
	//    .local v3, "endCps":[I
	startOffset = (startCps->size() - endCps->size());
	//    .local v1, "startOffset":I
	if ( !(requireSameLength) )  
		goto label_cond_27;
	if ( !(startOffset) )  
		goto label_cond_27;
	cVar1 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Range must have equal-length strings")));
	// throw
	throw cVar1;
	// 766    .line 256
label_cond_27:
	if ( startOffset >= 0 )
		goto label_cond_32;
	cVar2 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Range must have start-length \u2265 end-length")));
	// throw
	throw cVar2;
	// 779    .line 258
label_cond_32:
	if ( endCps->size() )     
		goto label_cond_3e;
	cVar3 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Range must have end-length > 0")));
	// throw
	throw cVar3;
	// 794    .line 262
label_cond_3e:
	builder = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "builder":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v6, "i":I
label_goto_44:
	if ( i >= startOffset )
		goto label_cond_4e;
	builder->appendCodePoint(startCps[i]);
	i = ( i + 0x1);
	goto label_goto_44;
label_cond_4e:
	android::icu::impl::StringRange::add(0x0, startOffset, startCps, endCps, builder, output);
	return output;

}


