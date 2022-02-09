// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\Utils$ChineseDigits.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.Utils_S_ChineseDigits.h"
#include "java.lang.String.h"

static android::icu::impl::duration::impl::Utils_S_ChineseDigits::DEBUG;
static android::icu::impl::duration::impl::Utils_S_ChineseDigits::KOREAN;
static android::icu::impl::duration::impl::Utils_S_ChineseDigits::SIMPLIFIED;
static android::icu::impl::duration::impl::Utils_S_ChineseDigits::TRADITIONAL;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::Utils_S_ChineseDigits::static_cinit()
{
	
	bool cVar0;
	std::shared_ptr<android::icu::impl::duration::impl::Utils_S_ChineseDigits> cVar1;
	std::shared_ptr<android::icu::impl::duration::impl::Utils_S_ChineseDigits> cVar2;
	std::shared_ptr<android::icu::impl::duration::impl::Utils_S_ChineseDigits> cVar3;
	std::shared_ptr<android::icu::impl::duration::impl::Utils_S_ChineseDigits> cVar4;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<android::icu::impl::duration::impl::Utils_S_ChineseDigits>(std::make_shared<java::lang::String>(std::make_shared<char[]>("0123456789s")), std::make_shared<java::lang::String>(std::make_shared<char[]>("sbq")), std::make_shared<java::lang::String>(std::make_shared<char[]>("WYZ")), 0x4c, cVar0);
	android::icu::impl::duration::impl::Utils_S_ChineseDigits::DEBUG = cVar1;
	cVar2 = std::make_shared<android::icu::impl::duration::impl::Utils_S_ChineseDigits>(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u96f6\u4e00\u4e8c\u4e09\u56db\u4e94\u516d\u4e03\u516b\u4e5d\u5341")), std::make_shared<java::lang::String>(std::make_shared<char[]>("\u5341\u767e\u5343")), std::make_shared<java::lang::String>(std::make_shared<char[]>("\u842c\u5104\u5146")), 0x5169, cVar0);
	android::icu::impl::duration::impl::Utils_S_ChineseDigits::TRADITIONAL = cVar2;
	cVar3 = std::make_shared<android::icu::impl::duration::impl::Utils_S_ChineseDigits>(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u96f6\u4e00\u4e8c\u4e09\u56db\u4e94\u516d\u4e03\u516b\u4e5d\u5341")), std::make_shared<java::lang::String>(std::make_shared<char[]>("\u5341\u767e\u5343")), std::make_shared<java::lang::String>(std::make_shared<char[]>("\u4e07\u4ebf\u5146")), 0x4e24, cVar0);
	android::icu::impl::duration::impl::Utils_S_ChineseDigits::SIMPLIFIED = cVar3;
	cVar4 = std::make_shared<android::icu::impl::duration::impl::Utils_S_ChineseDigits>(std::make_shared<java::lang::String>(std::make_shared<char[]>("\uc601\uc77c\uc774\uc0bc\uc0ac\uc624\uc721\uce60\ud314\uad6c\uc2ed")), std::make_shared<java::lang::String>(std::make_shared<char[]>("\uc2ed\ubc31\ucc9c")), std::make_shared<java::lang::String>(std::make_shared<char[]>("\ub9cc\uc5b5?")), 0xc774, 0x1);
	android::icu::impl::duration::impl::Utils_S_ChineseDigits::KOREAN = cVar4;
	return;

}
// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;CZ)V
android::icu::impl::duration::impl::Utils_S_ChineseDigits::Utils_S_ChineseDigits(std::shared_ptr<java::lang::String> digits,std::shared_ptr<java::lang::String> units,std::shared_ptr<java::lang::String> levels,char liang,bool ko)
{
	
	//    .param p1, "digits"    # Ljava/lang/String;
	//    .param p2, "units"    # Ljava/lang/String;
	//    .param p3, "levels"    # Ljava/lang/String;
	//    .param p4, "liang"    # C
	//    .param p5, "ko"    # Z
	// 138    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->digits = digits->toCharArray();
	this->units = units->toCharArray();
	this->levels = levels->toCharArray();
	this->liang = liang;
	this->ko = ko;
	return;

}


