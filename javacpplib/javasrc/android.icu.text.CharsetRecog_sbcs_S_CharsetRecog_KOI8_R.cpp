// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_KOI8_R.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_KOI8_R.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_KOI8_R::byteMap;
static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_KOI8_R::ngrams;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_KOI8_R::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::shared<std::vector<unsigned char[]>> cVar1;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x40);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_KOI8_R::ngrams = cVar0;
	cVar1 = std::make_shared<std::vector<unsigned char[]>>(0x100);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_KOI8_R::byteMap = cVar1;
	return;
	// 049    .line 1047
	// 050    nop
	// 052    :array_14
	// 053    .array-data 4
	// 054        0x20c4cf
	// 055        0x20c920
	// 056        0x20cbc1
	// 057        0x20cbcf
	// 058        0x20cec1
	// 059        0x20cec5
	// 060        0x20cfc2
	// 061        0x20d0cf
	// 062        0x20d0d2
	// 063        0x20d2c1
	// 064        0x20d3cf
	// 065        0x20d3d4
	// 066        0x20d4cf
	// 067        0x20d720
	// 068        0x20d7cf
	// 069        0x20dac1
	// 070        0x20dcd4
	// 071        0x20ded4
	// 072        0xc1cec9
	// 073        0xc1d4d8
	// 074        0xc5ccd8
	// 075        0xc5cec9
	// 076        0xc5d3d4
	// 077        0xc5d420
	// 078        0xc7cf20
	// 079        0xc920d0
	// 080        0xc9c520
	// 081        0xc9c920
	// 082        0xc9d120
	// 083        0xccc5ce
	// 084        0xccc920
	// 085        0xccd8ce
	// 086        0xcec120
	// 087        0xcec520
	// 088        0xcec9c5
	// 089        0xcec9d1
	// 090        0xcecf20
	// 091        0xcecfd7
	// 092        0xcf20d0
	// 093        0xcf20d3
	// 094        0xcf20d7
	// 095        0xcfc7cf
	// 096        0xcfca20
	// 097        0xcfccd8
	// 098        0xcfcd20
	// 099        0xcfd3d4
	// 100        0xcfd720
	// 101        0xcfd7c1
	// 102        0xd0cfcc
	// 103        0xd0d2c5
	// 104        0xd0d2c9
	// 105        0xd0d2cf
	// 106        0xd2c1d7
	// 107        0xd2c5c4
	// 108        0xd3d120
	// 109        0xd3d4c1
	// 110        0xd3d4c9
	// 111        0xd3d4d7
	// 112        0xd4c5cc
	// 113        0xd4cf20
	// 114        0xd4cfd2
	// 115        0xd4d820
	// 116        0xd9c820    # 2.0000094E-38f
	// 117        0xded4cf
	// 118    .end array-data
	// 120    .line 1054
	// 121    :array_98
	// 122    .array-data 1
	// 123        0x20t
	// 124        0x20t
	// 125        0x20t
	// 126        0x20t
	// 127        0x20t
	// 128        0x20t
	// 129        0x20t
	// 130        0x20t
	// 131        0x20t
	// 132        0x20t
	// 133        0x20t
	// 134        0x20t
	// 135        0x20t
	// 136        0x20t
	// 137        0x20t
	// 138        0x20t
	// 139        0x20t
	// 140        0x20t
	// 141        0x20t
	// 142        0x20t
	// 143        0x20t
	// 144        0x20t
	// 145        0x20t
	// 146        0x20t
	// 147        0x20t
	// 148        0x20t
	// 149        0x20t
	// 150        0x20t
	// 151        0x20t
	// 152        0x20t
	// 153        0x20t
	// 154        0x20t
	// 155        0x20t
	// 156        0x20t
	// 157        0x20t
	// 158        0x20t
	// 159        0x20t
	// 160        0x20t
	// 161        0x20t
	// 162        0x0t
	// 163        0x20t
	// 164        0x20t
	// 165        0x20t
	// 166        0x20t
	// 167        0x20t
	// 168        0x20t
	// 169        0x20t
	// 170        0x20t
	// 171        0x20t
	// 172        0x20t
	// 173        0x20t
	// 174        0x20t
	// 175        0x20t
	// 176        0x20t
	// 177        0x20t
	// 178        0x20t
	// 179        0x20t
	// 180        0x20t
	// 181        0x20t
	// 182        0x20t
	// 183        0x20t
	// 184        0x20t
	// 185        0x20t
	// 186        0x20t
	// 187        0x20t
	// 188        0x61t
	// 189        0x62t
	// 190        0x63t
	// 191        0x64t
	// 192        0x65t
	// 193        0x66t
	// 194        0x67t
	// 195        0x68t
	// 196        0x69t
	// 197        0x6at
	// 198        0x6bt
	// 199        0x6ct
	// 200        0x6dt
	// 201        0x6et
	// 202        0x6ft
	// 203        0x70t
	// 204        0x71t
	// 205        0x72t
	// 206        0x73t
	// 207        0x74t
	// 208        0x75t
	// 209        0x76t
	// 210        0x77t
	// 211        0x78t
	// 212        0x79t
	// 213        0x7at
	// 214        0x20t
	// 215        0x20t
	// 216        0x20t
	// 217        0x20t
	// 218        0x20t
	// 219        0x20t
	// 220        0x61t
	// 221        0x62t
	// 222        0x63t
	// 223        0x64t
	// 224        0x65t
	// 225        0x66t
	// 226        0x67t
	// 227        0x68t
	// 228        0x69t
	// 229        0x6at
	// 230        0x6bt
	// 231        0x6ct
	// 232        0x6dt
	// 233        0x6et
	// 234        0x6ft
	// 235        0x70t
	// 236        0x71t
	// 237        0x72t
	// 238        0x73t
	// 239        0x74t
	// 240        0x75t
	// 241        0x76t
	// 242        0x77t
	// 243        0x78t
	// 244        0x79t
	// 245        0x7at
	// 246        0x20t
	// 247        0x20t
	// 248        0x20t
	// 249        0x20t
	// 250        0x20t
	// 251        0x20t
	// 252        0x20t
	// 253        0x20t
	// 254        0x20t
	// 255        0x20t
	// 256        0x20t
	// 257        0x20t
	// 258        0x20t
	// 259        0x20t
	// 260        0x20t
	// 261        0x20t
	// 262        0x20t
	// 263        0x20t
	// 264        0x20t
	// 265        0x20t
	// 266        0x20t
	// 267        0x20t
	// 268        0x20t
	// 269        0x20t
	// 270        0x20t
	// 271        0x20t
	// 272        0x20t
	// 273        0x20t
	// 274        0x20t
	// 275        0x20t
	// 276        0x20t
	// 277        0x20t
	// 278        0x20t
	// 279        0x20t
	// 280        0x20t
	// 281        0x20t
	// 282        0x20t
	// 283        0x20t
	// 284        0x20t
	// 285        0x20t
	// 286        -0x5dt
	// 287        0x20t
	// 288        0x20t
	// 289        0x20t
	// 290        0x20t
	// 291        0x20t
	// 292        0x20t
	// 293        0x20t
	// 294        0x20t
	// 295        0x20t
	// 296        0x20t
	// 297        0x20t
	// 298        0x20t
	// 299        0x20t
	// 300        0x20t
	// 301        0x20t
	// 302        -0x5dt
	// 303        0x20t
	// 304        0x20t
	// 305        0x20t
	// 306        0x20t
	// 307        0x20t
	// 308        0x20t
	// 309        0x20t
	// 310        0x20t
	// 311        0x20t
	// 312        0x20t
	// 313        0x20t
	// 314        0x20t
	// 315        -0x40t
	// 316        -0x3ft
	// 317        -0x3et
	// 318        -0x3dt
	// 319        -0x3ct
	// 320        -0x3bt
	// 321        -0x3at
	// 322        -0x39t
	// 323        -0x38t
	// 324        -0x37t
	// 325        -0x36t
	// 326        -0x35t
	// 327        -0x34t
	// 328        -0x33t
	// 329        -0x32t
	// 330        -0x31t
	// 331        -0x30t
	// 332        -0x2ft
	// 333        -0x2et
	// 334        -0x2dt
	// 335        -0x2ct
	// 336        -0x2bt
	// 337        -0x2at
	// 338        -0x29t
	// 339        -0x28t
	// 340        -0x27t
	// 341        -0x26t
	// 342        -0x25t
	// 343        -0x24t
	// 344        -0x23t
	// 345        -0x22t
	// 346        -0x21t
	// 347        -0x40t
	// 348        -0x3ft
	// 349        -0x3et
	// 350        -0x3dt
	// 351        -0x3ct
	// 352        -0x3bt
	// 353        -0x3at
	// 354        -0x39t
	// 355        -0x38t
	// 356        -0x37t
	// 357        -0x36t
	// 358        -0x35t
	// 359        -0x34t
	// 360        -0x33t
	// 361        -0x32t
	// 362        -0x31t
	// 363        -0x30t
	// 364        -0x2ft
	// 365        -0x2et
	// 366        -0x2dt
	// 367        -0x2ct
	// 368        -0x2bt
	// 369        -0x2at
	// 370        -0x29t
	// 371        -0x28t
	// 372        -0x27t
	// 373        -0x26t
	// 374        -0x25t
	// 375        -0x24t
	// 376        -0x23t
	// 377        -0x22t
	// 378        -0x21t
	// 379    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_KOI8_R::CharsetRecog_sbcs_S_CharsetRecog_KOI8_R()
{
	
	// 387    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs;-><init>()V
	return;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_KOI8_R::getLanguage()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ru"));

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_KOI8_R::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("KOI8-R"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_KOI8_R::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->match(det, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_KOI8_R::ngrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_KOI8_R::byteMap);
	//    .local v0, "confidence":I
	if ( confidence )     
		goto label_cond_c;
	cVar0 = 0x0;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = std::make_shared<android::icu::text::CharsetMatch>(det, this, confidence);
	goto label_goto_b;

}


