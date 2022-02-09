// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$NGramParser.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetRecog_sbcs_S_NGramParser.h"

static android::icu::text::CharsetRecog_sbcs_S_NGramParser::N_GRAM_MASK = 0xffffff;
// .method public constructor <init>([I[B)V
android::icu::text::CharsetRecog_sbcs_S_NGramParser::CharsetRecog_sbcs_S_NGramParser(std::shared_ptr<int[]> theNgramList,std::shared_ptr<unsigned char[]> theByteMap)
{
	
	int cVar0;
	
	//    .param p1, "theNgramList"    # [I
	//    .param p2, "theByteMap"    # [B
	cVar0 = 0x0;
	// 047    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->byteIndex = cVar0;
	this->ngram = cVar0;
	this->ngramList = theNgramList;
	this->byteMap = theByteMap;
	this->ngram = cVar0;
	this->hitCount = cVar0;
	this->ngramCount = cVar0;
	return;

}
// .method private lookup(I)V
void android::icu::text::CharsetRecog_sbcs_S_NGramParser::lookup(int thisNgram)
{
	
	//    .param p1, "thisNgram"    # I
	this->ngramCount = ( this->ngramCount + 0x1);
	if ( android::icu::text::CharsetRecog_sbcs_S_NGramParser::search(this->ngramList, thisNgram) < 0 ) 
		goto label_cond_14;
	this->hitCount = ( this->hitCount + 0x1);
label_cond_14:
	return;

}
// .method private nextByte(Landroid/icu/text/CharsetDetector;)I
int android::icu::text::CharsetRecog_sbcs_S_NGramParser::nextByte(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	if ( this->byteIndex <  det->fInputLen )
		goto label_cond_8;
	return -0x1;
	// 123    .line 116
label_cond_8:
	cVar0 = this->byteIndex;
	this->byteIndex = ( cVar0 + 0x1);
	return ( det->fInputBytes[cVar0] & 0xff);

}
// .method private static search([II)I
int android::icu::text::CharsetRecog_sbcs_S_NGramParser::search(std::shared_ptr<int[]> table,int value)
{
	
	int index;
	
	//    .param p0, "table"    # [I
	//    .param p1, "value"    # I
	index = 0x0;
	//    .local v0, "index":I
	if ( table[0x20] >  value )
		goto label_cond_9;
	index = 0x20;
label_cond_9:
	if ( table[( index + 0x10)] >  value )
		goto label_cond_11;
	index = ( index + 0x10);
label_cond_11:
	if ( table[( index + 0x8)] >  value )
		goto label_cond_19;
	index = ( index + 0x8);
label_cond_19:
	if ( table[( index + 0x4)] >  value )
		goto label_cond_21;
	index = ( index + 0x4);
label_cond_21:
	if ( table[( index + 0x2)] >  value )
		goto label_cond_29;
	index = ( index + 0x2);
label_cond_29:
	if ( table[( index + 0x1)] >  value )
		goto label_cond_31;
	index = ( index + 0x1);
label_cond_31:
	if ( table[index] <= value )
		goto label_cond_37;
	index = ( index + -0x1);
label_cond_37:
	if ( index < 0 ) 
		goto label_cond_3d;
	if ( table[index] == value )
		goto label_cond_3f;
label_cond_3d:
	return -0x1;
	// 238    .line 91
label_cond_3f:
	return index;

}
// .method protected addByte(I)V
void android::icu::text::CharsetRecog_sbcs_S_NGramParser::addByte(int b)
{
	
	//    .param p1, "b"    # I
	this->ngram = ((( this->ngram << 0x8) +  ( b & 0xff)) &  0xffffff);
	this->lookup(this->ngram);
	return;

}
// .method public parse(Landroid/icu/text/CharsetDetector;)I
int android::icu::text::CharsetRecog_sbcs_S_NGramParser::parse(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	return this->parse(det, 0x20);

}
// .method public parse(Landroid/icu/text/CharsetDetector;B)I
int android::icu::text::CharsetRecog_sbcs_S_NGramParser::parse(std::shared_ptr<android::icu::text::CharsetDetector> det,unsigned char spaceCh)
{
	
	double rawPercent;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	//    .param p2, "spaceCh"    # B
	this->spaceChar = spaceCh;
	this->parseCharacters(det);
	this->addByte(this->spaceChar);
	rawPercent = ((double)(this->hitCount) /  (double)(this->ngramCount));
	//    .local v0, "rawPercent":D
	if ( (rawPercent < 0x3fd51eb851eb851fL) <= 0 )
		goto label_cond_1e;
	return 0x62;
	// 330    .line 165
label_cond_1e:
	return (int)(( 0x4072c00000000000L * rawPercent));

}
// .method protected parseCharacters(Landroid/icu/text/CharsetDetector;)V
void android::icu::text::CharsetRecog_sbcs_S_NGramParser::parseCharacters(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int ignoreSpace;
	int b;
	int mb;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	ignoreSpace = 0x0;
	//    .local v1, "ignoreSpace":Z
label_cond_2:
label_goto_2:
	b = this->nextByte(det);
	//    .local v0, "b":I
	if ( b < 0 ) 
		goto label_cond_21;
	mb = this->byteMap[b];
	//    .local v2, "mb":B
	if ( !(mb) )  
		goto label_cond_2;
	if ( mb != this->spaceChar )
		goto label_cond_1d;
	//    .end local v1    # "ignoreSpace":Z
label_goto_12:
	if ( ignoreSpace )     
		goto label_cond_17;
	this->addByte(mb);
label_cond_17:
	if ( mb != this->spaceChar )
		goto label_cond_1f;
	ignoreSpace = 0x1;
	//    .restart local v1    # "ignoreSpace":Z
	goto label_goto_2;
label_cond_1d:
	ignoreSpace = 0x0;
	goto label_goto_12;
	// 400    .line 133
	// 401    .end local v1    # "ignoreSpace":Z
label_cond_1f:
	ignoreSpace = 0x0;
	//    .restart local v1    # "ignoreSpace":Z
	goto label_goto_2;
	// 408    .line 137
	// 409    .end local v2    # "mb":B
label_cond_21:
	return;

}


