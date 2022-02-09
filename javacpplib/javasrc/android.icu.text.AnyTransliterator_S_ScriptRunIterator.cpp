// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\AnyTransliterator$ScriptRunIterator.smali
#include "java2ctype.h"
#include "android.icu.lang.UScript.h"
#include "android.icu.text.AnyTransliterator_S_ScriptRunIterator.h"
#include "android.icu.text.Replaceable.h"

// .method public constructor <init>(Landroid/icu/text/Replaceable;II)V
android::icu::text::AnyTransliterator_S_ScriptRunIterator::AnyTransliterator_S_ScriptRunIterator(std::shared_ptr<android::icu::text::Replaceable> text,int start,int limit)
{
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	// 040    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->text = text;
	this->textStart = start;
	this->textLimit = limit;
	this->limit = start;
	return;

}
// .method public adjustLimit(I)V
void android::icu::text::AnyTransliterator_S_ScriptRunIterator::adjustLimit(int delta)
{
	
	//    .param p1, "delta"    # I
	this->limit = (this->limit +  delta);
	this->textLimit = (this->textLimit +  delta);
	return;

}
// .method public next()Z
bool android::icu::text::AnyTransliterator_S_ScriptRunIterator::next()
{
	
	int cVar0;
	bool cVar1;
	int s;
	
	cVar0 = -0x1;
	cVar1 = 0x1;
	this->scriptCode = cVar0;
	this->start = this->limit;
	if ( this->start != this->textLimit )
		goto label_cond_10;
	return 0x0;
	// 111    .line 363
label_cond_10:
label_goto_10:
	if ( this->start <= this->textStart )
		goto label_cond_2f;
	//    .local v0, "ch":I
	s = android::icu::lang::UScript::getScript(this->text->char32At(( this->start + -0x1)));
	//    .local v1, "s":I
	if ( !(s) )  
		goto label_cond_28;
	if ( s != cVar1 )
		goto label_cond_2f;
label_cond_28:
	this->start = ( this->start + -0x1);
	goto label_goto_10;
	// 153    .line 375
	// 154    .end local v0    # "ch":I
	// 155    .end local v1    # "s":I
label_cond_2f:
label_goto_2f:
	if ( this->limit >= this->textLimit )
		goto label_cond_56;
	//    .restart local v0    # "ch":I
	s = android::icu::lang::UScript::getScript(this->text->char32At(this->limit));
	//    .restart local v1    # "s":I
	if ( !(s) )  
		goto label_cond_4b;
	if ( s == cVar1 )
		goto label_cond_4b;
	if ( this->scriptCode != cVar0 )
		goto label_cond_52;
	this->scriptCode = s;
label_cond_4b:
	this->limit = ( this->limit + 0x1);
	goto label_goto_2f;
	// 203    .line 381
label_cond_52:
	if ( s == this->scriptCode )
		goto label_cond_4b;
	//    .end local v0    # "ch":I
	//    .end local v1    # "s":I
label_cond_56:
	return cVar1;

}


