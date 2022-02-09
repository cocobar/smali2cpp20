// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnhandledBreakEngine.smali
#include "java2ctype.h"
#include "android.icu.impl.CharacterIteration.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.DictionaryBreakEngine_S_DequeI.h"
#include "android.icu.text.UnhandledBreakEngine.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.text.CharacterIterator.h"

// .method public constructor <init>()V
android::icu::text::UnhandledBreakEngine::UnhandledBreakEngine()
{
	
	int i;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	// 019    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fHandled = std::make_shared<std::vector<std::vector<android::icu::text::UnicodeSet>>>(0x5);
	i = 0x0;
	//    .local v0, "i":I
label_goto_9:
	if ( i >= this->fHandled->size() )
		goto label_cond_1a;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>();
	this->fHandled[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_9;
	// 053    .line 28
label_cond_1a:
	return;

}
// .method public findBreaks(Ljava/text/CharacterIterator;IIZILandroid/icu/text/DictionaryBreakEngine$DequeI;)I
int android::icu::text::UnhandledBreakEngine::findBreaks(std::shared_ptr<java::text::CharacterIterator> text,int startPos,int endPos,bool reverse,int breakType,std::shared_ptr<android::icu::text::DictionaryBreakEngine_S_DequeI> foundBreaks)
{
	
	int c;
	
	//    .param p1, "text"    # Ljava/text/CharacterIterator;
	//    .param p2, "startPos"    # I
	//    .param p3, "endPos"    # I
	//    .param p4, "reverse"    # Z
	//    .param p5, "breakType"    # I
	//    .param p6, "foundBreaks"    # Landroid/icu/text/DictionaryBreakEngine$DequeI;
	if ( breakType < 0 ) 
		goto label_cond_3e;
	if ( breakType >= this->fHandled->size() )
		goto label_cond_3e;
	c = android::icu::impl::CharacterIteration::current32(text);
	//    .local v0, "c":I
	if ( !(reverse) )  
		goto label_cond_26;
label_goto_e:
	if ( text->getIndex() <= startPos )
		goto label_cond_3e;
	if ( !(this->fHandled[breakType]->contains(c)) )  
		goto label_cond_3e;
	android::icu::impl::CharacterIteration::previous32(text);
	c = android::icu::impl::CharacterIteration::current32(text);
	goto label_goto_e;
	// 118    .line 45
label_cond_26:
label_goto_26:
	if ( text->getIndex() >= endPos )
		goto label_cond_3e;
	if ( !(this->fHandled[breakType]->contains(c)) )  
		goto label_cond_3e;
	android::icu::impl::CharacterIteration::next32(text);
	c = android::icu::impl::CharacterIteration::current32(text);
	goto label_goto_26;
	// 147    .line 51
	// 148    .end local v0    # "c":I
label_cond_3e:
	return 0x0;

}
// .method public declared-synchronized handleChar(II)V
void android::icu::text::UnhandledBreakEngine::handleChar(int c,int breakType)
{
	
	//    .param p1, "c"    # I
	//    .param p2, "breakType"    # I
	this->monitor_enter();
	if ( breakType < 0 ) 
		goto label_cond_26;
	try {
	//label_try_start_3:
	if ( breakType >= this->fHandled->size() )
		goto label_cond_26;
	if ( c == 0x7fffffff )
		goto label_cond_26;
	if ( this->fHandled[breakType]->contains(c) )     
		goto label_cond_26;
	//    .local v0, "script":I
	this->fHandled[breakType]->applyIntPropertyValue(0x100a, android::icu::lang::UCharacter::getIntPropertyValue(c, 0x100a));
	//label_try_end_26:
	}
	catch (...){
		goto label_catchall_28;
	}
	//    .catchall {:try_start_3 .. :try_end_26} :catchall_28
	//    .end local v0    # "script":I
label_cond_26:
	this->monitor_exit();
	return;
label_catchall_28:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public handles(II)Z
bool android::icu::text::UnhandledBreakEngine::handles(int c,int breakType)
{
	
	bool cVar1;
	
	//    .param p1, "c"    # I
	//    .param p2, "breakType"    # I
	cVar1 = 0x0;
	if ( breakType < 0 ) 
		goto label_cond_10;
	if ( breakType >= this->fHandled->size() )
		goto label_cond_10;
	cVar1 = this->fHandled[breakType]->contains(c);
label_cond_10:
	return cVar1;

}


