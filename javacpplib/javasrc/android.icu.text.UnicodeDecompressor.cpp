// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeDecompressor.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeDecompressor.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.lang.System.h"

static android::icu::text::UnicodeDecompressor::BUFSIZE = 0x3;
// .method public constructor <init>()V
android::icu::text::UnicodeDecompressor::UnicodeDecompressor()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	// 033    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fCurrentWindow = cVar0;
	this->fOffsets = std::make_shared<std::vector<int[]>>(0x8);
	this->fMode = cVar0;
	this->fBuffer = std::make_shared<std::vector<unsigned char[]>>(0x3);
	this->fBufferLength = cVar0;
	this->reset();
	return;

}
// .method public static decompress([B)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeDecompressor::decompress(std::shared_ptr<unsigned char[]> buffer)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "buffer"    # [B
	//    .local v0, "buf":[C
	cVar0 = std::make_shared<java::lang::String>(android::icu::text::UnicodeDecompressor::decompress(buffer, 0x0, buffer->size()));
	return cVar0;

}
// .method public static decompress([BII)[C
char android::icu::text::UnicodeDecompressor::decompress(std::shared_ptr<unsigned char[]> buffer,int start,int limit)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::UnicodeDecompressor> comp;
	int len;
	std::shared<std::vector<char[]>> temp;
	int charCount;
	std::shared<std::vector<char[]>> result;
	
	//    .param p0, "buffer"    # [B
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	cVar0 = 0x0;
	comp = std::make_shared<android::icu::text::UnicodeDecompressor>();
	//    .local v0, "comp":Landroid/icu/text/UnicodeDecompressor;
	len = java::lang::Math::max(0x2, ( (limit - start) * 0x2));
	//    .local v7, "len":I
	temp = std::make_shared<std::vector<char[]>>(len);
	//    .local v5, "temp":[C
	charCount = comp->decompress(buffer, start, limit, 0x0, temp, cVar0, len);
	//    .local v8, "charCount":I
	result = std::make_shared<std::vector<char[]>>(charCount);
	//    .local v9, "result":[C
	java::lang::System::arraycopy(temp, cVar0, result, cVar0, charCount);
	return result;

}
// .method public decompress([BII[I[CII)I
int android::icu::text::UnicodeDecompressor::decompress(std::shared_ptr<unsigned char[]> byteBuffer,int byteBufferStart,int byteBufferLimit,std::shared_ptr<int[]> bytesRead,std::shared_ptr<char[]> charBuffer,int charBufferStart,int charBufferLimit)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int newBytes;
	int ucPos;
	int bytePos;
	int aByte;
	int dByte;
	int cVar1;
	int normalizedBase;
	
	//    .param p1, "byteBuffer"    # [B
	//    .param p2, "byteBufferStart"    # I
	//    .param p3, "byteBufferLimit"    # I
	//    .param p4, "bytesRead"    # [I
	//    .param p5, "charBuffer"    # [C
	//    .param p6, "charBufferStart"    # I
	//    .param p7, "charBufferLimit"    # I
	//    .local v11, "bytePos":I
	//    .local v17, "ucPos":I
	0x0;
	//    .local v10, "aByte":I
	if ( charBuffer->size() <  0x2 )
		goto label_cond_10;
	if ( (charBufferLimit - charBufferStart) >= 0x2 )
		goto label_cond_19;
label_cond_10:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("charBuffer.length < 2")));
	// throw
	throw cVar0;
	// 194    .line 188
label_cond_19:
	if ( this->fBufferLength <= 0 )
		goto label_cond_67;
	//    .local v15, "newBytes":I
	if ( this->fBufferLength == 0x3 )
		goto label_cond_47;
	newBytes = (this->fBuffer->size() - this->fBufferLength);
	if ( (byteBufferLimit - byteBufferStart) >= newBytes )
		goto label_cond_38;
	newBytes = (byteBufferLimit - byteBufferStart);
label_cond_38:
	java::lang::System::arraycopy(byteBuffer, byteBufferStart, this->fBuffer, this->fBufferLength, newBytes);
label_cond_47:
	this->fBufferLength = 0x0;
	//    .local v13, "count":I
	ucPos = (charBufferStart + this->decompress(this->fBuffer, 0x0, this->fBuffer->size(), 0x0, charBuffer, charBufferStart, charBufferLimit));
	bytePos = (byteBufferStart + 0x0);
	//    .end local v13    # "count":I
	//    .end local v15    # "newBytes":I
label_cond_67:
label_goto_67:
	if ( byteBufferStart >= byteBufferLimit )
		goto label_cond_dc;
	if ( ucPos >= charBufferLimit )
		goto label_cond_dc;
	// switch
	{
	auto item = ( this->fMode );
	if (item == 0) goto label_pswitch_79;
	if (item == 1) goto label_pswitch_23a;
	}
	goto label_goto_67;
label_pswitch_79:
	ucPos = ucPos;
	//    .end local v17    # "ucPos":I
	//    .local v18, "ucPos":I
	bytePos = bytePos;
	//    .end local v11    # "bytePos":I
	//    .local v12, "bytePos":I
label_goto_7c:
	if ( bytePos >= byteBufferLimit )
		goto label_cond_95;
	if ( ucPos >= charBufferLimit )
		goto label_cond_95;
	bytePos = ( bytePos + 0x1);
	//    .end local v12    # "bytePos":I
	//    .restart local v11    # "bytePos":I
	aByte = ( byteBuffer[bytePos] & 0xff);
	// switch
	{
	auto item = ( aByte );
	if (item == 0) goto label_pswitch_112;
	if (item == 1) goto label_pswitch_156;
	if (item == 2) goto label_pswitch_156;
	if (item == 3) goto label_pswitch_156;
	if (item == 4) goto label_pswitch_156;
	if (item == 5) goto label_pswitch_156;
	if (item == 6) goto label_pswitch_156;
	if (item == 7) goto label_pswitch_156;
	if (item == 8) goto label_pswitch_156;
	if (item == 9) goto label_pswitch_112;
	if (item == 10) goto label_pswitch_112;
	if (item == 11) goto label_pswitch_1e7;
	if (item == 12) goto label_pswitch_236;
	if (item == 13) goto label_pswitch_112;
	if (item == 14) goto label_pswitch_119;
	if (item == 15) goto label_pswitch_14f;
	if (item == 16) goto label_pswitch_19d;
	if (item == 17) goto label_pswitch_19d;
	if (item == 18) goto label_pswitch_19d;
	if (item == 19) goto label_pswitch_19d;
	if (item == 20) goto label_pswitch_19d;
	if (item == 21) goto label_pswitch_19d;
	if (item == 22) goto label_pswitch_19d;
	if (item == 23) goto label_pswitch_19d;
	if (item == 24) goto label_pswitch_1a7;
	if (item == 25) goto label_pswitch_1a7;
	if (item == 26) goto label_pswitch_1a7;
	if (item == 27) goto label_pswitch_1a7;
	if (item == 28) goto label_pswitch_1a7;
	if (item == 29) goto label_pswitch_1a7;
	if (item == 30) goto label_pswitch_1a7;
	if (item == 31) goto label_pswitch_1a7;
	if (item == 32) goto label_pswitch_112;
	if (item == 33) goto label_pswitch_112;
	if (item == 34) goto label_pswitch_112;
	if (item == 35) goto label_pswitch_112;
	if (item == 36) goto label_pswitch_112;
	if (item == 37) goto label_pswitch_112;
	if (item == 38) goto label_pswitch_112;
	if (item == 39) goto label_pswitch_112;
	if (item == 40) goto label_pswitch_112;
	if (item == 41) goto label_pswitch_112;
	if (item == 42) goto label_pswitch_112;
	if (item == 43) goto label_pswitch_112;
	if (item == 44) goto label_pswitch_112;
	if (item == 45) goto label_pswitch_112;
	if (item == 46) goto label_pswitch_112;
	if (item == 47) goto label_pswitch_112;
	if (item == 48) goto label_pswitch_112;
	if (item == 49) goto label_pswitch_112;
	if (item == 50) goto label_pswitch_112;
	if (item == 51) goto label_pswitch_112;
	if (item == 52) goto label_pswitch_112;
	if (item == 53) goto label_pswitch_112;
	if (item == 54) goto label_pswitch_112;
	if (item == 55) goto label_pswitch_112;
	if (item == 56) goto label_pswitch_112;
	if (item == 57) goto label_pswitch_112;
	if (item == 58) goto label_pswitch_112;
	if (item == 59) goto label_pswitch_112;
	if (item == 60) goto label_pswitch_112;
	if (item == 61) goto label_pswitch_112;
	if (item == 62) goto label_pswitch_112;
	if (item == 63) goto label_pswitch_112;
	if (item == 64) goto label_pswitch_112;
	if (item == 65) goto label_pswitch_112;
	if (item == 66) goto label_pswitch_112;
	if (item == 67) goto label_pswitch_112;
	if (item == 68) goto label_pswitch_112;
	if (item == 69) goto label_pswitch_112;
	if (item == 70) goto label_pswitch_112;
	if (item == 71) goto label_pswitch_112;
	if (item == 72) goto label_pswitch_112;
	if (item == 73) goto label_pswitch_112;
	if (item == 74) goto label_pswitch_112;
	if (item == 75) goto label_pswitch_112;
	if (item == 76) goto label_pswitch_112;
	if (item == 77) goto label_pswitch_112;
	if (item == 78) goto label_pswitch_112;
	if (item == 79) goto label_pswitch_112;
	if (item == 80) goto label_pswitch_112;
	if (item == 81) goto label_pswitch_112;
	if (item == 82) goto label_pswitch_112;
	if (item == 83) goto label_pswitch_112;
	if (item == 84) goto label_pswitch_112;
	if (item == 85) goto label_pswitch_112;
	if (item == 86) goto label_pswitch_112;
	if (item == 87) goto label_pswitch_112;
	if (item == 88) goto label_pswitch_112;
	if (item == 89) goto label_pswitch_112;
	if (item == 90) goto label_pswitch_112;
	if (item == 91) goto label_pswitch_112;
	if (item == 92) goto label_pswitch_112;
	if (item == 93) goto label_pswitch_112;
	if (item == 94) goto label_pswitch_112;
	if (item == 95) goto label_pswitch_112;
	if (item == 96) goto label_pswitch_112;
	if (item == 97) goto label_pswitch_112;
	if (item == 98) goto label_pswitch_112;
	if (item == 99) goto label_pswitch_112;
	if (item == 100) goto label_pswitch_112;
	if (item == 101) goto label_pswitch_112;
	if (item == 102) goto label_pswitch_112;
	if (item == 103) goto label_pswitch_112;
	if (item == 104) goto label_pswitch_112;
	if (item == 105) goto label_pswitch_112;
	if (item == 106) goto label_pswitch_112;
	if (item == 107) goto label_pswitch_112;
	if (item == 108) goto label_pswitch_112;
	if (item == 109) goto label_pswitch_112;
	if (item == 110) goto label_pswitch_112;
	if (item == 111) goto label_pswitch_112;
	if (item == 112) goto label_pswitch_112;
	if (item == 113) goto label_pswitch_112;
	if (item == 114) goto label_pswitch_112;
	if (item == 115) goto label_pswitch_112;
	if (item == 116) goto label_pswitch_112;
	if (item == 117) goto label_pswitch_112;
	if (item == 118) goto label_pswitch_112;
	if (item == 119) goto label_pswitch_112;
	if (item == 120) goto label_pswitch_112;
	if (item == 121) goto label_pswitch_112;
	if (item == 122) goto label_pswitch_112;
	if (item == 123) goto label_pswitch_112;
	if (item == 124) goto label_pswitch_112;
	if (item == 125) goto label_pswitch_112;
	if (item == 126) goto label_pswitch_112;
	if (item == 127) goto label_pswitch_112;
	if (item == 128) goto label_pswitch_99;
	if (item == 129) goto label_pswitch_99;
	if (item == 130) goto label_pswitch_99;
	if (item == 131) goto label_pswitch_99;
	if (item == 132) goto label_pswitch_99;
	if (item == 133) goto label_pswitch_99;
	if (item == 134) goto label_pswitch_99;
	if (item == 135) goto label_pswitch_99;
	if (item == 136) goto label_pswitch_99;
	if (item == 137) goto label_pswitch_99;
	if (item == 138) goto label_pswitch_99;
	if (item == 139) goto label_pswitch_99;
	if (item == 140) goto label_pswitch_99;
	if (item == 141) goto label_pswitch_99;
	if (item == 142) goto label_pswitch_99;
	if (item == 143) goto label_pswitch_99;
	if (item == 144) goto label_pswitch_99;
	if (item == 145) goto label_pswitch_99;
	if (item == 146) goto label_pswitch_99;
	if (item == 147) goto label_pswitch_99;
	if (item == 148) goto label_pswitch_99;
	if (item == 149) goto label_pswitch_99;
	if (item == 150) goto label_pswitch_99;
	if (item == 151) goto label_pswitch_99;
	if (item == 152) goto label_pswitch_99;
	if (item == 153) goto label_pswitch_99;
	if (item == 154) goto label_pswitch_99;
	if (item == 155) goto label_pswitch_99;
	if (item == 156) goto label_pswitch_99;
	if (item == 157) goto label_pswitch_99;
	if (item == 158) goto label_pswitch_99;
	if (item == 159) goto label_pswitch_99;
	if (item == 160) goto label_pswitch_99;
	if (item == 161) goto label_pswitch_99;
	if (item == 162) goto label_pswitch_99;
	if (item == 163) goto label_pswitch_99;
	if (item == 164) goto label_pswitch_99;
	if (item == 165) goto label_pswitch_99;
	if (item == 166) goto label_pswitch_99;
	if (item == 167) goto label_pswitch_99;
	if (item == 168) goto label_pswitch_99;
	if (item == 169) goto label_pswitch_99;
	if (item == 170) goto label_pswitch_99;
	if (item == 171) goto label_pswitch_99;
	if (item == 172) goto label_pswitch_99;
	if (item == 173) goto label_pswitch_99;
	if (item == 174) goto label_pswitch_99;
	if (item == 175) goto label_pswitch_99;
	if (item == 176) goto label_pswitch_99;
	if (item == 177) goto label_pswitch_99;
	if (item == 178) goto label_pswitch_99;
	if (item == 179) goto label_pswitch_99;
	if (item == 180) goto label_pswitch_99;
	if (item == 181) goto label_pswitch_99;
	if (item == 182) goto label_pswitch_99;
	if (item == 183) goto label_pswitch_99;
	if (item == 184) goto label_pswitch_99;
	if (item == 185) goto label_pswitch_99;
	if (item == 186) goto label_pswitch_99;
	if (item == 187) goto label_pswitch_99;
	if (item == 188) goto label_pswitch_99;
	if (item == 189) goto label_pswitch_99;
	if (item == 190) goto label_pswitch_99;
	if (item == 191) goto label_pswitch_99;
	if (item == 192) goto label_pswitch_99;
	if (item == 193) goto label_pswitch_99;
	if (item == 194) goto label_pswitch_99;
	if (item == 195) goto label_pswitch_99;
	if (item == 196) goto label_pswitch_99;
	if (item == 197) goto label_pswitch_99;
	if (item == 198) goto label_pswitch_99;
	if (item == 199) goto label_pswitch_99;
	if (item == 200) goto label_pswitch_99;
	if (item == 201) goto label_pswitch_99;
	if (item == 202) goto label_pswitch_99;
	if (item == 203) goto label_pswitch_99;
	if (item == 204) goto label_pswitch_99;
	if (item == 205) goto label_pswitch_99;
	if (item == 206) goto label_pswitch_99;
	if (item == 207) goto label_pswitch_99;
	if (item == 208) goto label_pswitch_99;
	if (item == 209) goto label_pswitch_99;
	if (item == 210) goto label_pswitch_99;
	if (item == 211) goto label_pswitch_99;
	if (item == 212) goto label_pswitch_99;
	if (item == 213) goto label_pswitch_99;
	if (item == 214) goto label_pswitch_99;
	if (item == 215) goto label_pswitch_99;
	if (item == 216) goto label_pswitch_99;
	if (item == 217) goto label_pswitch_99;
	if (item == 218) goto label_pswitch_99;
	if (item == 219) goto label_pswitch_99;
	if (item == 220) goto label_pswitch_99;
	if (item == 221) goto label_pswitch_99;
	if (item == 222) goto label_pswitch_99;
	if (item == 223) goto label_pswitch_99;
	if (item == 224) goto label_pswitch_99;
	if (item == 225) goto label_pswitch_99;
	if (item == 226) goto label_pswitch_99;
	if (item == 227) goto label_pswitch_99;
	if (item == 228) goto label_pswitch_99;
	if (item == 229) goto label_pswitch_99;
	if (item == 230) goto label_pswitch_99;
	if (item == 231) goto label_pswitch_99;
	if (item == 232) goto label_pswitch_99;
	if (item == 233) goto label_pswitch_99;
	if (item == 234) goto label_pswitch_99;
	if (item == 235) goto label_pswitch_99;
	if (item == 236) goto label_pswitch_99;
	if (item == 237) goto label_pswitch_99;
	if (item == 238) goto label_pswitch_99;
	if (item == 239) goto label_pswitch_99;
	if (item == 240) goto label_pswitch_99;
	if (item == 241) goto label_pswitch_99;
	if (item == 242) goto label_pswitch_99;
	if (item == 243) goto label_pswitch_99;
	if (item == 244) goto label_pswitch_99;
	if (item == 245) goto label_pswitch_99;
	if (item == 246) goto label_pswitch_99;
	if (item == 247) goto label_pswitch_99;
	if (item == 248) goto label_pswitch_99;
	if (item == 249) goto label_pswitch_99;
	if (item == 250) goto label_pswitch_99;
	if (item == 251) goto label_pswitch_99;
	if (item == 252) goto label_pswitch_99;
	if (item == 253) goto label_pswitch_99;
	if (item == 254) goto label_pswitch_99;
	if (item == 255) goto label_pswitch_99;
	}
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
label_goto_91:
	ucPos = ucPos;
	//    .end local v17    # "ucPos":I
	//    .restart local v18    # "ucPos":I
	bytePos = bytePos;
	//    .end local v11    # "bytePos":I
	//    .restart local v12    # "bytePos":I
	goto label_goto_7c;
label_cond_95:
	bytePos = bytePos;
	//    .end local v12    # "bytePos":I
	//    .restart local v11    # "bytePos":I
label_goto_96:
	ucPos = ucPos;
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	goto label_goto_67;
	// 380    .line 259
	// 381    .end local v17    # "ucPos":I
	// 382    .restart local v18    # "ucPos":I
label_pswitch_99:
	if ( this->fOffsets[this->fCurrentWindow] >  0xffff )
		goto label_cond_bb;
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	charBuffer[ucPos] = (char)(( (this->fOffsets[this->fCurrentWindow] +  aByte) + -0x80));
	goto label_goto_91;
	// 425    .line 272
	// 426    .end local v17    # "ucPos":I
	// 427    .restart local v18    # "ucPos":I
label_cond_bb:
	if ( ( ucPos + 0x1) <  charBufferLimit )
		goto label_cond_e6;
	bytePos = ( bytePos + -0x1);
	java::lang::System::arraycopy(byteBuffer, bytePos, this->fBuffer, 0x0, (byteBufferLimit - bytePos));
	this->fBufferLength = (byteBufferLimit - bytePos);
	(bytePos +  this->fBufferLength);
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
label_cond_dc:
label_goto_dc:
	if ( !(bytesRead) )  
		goto label_cond_e3;
	bytesRead[0x0] = ((bytePos +  this->fBufferLength) - byteBufferStart);
label_cond_e3:
	return (charBufferStart - charBufferStart);
	// 490    .line 282
	// 491    .end local v17    # "ucPos":I
	// 492    .restart local v18    # "ucPos":I
label_cond_e6:
	normalizedBase = (this->fOffsets[this->fCurrentWindow] - 0x10000);
	//    .local v16, "normalizedBase":I
	ucPos = ( ucPos + 0x1);
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	charBuffer[ucPos] = (char)((_shri(normalizedBase,0xa) +  0xd800));
	//    .end local v17    # "ucPos":I
	//    .restart local v18    # "ucPos":I
	charBuffer[ucPos] = (char)(((( normalizedBase & 0x3ff) +  0xdc00) +  ( aByte & 0x7f)));
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	goto label_goto_91;
	// 557    .line 317
	// 558    .end local v16    # "normalizedBase":I
	// 559    .end local v17    # "ucPos":I
	// 560    .restart local v18    # "ucPos":I
label_pswitch_112:
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	charBuffer[ucPos] = (char)(aByte);
	goto label_goto_91;
	// 572    .line 324
	// 573    .end local v17    # "ucPos":I
	// 574    .restart local v18    # "ucPos":I
label_pswitch_119:
	if ( ( bytePos + 0x1) <  byteBufferLimit )
		goto label_cond_13b;
	bytePos = ( bytePos + -0x1);
	java::lang::System::arraycopy(byteBuffer, bytePos, this->fBuffer, 0x0, (byteBufferLimit - bytePos));
	this->fBufferLength = (byteBufferLimit - bytePos);
	(bytePos +  this->fBufferLength);
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	goto label_goto_dc;
	// 622    .line 334
	// 623    .end local v17    # "ucPos":I
	// 624    .restart local v18    # "ucPos":I
label_cond_13b:
	bytePos = ( bytePos + 0x1);
	//    .end local v11    # "bytePos":I
	//    .restart local v12    # "bytePos":I
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	//    .end local v12    # "bytePos":I
	//    .restart local v11    # "bytePos":I
	charBuffer[ucPos] = (char)((( byteBuffer[bytePos] << 0x8) |  ( byteBuffer[bytePos] & 0xff)));
	goto label_goto_91;
	// 657    .line 341
	// 658    .end local v17    # "ucPos":I
	// 659    .restart local v18    # "ucPos":I
label_pswitch_14f:
	this->fMode = 0x1;
	goto label_goto_96;
	// 669    .line 350
label_pswitch_156:
	if ( bytePos <  byteBufferLimit )
		goto label_cond_177;
	bytePos = ( bytePos + -0x1);
	java::lang::System::arraycopy(byteBuffer, bytePos, this->fBuffer, 0x0, (byteBufferLimit - bytePos));
	this->fBufferLength = (byteBufferLimit - bytePos);
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	goto label_goto_dc;
	// 715    .line 362
	// 716    .end local v17    # "ucPos":I
	// 717    .restart local v18    # "ucPos":I
label_cond_177:
	//    .end local v11    # "bytePos":I
	//    .restart local v12    # "bytePos":I
	dByte = ( byteBuffer[bytePos] & 0xff);
	//    .local v14, "dByte":I
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	if ( dByte < 0 ) 
		goto label_cond_192;
	if ( dByte >= 0x80 )
		goto label_cond_192;
	cVar1 = android::icu::text::UnicodeDecompressor::sOffsets[( aByte + -0x1)];
label_goto_18b:
	charBuffer[ucPos] = (char)((cVar1 +  dByte));
	//    .end local v12    # "bytePos":I
	//    .restart local v11    # "bytePos":I
	goto label_goto_91;
	// 763    .line 366
	// 764    .end local v11    # "bytePos":I
	// 765    .restart local v12    # "bytePos":I
label_cond_192:
	cVar1 = ( this->fOffsets[( aByte + -0x1)] + -0x80);
	goto label_goto_18b;
	// 779    .line 373
	// 780    .end local v12    # "bytePos":I
	// 781    .end local v14    # "dByte":I
	// 782    .end local v17    # "ucPos":I
	// 783    .restart local v11    # "bytePos":I
	// 784    .restart local v18    # "ucPos":I
label_pswitch_19d:
	this->fCurrentWindow = ( aByte + -0x10);
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	goto label_goto_91;
	// 799    .line 381
	// 800    .end local v17    # "ucPos":I
	// 801    .restart local v18    # "ucPos":I
label_pswitch_1a7:
	if ( bytePos <  byteBufferLimit )
		goto label_cond_1c8;
	bytePos = ( bytePos + -0x1);
	java::lang::System::arraycopy(byteBuffer, bytePos, this->fBuffer, 0x0, (byteBufferLimit - bytePos));
	this->fBufferLength = (byteBufferLimit - bytePos);
	(bytePos +  this->fBufferLength);
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	goto label_goto_dc;
	// 847    .line 391
	// 848    .end local v17    # "ucPos":I
	// 849    .restart local v18    # "ucPos":I
label_cond_1c8:
	this->fCurrentWindow = ( aByte + -0x18);
	//    .end local v11    # "bytePos":I
	//    .restart local v12    # "bytePos":I
	this->fOffsets[this->fCurrentWindow] = android::icu::text::UnicodeDecompressor::sOffsetTable[( byteBuffer[bytePos] & 0xff)];
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	//    .end local v12    # "bytePos":I
	//    .restart local v11    # "bytePos":I
	goto label_goto_91;
	// 893    .line 400
	// 894    .end local v17    # "ucPos":I
	// 895    .restart local v18    # "ucPos":I
label_pswitch_1e7:
	if ( ( bytePos + 0x1) <  byteBufferLimit )
		goto label_cond_20a;
	bytePos = ( bytePos + -0x1);
	java::lang::System::arraycopy(byteBuffer, bytePos, this->fBuffer, 0x0, (byteBufferLimit - bytePos));
	this->fBufferLength = (byteBufferLimit - bytePos);
	(bytePos +  this->fBufferLength);
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	goto label_goto_dc;
	// 943    .line 410
	// 944    .end local v17    # "ucPos":I
	// 945    .restart local v18    # "ucPos":I
label_cond_20a:
	bytePos = ( bytePos + 0x1);
	//    .end local v11    # "bytePos":I
	//    .restart local v12    # "bytePos":I
	aByte = ( byteBuffer[bytePos] & 0xff);
	this->fCurrentWindow = _shri(( aByte & 0xe0),0x5);
	//    .end local v12    # "bytePos":I
	//    .restart local v11    # "bytePos":I
	this->fOffsets[this->fCurrentWindow] = (( (( ( aByte & 0x1f) << 0x8) |  ( byteBuffer[bytePos] & 0xff)) * 0x80) +  0x10000);
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	goto label_goto_91;
	// 1006    .end local v17    # "ucPos":I
	// 1007    .restart local v18    # "ucPos":I
label_pswitch_236:
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	goto label_goto_91;
label_pswitch_23a:
	ucPos = ucPos;
	//    .end local v17    # "ucPos":I
	//    .restart local v18    # "ucPos":I
	bytePos = bytePos;
	//    .end local v11    # "bytePos":I
	//    .restart local v12    # "bytePos":I
label_goto_23d:
	if ( bytePos >= byteBufferLimit )
		goto label_cond_271;
	if ( ucPos >= charBufferLimit )
		goto label_cond_271;
	bytePos = ( bytePos + 0x1);
	//    .end local v12    # "bytePos":I
	//    .restart local v11    # "bytePos":I
	aByte = ( byteBuffer[bytePos] & 0xff);
	// switch
	{
	auto item = ( aByte );
	if (item == 224) goto label_pswitch_30a;
	if (item == 225) goto label_pswitch_30a;
	if (item == 226) goto label_pswitch_30a;
	if (item == 227) goto label_pswitch_30a;
	if (item == 228) goto label_pswitch_30a;
	if (item == 229) goto label_pswitch_30a;
	if (item == 230) goto label_pswitch_30a;
	if (item == 231) goto label_pswitch_30a;
	if (item == 232) goto label_pswitch_276;
	if (item == 233) goto label_pswitch_276;
	if (item == 234) goto label_pswitch_276;
	if (item == 235) goto label_pswitch_276;
	if (item == 236) goto label_pswitch_276;
	if (item == 237) goto label_pswitch_276;
	if (item == 238) goto label_pswitch_276;
	if (item == 239) goto label_pswitch_276;
	if (item == 240) goto label_pswitch_317;
	if (item == 241) goto label_pswitch_2b8;
	}
	if ( bytePos <  byteBufferLimit )
		goto label_cond_34f;
	bytePos = ( bytePos + -0x1);
	java::lang::System::arraycopy(byteBuffer, bytePos, this->fBuffer, 0x0, (byteBufferLimit - bytePos));
	this->fBufferLength = (byteBufferLimit - bytePos);
	(bytePos +  this->fBufferLength);
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	goto label_goto_dc;
	// 1094    .end local v11    # "bytePos":I
	// 1095    .end local v17    # "ucPos":I
	// 1096    .restart local v12    # "bytePos":I
	// 1097    .restart local v18    # "ucPos":I
label_cond_271:
	bytePos = bytePos;
	//    .end local v12    # "bytePos":I
	//    .restart local v11    # "bytePos":I
label_goto_272:
	ucPos = ucPos;
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	goto label_goto_67;
	// 1111    .line 436
	// 1112    .end local v17    # "ucPos":I
	// 1113    .restart local v18    # "ucPos":I
label_pswitch_276:
	if ( bytePos <  byteBufferLimit )
		goto label_cond_297;
	bytePos = ( bytePos + -0x1);
	java::lang::System::arraycopy(byteBuffer, bytePos, this->fBuffer, 0x0, (byteBufferLimit - bytePos));
	this->fBufferLength = (byteBufferLimit - bytePos);
	(bytePos +  this->fBufferLength);
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	goto label_goto_dc;
	// 1159    .line 446
	// 1160    .end local v17    # "ucPos":I
	// 1161    .restart local v18    # "ucPos":I
label_cond_297:
	this->fCurrentWindow = ( aByte + -0xe8);
	//    .end local v11    # "bytePos":I
	//    .restart local v12    # "bytePos":I
	this->fOffsets[this->fCurrentWindow] = android::icu::text::UnicodeDecompressor::sOffsetTable[( byteBuffer[bytePos] & 0xff)];
	this->fMode = 0x0;
	bytePos = ( bytePos + 0x1);
	//    .end local v12    # "bytePos":I
	//    .restart local v11    # "bytePos":I
	goto label_goto_272;
	// 1208    .line 457
label_pswitch_2b8:
	if ( ( bytePos + 0x1) <  byteBufferLimit )
		goto label_cond_2db;
	bytePos = ( bytePos + -0x1);
	java::lang::System::arraycopy(byteBuffer, bytePos, this->fBuffer, 0x0, (byteBufferLimit - bytePos));
	this->fBufferLength = (byteBufferLimit - bytePos);
	(bytePos +  this->fBufferLength);
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	goto label_goto_dc;
	// 1256    .line 467
	// 1257    .end local v17    # "ucPos":I
	// 1258    .restart local v18    # "ucPos":I
label_cond_2db:
	bytePos = ( bytePos + 0x1);
	//    .end local v11    # "bytePos":I
	//    .restart local v12    # "bytePos":I
	aByte = ( byteBuffer[bytePos] & 0xff);
	this->fCurrentWindow = _shri(( aByte & 0xe0),0x5);
	bytePos = ( bytePos + 0x1);
	//    .end local v12    # "bytePos":I
	//    .restart local v11    # "bytePos":I
	this->fOffsets[this->fCurrentWindow] = (( (( ( aByte & 0x1f) << 0x8) |  ( byteBuffer[bytePos] & 0xff)) * 0x80) +  0x10000);
	this->fMode = 0x0;
	goto label_goto_272;
	// 1321    .line 479
label_pswitch_30a:
	this->fCurrentWindow = ( aByte + -0xe0);
	this->fMode = 0x0;
	goto label_goto_272;
	// 1338    .line 488
label_pswitch_317:
	if ( bytePos <  ( byteBufferLimit + -0x1) )
		goto label_cond_338;
	bytePos = ( bytePos + -0x1);
	java::lang::System::arraycopy(byteBuffer, bytePos, this->fBuffer, 0x0, (byteBufferLimit - bytePos));
	this->fBufferLength = (byteBufferLimit - bytePos);
	(bytePos +  this->fBufferLength);
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	goto label_goto_dc;
	// 1384    .line 498
	// 1385    .end local v17    # "ucPos":I
	// 1386    .restart local v18    # "ucPos":I
label_cond_338:
	bytePos = ( bytePos + 0x1);
	//    .end local v11    # "bytePos":I
	//    .restart local v12    # "bytePos":I
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	//    .end local v12    # "bytePos":I
	//    .restart local v11    # "bytePos":I
	charBuffer[ucPos] = (char)((( byteBuffer[bytePos] << 0x8) |  ( byteBuffer[bytePos] & 0xff)));
label_goto_34a:
	ucPos = ucPos;
	//    .end local v17    # "ucPos":I
	//    .restart local v18    # "ucPos":I
	bytePos = bytePos;
	//    .end local v11    # "bytePos":I
	//    .restart local v12    # "bytePos":I
	goto label_goto_23d;
	// 1428    .line 516
	// 1429    .end local v12    # "bytePos":I
	// 1430    .restart local v11    # "bytePos":I
label_cond_34f:
	//    .end local v18    # "ucPos":I
	//    .restart local v17    # "ucPos":I
	//    .end local v11    # "bytePos":I
	//    .restart local v12    # "bytePos":I
	charBuffer[ucPos] = (char)((( aByte << 0x8) |  ( byteBuffer[bytePos] & 0xff)));
	//    .end local v12    # "bytePos":I
	//    .restart local v11    # "bytePos":I
	goto label_goto_34a;
	// 1461    .line 220
	// 1462    nop
	// 1464    :pswitch_data_360
	// 1465    .packed-switch 0x0
	// 1466        :pswitch_79
	// 1467        :pswitch_23a
	// 1468    .end packed-switch
	// 1470    .line 226
	// 1471    :pswitch_data_368
	// 1472    .packed-switch 0x0
	// 1473        :pswitch_112
	// 1474        :pswitch_156
	// 1475        :pswitch_156
	// 1476        :pswitch_156
	// 1477        :pswitch_156
	// 1478        :pswitch_156
	// 1479        :pswitch_156
	// 1480        :pswitch_156
	// 1481        :pswitch_156
	// 1482        :pswitch_112
	// 1483        :pswitch_112
	// 1484        :pswitch_1e7
	// 1485        :pswitch_236
	// 1486        :pswitch_112
	// 1487        :pswitch_119
	// 1488        :pswitch_14f
	// 1489        :pswitch_19d
	// 1490        :pswitch_19d
	// 1491        :pswitch_19d
	// 1492        :pswitch_19d
	// 1493        :pswitch_19d
	// 1494        :pswitch_19d
	// 1495        :pswitch_19d
	// 1496        :pswitch_19d
	// 1497        :pswitch_1a7
	// 1498        :pswitch_1a7
	// 1499        :pswitch_1a7
	// 1500        :pswitch_1a7
	// 1501        :pswitch_1a7
	// 1502        :pswitch_1a7
	// 1503        :pswitch_1a7
	// 1504        :pswitch_1a7
	// 1505        :pswitch_112
	// 1506        :pswitch_112
	// 1507        :pswitch_112
	// 1508        :pswitch_112
	// 1509        :pswitch_112
	// 1510        :pswitch_112
	// 1511        :pswitch_112
	// 1512        :pswitch_112
	// 1513        :pswitch_112
	// 1514        :pswitch_112
	// 1515        :pswitch_112
	// 1516        :pswitch_112
	// 1517        :pswitch_112
	// 1518        :pswitch_112
	// 1519        :pswitch_112
	// 1520        :pswitch_112
	// 1521        :pswitch_112
	// 1522        :pswitch_112
	// 1523        :pswitch_112
	// 1524        :pswitch_112
	// 1525        :pswitch_112
	// 1526        :pswitch_112
	// 1527        :pswitch_112
	// 1528        :pswitch_112
	// 1529        :pswitch_112
	// 1530        :pswitch_112
	// 1531        :pswitch_112
	// 1532        :pswitch_112
	// 1533        :pswitch_112
	// 1534        :pswitch_112
	// 1535        :pswitch_112
	// 1536        :pswitch_112
	// 1537        :pswitch_112
	// 1538        :pswitch_112
	// 1539        :pswitch_112
	// 1540        :pswitch_112
	// 1541        :pswitch_112
	// 1542        :pswitch_112
	// 1543        :pswitch_112
	// 1544        :pswitch_112
	// 1545        :pswitch_112
	// 1546        :pswitch_112
	// 1547        :pswitch_112
	// 1548        :pswitch_112
	// 1549        :pswitch_112
	// 1550        :pswitch_112
	// 1551        :pswitch_112
	// 1552        :pswitch_112
	// 1553        :pswitch_112
	// 1554        :pswitch_112
	// 1555        :pswitch_112
	// 1556        :pswitch_112
	// 1557        :pswitch_112
	// 1558        :pswitch_112
	// 1559        :pswitch_112
	// 1560        :pswitch_112
	// 1561        :pswitch_112
	// 1562        :pswitch_112
	// 1563        :pswitch_112
	// 1564        :pswitch_112
	// 1565        :pswitch_112
	// 1566        :pswitch_112
	// 1567        :pswitch_112
	// 1568        :pswitch_112
	// 1569        :pswitch_112
	// 1570        :pswitch_112
	// 1571        :pswitch_112
	// 1572        :pswitch_112
	// 1573        :pswitch_112
	// 1574        :pswitch_112
	// 1575        :pswitch_112
	// 1576        :pswitch_112
	// 1577        :pswitch_112
	// 1578        :pswitch_112
	// 1579        :pswitch_112
	// 1580        :pswitch_112
	// 1581        :pswitch_112
	// 1582        :pswitch_112
	// 1583        :pswitch_112
	// 1584        :pswitch_112
	// 1585        :pswitch_112
	// 1586        :pswitch_112
	// 1587        :pswitch_112
	// 1588        :pswitch_112
	// 1589        :pswitch_112
	// 1590        :pswitch_112
	// 1591        :pswitch_112
	// 1592        :pswitch_112
	// 1593        :pswitch_112
	// 1594        :pswitch_112
	// 1595        :pswitch_112
	// 1596        :pswitch_112
	// 1597        :pswitch_112
	// 1598        :pswitch_112
	// 1599        :pswitch_112
	// 1600        :pswitch_112
	// 1601        :pswitch_99
	// 1602        :pswitch_99
	// 1603        :pswitch_99
	// 1604        :pswitch_99
	// 1605        :pswitch_99
	// 1606        :pswitch_99
	// 1607        :pswitch_99
	// 1608        :pswitch_99
	// 1609        :pswitch_99
	// 1610        :pswitch_99
	// 1611        :pswitch_99
	// 1612        :pswitch_99
	// 1613        :pswitch_99
	// 1614        :pswitch_99
	// 1615        :pswitch_99
	// 1616        :pswitch_99
	// 1617        :pswitch_99
	// 1618        :pswitch_99
	// 1619        :pswitch_99
	// 1620        :pswitch_99
	// 1621        :pswitch_99
	// 1622        :pswitch_99
	// 1623        :pswitch_99
	// 1624        :pswitch_99
	// 1625        :pswitch_99
	// 1626        :pswitch_99
	// 1627        :pswitch_99
	// 1628        :pswitch_99
	// 1629        :pswitch_99
	// 1630        :pswitch_99
	// 1631        :pswitch_99
	// 1632        :pswitch_99
	// 1633        :pswitch_99
	// 1634        :pswitch_99
	// 1635        :pswitch_99
	// 1636        :pswitch_99
	// 1637        :pswitch_99
	// 1638        :pswitch_99
	// 1639        :pswitch_99
	// 1640        :pswitch_99
	// 1641        :pswitch_99
	// 1642        :pswitch_99
	// 1643        :pswitch_99
	// 1644        :pswitch_99
	// 1645        :pswitch_99
	// 1646        :pswitch_99
	// 1647        :pswitch_99
	// 1648        :pswitch_99
	// 1649        :pswitch_99
	// 1650        :pswitch_99
	// 1651        :pswitch_99
	// 1652        :pswitch_99
	// 1653        :pswitch_99
	// 1654        :pswitch_99
	// 1655        :pswitch_99
	// 1656        :pswitch_99
	// 1657        :pswitch_99
	// 1658        :pswitch_99
	// 1659        :pswitch_99
	// 1660        :pswitch_99
	// 1661        :pswitch_99
	// 1662        :pswitch_99
	// 1663        :pswitch_99
	// 1664        :pswitch_99
	// 1665        :pswitch_99
	// 1666        :pswitch_99
	// 1667        :pswitch_99
	// 1668        :pswitch_99
	// 1669        :pswitch_99
	// 1670        :pswitch_99
	// 1671        :pswitch_99
	// 1672        :pswitch_99
	// 1673        :pswitch_99
	// 1674        :pswitch_99
	// 1675        :pswitch_99
	// 1676        :pswitch_99
	// 1677        :pswitch_99
	// 1678        :pswitch_99
	// 1679        :pswitch_99
	// 1680        :pswitch_99
	// 1681        :pswitch_99
	// 1682        :pswitch_99
	// 1683        :pswitch_99
	// 1684        :pswitch_99
	// 1685        :pswitch_99
	// 1686        :pswitch_99
	// 1687        :pswitch_99
	// 1688        :pswitch_99
	// 1689        :pswitch_99
	// 1690        :pswitch_99
	// 1691        :pswitch_99
	// 1692        :pswitch_99
	// 1693        :pswitch_99
	// 1694        :pswitch_99
	// 1695        :pswitch_99
	// 1696        :pswitch_99
	// 1697        :pswitch_99
	// 1698        :pswitch_99
	// 1699        :pswitch_99
	// 1700        :pswitch_99
	// 1701        :pswitch_99
	// 1702        :pswitch_99
	// 1703        :pswitch_99
	// 1704        :pswitch_99
	// 1705        :pswitch_99
	// 1706        :pswitch_99
	// 1707        :pswitch_99
	// 1708        :pswitch_99
	// 1709        :pswitch_99
	// 1710        :pswitch_99
	// 1711        :pswitch_99
	// 1712        :pswitch_99
	// 1713        :pswitch_99
	// 1714        :pswitch_99
	// 1715        :pswitch_99
	// 1716        :pswitch_99
	// 1717        :pswitch_99
	// 1718        :pswitch_99
	// 1719        :pswitch_99
	// 1720        :pswitch_99
	// 1721        :pswitch_99
	// 1722        :pswitch_99
	// 1723        :pswitch_99
	// 1724        :pswitch_99
	// 1725        :pswitch_99
	// 1726        :pswitch_99
	// 1727        :pswitch_99
	// 1728        :pswitch_99
	// 1729    .end packed-switch
	// 1731    .line 430
	// 1732    :pswitch_data_56c
	// 1733    .packed-switch 0xe0
	// 1734        :pswitch_30a
	// 1735        :pswitch_30a
	// 1736        :pswitch_30a
	// 1737        :pswitch_30a
	// 1738        :pswitch_30a
	// 1739        :pswitch_30a
	// 1740        :pswitch_30a
	// 1741        :pswitch_30a
	// 1742        :pswitch_276
	// 1743        :pswitch_276
	// 1744        :pswitch_276
	// 1745        :pswitch_276
	// 1746        :pswitch_276
	// 1747        :pswitch_276
	// 1748        :pswitch_276
	// 1749        :pswitch_276
	// 1750        :pswitch_317
	// 1751        :pswitch_2b8
	// 1752    .end packed-switch

}
// .method public reset()V
void android::icu::text::UnicodeDecompressor::reset()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	this->fOffsets[cVar0] = 0x80;
	this->fOffsets[0x1] = 0xc0;
	this->fOffsets[0x2] = 0x400;
	this->fOffsets[0x3] = 0x600;
	this->fOffsets[0x4] = 0x900;
	this->fOffsets[0x5] = 0x3040;
	this->fOffsets[0x6] = 0x30a0;
	this->fOffsets[0x7] = 0xff00;
	this->fCurrentWindow = cVar0;
	this->fMode = cVar0;
	this->fBufferLength = cVar0;
	return;

}


