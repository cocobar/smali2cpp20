// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\CharsTrie$State.smali
#include "java2ctype.h"
#include "android.icu.util.CharsTrie_S_State.h"
#include "java.lang.CharSequence.h"

// .method static synthetic -get0(Landroid/icu/util/CharsTrie$State;)Ljava/lang/CharSequence;
std::shared_ptr<java::lang::CharSequence> android::icu::util::CharsTrie_S_State::_get0(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/CharsTrie$State;
	return _this->chars;

}
// .method static synthetic -get1(Landroid/icu/util/CharsTrie$State;)I
int android::icu::util::CharsTrie_S_State::_get1(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/CharsTrie$State;
	return _this->pos;

}
// .method static synthetic -get2(Landroid/icu/util/CharsTrie$State;)I
int android::icu::util::CharsTrie_S_State::_get2(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/CharsTrie$State;
	return _this->remainingMatchLength;

}
// .method static synthetic -get3(Landroid/icu/util/CharsTrie$State;)I
int android::icu::util::CharsTrie_S_State::_get3(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/CharsTrie$State;
	return _this->root;

}
// .method static synthetic -set0(Landroid/icu/util/CharsTrie$State;Ljava/lang/CharSequence;)Ljava/lang/CharSequence;
std::shared_ptr<java::lang::CharSequence> android::icu::util::CharsTrie_S_State::_set0(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this,std::shared_ptr<java::lang::CharSequence> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/CharsTrie$State;
	//    .param p1, "-value"    # Ljava/lang/CharSequence;
	_this->chars = _value;
	return _value;

}
// .method static synthetic -set1(Landroid/icu/util/CharsTrie$State;I)I
int android::icu::util::CharsTrie_S_State::_set1(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this,int _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/CharsTrie$State;
	//    .param p1, "-value"    # I
	_this->pos = _value;
	return _value;

}
// .method static synthetic -set2(Landroid/icu/util/CharsTrie$State;I)I
int android::icu::util::CharsTrie_S_State::_set2(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this,int _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/CharsTrie$State;
	//    .param p1, "-value"    # I
	_this->remainingMatchLength = _value;
	return _value;

}
// .method static synthetic -set3(Landroid/icu/util/CharsTrie$State;I)I
int android::icu::util::CharsTrie_S_State::_set3(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this,int _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/CharsTrie$State;
	//    .param p1, "-value"    # I
	_this->root = _value;
	return _value;

}
// .method public constructor <init>()V
android::icu::util::CharsTrie_S_State::CharsTrie_S_State()
{
	
	// 117    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


