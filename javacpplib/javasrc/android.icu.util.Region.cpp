// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Region.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.util.Region_S_RegionType.h"
#include "android.icu.util.Region.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Arrays.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.TreeSet.h"

static android::icu::util::Region::OUTLYING_OCEANIA_REGION_ID = std::make_shared<java::lang::String>("QO");
static android::icu::util::Region::UNKNOWN_REGION_ID = std::make_shared<java::lang::String>("ZZ");
static android::icu::util::Region::WORLD_ID = std::make_shared<java::lang::String>("001");
static android::icu::util::Region::availableRegions;
static android::icu::util::Region::numericCodeMap;
static android::icu::util::Region::regionAliases;
static android::icu::util::Region::regionDataIsLoaded;
static android::icu::util::Region::regionIDMap;
static android::icu::util::Region::regions;
// .method static constructor <clinit>()V
void android::icu::util::Region::static_cinit()
{
	
	std::shared_ptr<java::util::Map> cVar0;
	
	cVar0 = 0x0;
	android::icu::util::Region::regionDataIsLoaded = 0x0;
	android::icu::util::Region::regionIDMap = cVar0;
	android::icu::util::Region::numericCodeMap = cVar0;
	android::icu::util::Region::regionAliases = cVar0;
	android::icu::util::Region::regions = cVar0;
	android::icu::util::Region::availableRegions = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::util::Region::Region()
{
	
	std::shared_ptr<android::icu::util::Region> cVar0;
	std::shared_ptr<java::util::TreeSet> cVar1;
	
	cVar0 = 0x0;
	// 167    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->containingRegion = cVar0;
	cVar1 = std::make_shared<java::util::TreeSet>();
	this->containedRegions = cVar1;
	this->preferredValues = cVar0;
	return;

}
// .method public static getAvailable(Landroid/icu/util/Region$RegionType;)Ljava/util/Set;
std::shared_ptr<java::util::Set<android::icu::util::Region>> android::icu::util::Region::getAvailable(std::shared_ptr<android::icu::util::Region_S_RegionType> type)
{
	
	std::shared_ptr<java::util::Set> cVar0;
	
	//    .param p0, "type"    # Landroid/icu/util/Region$RegionType;
	//    .annotation system Ldalvik/annotation/Signature;
	// 190        value = {
	// 191            "(",
	// 192            "Landroid/icu/util/Region$RegionType;",
	// 193            ")",
	// 194            "Ljava/util/Set",
	// 195            "<",
	// 196            "Landroid/icu/util/Region;",
	// 197            ">;"
	// 198        }
	// 199    .end annotation
	android::icu::util::Region::loadRegionData({const[class].FS-Param});
	cVar0 = android::icu::util::Region::availableRegions->get(type->ordinal());
	cVar0->checkCast("java::util::Set");
	return java::util::Collections::unmodifiableSet(cVar0);

}
// .method public static getInstance(I)Landroid/icu/util/Region;
std::shared_ptr<android::icu::util::Region> android::icu::util::Region::getInstance(int code)
{
	
	std::shared_ptr<android::icu::util::Region> r;
	std::shared_ptr<java::lang::String> pad;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "code"    # I
	android::icu::util::Region::loadRegionData({const[class].FS-Param});
	r = android::icu::util::Region::numericCodeMap->get(java::lang::Integer::valueOf(code));
	r->checkCast("android::icu::util::Region");
	//    .local v2, "r":Landroid/icu/util/Region;
	if ( r )     
		goto label_cond_38;
	pad = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v1, "pad":Ljava/lang/String;
	if ( code >= 0xa )
		goto label_cond_54;
	pad = std::make_shared<java::lang::String>(std::make_shared<char[]>("00"));
label_cond_1b:
label_goto_1b:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "id":Ljava/lang/String;
	r = android::icu::util::Region::regionAliases->get(cVar0->append(pad)->append(java::lang::Integer::toString(code))->toString());
	//    .end local v2    # "r":Landroid/icu/util/Region;
	r->checkCast("android::icu::util::Region");
	//    .end local v0    # "id":Ljava/lang/String;
	//    .end local v1    # "pad":Ljava/lang/String;
	//    .restart local v2    # "r":Landroid/icu/util/Region;
label_cond_38:
	if ( r )     
		goto label_cond_5c;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown region code: ")))->append(code)->toString());
	// throw
	throw cVar1;
	// 328    .line 406
	// 329    .restart local v1    # "pad":Ljava/lang/String;
label_cond_54:
	if ( code >= 0x64 )
		goto label_cond_1b;
	pad = std::make_shared<java::lang::String>(std::make_shared<char[]>("0"));
	goto label_goto_1b;
	// 340    .line 417
	// 341    .end local v1    # "pad":Ljava/lang/String;
label_cond_5c:
	if ( r->type != android::icu::util::Region_S_RegionType::DEPRECATED )
		goto label_cond_74;
	if ( r->preferredValues->size() != 0x1 )
		goto label_cond_74;
	r = r->preferredValues->get(0x0);
	//    .end local v2    # "r":Landroid/icu/util/Region;
	r->checkCast("android::icu::util::Region");
	//    .restart local v2    # "r":Landroid/icu/util/Region;
label_cond_74:
	return r;

}
// .method public static getInstance(Ljava/lang/String;)Landroid/icu/util/Region;
std::shared_ptr<android::icu::util::Region> android::icu::util::Region::getInstance(std::shared_ptr<java::lang::String> id)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<android::icu::util::Region> r;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "id"    # Ljava/lang/String;
	if ( id )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 392    .line 370
label_cond_8:
	android::icu::util::Region::loadRegionData({const[class].FS-Param});
	r = android::icu::util::Region::regionIDMap->get(id);
	r->checkCast("android::icu::util::Region");
	//    .local v0, "r":Landroid/icu/util/Region;
	if ( r )     
		goto label_cond_1d;
	r = android::icu::util::Region::regionAliases->get(id);
	//    .end local v0    # "r":Landroid/icu/util/Region;
	r->checkCast("android::icu::util::Region");
	//    .restart local v0    # "r":Landroid/icu/util/Region;
label_cond_1d:
	if ( r )     
		goto label_cond_39;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown region id: ")))->append(id)->toString());
	// throw
	throw cVar1;
	// 449    .line 382
label_cond_39:
	if ( r->type != android::icu::util::Region_S_RegionType::DEPRECATED )
		goto label_cond_51;
	if ( r->preferredValues->size() != 0x1 )
		goto label_cond_51;
	r = r->preferredValues->get(0x0);
	//    .end local v0    # "r":Landroid/icu/util/Region;
	r->checkCast("android::icu::util::Region");
	//    .restart local v0    # "r":Landroid/icu/util/Region;
label_cond_51:
	return r;

}
// .method private static declared-synchronized loadRegionData()V
void android::icu::util::Region::loadRegionData()
{
	
	std::shared_ptr<android::icu::util::Region> cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	std::shared_ptr<java::util::HashMap> cVar2;
	std::shared_ptr<java::util::HashMap> cVar3;
	std::shared_ptr<java::util::ArrayList> cVar4;
	std::shared_ptr<android::icu::util::UResourceBundle> territoryAlias;
	auto supplementalData;
	std::shared_ptr<android::icu::util::UResourceBundle> codeMappings;
	auto regionList;
	std::shared_ptr<android::icu::util::UResourceBundle> territoryContainment;
	std::shared_ptr<java::util::ArrayList> regionCodes;
	std::shared_ptr<java::util::ArrayList> allRegions;
	std::shared_ptr<java::util::Iterator> r_S_iterator;
	std::shared_ptr<java::lang::String> r;
	int rangeMarkerLocation;
	std::shared_ptr<java::lang::StringBuilder> regionName;
	int lastChar;
	std::shared_ptr<java::util::ArrayList> cVar5;
	std::shared_ptr<java::util::Iterator> id_S_iterator;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<android::icu::util::Region> r;
	int i;
	std::shared_ptr<android::icu::util::UResourceBundle> res;
	std::shared_ptr<java::lang::Object> aliasFrom;
	std::shared_ptr<java::lang::Object> aliasTo;
	std::shared_ptr<android::icu::util::Region> cVar6;
	std::shared_ptr<java::util::ArrayList> cVar7;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<android::icu::util::Region> cVar8;
	std::shared_ptr<android::icu::util::UResourceBundle> mapping;
	auto codeMappingStrings;
	std::shared_ptr<java::lang::Object> codeMappingID;
	std::shared_ptr<java::util::Iterator> continent_S_iterator;
	std::shared_ptr<java::lang::String> continent;
	std::shared_ptr<java::util::Iterator> grouping_S_iterator;
	std::shared_ptr<java::lang::String> grouping;
	auto parent;
	std::shared_ptr<android::icu::util::Region> parentRegion;
	int j;
	std::shared_ptr<android::icu::util::Region> childRegion;
	std::shared_ptr<java::util::TreeSet> cVar9;
	std::shared_ptr<java::util::Iterator> ar_S_iterator;
	std::shared_ptr<android::icu::util::Region> ar;
	std::shared_ptr<java::util::Set> currentSet;
	
	cVar0 = android::icu::util::Region();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//label_try_end_5:
	}
	catch (...){
		goto label_catchall_186;
	}
	//    .catchall {:try_start_3 .. :try_end_5} :catchall_186
	if ( !(android::icu::util::Region::regionDataIsLoaded) )  
		goto label_cond_9;
	cVar0->monitor_exit();
	return;
	// 506    .line 144
label_cond_9:
	try {
	//label_try_start_9:
	cVar1 = std::make_shared<java::util::HashMap>();
	android::icu::util::Region::regionAliases = cVar1;
	cVar2 = std::make_shared<java::util::HashMap>();
	android::icu::util::Region::regionIDMap = cVar2;
	cVar3 = std::make_shared<java::util::HashMap>();
	android::icu::util::Region::numericCodeMap = cVar3;
	var14 = cVar4(android::icu::util::Region_S_RegionType::values({const[class].FS-Param})->size());
	android::icu::util::Region::availableRegions = cVar4;
	0x0;
	//    .local v35, "metadataAlias":Landroid/icu/util/UResourceBundle;
	0x0;
	//    .local v53, "territoryAlias":Landroid/icu/util/UResourceBundle;
	0x0;
	//    .local v15, "codeMappings":Landroid/icu/util/UResourceBundle;
	0x0;
	//    .local v30, "idValidity":Landroid/icu/util/UResourceBundle;
	0x0;
	//    .local v44, "regionList":Landroid/icu/util/UResourceBundle;
	0x0;
	//    .local v47, "regionRegular":Landroid/icu/util/UResourceBundle;
	0x0;
	//    .local v45, "regionMacro":Landroid/icu/util/UResourceBundle;
	0x0;
	//    .local v48, "regionUnknown":Landroid/icu/util/UResourceBundle;
	0x0;
	//    .local v55, "worldContainment":Landroid/icu/util/UResourceBundle;
	0x0;
	//    .local v54, "territoryContainment":Landroid/icu/util/UResourceBundle;
	0x0;
	//    .local v25, "groupingContainment":Landroid/icu/util/UResourceBundle;
	//    .local v34, "metadata":Landroid/icu/util/UResourceBundle;
	//    .local v35, "metadataAlias":Landroid/icu/util/UResourceBundle;
	territoryAlias = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("metadata")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("alias")))->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("territory")));
	//    .local v53, "territoryAlias":Landroid/icu/util/UResourceBundle;
	supplementalData = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("supplementalData")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);
	//    .local v52, "supplementalData":Landroid/icu/util/UResourceBundle;
	codeMappings = supplementalData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("codeMappings")));
	//    .local v15, "codeMappings":Landroid/icu/util/UResourceBundle;
	//    .local v30, "idValidity":Landroid/icu/util/UResourceBundle;
	regionList = supplementalData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("idValidity")))->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("region")));
	//    .local v44, "regionList":Landroid/icu/util/UResourceBundle;
	//    .local v47, "regionRegular":Landroid/icu/util/UResourceBundle;
	//    .local v45, "regionMacro":Landroid/icu/util/UResourceBundle;
	//    .local v48, "regionUnknown":Landroid/icu/util/UResourceBundle;
	territoryContainment = supplementalData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("territoryContainment")));
	//    .local v54, "territoryContainment":Landroid/icu/util/UResourceBundle;
	//    .local v55, "worldContainment":Landroid/icu/util/UResourceBundle;
	//    .local v25, "groupingContainment":Landroid/icu/util/UResourceBundle;
	//    .local v19, "continentsArr":[Ljava/lang/String;
	//    .local v18, "continents":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	//    .local v24, "groupingArr":[Ljava/lang/String;
	//    .local v26, "groupings":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	regionCodes = std::make_shared<java::util::ArrayList>();
	//    .local v43, "regionCodes":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	allRegions = std::make_shared<java::util::ArrayList>();
	//    .local v6, "allRegions":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	allRegions->addAll(java::util::Arrays::asList(regionList->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("regular")))->getStringArray()));
	allRegions->addAll(java::util::Arrays::asList(regionList->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("macroregion")))->getStringArray()));
	allRegions->add(regionList->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("unknown")))->getString());
	r_S_iterator = allRegions->iterator();
	//    .local v41, "r$iterator":Ljava/util/Iterator;
label_cond_125:
label_goto_125:
	if ( !(r_S_iterator->hasNext()) )  
		goto label_cond_191;
	r = r_S_iterator->next();
	r->checkCast("java::lang::String");
	//    .local v40, "r":Ljava/lang/String;
	rangeMarkerLocation = r->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("~")));
	//    .local v42, "rangeMarkerLocation":I
	if ( rangeMarkerLocation <= 0 )
		goto label_cond_189;
	var139 = regionName(r);
	//    .local v46, "regionName":Ljava/lang/StringBuilder;
	//    .local v21, "endRange":C
	regionName->setLength(rangeMarkerLocation);
	lastChar = regionName->charAt(( rangeMarkerLocation + -0x1));
	//    .local v32, "lastChar":C
label_goto_162:
	if ( lastChar >  regionName->charAt(( rangeMarkerLocation + 0x1)) )
		goto label_cond_125;
	//    .local v36, "newRegion":Ljava/lang/String;
	regionCodes->add(regionName->toString());
	lastChar = (char)(( lastChar + 0x1));
	regionName->setCharAt(( rangeMarkerLocation + -0x1), lastChar);
	//label_try_end_185:
	}
	catch (...){
		goto label_catchall_186;
	}
	//    .catchall {:try_start_9 .. :try_end_185} :catchall_186
	goto label_goto_162;
	// 955    .end local v6    # "allRegions":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 956    .end local v18    # "continents":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 957    .end local v21    # "endRange":C
	// 958    .end local v24    # "groupingArr":[Ljava/lang/String;
	// 959    .end local v26    # "groupings":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 960    .end local v32    # "lastChar":C
	// 961    .end local v36    # "newRegion":Ljava/lang/String;
	// 962    .end local v40    # "r":Ljava/lang/String;
	// 963    .end local v41    # "r$iterator":Ljava/util/Iterator;
	// 964    .end local v42    # "rangeMarkerLocation":I
	// 965    .end local v43    # "regionCodes":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 966    .end local v46    # "regionName":Ljava/lang/StringBuilder;
label_catchall_186:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 974    .line 204
	// 975    .restart local v6    # "allRegions":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 976    .restart local v18    # "continents":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 977    .restart local v24    # "groupingArr":[Ljava/lang/String;
	// 978    .restart local v26    # "groupings":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 979    .restart local v40    # "r":Ljava/lang/String;
	// 980    .restart local v41    # "r$iterator":Ljava/util/Iterator;
	// 981    .restart local v42    # "rangeMarkerLocation":I
	// 982    .restart local v43    # "regionCodes":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
label_cond_189:
	try {
	//label_try_start_189:
	regionCodes->add(r);
	goto label_goto_125;
	// 993    .line 208
	// 994    .end local v40    # "r":Ljava/lang/String;
	// 995    .end local v42    # "rangeMarkerLocation":I
label_cond_191:
	var178 = cVar5(regionCodes->size());
	android::icu::util::Region::regions = cVar5;
	id_S_iterator = regionCodes->iterator();
	//    .local v29, "id$iterator":Ljava/util/Iterator;
label_goto_1a4:
	if ( !(id_S_iterator->hasNext()) )  
		goto label_cond_219;
	id = id_S_iterator->next();
	id->checkCast("java::lang::String");
	//    .local v28, "id":Ljava/lang/String;
	r = std::make_shared<android::icu::util::Region>();
	//    .local v39, "r":Landroid/icu/util/Region;
	r->id = id;
	r->type = android::icu::util::Region_S_RegionType::TERRITORY;
	android::icu::util::Region::regionIDMap->put(id, r);
	if ( !(id->matches(std::make_shared<java::lang::String>(std::make_shared<char[]>("[0-9]{3}")))) )  
		goto label_cond_210;
	r->code = java::lang::Integer::valueOf(id)->intValue();
	android::icu::util::Region::numericCodeMap->put(java::lang::Integer::valueOf(r->code), r);
	r->type = android::icu::util::Region_S_RegionType::SUBCONTINENT;
label_goto_206:
	android::icu::util::Region::regions->add(r);
	goto label_goto_1a4;
	// 1134    .line 221
label_cond_210:
	r->code = -0x1;
	goto label_goto_206;
	// 1146    .line 228
	// 1147    .end local v28    # "id":Ljava/lang/String;
	// 1148    .end local v39    # "r":Landroid/icu/util/Region;
label_cond_219:
	i = 0x0;
	//    .local v27, "i":I
label_goto_21b:
	if ( i >= territoryAlias->getSize() )
		goto label_cond_32a;
	res = territoryAlias->get(i);
	//    .local v49, "res":Landroid/icu/util/UResourceBundle;
	aliasFrom = res->getKey();
	//    .local v3, "aliasFrom":Ljava/lang/String;
	aliasTo = res->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("replacement")))->getString();
	//    .local v4, "aliasTo":Ljava/lang/String;
	if ( !(android::icu::util::Region::regionIDMap->containsKey(aliasTo)) )  
		goto label_cond_26c;
	if ( !(( android::icu::util::Region::regionIDMap->containsKey(aliasFrom) ^ 0x1)) )  
		goto label_cond_26c;
	cVar6 = android::icu::util::Region::regionIDMap->get(aliasTo);
	cVar6->checkCast("android::icu::util::Region");
	android::icu::util::Region::regionAliases->put(aliasFrom, cVar6);
label_cond_269:
	i = ( i + 0x1);
	goto label_goto_21b;
	// 1244    .line 237
label_cond_26c:
	if ( !(android::icu::util::Region::regionIDMap->containsKey(aliasFrom)) )  
		goto label_cond_2d6;
	r = android::icu::util::Region::regionIDMap->get(aliasFrom);
	r->checkCast("android::icu::util::Region");
	//    .restart local v39    # "r":Landroid/icu/util/Region;
label_goto_280:
	r->type = android::icu::util::Region_S_RegionType::DEPRECATED;
	//    .local v5, "aliasToRegionStrings":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	cVar7 = std::make_shared<java::util::ArrayList>();
	r->preferredValues = cVar7;
	s_S_iterator = java::util::Arrays::asList(aliasTo->split(std::make_shared<java::lang::String>(std::make_shared<char[]>(" "))))->iterator();
	//    .local v51, "s$iterator":Ljava/util/Iterator;
label_cond_2a4:
label_goto_2a4:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_269;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .local v50, "s":Ljava/lang/String;
	if ( !(android::icu::util::Region::regionIDMap->containsKey(s)) )  
		goto label_cond_2a4;
	cVar8 = android::icu::util::Region::regionIDMap->get(s);
	cVar8->checkCast("android::icu::util::Region");
	r->preferredValues->add(cVar8);
	goto label_goto_2a4;
	// 1364    .line 240
	// 1365    .end local v5    # "aliasToRegionStrings":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 1366    .end local v39    # "r":Landroid/icu/util/Region;
	// 1367    .end local v50    # "s":Ljava/lang/String;
	// 1368    .end local v51    # "s$iterator":Ljava/util/Iterator;
label_cond_2d6:
	r = std::make_shared<android::icu::util::Region>();
	//    .restart local v39    # "r":Landroid/icu/util/Region;
	r->id = aliasFrom;
	android::icu::util::Region::regionIDMap->put(aliasFrom, r);
	if ( !(aliasFrom->matches(std::make_shared<java::lang::String>(std::make_shared<char[]>("[0-9]{3}")))) )  
		goto label_cond_321;
	r->code = java::lang::Integer::valueOf(aliasFrom)->intValue();
	android::icu::util::Region::numericCodeMap->put(java::lang::Integer::valueOf(r->code), r);
label_goto_316:
	android::icu::util::Region::regions->add(r);
	goto label_goto_280;
	// 1448    .line 247
label_cond_321:
	r->code = -0x1;
	goto label_goto_316;
	// 1460    .line 263
	// 1461    .end local v3    # "aliasFrom":Ljava/lang/String;
	// 1462    .end local v4    # "aliasTo":Ljava/lang/String;
	// 1463    .end local v39    # "r":Landroid/icu/util/Region;
	// 1464    .end local v49    # "res":Landroid/icu/util/UResourceBundle;
label_cond_32a:
	i = 0x0;
label_goto_32c:
	if ( i >= codeMappings->getSize() )
		goto label_cond_39b;
	mapping = codeMappings->get(i);
	//    .local v33, "mapping":Landroid/icu/util/UResourceBundle;
	if ( mapping->getType() != 0x8 )
		goto label_cond_398;
	codeMappingStrings = mapping->getStringArray();
	//    .local v14, "codeMappingStrings":[Ljava/lang/String;
	codeMappingID = codeMappingStrings[0x0];
	//    .local v12, "codeMappingID":Ljava/lang/String;
	//    .local v13, "codeMappingNumber":Ljava/lang/Integer;
	//    .local v11, "codeMapping3Letter":Ljava/lang/String;
	if ( !(android::icu::util::Region::regionIDMap->containsKey(codeMappingID)) )  
		goto label_cond_398;
	r = android::icu::util::Region::regionIDMap->get(codeMappingID);
	r->checkCast("android::icu::util::Region");
	//    .restart local v39    # "r":Landroid/icu/util/Region;
	r->code = java::lang::Integer::valueOf(codeMappingStrings[0x1])->intValue();
	android::icu::util::Region::numericCodeMap->put(java::lang::Integer::valueOf(r->code), r);
	android::icu::util::Region::regionAliases->put(codeMappingStrings[0x2], r);
	//    .end local v11    # "codeMapping3Letter":Ljava/lang/String;
	//    .end local v12    # "codeMappingID":Ljava/lang/String;
	//    .end local v13    # "codeMappingNumber":Ljava/lang/Integer;
	//    .end local v14    # "codeMappingStrings":[Ljava/lang/String;
	//    .end local v39    # "r":Landroid/icu/util/Region;
label_cond_398:
	i = ( i + 0x1);
	goto label_goto_32c;
	// 1603    .line 282
	// 1604    .end local v33    # "mapping":Landroid/icu/util/UResourceBundle;
label_cond_39b:
	if ( !(android::icu::util::Region::regionIDMap->containsKey(std::make_shared<java::lang::String>(std::make_shared<char[]>("001")))) )  
		goto label_cond_3c1;
	r = android::icu::util::Region::regionIDMap->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("001")));
	r->checkCast("android::icu::util::Region");
	//    .restart local v39    # "r":Landroid/icu/util/Region;
	r->type = android::icu::util::Region_S_RegionType::WORLD;
	//    .end local v39    # "r":Landroid/icu/util/Region;
label_cond_3c1:
	if ( !(android::icu::util::Region::regionIDMap->containsKey(std::make_shared<java::lang::String>(std::make_shared<char[]>("ZZ")))) )  
		goto label_cond_3e7;
	r = android::icu::util::Region::regionIDMap->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("ZZ")));
	r->checkCast("android::icu::util::Region");
	//    .restart local v39    # "r":Landroid/icu/util/Region;
	r->type = android::icu::util::Region_S_RegionType::UNKNOWN;
	//    .end local v39    # "r":Landroid/icu/util/Region;
label_cond_3e7:
	continent_S_iterator = java::util::Arrays::asList(territoryContainment->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("001")))->getStringArray())->iterator();
	//    .local v17, "continent$iterator":Ljava/util/Iterator;
label_cond_3eb:
label_goto_3eb:
	if ( !(continent_S_iterator->hasNext()) )  
		goto label_cond_418;
	continent = continent_S_iterator->next();
	continent->checkCast("java::lang::String");
	//    .local v16, "continent":Ljava/lang/String;
	if ( !(android::icu::util::Region::regionIDMap->containsKey(continent)) )  
		goto label_cond_3eb;
	r = android::icu::util::Region::regionIDMap->get(continent);
	r->checkCast("android::icu::util::Region");
	//    .restart local v39    # "r":Landroid/icu/util/Region;
	r->type = android::icu::util::Region_S_RegionType::CONTINENT;
	goto label_goto_3eb;
	// 1748    .line 299
	// 1749    .end local v16    # "continent":Ljava/lang/String;
	// 1750    .end local v39    # "r":Landroid/icu/util/Region;
label_cond_418:
	grouping_S_iterator = java::util::Arrays::asList(territoryContainment->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("grouping")))->getStringArray())->iterator();
	//    .local v23, "grouping$iterator":Ljava/util/Iterator;
label_cond_41c:
label_goto_41c:
	if ( !(grouping_S_iterator->hasNext()) )  
		goto label_cond_449;
	grouping = grouping_S_iterator->next();
	grouping->checkCast("java::lang::String");
	//    .local v22, "grouping":Ljava/lang/String;
	if ( !(android::icu::util::Region::regionIDMap->containsKey(grouping)) )  
		goto label_cond_41c;
	r = android::icu::util::Region::regionIDMap->get(grouping);
	r->checkCast("android::icu::util::Region");
	//    .restart local v39    # "r":Landroid/icu/util/Region;
	r->type = android::icu::util::Region_S_RegionType::GROUPING;
	goto label_goto_41c;
	// 1810    .line 309
	// 1811    .end local v22    # "grouping":Ljava/lang/String;
	// 1812    .end local v39    # "r":Landroid/icu/util/Region;
label_cond_449:
	if ( !(android::icu::util::Region::regionIDMap->containsKey(std::make_shared<java::lang::String>(std::make_shared<char[]>("QO")))) )  
		goto label_cond_46f;
	r = android::icu::util::Region::regionIDMap->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("QO")));
	r->checkCast("android::icu::util::Region");
	//    .restart local v39    # "r":Landroid/icu/util/Region;
	r->type = android::icu::util::Region_S_RegionType::SUBCONTINENT;
	//    .end local v39    # "r":Landroid/icu/util/Region;
label_cond_46f:
	i = 0x0;
label_goto_471:
	if ( i >= territoryContainment->getSize() )
		goto label_cond_4f0;
	mapping = territoryContainment->get(i);
	//    .restart local v33    # "mapping":Landroid/icu/util/UResourceBundle;
	parent = mapping->getKey();
	//    .local v37, "parent":Ljava/lang/String;
	if ( parent->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("containedGroupings"))) )     
		goto label_cond_4a1;
	if ( !(parent->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("deprecated")))) )  
		goto label_cond_4a4;
label_cond_4a1:
	i = ( i + 0x1);
	goto label_goto_471;
	// 1916    .line 322
label_cond_4a4:
	parentRegion = android::icu::util::Region::regionIDMap->get(parent);
	parentRegion->checkCast("android::icu::util::Region");
	//    .local v38, "parentRegion":Landroid/icu/util/Region;
	j = 0x0;
	//    .local v31, "j":I
label_goto_4b2:
	if ( j >= mapping->getSize() )
		goto label_cond_4a1;
	//    .local v9, "child":Ljava/lang/String;
	childRegion = android::icu::util::Region::regionIDMap->get(mapping->getString(j));
	childRegion->checkCast("android::icu::util::Region");
	//    .local v10, "childRegion":Landroid/icu/util/Region;
	if ( !(parentRegion) )  
		goto label_cond_4ed;
	if ( !(childRegion) )  
		goto label_cond_4ed;
	parentRegion->containedRegions->add(childRegion);
	if ( parentRegion->getType() == android::icu::util::Region_S_RegionType::GROUPING )
		goto label_cond_4ed;
	childRegion->containingRegion = parentRegion;
label_cond_4ed:
	j = ( j + 0x1);
	goto label_goto_4b2;
	// 2008    .line 343
	// 2009    .end local v9    # "child":Ljava/lang/String;
	// 2010    .end local v10    # "childRegion":Landroid/icu/util/Region;
	// 2011    .end local v31    # "j":I
	// 2012    .end local v33    # "mapping":Landroid/icu/util/UResourceBundle;
	// 2013    .end local v37    # "parent":Ljava/lang/String;
	// 2014    .end local v38    # "parentRegion":Landroid/icu/util/Region;
label_cond_4f0:
	i = 0x0;
label_goto_4f2:
	if ( i >= android::icu::util::Region_S_RegionType::values({const[class].FS-Param})->size() )
		goto label_cond_512;
	cVar9 = std::make_shared<java::util::TreeSet>();
	android::icu::util::Region::availableRegions->add(cVar9);
	i = ( i + 0x1);
	goto label_goto_4f2;
	// 2053    .line 347
label_cond_512:
	ar_S_iterator = android::icu::util::Region::regions->iterator();
	//    .local v8, "ar$iterator":Ljava/util/Iterator;
label_goto_518:
	if ( !(ar_S_iterator->hasNext()) )  
		goto label_cond_551;
	ar = ar_S_iterator->next();
	ar->checkCast("android::icu::util::Region");
	//    .local v7, "ar":Landroid/icu/util/Region;
	currentSet = android::icu::util::Region::availableRegions->get(ar->type->ordinal());
	currentSet->checkCast("java::util::Set");
	//    .local v20, "currentSet":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/Region;>;"
	currentSet->add(ar);
	android::icu::util::Region::availableRegions->set(ar->type->ordinal(), currentSet);
	goto label_goto_518;
	// 2124    .line 353
	// 2125    .end local v7    # "ar":Landroid/icu/util/Region;
	// 2126    .end local v20    # "currentSet":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/Region;>;"
label_cond_551:
	android::icu::util::Region::regionDataIsLoaded = 0x1;
	//label_try_end_555:
	}
	catch (...){
		goto label_catchall_186;
	}
	//    .catchall {:try_start_189 .. :try_end_555} :catchall_186
	cVar0->monitor_exit();
	return;

}
// .method public compareTo(Landroid/icu/util/Region;)I
int android::icu::util::Region::compareTo(std::shared_ptr<android::icu::util::Region> other)
{
	
	//    .param p1, "other"    # Landroid/icu/util/Region;
	return this->id->compareTo(other->id);

}
// .method public contains(Landroid/icu/util/Region;)Z
bool android::icu::util::Region::contains(std::shared_ptr<android::icu::util::Region> other)
{
	
	bool cVar0;
	std::shared_ptr<java::util::Iterator> cr_S_iterator;
	std::shared_ptr<android::icu::util::Region> cr;
	
	//    .param p1, "other"    # Landroid/icu/util/Region;
	cVar0 = 0x1;
	android::icu::util::Region::loadRegionData({const[class].FS-Param});
	if ( !(this->containedRegions->contains(other)) )  
		goto label_cond_d;
	return cVar0;
	// 2195    .line 537
label_cond_d:
	cr_S_iterator = this->containedRegions->iterator();
	//    .local v1, "cr$iterator":Ljava/util/Iterator;
label_cond_13:
	if ( !(cr_S_iterator->hasNext()) )  
		goto label_cond_26;
	cr = cr_S_iterator->next();
	cr->checkCast("android::icu::util::Region");
	//    .local v0, "cr":Landroid/icu/util/Region;
	if ( !(cr->contains(other)) )  
		goto label_cond_13;
	return cVar0;
	// 2228    .line 544
	// 2229    .end local v0    # "cr":Landroid/icu/util/Region;
label_cond_26:
	return 0x0;

}
// .method public getContainedRegions()Ljava/util/Set;
std::shared_ptr<java::util::Set<android::icu::util::Region>> android::icu::util::Region::getContainedRegions()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2239        value = {
	// 2240            "()",
	// 2241            "Ljava/util/Set",
	// 2242            "<",
	// 2243            "Landroid/icu/util/Region;",
	// 2244            ">;"
	// 2245        }
	// 2246    .end annotation
	android::icu::util::Region::loadRegionData({const[class].FS-Param});
	return java::util::Collections::unmodifiableSet(this->containedRegions);

}
// .method public getContainedRegions(Landroid/icu/util/Region$RegionType;)Ljava/util/Set;
std::shared_ptr<java::util::Set<android::icu::util::Region>> android::icu::util::Region::getContainedRegions(std::shared_ptr<android::icu::util::Region_S_RegionType> type)
{
	
	std::shared_ptr<java::util::TreeSet> result;
	std::shared_ptr<java::util::Iterator> r_S_iterator;
	std::shared_ptr<android::icu::util::Region> r;
	
	//    .param p1, "type"    # Landroid/icu/util/Region$RegionType;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2266        value = {
	// 2267            "(",
	// 2268            "Landroid/icu/util/Region$RegionType;",
	// 2269            ")",
	// 2270            "Ljava/util/Set",
	// 2271            "<",
	// 2272            "Landroid/icu/util/Region;",
	// 2273            ">;"
	// 2274        }
	// 2275    .end annotation
	android::icu::util::Region::loadRegionData({const[class].FS-Param});
	result = std::make_shared<java::util::TreeSet>();
	//    .local v3, "result":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/Region;>;"
	//    .local v0, "cr":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/Region;>;"
	r_S_iterator = this->getContainedRegions()->iterator();
	//    .local v2, "r$iterator":Ljava/util/Iterator;
label_goto_10:
	if ( !(r_S_iterator->hasNext()) )  
		goto label_cond_2e;
	r = r_S_iterator->next();
	r->checkCast("android::icu::util::Region");
	//    .local v1, "r":Landroid/icu/util/Region;
	if ( r->getType() != type )
		goto label_cond_26;
	result->add(r);
	goto label_goto_10;
	// 2325    .line 505
label_cond_26:
	result->addAll(r->getContainedRegions(type));
	goto label_goto_10;
	// 2335    .line 508
	// 2336    .end local v1    # "r":Landroid/icu/util/Region;
label_cond_2e:
	return java::util::Collections::unmodifiableSet(result);

}
// .method public getContainingRegion()Landroid/icu/util/Region;
std::shared_ptr<android::icu::util::Region> android::icu::util::Region::getContainingRegion()
{
	
	android::icu::util::Region::loadRegionData({const[class].FS-Param});
	return this->containingRegion;

}
// .method public getContainingRegion(Landroid/icu/util/Region$RegionType;)Landroid/icu/util/Region;
std::shared_ptr<android::icu::util::Region> android::icu::util::Region::getContainingRegion(std::shared_ptr<android::icu::util::Region_S_RegionType> type)
{
	
	//    .param p1, "type"    # Landroid/icu/util/Region$RegionType;
	android::icu::util::Region::loadRegionData({const[class].FS-Param});
	if ( this->containingRegion )     
		goto label_cond_9;
	return 0x0;
	// 2376    .line 462
label_cond_9:
	if ( !(this->containingRegion->type->equals(type)) )  
		goto label_cond_16;
	return this->containingRegion;
	// 2393    .line 465
label_cond_16:
	return this->containingRegion->getContainingRegion(type);

}
// .method public getNumericCode()I
int android::icu::util::Region::getNumericCode()
{
	
	return this->code;

}
// .method public getPreferredValues()Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::util::Region>> android::icu::util::Region::getPreferredValues()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2417        value = {
	// 2418            "()",
	// 2419            "Ljava/util/List",
	// 2420            "<",
	// 2421            "Landroid/icu/util/Region;",
	// 2422            ">;"
	// 2423        }
	// 2424    .end annotation
	android::icu::util::Region::loadRegionData({const[class].FS-Param});
	if ( this->type != android::icu::util::Region_S_RegionType::DEPRECATED )
		goto label_cond_10;
	return java::util::Collections::unmodifiableList(this->preferredValues);
	// 2446    .line 523
label_cond_10:
	return 0x0;

}
// .method public getType()Landroid/icu/util/Region$RegionType;
std::shared_ptr<android::icu::util::Region_S_RegionType> android::icu::util::Region::getType()
{
	
	return this->type;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Region::toString()
{
	
	return this->id;

}


