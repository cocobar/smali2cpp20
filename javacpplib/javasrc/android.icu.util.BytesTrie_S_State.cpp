// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrie$State.smali
#include "java2ctype.h"
#include "android.icu.util.BytesTrie_S_State.h"

// .method static synthetic -get0(Landroid/icu/util/BytesTrie$State;)[B
unsigned char android::icu::util::BytesTrie_S_State::_get0(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/BytesTrie$State;
	return _this->bytes;

}
// .method static synthetic -get1(Landroid/icu/util/BytesTrie$State;)I
int android::icu::util::BytesTrie_S_State::_get1(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/BytesTrie$State;
	return _this->pos;

}
// .method static synthetic -get2(Landroid/icu/util/BytesTrie$State;)I
int android::icu::util::BytesTrie_S_State::_get2(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/BytesTrie$State;
	return _this->remainingMatchLength;

}
// .method static synthetic -get3(Landroid/icu/util/BytesTrie$State;)I
int android::icu::util::BytesTrie_S_State::_get3(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/BytesTrie$State;
	return _this->root;

}
// .method static synthetic -set0(Landroid/icu/util/BytesTrie$State;[B)[B
unsigned char android::icu::util::BytesTrie_S_State::_set0(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this,std::shared_ptr<unsigned char[]> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/BytesTrie$State;
	//    .param p1, "-value"    # [B
	_this->bytes = _value;
	return _value;

}
// .method static synthetic -set1(Landroid/icu/util/BytesTrie$State;I)I
int android::icu::util::BytesTrie_S_State::_set1(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this,int _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/BytesTrie$State;
	//    .param p1, "-value"    # I
	_this->pos = _value;
	return _value;

}
// .method static synthetic -set2(Landroid/icu/util/BytesTrie$State;I)I
int android::icu::util::BytesTrie_S_State::_set2(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this,int _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/BytesTrie$State;
	//    .param p1, "-value"    # I
	_this->remainingMatchLength = _value;
	return _value;

}
// .method static synthetic -set3(Landroid/icu/util/BytesTrie$State;I)I
int android::icu::util::BytesTrie_S_State::_set3(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this,int _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/BytesTrie$State;
	//    .param p1, "-value"    # I
	_this->root = _value;
	return _value;

}
// .method public constructor <init>()V
android::icu::util::BytesTrie_S_State::BytesTrie_S_State()
{
	
	// 117    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


