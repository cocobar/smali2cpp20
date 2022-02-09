// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Edits$Iterator.smali
#include "java2ctype.h"
#include "android.icu.text.Edits_S_Iterator.h"
#include "java.lang.AssertionError.h"

static android::icu::text::Edits_S_Iterator::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::text::Edits_S_Iterator::static_cinit()
{
	
	android::icu::text::Edits_S_Iterator::_assertionsDisabled = ( android::icu::text::Edits_S_Iterator()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method private constructor <init>([CIZZ)V
android::icu::text::Edits_S_Iterator::Edits_S_Iterator(std::shared_ptr<char[]> a,int len,bool oc,bool crs)
{
	
	//    .param p1, "a"    # [C
	//    .param p2, "len"    # I
	//    .param p3, "oc"    # Z
	//    .param p4, "crs"    # Z
	// 075    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->array = a;
	this->length = len;
	this->onlyChanges_ = oc;
	this->coarse = crs;
	return;

}
// .method synthetic constructor <init>([CIZZLandroid/icu/text/Edits$Iterator;)V
android::icu::text::Edits_S_Iterator::Edits_S_Iterator(std::shared_ptr<char[]> a,int len,bool oc,bool crs,std::shared_ptr<android::icu::text::Edits_S_Iterator> _this4)
{
	
	//    .param p1, "a"    # [C
	//    .param p2, "len"    # I
	//    .param p3, "oc"    # Z
	//    .param p4, "crs"    # Z
	//    .param p5, "-this4"    # Landroid/icu/text/Edits$Iterator;
	android::icu::text::Edits_S_Iterator::(a, len, oc, crs);
	return;

}
// .method private next(Z)Z
bool android::icu::text::Edits_S_Iterator::next(bool onlyChanges)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	bool cVar3;
	int cVar4;
	char u;
	int cVar5;
	int len;
	std::shared_ptr<java::lang::AssertionError> cVar8;
	int cVar6;
	std::shared_ptr<java::lang::AssertionError> cVar7;
	
	//    .param p1, "onlyChanges"    # Z
	cVar0 = 0x7fff;
	cVar1 = 0x6fff;
	cVar2 = 0xfff;
	cVar3 = 0x1;
	this->updateIndexes();
	if ( this->remaining <= 0 )
		goto label_cond_16;
	this->remaining = ( this->remaining + -0x1);
	return cVar3;
	// 140    .line 288
label_cond_16:
	if ( this->index <  this->length )
		goto label_cond_21;
	return this->noNext();
	// 155    .line 291
label_cond_21:
	cVar4 = this->index;
	this->index = ( cVar4 + 0x1);
	u = this->array[cVar4];
	//    .local v3, "u":I
	if ( u >  cVar2 )
		goto label_cond_69;
	this->changed = 0x0;
	this->oldLength_ = ( u + 0x1);
label_goto_33:
	if ( this->index >= this->length )
		goto label_cond_4f;
	u = this->array[this->index];
	if ( u >  cVar2 )
		goto label_cond_4f;
	this->index = ( this->index + 0x1);
	this->oldLength_ = (this->oldLength_ +  ( u + 0x1));
	goto label_goto_33;
	// 213    .line 300
label_cond_4f:
	this->newLength_ = this->oldLength_;
	if ( !(onlyChanges) )  
		goto label_cond_a5;
	this->updateIndexes();
	if ( this->index <  this->length )
		goto label_cond_63;
	return this->noNext();
	// 239    .line 307
label_cond_63:
	this->index = ( this->index + 0x1);
label_cond_69:
	this->changed = cVar3;
	if ( u >  cVar1 )
		goto label_cond_b1;
	if ( !(this->coarse) )  
		goto label_cond_a6;
	//    .local v4, "w":I
	//    .local v0, "len":I
	cVar5 = (( ( u & 0xfff) + 0x1) * _shri(u,0xc));
	this->newLength_ = cVar5;
	this->oldLength_ = cVar5;
	//    .end local v0    # "len":I
	//    .end local v4    # "w":I
label_cond_7d:
label_goto_7d:
	if ( this->index >= this->length )
		goto label_cond_f9;
	u = this->array[this->index];
	if ( u <= cVar2 )
		goto label_cond_f9;
	this->index = ( this->index + 0x1);
	if ( u >  cVar1 )
		goto label_cond_d4;
	//    .restart local v4    # "w":I
	//    .restart local v0    # "len":I
	len = (( ( u & 0xfff) + 0x1) *  _shri(u,0xc));
	this->oldLength_ = (this->oldLength_ +  len);
	this->newLength_ = (this->newLength_ +  len);
	goto label_goto_7d;
	// 334    .line 309
	// 335    .end local v0    # "len":I
	// 336    .end local v4    # "w":I
label_cond_a5:
	return cVar3;
	// 340    .line 320
label_cond_a6:
	cVar6 = _shri(u,0xc);
	this->newLength_ = cVar6;
	this->oldLength_ = cVar6;
	this->remaining = ( u & 0xfff);
	return cVar3;
	// 356    .line 325
label_cond_b1:
	if ( android::icu::text::Edits_S_Iterator::_assertionsDisabled )     
		goto label_cond_bd;
	if ( u <= cVar0 )
		goto label_cond_bd;
	cVar7 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar7;
	// 370    .line 326
label_cond_bd:
	this->oldLength_ = this->readLength(( _shri(u,0x6) & 0x3f));
	this->newLength_ = this->readLength(( u & 0x3f));
	if ( this->coarse )     
		goto label_cond_7d;
	return cVar3;
	// 399    .line 342
label_cond_d4:
	if ( android::icu::text::Edits_S_Iterator::_assertionsDisabled )     
		goto label_cond_e0;
	if ( u <= cVar0 )
		goto label_cond_e0;
	cVar8 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar8;
	// 413    .line 343
label_cond_e0:
	//    .local v2, "oldLen":I
	//    .local v1, "newLen":I
	this->oldLength_ = (this->oldLength_ +  this->readLength(( _shri(u,0x6) & 0x3f)));
	this->newLength_ = (this->newLength_ +  this->readLength(( u & 0x3f)));
	goto label_goto_7d;
	// 448    .line 349
	// 449    .end local v1    # "newLen":I
	// 450    .end local v2    # "oldLen":I
label_cond_f9:
	return cVar3;

}
// .method private noNext()Z
bool android::icu::text::Edits_S_Iterator::noNext()
{
	
	bool cVar0;
	
	cVar0 = 0x0;
	this->changed = cVar0;
	this->newLength_ = cVar0;
	this->oldLength_ = cVar0;
	return cVar0;

}
// .method private readLength(I)I
int android::icu::text::Edits_S_Iterator::readLength(int head)
{
	
	int cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	std::shared_ptr<java::lang::AssertionError> cVar6;
	
	//    .param p1, "head"    # I
	cVar0 = 0x8000;
	if ( head >= 0x3d )
		goto label_cond_8;
	return head;
	// 488    .line 239
label_cond_8:
	if ( head >= 0x3e )
		goto label_cond_3b;
	if ( android::icu::text::Edits_S_Iterator::_assertionsDisabled )     
		goto label_cond_1c;
	if ( this->index <  this->length )
		goto label_cond_1c;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 511    .line 241
label_cond_1c:
	if ( android::icu::text::Edits_S_Iterator::_assertionsDisabled )     
		goto label_cond_2e;
	if ( this->array[this->index] >= cVar0 )
		goto label_cond_2e;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 531    .line 242
label_cond_2e:
	cVar3 = this->index;
	this->index = ( cVar3 + 0x1);
	return ( this->array[cVar3] & 0x7fff);
	// 547    .line 244
label_cond_3b:
	if ( android::icu::text::Edits_S_Iterator::_assertionsDisabled )     
		goto label_cond_4d;
	if ( ( this->index + 0x2) <= this->length )
		goto label_cond_4d;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 567    .line 245
label_cond_4d:
	if ( android::icu::text::Edits_S_Iterator::_assertionsDisabled )     
		goto label_cond_5f;
	if ( this->array[this->index] >= cVar0 )
		goto label_cond_5f;
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 587    .line 246
label_cond_5f:
	if ( android::icu::text::Edits_S_Iterator::_assertionsDisabled )     
		goto label_cond_73;
	if ( this->array[( this->index + 0x1)] >= cVar0 )
		goto label_cond_73;
	cVar6 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar6;
	// 609    .line 247
label_cond_73:
	//    .local v0, "len":I
	this->index = ( this->index + 0x2);
	return ((( ( head & 0x1) << 0x1e) |  ( ( this->array[this->index] & 0x7fff) << 0xf)) | ( this->array[( this->index + 0x1)] & 0x7fff));

}
// .method private updateIndexes()V
void android::icu::text::Edits_S_Iterator::updateIndexes()
{
	
	this->srcIndex = (this->srcIndex +  this->oldLength_);
	if ( !(this->changed) )  
		goto label_cond_12;
	this->replIndex = (this->replIndex +  this->newLength_);
label_cond_12:
	this->destIndex = (this->destIndex +  this->newLength_);
	return;

}
// .method public destinationIndex()I
int android::icu::text::Edits_S_Iterator::destinationIndex()
{
	
	return this->destIndex;

}
// .method public findSourceIndex(I)Z
bool android::icu::text::Edits_S_Iterator::findSourceIndex(int i)
{
	
	bool cVar0;
	bool cVar1;
	int len;
	int n;
	
	//    .param p1, "i"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( i >= 0 )
		goto label_cond_5;
	return cVar1;
	// 722    .line 370
label_cond_5:
	if ( i >= this->srcIndex )
		goto label_cond_25;
	this->destIndex = cVar1;
	this->replIndex = cVar1;
	this->srcIndex = cVar1;
	this->newLength_ = cVar1;
	this->oldLength_ = cVar1;
	this->remaining = cVar1;
	this->index = cVar1;
label_cond_17:
label_goto_17:
	if ( !(this->next(cVar1)) )  
		goto label_cond_66;
	if ( i >= (this->srcIndex +  this->oldLength_) )
		goto label_cond_2d;
	return cVar0;
	// 764    .line 373
label_cond_25:
	if ( i >= (this->srcIndex +  this->oldLength_) )
		goto label_cond_17;
	return cVar0;
	// 777    .line 382
label_cond_2d:
	if ( this->remaining <= 0 )
		goto label_cond_17;
	len = (( this->remaining + 0x1) * this->oldLength_);
	//    .local v0, "len":I
	if ( i >= (this->srcIndex +  len) )
		goto label_cond_5f;
	n = ((i - this->srcIndex) / this->oldLength_);
	//    .local v1, "n":I
	len = (n * this->oldLength_);
	this->srcIndex = (this->srcIndex +  len);
	this->replIndex = (this->replIndex +  len);
	this->destIndex = (this->destIndex +  len);
	this->remaining = (this->remaining -  n);
	return cVar0;
	// 846    .line 396
	// 847    .end local v1    # "n":I
label_cond_5f:
	this->newLength_ = len;
	this->oldLength_ = len;
	this->remaining = cVar1;
	goto label_goto_17;
	// 858    .line 400
	// 859    .end local v0    # "len":I
label_cond_66:
	return cVar1;

}
// .method public hasChange()Z
bool android::icu::text::Edits_S_Iterator::hasChange()
{
	
	return this->changed;

}
// .method public newLength()I
int android::icu::text::Edits_S_Iterator::newLength()
{
	
	return this->newLength_;

}
// .method public next()Z
bool android::icu::text::Edits_S_Iterator::next()
{
	
	return this->next(this->onlyChanges_);

}
// .method public oldLength()I
int android::icu::text::Edits_S_Iterator::oldLength()
{
	
	return this->oldLength_;

}
// .method public replacementIndex()I
int android::icu::text::Edits_S_Iterator::replacementIndex()
{
	
	return this->replIndex;

}
// .method public sourceIndex()I
int android::icu::text::Edits_S_Iterator::sourceIndex()
{
	
	return this->srcIndex;

}


