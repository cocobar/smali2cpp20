// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$NGramParser_IBM420.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetRecog_sbcs_S_NGramParser.h"
#include "android.icu.text.CharsetRecog_sbcs_S_NGramParser_IBM420.h"

static android::icu::text::CharsetRecog_sbcs_S_NGramParser_IBM420::unshapeMap;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_NGramParser_IBM420::static_cinit()
{
	
	std::shared<std::vector<unsigned char[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<unsigned char[]>>(0x100);
	?;
	android::icu::text::CharsetRecog_sbcs_S_NGramParser_IBM420::unshapeMap = cVar0;
	return;
	// 042    .line 173
	// 043    :array_a
	// 044    .array-data 1
	// 045        0x40t
	// 046        0x40t
	// 047        0x40t
	// 048        0x40t
	// 049        0x40t
	// 050        0x40t
	// 051        0x40t
	// 052        0x40t
	// 053        0x40t
	// 054        0x40t
	// 055        0x40t
	// 056        0x40t
	// 057        0x40t
	// 058        0x40t
	// 059        0x40t
	// 060        0x40t
	// 061        0x40t
	// 062        0x40t
	// 063        0x40t
	// 064        0x40t
	// 065        0x40t
	// 066        0x40t
	// 067        0x40t
	// 068        0x40t
	// 069        0x40t
	// 070        0x40t
	// 071        0x40t
	// 072        0x40t
	// 073        0x40t
	// 074        0x40t
	// 075        0x40t
	// 076        0x40t
	// 077        0x40t
	// 078        0x40t
	// 079        0x40t
	// 080        0x40t
	// 081        0x40t
	// 082        0x40t
	// 083        0x40t
	// 084        0x40t
	// 085        0x40t
	// 086        0x40t
	// 087        0x40t
	// 088        0x40t
	// 089        0x40t
	// 090        0x40t
	// 091        0x40t
	// 092        0x40t
	// 093        0x40t
	// 094        0x40t
	// 095        0x40t
	// 096        0x40t
	// 097        0x40t
	// 098        0x40t
	// 099        0x40t
	// 100        0x40t
	// 101        0x40t
	// 102        0x40t
	// 103        0x40t
	// 104        0x40t
	// 105        0x40t
	// 106        0x40t
	// 107        0x40t
	// 108        0x40t
	// 109        0x40t
	// 110        0x40t
	// 111        0x42t
	// 112        0x42t
	// 113        0x44t
	// 114        0x45t
	// 115        0x46t
	// 116        0x47t
	// 117        0x47t
	// 118        0x49t
	// 119        0x4at
	// 120        0x4bt
	// 121        0x4ct
	// 122        0x4dt
	// 123        0x4et
	// 124        0x4ft
	// 125        0x50t
	// 126        0x49t
	// 127        0x52t
	// 128        0x53t
	// 129        0x54t
	// 130        0x55t
	// 131        0x56t
	// 132        0x56t
	// 133        0x58t
	// 134        0x58t
	// 135        0x5at
	// 136        0x5bt
	// 137        0x5ct
	// 138        0x5dt
	// 139        0x5et
	// 140        0x5ft
	// 141        0x60t
	// 142        0x61t
	// 143        0x62t
	// 144        0x63t
	// 145        0x63t
	// 146        0x65t
	// 147        0x65t
	// 148        0x67t
	// 149        0x67t
	// 150        0x69t
	// 151        0x6at
	// 152        0x6bt
	// 153        0x6ct
	// 154        0x6dt
	// 155        0x6et
	// 156        0x6ft
	// 157        0x69t
	// 158        0x71t
	// 159        0x71t
	// 160        0x73t
	// 161        0x74t
	// 162        0x75t
	// 163        0x76t
	// 164        0x77t
	// 165        0x77t
	// 166        0x79t
	// 167        0x7at
	// 168        0x7bt
	// 169        0x7ct
	// 170        0x7dt
	// 171        0x7et
	// 172        0x7ft
	// 173        -0x80t
	// 174        -0x7ft
	// 175        -0x7et
	// 176        -0x7dt
	// 177        -0x7ct
	// 178        -0x7bt
	// 179        -0x7at
	// 180        -0x79t
	// 181        -0x78t
	// 182        -0x77t
	// 183        -0x80t
	// 184        -0x75t
	// 185        -0x75t
	// 186        -0x73t
	// 187        -0x73t
	// 188        -0x71t
	// 189        -0x70t
	// 190        -0x6ft
	// 191        -0x6et
	// 192        -0x6dt
	// 193        -0x6ct
	// 194        -0x6bt
	// 195        -0x6at
	// 196        -0x69t
	// 197        -0x68t
	// 198        -0x67t
	// 199        -0x66t
	// 200        -0x66t
	// 201        -0x66t
	// 202        -0x66t
	// 203        -0x62t
	// 204        -0x62t
	// 205        -0x62t
	// 206        -0x5ft
	// 207        -0x5et
	// 208        -0x5dt
	// 209        -0x5ct
	// 210        -0x5bt
	// 211        -0x5at
	// 212        -0x59t
	// 213        -0x58t
	// 214        -0x57t
	// 215        -0x62t
	// 216        -0x55t
	// 217        -0x55t
	// 218        -0x53t
	// 219        -0x53t
	// 220        -0x51t
	// 221        -0x51t
	// 222        -0x4ft
	// 223        -0x4et
	// 224        -0x4dt
	// 225        -0x4ct
	// 226        -0x4bt
	// 227        -0x4at
	// 228        -0x49t
	// 229        -0x48t
	// 230        -0x47t
	// 231        -0x4ft
	// 232        -0x45t
	// 233        -0x45t
	// 234        -0x43t
	// 235        -0x43t
	// 236        -0x41t
	// 237        -0x40t
	// 238        -0x3ft
	// 239        -0x3et
	// 240        -0x3dt
	// 241        -0x3ct
	// 242        -0x3bt
	// 243        -0x3at
	// 244        -0x39t
	// 245        -0x38t
	// 246        -0x37t
	// 247        -0x36t
	// 248        -0x41t
	// 249        -0x34t
	// 250        -0x41t
	// 251        -0x32t
	// 252        -0x31t
	// 253        -0x30t
	// 254        -0x2ft
	// 255        -0x2et
	// 256        -0x2dt
	// 257        -0x2ct
	// 258        -0x2bt
	// 259        -0x2at
	// 260        -0x29t
	// 261        -0x28t
	// 262        -0x27t
	// 263        -0x26t
	// 264        -0x26t
	// 265        -0x24t
	// 266        -0x24t
	// 267        -0x24t
	// 268        -0x21t
	// 269        -0x20t
	// 270        -0x1ft
	// 271        -0x1et
	// 272        -0x1dt
	// 273        -0x1ct
	// 274        -0x1bt
	// 275        -0x1at
	// 276        -0x19t
	// 277        -0x18t
	// 278        -0x17t
	// 279        -0x16t
	// 280        -0x15t
	// 281        -0x14t
	// 282        -0x13t
	// 283        -0x12t
	// 284        -0x11t
	// 285        -0x10t
	// 286        -0xft
	// 287        -0xet
	// 288        -0xdt
	// 289        -0xct
	// 290        -0xbt
	// 291        -0xat
	// 292        -0x9t
	// 293        -0x8t
	// 294        -0x7t
	// 295        -0x6t
	// 296        -0x5t
	// 297        -0x4t
	// 298        -0x3t
	// 299        -0x2t
	// 300        -0x1t
	// 301    .end array-data

}
// .method public constructor <init>([I[B)V
android::icu::text::CharsetRecog_sbcs_S_NGramParser_IBM420::CharsetRecog_sbcs_S_NGramParser_IBM420(std::shared_ptr<int[]> theNgramList,std::shared_ptr<unsigned char[]> theByteMap)
{
	
	//    .param p1, "theNgramList"    # [I
	//    .param p2, "theByteMap"    # [B
	android::icu::text::CharsetRecog_sbcs_S_NGramParser::(theNgramList, theByteMap);
	this->alef = 0x0;
	return;

}
// .method private isLamAlef(B)B
unsigned char android::icu::text::CharsetRecog_sbcs_S_NGramParser_IBM420::isLamAlef(unsigned char b)
{
	
	//    .param p1, "b"    # B
	if ( b == -0x4e )
		goto label_cond_8;
	if ( b != -0x4d )
		goto label_cond_b;
label_cond_8:
	return 0x47;
	// 342    .line 202
label_cond_b:
	if ( b == -0x4c )
		goto label_cond_13;
	if ( b != -0x4b )
		goto label_cond_16;
label_cond_13:
	return 0x49;
	// 358    .line 204
label_cond_16:
	if ( b == -0x48 )
		goto label_cond_1e;
	if ( b != -0x47 )
		goto label_cond_21;
label_cond_1e:
	return 0x56;
	// 374    .line 207
label_cond_21:
	return 0x0;

}
// .method private nextByte(Landroid/icu/text/CharsetDetector;)I
int android::icu::text::CharsetRecog_sbcs_S_NGramParser_IBM420::nextByte(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	if ( this->byteIndex >= det->fInputLen )
		goto label_cond_e;
	if ( det->fInputBytes[this->byteIndex] )     
		goto label_cond_10;
label_cond_e:
	return -0x1;
	// 407    .line 224
label_cond_10:
	this->alef = this->isLamAlef(det->fInputBytes[this->byteIndex]);
	if ( !(this->alef) )  
		goto label_cond_29;
	//    .local v0, "next":I
label_goto_22:
	this->byteIndex = ( this->byteIndex + 0x1);
	return next;
	// 441    .line 228
	// 442    .end local v0    # "next":I
label_cond_29:
	//    .restart local v0    # "next":I
	goto label_goto_22;

}
// .method protected parseCharacters(Landroid/icu/text/CharsetDetector;)V
void android::icu::text::CharsetRecog_sbcs_S_NGramParser_IBM420::parseCharacters(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int cVar0;
	int ignoreSpace;
	int b;
	int mb;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	cVar0 = 0x0;
	ignoreSpace = 0x0;
	//    .local v1, "ignoreSpace":Z
label_cond_2:
label_goto_2:
	b = this->nextByte(det);
	//    .local v0, "b":I
	if ( b < 0 ) 
		goto label_cond_41;
	mb = this->byteMap[b];
	//    .local v2, "mb":B
	if ( !(mb) )  
		goto label_cond_1c;
	if ( mb != this->spaceChar )
		goto label_cond_39;
	//    .end local v1    # "ignoreSpace":Z
label_goto_12:
	if ( ignoreSpace )     
		goto label_cond_17;
	this->addByte(mb);
label_cond_17:
	if ( mb != this->spaceChar )
		goto label_cond_3b;
	ignoreSpace = 0x1;
	//    .restart local v1    # "ignoreSpace":Z
label_cond_1c:
label_goto_1c:
	if ( !(this->alef) )  
		goto label_cond_2;
	mb = this->byteMap[( this->alef & 0xff)];
	if ( !(mb) )  
		goto label_cond_2;
	if ( mb != this->spaceChar )
		goto label_cond_3d;
	//    .end local v1    # "ignoreSpace":Z
label_goto_2e:
	if ( ignoreSpace )     
		goto label_cond_33;
	this->addByte(mb);
label_cond_33:
	if ( mb != this->spaceChar )
		goto label_cond_3f;
	ignoreSpace = 0x1;
	//    .restart local v1    # "ignoreSpace":Z
	goto label_goto_2;
label_cond_39:
	ignoreSpace = cVar0;
	goto label_goto_12;
	// 563    .line 250
	// 564    .end local v1    # "ignoreSpace":Z
label_cond_3b:
	ignoreSpace = 0x0;
	//    .restart local v1    # "ignoreSpace":Z
	goto label_goto_1c;
label_cond_3d:
	ignoreSpace = cVar0;
	goto label_goto_2e;
	// 577    .line 261
	// 578    .end local v1    # "ignoreSpace":Z
label_cond_3f:
	ignoreSpace = 0x0;
	//    .restart local v1    # "ignoreSpace":Z
	goto label_goto_2;
	// 585    .line 266
	// 586    .end local v2    # "mb":B
label_cond_41:
	return;

}


