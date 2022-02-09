#ifndef __android_icu_text_UnicodeSet__
#define __android_icu_text_UnicodeSet__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet.smali
#include "java2ctype.h"
#include "android.icu.impl.BMPSet.h"
#include "android.icu.impl.RuleCharacterIterator.h"
#include "android.icu.impl.UnicodeSetStringSpan.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.SymbolTable.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet_S_ComparisonStyle.h"
#include "android.icu.text.UnicodeSet_S_EntryRange.h"
#include "android.icu.text.UnicodeSet_S_Filter.h"
#include "android.icu.text.UnicodeSet_S_SpanCondition.h"
#include "android.icu.text.UnicodeSet_S_XSymbolTable.h"
#include "android.icu.util.Freezable.h"
#include "android.icu.util.OutputInt.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Comparable.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"
#include "java.util.Collection.h"
#include "java.util.Iterator.h"
#include "java.util.TreeSet.h"

namespace android::icu::text{
class UnicodeSet : public android::icu::text::UnicodeFilter, public java::lang::Iterable<java::lang::String>, public java::lang::Comparable<android::icu::text::UnicodeSet>, public android::icu::util::Freezable<android::icu::text::UnicodeSet> {
protected:
private:
	static std::shared_ptr<java::lang::String> ANY_ID;
	static std::shared_ptr<java::lang::String> ASCII_ID;
	static std::shared_ptr<java::lang::String> ASSIGNED;
	static int GROW_EXTRA;
	static int HIGH;
	static std::shared_ptr<std::vector<android::icu::text::UnicodeSet>> INCLUSIONS;
	static int LAST0_START;
	static int LAST1_RANGE;
	static int LAST2_SET;
	static int LOW;
	static int MODE0_NONE;
	static int MODE1_INBRACKET;
	static int MODE2_OUTBRACKET;
	static std::shared_ptr<android::icu::util::VersionInfo> NO_VERSION;
	static int SETMODE0_NONE;
	static int SETMODE1_UNICODESET;
	static int SETMODE2_PROPERTYPAT;
	static int SETMODE3_PREPARSED;
	static int START_EXTRA;
	static std::shared_ptr<android::icu::text::UnicodeSet_S_XSymbolTable> XSYMBOL_TABLE;
	std::shared_ptr<android::icu::impl::BMPSet> bmpSet;
	std::shared_ptr<int[]> buffer;
	int len;
	std::shared_ptr<int[]> list;
	std::shared_ptr<java::lang::String> pat;
	std::shared_ptr<int[]> rangeList;
	std::shared_ptr<android::icu::impl::UnicodeSetStringSpan> stringSpan;
	static std::shared_ptr<java::lang::Appendable> _appendToPat(std::shared_ptr<java::lang::Appendable> buf,int c,bool escapeUnprintable);
	static std::shared_ptr<java::lang::Appendable> _appendToPat(std::shared_ptr<java::lang::Appendable> buf,std::shared_ptr<java::lang::String> s,bool escapeUnprintable);
	std::shared_ptr<java::lang::Appendable> virtual _toPattern(std::shared_ptr<java::lang::Appendable> result,bool escapeUnprintable);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual add(std::shared_ptr<int[]> other,int otherLen,int polarity);
	static void addCaseMapping(std::shared_ptr<android::icu::text::UnicodeSet> set,int result,std::shared_ptr<java::lang::StringBuilder> full);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual add_unchecked(int c);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual add_unchecked(int start,int end);
	static void append(std::shared_ptr<java::lang::Appendable> app,std::shared_ptr<java::lang::CharSequence> s);
	static void appendCodePoint(std::shared_ptr<java::lang::Appendable> app,int c);
	std::shared_ptr<java::lang::Appendable> virtual appendNewPattern(std::shared_ptr<java::lang::Appendable> result,bool escapeUnprintable,bool includeStrings);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual applyFilter(std::shared_ptr<android::icu::text::UnicodeSet_S_Filter> filter,int src);
	void virtual applyPattern(std::shared_ptr<android::icu::impl::RuleCharacterIterator> chars,std::shared_ptr<android::icu::text::SymbolTable> symbols,std::shared_ptr<java::lang::Appendable> rebuiltPat,int options);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual applyPropertyPattern(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::ParsePosition> ppos,std::shared_ptr<android::icu::text::SymbolTable> symbols);
	void virtual applyPropertyPattern(std::shared_ptr<android::icu::impl::RuleCharacterIterator> chars,std::shared_ptr<java::lang::Appendable> rebuiltPat,std::shared_ptr<android::icu::text::SymbolTable> symbols);
	void virtual checkFrozen();
	bool virtual containsAll(std::shared_ptr<java::lang::String> s,int i);
	void virtual ensureBufferCapacity(int newLen);
	void virtual ensureCapacity(int newLen);
	int virtual findCodePoint(int c);
	static std::shared_ptr<android::icu::text::UnicodeSet> getInclusions(int src);
	static int getSingleCP(std::shared_ptr<java::lang::CharSequence> s);
	static int matchRest(std::shared_ptr<android::icu::text::Replaceable> text,int start,int limit,std::shared_ptr<java::lang::String> s);
	static int matchesAt(std::shared_ptr<java::lang::CharSequence> text,int offsetInText,std::shared_ptr<java::lang::CharSequence> substring);
	static int max(int a,int b);
	static std::shared_ptr<java::lang::String> mungeCharName(std::shared_ptr<java::lang::String> source);
	int virtual range(int start,int end);
	static bool resemblesPropertyPattern(std::shared_ptr<android::icu::impl::RuleCharacterIterator> chars,int iterOpts);
	static bool resemblesPropertyPattern(std::shared_ptr<java::lang::String> pattern,int pos);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual retain(std::shared_ptr<int[]> other,int otherLen,int polarity);
	int virtual spanCodePointsAndCount(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition,std::shared_ptr<android::icu::util::OutputInt> outCount);
	static void syntaxError(std::shared_ptr<android::icu::impl::RuleCharacterIterator> chars,std::shared_ptr<java::lang::String> msg);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual xor(std::shared_ptr<int[]> other,int otherLen,int polarity);
public:
	static bool _assertionsDisabled;
	static int ADD_CASE_MAPPINGS;
	static std::shared_ptr<android::icu::text::UnicodeSet> ALL_CODE_POINTS;
	static int CASE;
	static int CASE_INSENSITIVE;
	static std::shared_ptr<android::icu::text::UnicodeSet> EMPTY;
	static int IGNORE_SPACE;
	static int MAX_VALUE;
	static int MIN_VALUE;
	std::shared_ptr<java::util::TreeSet<java::lang::String>> strings;
	static std::shared_ptr<android::icu::util::VersionInfo> _get0();
	static int _get1(std::shared_ptr<android::icu::text::UnicodeSet> _this);
	static int _get2(std::shared_ptr<android::icu::text::UnicodeSet> _this);
	static std::shared_ptr<java::lang::Appendable> _wrap0(std::shared_ptr<java::lang::Appendable> buf,int c,bool escapeUnprintable);
	static void static_cinit();
	UnicodeSet();
	UnicodeSet(int start,int end);
	UnicodeSet(std::shared_ptr<android::icu::text::UnicodeSet> other);
	UnicodeSet(std::shared_ptr<java::lang::String> pattern);
	UnicodeSet(std::shared_ptr<java::lang::String> pattern,int options);
	UnicodeSet(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::ParsePosition> pos,std::shared_ptr<android::icu::text::SymbolTable> symbols);
	UnicodeSet(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::ParsePosition> pos,std::shared_ptr<android::icu::text::SymbolTable> symbols,int options);
	UnicodeSet(std::shared_ptr<java::lang::String> pattern,bool ignoreWhitespace);
	UnicodeSet(std::shared_ptr<int[]> pairs);
	static std::shared_ptr<java::util::Collection<T>> addAllTo(std::shared_ptr<java::lang::Iterable<T>> source,std::shared_ptr<java::util::Collection<T>> target);
	static std::shared_ptr<T> addAllTo(std::shared_ptr<java::lang::Iterable<T>> source,std::shared_ptr<std::vector<T>> target);
	static int compare(int codePoint,std::shared_ptr<java::lang::CharSequence> string);
	static int compare(std::shared_ptr<java::lang::CharSequence> string,int codePoint);
	static int compare(std::shared_ptr<java::lang::Iterable<java::lang::Comparable<T>>> collection1,std::shared_ptr<java::lang::Iterable<java::lang::Comparable<T>>> collection2);
	static int compare(std::shared_ptr<java::util::Collection<java::lang::Comparable<T>>> collection1,std::shared_ptr<java::util::Collection<java::lang::Comparable<T>>> collection2,std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> style);
	static int compare(std::shared_ptr<java::util::Iterator<java::lang::Comparable<T>>> first,std::shared_ptr<java::util::Iterator<java::lang::Comparable<T>>> other);
	static std::shared_ptr<android::icu::text::UnicodeSet> from(std::shared_ptr<java::lang::CharSequence> s);
	static std::shared_ptr<android::icu::text::UnicodeSet> fromAll(std::shared_ptr<java::lang::CharSequence> s);
	static std::shared_ptr<android::icu::text::UnicodeSet_S_XSymbolTable> getDefaultXSymbolTable();
	static int getSingleCodePoint(std::shared_ptr<java::lang::CharSequence> s);
	static bool resemblesPattern(std::shared_ptr<java::lang::String> pattern,int pos);
	static void setDefaultXSymbolTable(std::shared_ptr<android::icu::text::UnicodeSet_S_XSymbolTable> xSymbolTable);
	static std::shared_ptr<java::lang::String> toArray(std::shared_ptr<android::icu::text::UnicodeSet> set);
	std::shared_ptr<java::lang::StringBuffer> virtual _generatePattern(std::shared_ptr<java::lang::StringBuffer> result,bool escapeUnprintable);
	std::shared_ptr<java::lang::StringBuffer> virtual _generatePattern(std::shared_ptr<java::lang::StringBuffer> result,bool escapeUnprintable,bool includeStrings);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual add(int c);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual add(int start,int end);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual add(std::shared_ptr<java::lang::CharSequence> s);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual add(std::shared_ptr<java::lang::Iterable<java::lang::Object>> source);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual addAll(int start,int end);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual addAll(std::shared_ptr<android::icu::text::UnicodeSet> c);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual addAll(std::shared_ptr<java::lang::CharSequence> s);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual addAll(std::shared_ptr<java::lang::Iterable<java::lang::Object>> source);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual addAll(std::shared_ptr<std::vector<java::lang::CharSequence>> collection);
	std::shared_ptr<java::util::Collection<java::lang::String>> virtual addAllTo(std::shared_ptr<java::util::Collection<java::lang::String>> target);
	std::shared_ptr<java::lang::String> virtual addAllTo(std::shared_ptr<std::vector<java::lang::String>> target);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual addBridges(std::shared_ptr<android::icu::text::UnicodeSet> dontCare);
	void virtual addMatchSetTo(std::shared_ptr<android::icu::text::UnicodeSet> toUnionTo);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual applyIntPropertyValue(int prop,int value);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual applyPattern(std::shared_ptr<java::lang::String> pattern);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual applyPattern(std::shared_ptr<java::lang::String> pattern,int options);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual applyPattern(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::ParsePosition> pos,std::shared_ptr<android::icu::text::SymbolTable> symbols,int options);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual applyPattern(std::shared_ptr<java::lang::String> pattern,bool ignoreWhitespace);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual applyPropertyAlias(std::shared_ptr<java::lang::String> propertyAlias,std::shared_ptr<java::lang::String> valueAlias);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual applyPropertyAlias(std::shared_ptr<java::lang::String> propertyAlias,std::shared_ptr<java::lang::String> valueAlias,std::shared_ptr<android::icu::text::SymbolTable> symbols);
	int virtual charAt(int index);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual clear();
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::text::UnicodeSet> virtual cloneAsThawed();
	std::shared_ptr<android::icu::text::UnicodeSet> virtual closeOver(int attribute);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual compact();
	int virtual compareTo(std::shared_ptr<android::icu::text::UnicodeSet> o);
	int virtual compareTo(std::shared_ptr<android::icu::text::UnicodeSet> o,std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> style);
	int virtual compareTo(std::shared_ptr<java::lang::Iterable<java::lang::String>> other);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual complement();
	std::shared_ptr<android::icu::text::UnicodeSet> virtual complement(int c);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual complement(int start,int end);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual complement(std::shared_ptr<java::lang::CharSequence> s);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual complementAll(std::shared_ptr<android::icu::text::UnicodeSet> c);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual complementAll(std::shared_ptr<java::lang::CharSequence> s);
	bool virtual contains(int c);
	bool virtual contains(int start,int end);
	bool virtual contains(std::shared_ptr<java::lang::CharSequence> s);
	bool virtual containsAll(std::shared_ptr<android::icu::text::UnicodeSet> b);
	bool virtual containsAll(std::shared_ptr<java::lang::Iterable<java::lang::CharSequence>> collection);
	bool virtual containsAll(std::shared_ptr<java::lang::String> s);
	bool virtual containsNone(int start,int end);
	bool virtual containsNone(std::shared_ptr<android::icu::text::UnicodeSet> b);
	bool virtual containsNone(std::shared_ptr<java::lang::CharSequence> s);
	bool virtual containsNone(std::shared_ptr<java::lang::Iterable<java::lang::CharSequence>> collection);
	bool virtual containsSome(int start,int end);
	bool virtual containsSome(std::shared_ptr<android::icu::text::UnicodeSet> s);
	bool virtual containsSome(std::shared_ptr<java::lang::CharSequence> s);
	bool virtual containsSome(std::shared_ptr<java::lang::Iterable<java::lang::CharSequence>> collection);
	bool virtual equals(std::shared_ptr<java::lang::Object> o);
	int virtual findIn(std::shared_ptr<java::lang::CharSequence> value,int fromIndex,bool findNot);
	int virtual findLastIn(std::shared_ptr<java::lang::CharSequence> value,int fromIndex,bool findNot);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual freeze();
	int virtual getRangeCount();
	int virtual getRangeEnd(int index);
	int virtual getRangeStart(int index);
	std::shared_ptr<java::lang::String> virtual getRegexEquivalent();
	int virtual hashCode();
	int virtual indexOf(int c);
	bool virtual isEmpty();
	bool virtual isFrozen();
	std::shared_ptr<java::util::Iterator<java::lang::String>> virtual iterator();
	int virtual matches(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<int[]> offset,int limit,bool incremental);
	int virtual matchesAt(std::shared_ptr<java::lang::CharSequence> text,int offset);
	bool virtual matchesIndexValue(int v);
	std::shared_ptr<java::lang::Iterable<android::icu::text::UnicodeSet_S_EntryRange>> virtual ranges();
	std::shared_ptr<android::icu::text::UnicodeSet> virtual remove(int c);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual remove(int start,int end);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual remove(std::shared_ptr<java::lang::CharSequence> s);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual removeAll(std::shared_ptr<android::icu::text::UnicodeSet> c);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual removeAll(std::shared_ptr<java::lang::CharSequence> s);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual removeAll(std::shared_ptr<java::lang::Iterable<java::lang::CharSequence>> collection);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual removeAllStrings();
	std::shared_ptr<android::icu::text::UnicodeSet> virtual retain(int c);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual retain(int start,int end);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual retain(std::shared_ptr<java::lang::CharSequence> cs);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual retainAll(std::shared_ptr<android::icu::text::UnicodeSet> c);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual retainAll(std::shared_ptr<java::lang::CharSequence> s);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual retainAll(std::shared_ptr<java::lang::Iterable<java::lang::CharSequence>> collection);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual set(int start,int end);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual set(std::shared_ptr<android::icu::text::UnicodeSet> other);
	int virtual size();
	int virtual span(std::shared_ptr<java::lang::CharSequence> s,int cVar1,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition);
	int virtual span(std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition);
	int virtual spanAndCount(std::shared_ptr<java::lang::CharSequence> s,int cVar1,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition,std::shared_ptr<android::icu::util::OutputInt> outCount);
	int virtual spanBack(std::shared_ptr<java::lang::CharSequence> s,int cVar0,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition);
	int virtual spanBack(std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition);
	std::shared_ptr<java::util::Collection<java::lang::String>> virtual strings();
	std::shared_ptr<java::lang::String> virtual stripFrom(std::shared_ptr<java::lang::CharSequence> source,bool matches);
	std::shared_ptr<java::lang::String> virtual toPattern(bool escapeUnprintable);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::UnicodeSet::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UnicodeSet(){
	}

}; // class UnicodeSet
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet__

