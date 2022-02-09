// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$GMTOffsetField.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneFormat_S_GMTOffsetField.h"

// .method constructor <init>(CI)V
android::icu::text::TimeZoneFormat_S_GMTOffsetField::TimeZoneFormat_S_GMTOffsetField(char type,int width)
{
	
	//    .param p1, "type"    # C
	//    .param p2, "width"    # I
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_type = type;
	this->_width = width;
	return;

}
// .method static isValid(CI)Z
bool android::icu::text::TimeZoneFormat_S_GMTOffsetField::isValid(char type,int width)
{
	
	bool cVar0;
	
	//    .param p0, "type"    # C
	//    .param p1, "width"    # I
	cVar0 = 0x1;
	if ( width == cVar0 )
		goto label_cond_6;
	if ( width != 0x2 )
		goto label_cond_7;
label_cond_6:
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = 0x0;
	goto label_goto_6;

}
// .method getType()C
char android::icu::text::TimeZoneFormat_S_GMTOffsetField::getType()
{
	
	return this->_type;

}
// .method getWidth()I
int android::icu::text::TimeZoneFormat_S_GMTOffsetField::getWidth()
{
	
	return this->_width;

}


