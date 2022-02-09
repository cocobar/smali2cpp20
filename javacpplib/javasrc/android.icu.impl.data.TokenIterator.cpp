// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\TokenIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.impl.data.ResourceReader.h"
#include "android.icu.impl.data.TokenIterator.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(Landroid/icu/impl/data/ResourceReader;)V
android::icu::impl::data::TokenIterator::TokenIterator(std::shared_ptr<android::icu::impl::data::ResourceReader> r)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuffer> cVar1;
	
	//    .param p1, "r"    # Landroid/icu/impl/data/ResourceReader;
	cVar0 = -0x1;
	// 029    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->reader = r;
	this->line = 0x0;
	this->done = 0x0;
	cVar1 = std::make_shared<java::lang::StringBuffer>();
	this->buf = cVar1;
	this->lastpos = cVar0;
	this->pos = cVar0;
	return;

}
// .method private nextToken(I)I
int android::icu::impl::data::TokenIterator::nextToken(int position)
{
	
	char cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int position;
	char c;
	int quote;
	std::shared_ptr<int[]> cVar4;
	int c;
	std::shared<std::vector<int[]>> cVar4;
	int c32;
	std::shared_ptr<java::lang::RuntimeException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::RuntimeException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	
	//    .param p1, "position"    # I
	cVar0 = 0x3a;
	cVar1 = -0x1;
	cVar2 = 0x0;
	cVar3 = android::icu::impl::PatternProps::skipWhiteSpace(this->line, position);
	if ( cVar3 != this->line->length() )
		goto label_cond_13;
	return cVar1;
	// 090    .line 118
label_cond_13:
	cVar3;
	//    .local v5, "startpos":I
	position = ( cVar3 + 0x1);
	//    .end local p1    # "position":I
	//    .local v2, "position":I
	c = this->line->charAt(cVar3);
	//    .local v0, "c":C
	quote = 0x0;
	//    .local v4, "quote":C
	// switch
	{
	auto item = ( c );
	if (item == 34) goto label_pswitch_71;
	if (item == 35) goto label_pswitch_73;
	if (item == 36) goto label_pswitch_20;
	if (item == 37) goto label_pswitch_20;
	if (item == 38) goto label_pswitch_20;
	if (item == 39) goto label_pswitch_71;
	}
label_pswitch_20:
	this->buf->append(c);
	//    .end local v4    # "quote":C
label_goto_25:
	cVar4 = 0x0;
label_goto_26:
	if ( position >= this->line->length() )
		goto label_cond_9a;
	c = this->line->charAt(position);
	if ( c != 0x5c )
		goto label_cond_7c;
	if ( cVar4 )     
		goto label_cond_3d;
	cVar4 = std::make_shared<std::vector<int[]>>(0x1);
label_cond_3d:
	cVar4[cVar2] = ( position + 0x1);
	c32 = android::icu::impl::Utility::unescapeAt(this->line, cVar4);
	//    .local v1, "c32":I
	if ( c32 >= 0 )
		goto label_cond_74;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::lang::RuntimeException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid escape at ")))->append(this->reader->describePosition())->append(cVar0)->append(position)->toString());
	// throw
	throw cVar6;
	// 213    .line 124
	// 214    .end local v1    # "c32":I
	// 215    .restart local v4    # "quote":C
label_pswitch_71:
	//    .local v4, "quote":C
	goto label_goto_25;
	// 223    .line 127
	// 224    .local v4, "quote":C
label_pswitch_73:
	return cVar1;
	// 228    .line 146
	// 229    .end local v4    # "quote":C
	// 230    .restart local v1    # "c32":I
label_cond_74:
	android::icu::text::UTF16::append(this->buf, c32);
	position = cVar4[cVar2];
	goto label_goto_26;
	// 241    .line 148
	// 242    .end local v1    # "c32":I
label_cond_7c:
	if ( !(quote) )  
		goto label_cond_83;
	if ( c != quote )
		goto label_cond_83;
label_cond_80:
	position = ( position + 0x1);
	//    .end local v2    # "position":I
	//    .restart local p1    # "position":I
	return position;
	// 256    .line 149
	// 257    .end local p1    # "position":I
	// 258    .restart local v2    # "position":I
label_cond_83:
	if ( quote )     
		goto label_cond_8b;
	if ( android::icu::impl::PatternProps::isWhiteSpace(c) )     
		goto label_cond_80;
label_cond_8b:
	if ( quote )     
		goto label_cond_92;
	if ( c != 0x23 )
		goto label_cond_92;
	return position;
	// 280    .line 154
label_cond_92:
	this->buf->append(c);
	position = ( position + 0x1);
	goto label_goto_26;
	// 291    .line 158
label_cond_9a:
	if ( !(quote) )  
		goto label_cond_c4;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::lang::RuntimeException>(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unterminated quote at ")))->append(this->reader->describePosition())->append(cVar0)->append(cVar3)->toString());
	// throw
	throw cVar8;
	// 336    .line 163
label_cond_c4:
	return position;
	// 340    .line 121
	// 341    nop
	// 343    :pswitch_data_c6
	// 344    .packed-switch 0x22
	// 345        :pswitch_71
	// 346        :pswitch_73
	// 347        :pswitch_20
	// 348        :pswitch_20
	// 349        :pswitch_20
	// 350        :pswitch_71
	// 351    .end packed-switch

}
// .method public describePosition()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::data::TokenIterator::describePosition()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->reader->describePosition())->append(0x3a)->append(( this->lastpos + 0x1))->toString();

}
// .method public getLineNumber()I
int android::icu::impl::data::TokenIterator::getLineNumber()
{
	
	return this->reader->getLineNumber();

}
// .method public next()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::data::TokenIterator::next()
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 413        value = {
	// 414            Ljava/io/IOException;
	// 415        }
	// 416    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x0;
	if ( !(this->done) )  
		goto label_cond_20;
	return cVar1;
	// 431    .line 70
label_cond_7:
	this->pos = cVar0;
label_cond_9:
	this->buf->setLength(cVar0);
	this->lastpos = this->pos;
	this->pos = this->nextToken(this->pos);
	if ( this->pos >= 0 )
		goto label_cond_34;
	this->line = cVar1;
label_cond_20:
	if ( this->line )     
		goto label_cond_9;
	this->line = this->reader->readLineSkippingComments();
	if ( this->line )     
		goto label_cond_7;
	this->done = 0x1;
	return cVar1;
	// 491    .line 79
label_cond_34:
	return this->buf->toString();

}


