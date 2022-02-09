// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ValidIdentifiers.smali
#include "java2ctype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datasubtype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datatype.h"
#include "android.icu.impl.ValidIdentifiers_S_ValidityData.h"
#include "android.icu.impl.ValidIdentifiers_S_ValiditySet.h"
#include "android.icu.impl.ValidIdentifiers.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Iterator.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

// .method public constructor <init>()V
android::icu::impl::ValidIdentifiers::ValidIdentifiers()
{
	
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getData()Ljava/util/Map;
std::shared_ptr<java::util::Map<android::icu::impl::ValidIdentifiers_S_Datatype,java::util::Map<android::icu::impl::ValidIdentifiers_S_Datasubtype,android::icu::impl::ValidIdentifiers_S_ValiditySet>>> android::icu::impl::ValidIdentifiers::getData()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 031        value = {
	// 032            "()",
	// 033            "Ljava/util/Map",
	// 034            "<",
	// 035            "Landroid/icu/impl/ValidIdentifiers$Datatype;",
	// 036            "Ljava/util/Map",
	// 037            "<",
	// 038            "Landroid/icu/impl/ValidIdentifiers$Datasubtype;",
	// 039            "Landroid/icu/impl/ValidIdentifiers$ValiditySet;",
	// 040            ">;>;"
	// 041        }
	// 042    .end annotation
	return android::icu::impl::ValidIdentifiers_S_ValidityData::data;

}
// .method public static isValid(Landroid/icu/impl/ValidIdentifiers$Datatype;Ljava/util/Set;Ljava/lang/String;)Landroid/icu/impl/ValidIdentifiers$Datasubtype;
std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> android::icu::impl::ValidIdentifiers::isValid(std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> datatype,std::shared_ptr<java::util::Set<android::icu::impl::ValidIdentifiers_S_Datasubtype>> datasubtypes,std::shared_ptr<java::lang::String> code)
{
	
	std::shared_ptr<java::util::Map> subtable;
	std::shared_ptr<java::util::Iterator> datasubtype_S_iterator;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> datasubtype;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_ValiditySet> validitySet;
	
	//    .param p0, "datatype"    # Landroid/icu/impl/ValidIdentifiers$Datatype;
	//    .param p2, "code"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 056        value = {
	// 057            "(",
	// 058            "Landroid/icu/impl/ValidIdentifiers$Datatype;",
	// 059            "Ljava/util/Set",
	// 060            "<",
	// 061            "Landroid/icu/impl/ValidIdentifiers$Datasubtype;",
	// 062            ">;",
	// 063            "Ljava/lang/String;",
	// 064            ")",
	// 065            "Landroid/icu/impl/ValidIdentifiers$Datasubtype;"
	// 066        }
	// 067    .end annotation
	//    .local p1, "datasubtypes":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/impl/ValidIdentifiers$Datasubtype;>;"
	subtable = android::icu::impl::ValidIdentifiers_S_ValidityData::data->get(datatype);
	subtable->checkCast("java::util::Map");
	//    .local v2, "subtable":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/impl/ValidIdentifiers$Datasubtype;Landroid/icu/impl/ValidIdentifiers$ValiditySet;>;"
	if ( !(subtable) )  
		goto label_cond_2e;
	datasubtype_S_iterator = datasubtypes->iterator();
	//    .local v1, "datasubtype$iterator":Ljava/util/Iterator;
label_cond_f:
	if ( !(datasubtype_S_iterator->hasNext()) )  
		goto label_cond_2e;
	datasubtype = datasubtype_S_iterator->next();
	datasubtype->checkCast("android::icu::impl::ValidIdentifiers_S_Datasubtype");
	//    .local v0, "datasubtype":Landroid/icu/impl/ValidIdentifiers$Datasubtype;
	validitySet = subtable->get(datasubtype);
	validitySet->checkCast("android::icu::impl::ValidIdentifiers_S_ValiditySet");
	//    .local v3, "validitySet":Landroid/icu/impl/ValidIdentifiers$ValiditySet;
	if ( !(validitySet) )  
		goto label_cond_f;
	if ( !(validitySet->contains(android::icu::impl::locale::AsciiUtil::toLowerString(code))) )  
		goto label_cond_f;
	return datasubtype;
	// 131    .line 184
	// 132    .end local v0    # "datasubtype":Landroid/icu/impl/ValidIdentifiers$Datasubtype;
	// 133    .end local v1    # "datasubtype$iterator":Ljava/util/Iterator;
	// 134    .end local v3    # "validitySet":Landroid/icu/impl/ValidIdentifiers$ValiditySet;
label_cond_2e:
	return 0x0;

}
// .method public static isValid(Landroid/icu/impl/ValidIdentifiers$Datatype;Ljava/util/Set;Ljava/lang/String;Ljava/lang/String;)Landroid/icu/impl/ValidIdentifiers$Datasubtype;
std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> android::icu::impl::ValidIdentifiers::isValid(std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> datatype,std::shared_ptr<java::util::Set<android::icu::impl::ValidIdentifiers_S_Datasubtype>> datasubtypes,std::shared_ptr<java::lang::String> code,std::shared_ptr<java::lang::String> value)
{
	
	std::shared_ptr<java::util::Map> subtable;
	std::shared_ptr<java::util::Iterator> datasubtype_S_iterator;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> datasubtype;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_ValiditySet> validitySet;
	
	//    .param p0, "datatype"    # Landroid/icu/impl/ValidIdentifiers$Datatype;
	//    .param p2, "code"    # Ljava/lang/String;
	//    .param p3, "value"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 145        value = {
	// 146            "(",
	// 147            "Landroid/icu/impl/ValidIdentifiers$Datatype;",
	// 148            "Ljava/util/Set",
	// 149            "<",
	// 150            "Landroid/icu/impl/ValidIdentifiers$Datasubtype;",
	// 151            ">;",
	// 152            "Ljava/lang/String;",
	// 153            "Ljava/lang/String;",
	// 154            ")",
	// 155            "Landroid/icu/impl/ValidIdentifiers$Datasubtype;"
	// 156        }
	// 157    .end annotation
	//    .local p1, "datasubtypes":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/impl/ValidIdentifiers$Datasubtype;>;"
	subtable = android::icu::impl::ValidIdentifiers_S_ValidityData::data->get(datatype);
	subtable->checkCast("java::util::Map");
	//    .local v2, "subtable":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/impl/ValidIdentifiers$Datasubtype;Landroid/icu/impl/ValidIdentifiers$ValiditySet;>;"
	if ( !(subtable) )  
		goto label_cond_32;
	datasubtype_S_iterator = datasubtypes->iterator();
	//    .local v1, "datasubtype$iterator":Ljava/util/Iterator;
label_cond_17:
	if ( !(datasubtype_S_iterator->hasNext()) )  
		goto label_cond_32;
	datasubtype = datasubtype_S_iterator->next();
	datasubtype->checkCast("android::icu::impl::ValidIdentifiers_S_Datasubtype");
	//    .local v0, "datasubtype":Landroid/icu/impl/ValidIdentifiers$Datasubtype;
	validitySet = subtable->get(datasubtype);
	validitySet->checkCast("android::icu::impl::ValidIdentifiers_S_ValiditySet");
	//    .local v3, "validitySet":Landroid/icu/impl/ValidIdentifiers$ValiditySet;
	if ( !(validitySet) )  
		goto label_cond_17;
	if ( !(validitySet->contains(android::icu::impl::locale::AsciiUtil::toLowerString(code), android::icu::impl::locale::AsciiUtil::toLowerString(value))) )  
		goto label_cond_17;
	return datasubtype;
	// 227    .line 201
	// 228    .end local v0    # "datasubtype":Landroid/icu/impl/ValidIdentifiers$Datasubtype;
	// 229    .end local v1    # "datasubtype$iterator":Ljava/util/Iterator;
	// 230    .end local v3    # "validitySet":Landroid/icu/impl/ValidIdentifiers$ValiditySet;
label_cond_32:
	return 0x0;

}


