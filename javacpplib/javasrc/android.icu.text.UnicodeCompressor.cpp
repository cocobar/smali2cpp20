// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeCompressor.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeCompressor.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.lang.System.h"

static android::icu::text::UnicodeCompressor::sSingleTagTable;
static android::icu::text::UnicodeCompressor::sUnicodeTagTable;
// .method static constructor <clinit>()V
void android::icu::text::UnicodeCompressor::static_cinit()
{
	
	int cVar0;
	std::shared<std::vector<bool[]>> cVar1;
	std::shared<std::vector<bool[]>> cVar2;
	
	cVar0 = 0x100;
	cVar1 = std::make_shared<std::vector<bool[]>>(cVar0);
	?;
	android::icu::text::UnicodeCompressor::sSingleTagTable = cVar1;
	cVar2 = std::make_shared<std::vector<bool[]>>(cVar0);
	?;
	android::icu::text::UnicodeCompressor::sUnicodeTagTable = cVar2;
	return;
	// 053    .line 196
	// 054    nop
	// 056    :array_12
	// 057    .array-data 1
	// 058        0x0t
	// 059        0x1t
	// 060        0x1t
	// 061        0x1t
	// 062        0x1t
	// 063        0x1t
	// 064        0x1t
	// 065        0x1t
	// 066        0x1t
	// 067        0x0t
	// 068        0x0t
	// 069        0x1t
	// 070        0x1t
	// 071        0x0t
	// 072        0x1t
	// 073        0x1t
	// 074        0x1t
	// 075        0x1t
	// 076        0x1t
	// 077        0x1t
	// 078        0x1t
	// 079        0x1t
	// 080        0x1t
	// 081        0x1t
	// 082        0x1t
	// 083        0x1t
	// 084        0x1t
	// 085        0x1t
	// 086        0x1t
	// 087        0x1t
	// 088        0x1t
	// 089        0x1t
	// 090        0x0t
	// 091        0x0t
	// 092        0x0t
	// 093        0x0t
	// 094        0x0t
	// 095        0x0t
	// 096        0x0t
	// 097        0x0t
	// 098        0x0t
	// 099        0x0t
	// 100        0x0t
	// 101        0x0t
	// 102        0x0t
	// 103        0x0t
	// 104        0x0t
	// 105        0x0t
	// 106        0x0t
	// 107        0x0t
	// 108        0x0t
	// 109        0x0t
	// 110        0x0t
	// 111        0x0t
	// 112        0x0t
	// 113        0x0t
	// 114        0x0t
	// 115        0x0t
	// 116        0x0t
	// 117        0x0t
	// 118        0x0t
	// 119        0x0t
	// 120        0x0t
	// 121        0x0t
	// 122        0x0t
	// 123        0x0t
	// 124        0x0t
	// 125        0x0t
	// 126        0x0t
	// 127        0x0t
	// 128        0x0t
	// 129        0x0t
	// 130        0x0t
	// 131        0x0t
	// 132        0x0t
	// 133        0x0t
	// 134        0x0t
	// 135        0x0t
	// 136        0x0t
	// 137        0x0t
	// 138        0x0t
	// 139        0x0t
	// 140        0x0t
	// 141        0x0t
	// 142        0x0t
	// 143        0x0t
	// 144        0x0t
	// 145        0x0t
	// 146        0x0t
	// 147        0x0t
	// 148        0x0t
	// 149        0x0t
	// 150        0x0t
	// 151        0x0t
	// 152        0x0t
	// 153        0x0t
	// 154        0x0t
	// 155        0x0t
	// 156        0x0t
	// 157        0x0t
	// 158        0x0t
	// 159        0x0t
	// 160        0x0t
	// 161        0x0t
	// 162        0x0t
	// 163        0x0t
	// 164        0x0t
	// 165        0x0t
	// 166        0x0t
	// 167        0x0t
	// 168        0x0t
	// 169        0x0t
	// 170        0x0t
	// 171        0x0t
	// 172        0x0t
	// 173        0x0t
	// 174        0x0t
	// 175        0x0t
	// 176        0x0t
	// 177        0x0t
	// 178        0x0t
	// 179        0x0t
	// 180        0x0t
	// 181        0x0t
	// 182        0x0t
	// 183        0x0t
	// 184        0x0t
	// 185        0x0t
	// 186        0x0t
	// 187        0x0t
	// 188        0x0t
	// 189        0x0t
	// 190        0x0t
	// 191        0x0t
	// 192        0x0t
	// 193        0x0t
	// 194        0x0t
	// 195        0x0t
	// 196        0x0t
	// 197        0x0t
	// 198        0x0t
	// 199        0x0t
	// 200        0x0t
	// 201        0x0t
	// 202        0x0t
	// 203        0x0t
	// 204        0x0t
	// 205        0x0t
	// 206        0x0t
	// 207        0x0t
	// 208        0x0t
	// 209        0x0t
	// 210        0x0t
	// 211        0x0t
	// 212        0x0t
	// 213        0x0t
	// 214        0x0t
	// 215        0x0t
	// 216        0x0t
	// 217        0x0t
	// 218        0x0t
	// 219        0x0t
	// 220        0x0t
	// 221        0x0t
	// 222        0x0t
	// 223        0x0t
	// 224        0x0t
	// 225        0x0t
	// 226        0x0t
	// 227        0x0t
	// 228        0x0t
	// 229        0x0t
	// 230        0x0t
	// 231        0x0t
	// 232        0x0t
	// 233        0x0t
	// 234        0x0t
	// 235        0x0t
	// 236        0x0t
	// 237        0x0t
	// 238        0x0t
	// 239        0x0t
	// 240        0x0t
	// 241        0x0t
	// 242        0x0t
	// 243        0x0t
	// 244        0x0t
	// 245        0x0t
	// 246        0x0t
	// 247        0x0t
	// 248        0x0t
	// 249        0x0t
	// 250        0x0t
	// 251        0x0t
	// 252        0x0t
	// 253        0x0t
	// 254        0x0t
	// 255        0x0t
	// 256        0x0t
	// 257        0x0t
	// 258        0x0t
	// 259        0x0t
	// 260        0x0t
	// 261        0x0t
	// 262        0x0t
	// 263        0x0t
	// 264        0x0t
	// 265        0x0t
	// 266        0x0t
	// 267        0x0t
	// 268        0x0t
	// 269        0x0t
	// 270        0x0t
	// 271        0x0t
	// 272        0x0t
	// 273        0x0t
	// 274        0x0t
	// 275        0x0t
	// 276        0x0t
	// 277        0x0t
	// 278        0x0t
	// 279        0x0t
	// 280        0x0t
	// 281        0x0t
	// 282        0x0t
	// 283        0x0t
	// 284        0x0t
	// 285        0x0t
	// 286        0x0t
	// 287        0x0t
	// 288        0x0t
	// 289        0x0t
	// 290        0x0t
	// 291        0x0t
	// 292        0x0t
	// 293        0x0t
	// 294        0x0t
	// 295        0x0t
	// 296        0x0t
	// 297        0x0t
	// 298        0x0t
	// 299        0x0t
	// 300        0x0t
	// 301        0x0t
	// 302        0x0t
	// 303        0x0t
	// 304        0x0t
	// 305        0x0t
	// 306        0x0t
	// 307        0x0t
	// 308        0x0t
	// 309        0x0t
	// 310        0x0t
	// 311        0x0t
	// 312        0x0t
	// 313        0x0t
	// 314    .end array-data
	// 316    .line 230
	// 317    :array_96
	// 318    .array-data 1
	// 319        0x0t
	// 320        0x0t
	// 321        0x0t
	// 322        0x0t
	// 323        0x0t
	// 324        0x0t
	// 325        0x0t
	// 326        0x0t
	// 327        0x0t
	// 328        0x0t
	// 329        0x0t
	// 330        0x0t
	// 331        0x0t
	// 332        0x0t
	// 333        0x0t
	// 334        0x0t
	// 335        0x0t
	// 336        0x0t
	// 337        0x0t
	// 338        0x0t
	// 339        0x0t
	// 340        0x0t
	// 341        0x0t
	// 342        0x0t
	// 343        0x0t
	// 344        0x0t
	// 345        0x0t
	// 346        0x0t
	// 347        0x0t
	// 348        0x0t
	// 349        0x0t
	// 350        0x0t
	// 351        0x0t
	// 352        0x0t
	// 353        0x0t
	// 354        0x0t
	// 355        0x0t
	// 356        0x0t
	// 357        0x0t
	// 358        0x0t
	// 359        0x0t
	// 360        0x0t
	// 361        0x0t
	// 362        0x0t
	// 363        0x0t
	// 364        0x0t
	// 365        0x0t
	// 366        0x0t
	// 367        0x0t
	// 368        0x0t
	// 369        0x0t
	// 370        0x0t
	// 371        0x0t
	// 372        0x0t
	// 373        0x0t
	// 374        0x0t
	// 375        0x0t
	// 376        0x0t
	// 377        0x0t
	// 378        0x0t
	// 379        0x0t
	// 380        0x0t
	// 381        0x0t
	// 382        0x0t
	// 383        0x0t
	// 384        0x0t
	// 385        0x0t
	// 386        0x0t
	// 387        0x0t
	// 388        0x0t
	// 389        0x0t
	// 390        0x0t
	// 391        0x0t
	// 392        0x0t
	// 393        0x0t
	// 394        0x0t
	// 395        0x0t
	// 396        0x0t
	// 397        0x0t
	// 398        0x0t
	// 399        0x0t
	// 400        0x0t
	// 401        0x0t
	// 402        0x0t
	// 403        0x0t
	// 404        0x0t
	// 405        0x0t
	// 406        0x0t
	// 407        0x0t
	// 408        0x0t
	// 409        0x0t
	// 410        0x0t
	// 411        0x0t
	// 412        0x0t
	// 413        0x0t
	// 414        0x0t
	// 415        0x0t
	// 416        0x0t
	// 417        0x0t
	// 418        0x0t
	// 419        0x0t
	// 420        0x0t
	// 421        0x0t
	// 422        0x0t
	// 423        0x0t
	// 424        0x0t
	// 425        0x0t
	// 426        0x0t
	// 427        0x0t
	// 428        0x0t
	// 429        0x0t
	// 430        0x0t
	// 431        0x0t
	// 432        0x0t
	// 433        0x0t
	// 434        0x0t
	// 435        0x0t
	// 436        0x0t
	// 437        0x0t
	// 438        0x0t
	// 439        0x0t
	// 440        0x0t
	// 441        0x0t
	// 442        0x0t
	// 443        0x0t
	// 444        0x0t
	// 445        0x0t
	// 446        0x0t
	// 447        0x0t
	// 448        0x0t
	// 449        0x0t
	// 450        0x0t
	// 451        0x0t
	// 452        0x0t
	// 453        0x0t
	// 454        0x0t
	// 455        0x0t
	// 456        0x0t
	// 457        0x0t
	// 458        0x0t
	// 459        0x0t
	// 460        0x0t
	// 461        0x0t
	// 462        0x0t
	// 463        0x0t
	// 464        0x0t
	// 465        0x0t
	// 466        0x0t
	// 467        0x0t
	// 468        0x0t
	// 469        0x0t
	// 470        0x0t
	// 471        0x0t
	// 472        0x0t
	// 473        0x0t
	// 474        0x0t
	// 475        0x0t
	// 476        0x0t
	// 477        0x0t
	// 478        0x0t
	// 479        0x0t
	// 480        0x0t
	// 481        0x0t
	// 482        0x0t
	// 483        0x0t
	// 484        0x0t
	// 485        0x0t
	// 486        0x0t
	// 487        0x0t
	// 488        0x0t
	// 489        0x0t
	// 490        0x0t
	// 491        0x0t
	// 492        0x0t
	// 493        0x0t
	// 494        0x0t
	// 495        0x0t
	// 496        0x0t
	// 497        0x0t
	// 498        0x0t
	// 499        0x0t
	// 500        0x0t
	// 501        0x0t
	// 502        0x0t
	// 503        0x0t
	// 504        0x0t
	// 505        0x0t
	// 506        0x0t
	// 507        0x0t
	// 508        0x0t
	// 509        0x0t
	// 510        0x0t
	// 511        0x0t
	// 512        0x0t
	// 513        0x0t
	// 514        0x0t
	// 515        0x0t
	// 516        0x0t
	// 517        0x0t
	// 518        0x0t
	// 519        0x0t
	// 520        0x0t
	// 521        0x0t
	// 522        0x0t
	// 523        0x0t
	// 524        0x0t
	// 525        0x0t
	// 526        0x0t
	// 527        0x0t
	// 528        0x0t
	// 529        0x0t
	// 530        0x0t
	// 531        0x0t
	// 532        0x0t
	// 533        0x0t
	// 534        0x0t
	// 535        0x0t
	// 536        0x0t
	// 537        0x0t
	// 538        0x0t
	// 539        0x0t
	// 540        0x0t
	// 541        0x0t
	// 542        0x0t
	// 543        0x1t
	// 544        0x1t
	// 545        0x1t
	// 546        0x1t
	// 547        0x1t
	// 548        0x1t
	// 549        0x1t
	// 550        0x1t
	// 551        0x1t
	// 552        0x1t
	// 553        0x1t
	// 554        0x1t
	// 555        0x1t
	// 556        0x1t
	// 557        0x1t
	// 558        0x1t
	// 559        0x1t
	// 560        0x1t
	// 561        0x1t
	// 562        0x0t
	// 563        0x0t
	// 564        0x0t
	// 565        0x0t
	// 566        0x0t
	// 567        0x0t
	// 568        0x0t
	// 569        0x0t
	// 570        0x0t
	// 571        0x0t
	// 572        0x0t
	// 573        0x0t
	// 574        0x0t
	// 575    .end array-data

}
// .method public constructor <init>()V
android::icu::text::UnicodeCompressor::UnicodeCompressor()
{
	
	int cVar0;
	int cVar1;
	
	cVar0 = 0x8;
	cVar1 = 0x0;
	// 587    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fCurrentWindow = cVar1;
	this->fOffsets = std::make_shared<std::vector<int[]>>(cVar0);
	this->fMode = cVar1;
	this->fIndexCount = std::make_shared<std::vector<int[]>>(0x100);
	this->fTimeStamps = std::make_shared<std::vector<int[]>>(cVar0);
	this->fTimeStamp = cVar1;
	this->reset();
	return;

}
// .method public static compress(Ljava/lang/String;)[B
unsigned char android::icu::text::UnicodeCompressor::compress(std::shared_ptr<java::lang::String> buffer)
{
	
	//    .param p0, "buffer"    # Ljava/lang/String;
	return android::icu::text::UnicodeCompressor::compress(buffer->toCharArray(), 0x0, buffer->length());

}
// .method public static compress([CII)[B
unsigned char android::icu::text::UnicodeCompressor::compress(std::shared_ptr<char[]> buffer,int start,int limit)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::UnicodeCompressor> comp;
	int len;
	std::shared<std::vector<unsigned char[]>> temp;
	int byteCount;
	std::shared<std::vector<unsigned char[]>> result;
	
	//    .param p0, "buffer"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	cVar0 = 0x0;
	comp = std::make_shared<android::icu::text::UnicodeCompressor>();
	//    .local v0, "comp":Landroid/icu/text/UnicodeCompressor;
	len = java::lang::Math::max(0x4, ( ( (limit - start) * 0x3) + 0x1));
	//    .local v7, "len":I
	temp = std::make_shared<std::vector<unsigned char[]>>(len);
	//    .local v5, "temp":[B
	byteCount = comp->compress(buffer, start, limit, 0x0, temp, cVar0, len);
	//    .local v8, "byteCount":I
	result = std::make_shared<std::vector<unsigned char[]>>(byteCount);
	//    .local v9, "result":[B
	java::lang::System::arraycopy(temp, cVar0, result, cVar0, byteCount);
	return result;

}
// .method private findDynamicWindow(I)I
int android::icu::text::UnicodeCompressor::findDynamicWindow(int c)
{
	
	int i;
	std::shared_ptr<int[]> cVar0;
	
	//    .param p1, "c"    # I
	i = 0x7;
	//    .local v0, "i":I
label_goto_1:
	if ( i < 0 ) 
		goto label_cond_15;
	if ( !(this->inDynamicWindow(c, i)) )  
		goto label_cond_12;
	cVar0 = this->fTimeStamps;
	cVar0[i] = ( cVar0[i] + 0x1);
	return i;
	// 734    .line 952
label_cond_12:
	i = ( i + -0x1);
	goto label_goto_1;
	// 740    .line 959
label_cond_15:
	return -0x1;

}
// .method private static findStaticWindow(I)I
int android::icu::text::UnicodeCompressor::findStaticWindow(int c)
{
	
	int i;
	
	//    .param p0, "c"    # I
	i = 0x7;
	//    .local v0, "i":I
label_goto_1:
	if ( i < 0 ) 
		goto label_cond_d;
	if ( !(android::icu::text::UnicodeCompressor::inStaticWindow(c, i)) )  
		goto label_cond_a;
	return i;
	// 769    .line 972
label_cond_a:
	i = ( i + -0x1);
	goto label_goto_1;
	// 775    .line 978
label_cond_d:
	return -0x1;

}
// .method private getLRDefinedWindow()I
int android::icu::text::UnicodeCompressor::getLRDefinedWindow()
{
	
	int leastRU;
	int i;
	
	leastRU = 0x7fffffff;
	//    .local v1, "leastRU":I
	//    .local v2, "whichWindow":I
	i = 0x7;
	//    .local v0, "i":I
label_goto_5:
	if ( i < 0 ) 
		goto label_cond_15;
	if ( this->fTimeStamps[i] >= leastRU )
		goto label_cond_12;
	leastRU = this->fTimeStamps[i];
	i;
label_cond_12:
	i = ( i + -0x1);
	goto label_goto_5;
	// 822    .line 1001
label_cond_15:
	return -0x1;

}
// .method private inDynamicWindow(II)Z
bool android::icu::text::UnicodeCompressor::inDynamicWindow(int c,int whichWindow)
{
	
	bool cVar1;
	
	//    .param p1, "c"    # I
	//    .param p2, "whichWindow"    # I
	cVar1 = 0x0;
	if ( c <  this->fOffsets[whichWindow] )
		goto label_cond_10;
	if ( c >= ( this->fOffsets[whichWindow] + 0x80) )
		goto label_cond_10;
	cVar1 = 0x1;
label_cond_10:
	return cVar1;

}
// .method private static inStaticWindow(II)Z
bool android::icu::text::UnicodeCompressor::inStaticWindow(int c,int whichWindow)
{
	
	bool cVar1;
	
	//    .param p0, "c"    # I
	//    .param p1, "whichWindow"    # I
	cVar1 = 0x0;
	if ( c <  android::icu::text::UnicodeCompressor::sOffsets[whichWindow] )
		goto label_cond_10;
	if ( c >= ( android::icu::text::UnicodeCompressor::sOffsets[whichWindow] + 0x80) )
		goto label_cond_10;
	cVar1 = 0x1;
label_cond_10:
	return cVar1;

}
// .method private static isCompressible(I)Z
bool android::icu::text::UnicodeCompressor::isCompressible(int c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # I
	cVar0 = 0x1;
	if ( c <  0x3400 )
		goto label_cond_a;
	if ( c <  0xe000 )
		goto label_cond_b;
label_cond_a:
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method private static makeIndex(I)I
int android::icu::text::UnicodeCompressor::makeIndex(int c)
{
	
	int cVar0;
	
	//    .param p0, "c"    # I
	cVar0 = 0x30a0;
	if ( c <  0xc0 )
		goto label_cond_d;
	if ( c >= 0x140 )
		goto label_cond_d;
	return 0xf9;
	// 936    .line 867
label_cond_d:
	if ( c <  0x250 )
		goto label_cond_18;
	if ( c >= 0x2d0 )
		goto label_cond_18;
	return 0xfa;
	// 951    .line 869
label_cond_18:
	if ( c <  0x370 )
		goto label_cond_23;
	if ( c >= 0x3f0 )
		goto label_cond_23;
	return 0xfb;
	// 966    .line 871
label_cond_23:
	if ( c <  0x530 )
		goto label_cond_2e;
	if ( c >= 0x590 )
		goto label_cond_2e;
	return 0xfc;
	// 981    .line 873
label_cond_2e:
	if ( c <  0x3040 )
		goto label_cond_37;
	if ( c >= cVar0 )
		goto label_cond_37;
	return 0xfd;
	// 994    .line 875
label_cond_37:
	if ( c <  cVar0 )
		goto label_cond_40;
	if ( c >= 0x3120 )
		goto label_cond_40;
	return 0xfe;
	// 1007    .line 877
label_cond_40:
	if ( c <  0xff60 )
		goto label_cond_4d;
	if ( c >= 0xff9f )
		goto label_cond_4d;
	return 0xff;
	// 1022    .line 881
label_cond_4d:
	if ( c <  0x80 )
		goto label_cond_5a;
	if ( c >= 0x3400 )
		goto label_cond_5a;
	return ( ( c / 0x80) & 0xff);
	// 1039    .line 883
label_cond_5a:
	if ( c <  0xe000 )
		goto label_cond_6e;
	if ( c >  0xffff )
		goto label_cond_6e;
	return ( ( (c - 0xac00) / 0x80) & 0xff);
	// 1060    .line 888
label_cond_6e:
	return 0x0;

}
// .method public compress([CII[I[BII)I
int android::icu::text::UnicodeCompressor::compress(std::shared_ptr<char[]> charBuffer,int charBufferStart,int charBufferLimit,std::shared_ptr<int[]> charsRead,std::shared_ptr<unsigned char[]> byteBuffer,int byteBufferStart,int byteBufferLimit)
{
	
	int bytePos;
	int ucPos;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int curUC;
	int nextUC;
	int loByte;
	int hiByte;
	int whichWindow;
	int cVar1;
	int curIndex;
	std::shared_ptr<int[]> cVar2;
	int cVar3;
	int cVar4;
	int cVar5;
	std::shared_ptr<int[]> cVar6;
	int cVar7;
	
	//    .param p1, "charBuffer"    # [C
	//    .param p2, "charBufferStart"    # I
	//    .param p3, "charBufferLimit"    # I
	//    .param p4, "charsRead"    # [I
	//    .param p5, "byteBuffer"    # [B
	//    .param p6, "byteBufferStart"    # I
	//    .param p7, "byteBufferLimit"    # I
	bytePos = byteBufferStart;
	//    .local v1, "bytePos":I
	ucPos = charBufferStart;
	//    .local v9, "ucPos":I
	-0x1;
	//    .local v4, "curUC":I
	-0x1;
	//    .local v3, "curIndex":I
	-0x1;
	//    .local v8, "nextUC":I
	-0x1;
	//    .local v5, "forwardUC":I
	0x0;
	//    .local v11, "whichWindow":I
	0x0;
	//    .local v6, "hiByte":I
	0x0;
	//    .local v7, "loByte":I
	if ( byteBuffer->size() <  0x4 )
		goto label_cond_16;
	if ( (byteBufferLimit - byteBufferStart) >= 0x4 )
		goto label_cond_1f;
label_cond_16:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("byteBuffer.length < 4")));
	// throw
	throw cVar0;
	// 1141    .line 392
label_cond_1f:
label_goto_1f:
	if ( ucPos >= charBufferLimit )
		goto label_cond_56;
	if ( bytePos >= byteBufferLimit )
		goto label_cond_56;
	// switch
	{
	auto item = ( this->fMode );
	if (item == 0) goto label_pswitch_2d;
	if (item == 1) goto label_pswitch_221;
	}
	goto label_goto_1f;
label_pswitch_2d:
	ucPos = ucPos;
	//    .end local v9    # "ucPos":I
	//    .local v10, "ucPos":I
	bytePos = bytePos;
	//    .end local v1    # "bytePos":I
	//    .local v2, "bytePos":I
label_goto_2f:
	if ( ucPos >= charBufferLimit )
		goto label_cond_60;
	if ( bytePos >= byteBufferLimit )
		goto label_cond_60;
	ucPos = ( ucPos + 0x1);
	//    .end local v10    # "ucPos":I
	//    .restart local v9    # "ucPos":I
	curUC = charBuffer[ucPos];
	if ( ucPos >= charBufferLimit )
		goto label_cond_63;
	nextUC = charBuffer[ucPos];
label_goto_41:
	if ( curUC >= 0x80 )
		goto label_cond_73;
	loByte = ( curUC & 0xff);
	if ( !(android::icu::text::UnicodeCompressor::sSingleTagTable[loByte]) )  
		goto label_cond_3c9;
	if ( ( bytePos + 0x1) <  byteBufferLimit )
		goto label_cond_65;
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
label_cond_56:
label_goto_56:
	if ( !(charsRead) )  
		goto label_cond_5d;
	charsRead[0x0] = (( ucPos + -0x1) - charBufferStart);
label_cond_5d:
	return (bytePos - byteBufferStart);
	// 1241    .end local v1    # "bytePos":I
	// 1242    .end local v9    # "ucPos":I
	// 1243    .restart local v2    # "bytePos":I
	// 1244    .restart local v10    # "ucPos":I
label_cond_60:
	ucPos = ucPos;
	//    .end local v10    # "ucPos":I
	//    .restart local v9    # "ucPos":I
	bytePos = bytePos;
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_1f;
	// 1257    .line 405
	// 1258    .end local v1    # "bytePos":I
	// 1259    .restart local v2    # "bytePos":I
label_cond_63:
	-0x1;
	goto label_goto_41;
	// 1265    .line 424
label_cond_65:
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = 0x1;
label_goto_6a:
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(loByte);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
label_goto_70:
	ucPos = ucPos;
	//    .end local v9    # "ucPos":I
	//    .restart local v10    # "ucPos":I
	bytePos = bytePos;
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	goto label_goto_2f;
	// 1300    .line 433
	// 1301    .end local v10    # "ucPos":I
	// 1302    .restart local v9    # "ucPos":I
label_cond_73:
	if ( !(this->inDynamicWindow(curUC, this->fCurrentWindow)) )  
		goto label_cond_8b;
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( (curUC - this->fOffsets[this->fCurrentWindow]) + 0x80));
	goto label_goto_70;
	// 1335    .line 441
	// 1336    .end local v1    # "bytePos":I
	// 1337    .restart local v2    # "bytePos":I
label_cond_8b:
	if ( android::icu::text::UnicodeCompressor::isCompressible(curUC) )     
		goto label_cond_e9;
	if ( nextUC == -0x1 )
		goto label_cond_b9;
	if ( !(android::icu::text::UnicodeCompressor::isCompressible(nextUC)) )  
		goto label_cond_b9;
	if ( ( bytePos + 0x2) <  byteBufferLimit )
		goto label_cond_a4;
	( ucPos + -0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_56;
	// 1372    .line 451
	// 1373    .end local v1    # "bytePos":I
	// 1374    .restart local v2    # "bytePos":I
label_cond_a4:
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = 0xe;
	bytePos = ( bytePos + 0x1);
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(_ushri(curUC,0x8));
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( curUC & 0xff));
	goto label_goto_70;
	// 1408    .line 459
	// 1409    .end local v1    # "bytePos":I
	// 1410    .restart local v2    # "bytePos":I
label_cond_b9:
	if ( ( bytePos + 0x3) <  byteBufferLimit )
		goto label_cond_c3;
	( ucPos + -0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_56;
	// 1427    .line 462
	// 1428    .end local v1    # "bytePos":I
	// 1429    .restart local v2    # "bytePos":I
label_cond_c3:
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = 0xf;
	hiByte = _ushri(curUC,0x8);
	if ( !(android::icu::text::UnicodeCompressor::sUnicodeTagTable[hiByte]) )  
		goto label_cond_da;
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = -0x10;
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
label_cond_da:
	bytePos = ( bytePos + 0x1);
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(hiByte);
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( curUC & 0xff));
	this->fMode = 0x1;
	goto label_goto_1f;
	// 1491    .line 482
	// 1492    .end local v1    # "bytePos":I
	// 1493    .restart local v2    # "bytePos":I
label_cond_e9:
	whichWindow = this->findDynamicWindow(curUC);
	if ( whichWindow == -0x1 )
		goto label_cond_158;
	if ( ( ucPos + 0x1) >= charBufferLimit )
		goto label_cond_111;
label_goto_fa:
	if ( !(this->inDynamicWindow(nextUC, whichWindow)) )  
		goto label_cond_136;
	if ( !(this->inDynamicWindow(charBuffer[( ucPos + 0x1)], whichWindow)) )  
		goto label_cond_136;
	if ( ( bytePos + 0x1) <  byteBufferLimit )
		goto label_cond_113;
	( ucPos + -0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_56;
	// 1549    .line 488
	// 1550    .end local v1    # "bytePos":I
	// 1551    .restart local v2    # "bytePos":I
label_cond_111:
	-0x1;
	goto label_goto_fa;
	// 1557    .line 501
label_cond_113:
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( whichWindow + 0x10));
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( (curUC - this->fOffsets[whichWindow]) + 0x80));
	cVar1 = ( this->fTimeStamp + 0x1);
	this->fTimeStamp = cVar1;
	this->fTimeStamps[whichWindow] = cVar1;
	this->fCurrentWindow = whichWindow;
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_70;
	// 1608    .line 515
	// 1609    .end local v1    # "bytePos":I
	// 1610    .restart local v2    # "bytePos":I
label_cond_136:
	if ( ( bytePos + 0x1) <  byteBufferLimit )
		goto label_cond_141;
	( ucPos + -0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_56;
	// 1627    .line 518
	// 1628    .end local v1    # "bytePos":I
	// 1629    .restart local v2    # "bytePos":I
label_cond_141:
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( whichWindow + 0x1));
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( (curUC - this->fOffsets[whichWindow]) + 0x80));
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_70;
	// 1666    .line 529
	// 1667    .end local v1    # "bytePos":I
	// 1668    .restart local v2    # "bytePos":I
label_cond_158:
	whichWindow = android::icu::text::UnicodeCompressor::findStaticWindow(curUC);
	if ( whichWindow == -0x1 )
		goto label_cond_187;
	if ( !(( android::icu::text::UnicodeCompressor::inStaticWindow(nextUC, whichWindow) ^ 0x1)) )  
		goto label_cond_187;
	if ( ( bytePos + 0x1) <  byteBufferLimit )
		goto label_cond_172;
	( ucPos + -0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_56;
	// 1706    .line 538
	// 1707    .end local v1    # "bytePos":I
	// 1708    .restart local v2    # "bytePos":I
label_cond_172:
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( whichWindow + 0x1));
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)((curUC - android::icu::text::UnicodeCompressor::sOffsets[whichWindow]));
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_70;
	// 1743    .line 547
	// 1744    .end local v1    # "bytePos":I
	// 1745    .restart local v2    # "bytePos":I
label_cond_187:
	curIndex = android::icu::text::UnicodeCompressor::makeIndex(curUC);
	cVar2 = this->fIndexCount;
	cVar2[curIndex] = ( cVar2[curIndex] + 0x1);
	if ( ( ucPos + 0x1) >= charBufferLimit )
		goto label_cond_1bb;
label_goto_19d:
	if ( this->fIndexCount[curIndex] >  0x1 )
		goto label_cond_1b0;
	if ( curIndex != android::icu::text::UnicodeCompressor::makeIndex(nextUC) )
		goto label_cond_1f0;
	if ( curIndex != android::icu::text::UnicodeCompressor::makeIndex(charBuffer[( ucPos + 0x1)]) )
		goto label_cond_1f0;
label_cond_1b0:
	if ( ( bytePos + 0x2) <  byteBufferLimit )
		goto label_cond_1bd;
	( ucPos + -0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_56;
	// 1813    .line 554
	// 1814    .end local v1    # "bytePos":I
	// 1815    .restart local v2    # "bytePos":I
label_cond_1bb:
	-0x1;
	goto label_goto_19d;
	// 1821    .line 572
label_cond_1bd:
	whichWindow = this->getLRDefinedWindow();
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( whichWindow + 0x18));
	bytePos = ( bytePos + 0x1);
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(curIndex);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( (curUC - android::icu::text::UnicodeCompressor::sOffsetTable[curIndex]) + 0x80));
	this->fOffsets[whichWindow] = android::icu::text::UnicodeCompressor::sOffsetTable[curIndex];
	this->fCurrentWindow = whichWindow;
	cVar3 = ( this->fTimeStamp + 0x1);
	this->fTimeStamp = cVar3;
	this->fTimeStamps[whichWindow] = cVar3;
	goto label_goto_70;
	// 1891    .line 595
	// 1892    .end local v1    # "bytePos":I
	// 1893    .restart local v2    # "bytePos":I
label_cond_1f0:
	if ( ( bytePos + 0x3) <  byteBufferLimit )
		goto label_cond_1fb;
	( ucPos + -0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_56;
	// 1910    .line 598
	// 1911    .end local v1    # "bytePos":I
	// 1912    .restart local v2    # "bytePos":I
label_cond_1fb:
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = 0xf;
	hiByte = _ushri(curUC,0x8);
	if ( !(android::icu::text::UnicodeCompressor::sUnicodeTagTable[hiByte]) )  
		goto label_cond_212;
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = -0x10;
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
label_cond_212:
	bytePos = ( bytePos + 0x1);
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(hiByte);
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( curUC & 0xff));
	this->fMode = 0x1;
	goto label_goto_1f;
label_pswitch_221:
	ucPos = ucPos;
	//    .end local v9    # "ucPos":I
	//    .restart local v10    # "ucPos":I
	bytePos = bytePos;
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
label_goto_223:
	if ( ucPos >= charBufferLimit )
		goto label_cond_251;
	if ( bytePos >= byteBufferLimit )
		goto label_cond_251;
	ucPos = ( ucPos + 0x1);
	//    .end local v10    # "ucPos":I
	//    .restart local v9    # "ucPos":I
	curUC = charBuffer[ucPos];
	if ( ucPos >= charBufferLimit )
		goto label_cond_255;
	nextUC = charBuffer[ucPos];
label_goto_235:
	if ( !(android::icu::text::UnicodeCompressor::isCompressible(curUC)) )  
		goto label_cond_246;
	if ( nextUC == -0x1 )
		goto label_cond_274;
	if ( !(( android::icu::text::UnicodeCompressor::isCompressible(nextUC) ^ 0x1)) )  
		goto label_cond_274;
label_cond_246:
	if ( ( bytePos + 0x2) <  byteBufferLimit )
		goto label_cond_257;
	( ucPos + -0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_56;
	// 2047    .end local v1    # "bytePos":I
	// 2048    .end local v9    # "ucPos":I
	// 2049    .restart local v2    # "bytePos":I
	// 2050    .restart local v10    # "ucPos":I
label_cond_251:
	ucPos = ucPos;
	//    .end local v10    # "ucPos":I
	//    .restart local v9    # "ucPos":I
	bytePos = bytePos;
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_1f;
	// 2063    .line 628
	// 2064    .end local v1    # "bytePos":I
	// 2065    .restart local v2    # "bytePos":I
label_cond_255:
	-0x1;
	goto label_goto_235;
	// 2071    .line 639
label_cond_257:
	hiByte = _ushri(curUC,0x8);
	if ( !(android::icu::text::UnicodeCompressor::sUnicodeTagTable[hiByte]) )  
		goto label_cond_3c6;
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = -0x10;
label_goto_267:
	bytePos = ( bytePos + 0x1);
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(hiByte);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( curUC & 0xff));
label_goto_271:
	ucPos = ucPos;
	//    .end local v9    # "ucPos":I
	//    .restart local v10    # "ucPos":I
	bytePos = bytePos;
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	goto label_goto_223;
	// 2124    .line 652
	// 2125    .end local v10    # "ucPos":I
	// 2126    .restart local v9    # "ucPos":I
label_cond_274:
	if ( curUC >= 0x80 )
		goto label_cond_2c9;
	loByte = ( curUC & 0xff);
	if ( nextUC == -0x1 )
		goto label_cond_2b2;
	if ( nextUC >= 0x80 )
		goto label_cond_2b2;
	if ( !(( android::icu::text::UnicodeCompressor::sSingleTagTable[loByte] ^ 0x1)) )  
		goto label_cond_2b2;
	if ( ( bytePos + 0x1) <  byteBufferLimit )
		goto label_cond_294;
	( ucPos + -0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_56;
	// 2170    .line 667
	// 2171    .end local v1    # "bytePos":I
	// 2172    .restart local v2    # "bytePos":I
label_cond_294:
	whichWindow = this->fCurrentWindow;
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( whichWindow + 0xe0));
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(loByte);
	cVar4 = ( this->fTimeStamp + 0x1);
	this->fTimeStamp = cVar4;
	this->fTimeStamps[whichWindow] = cVar4;
	this->fMode = 0x0;
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_1f;
	// 2219    .line 684
	// 2220    .end local v1    # "bytePos":I
	// 2221    .restart local v2    # "bytePos":I
label_cond_2b2:
	if ( ( bytePos + 0x1) <  byteBufferLimit )
		goto label_cond_2bd;
	( ucPos + -0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_56;
	// 2238    .line 690
	// 2239    .end local v1    # "bytePos":I
	// 2240    .restart local v2    # "bytePos":I
label_cond_2bd:
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = 0x0;
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(loByte);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_271;
	// 2265    .line 696
	// 2266    .end local v1    # "bytePos":I
	// 2267    .restart local v2    # "bytePos":I
label_cond_2c9:
	whichWindow = this->findDynamicWindow(curUC);
	if ( whichWindow == -0x1 )
		goto label_cond_32e;
	if ( !(this->inDynamicWindow(nextUC, whichWindow)) )  
		goto label_cond_307;
	if ( ( bytePos + 0x1) <  byteBufferLimit )
		goto label_cond_2e1;
	( ucPos + -0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_56;
	// 2302    .line 708
	// 2303    .end local v1    # "bytePos":I
	// 2304    .restart local v2    # "bytePos":I
label_cond_2e1:
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( whichWindow + 0xe0));
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( (curUC - this->fOffsets[whichWindow]) + 0x80));
	cVar5 = ( this->fTimeStamp + 0x1);
	this->fTimeStamp = cVar5;
	this->fTimeStamps[whichWindow] = cVar5;
	this->fCurrentWindow = whichWindow;
	this->fMode = 0x0;
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_1f;
	// 2361    .line 725
	// 2362    .end local v1    # "bytePos":I
	// 2363    .restart local v2    # "bytePos":I
label_cond_307:
	if ( ( bytePos + 0x2) <  byteBufferLimit )
		goto label_cond_312;
	( ucPos + -0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_56;
	// 2380    .line 728
	// 2381    .end local v1    # "bytePos":I
	// 2382    .restart local v2    # "bytePos":I
label_cond_312:
	hiByte = _ushri(curUC,0x8);
	if ( !(android::icu::text::UnicodeCompressor::sUnicodeTagTable[hiByte]) )  
		goto label_cond_3c3;
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = -0x10;
label_goto_322:
	bytePos = ( bytePos + 0x1);
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(hiByte);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( curUC & 0xff));
	goto label_goto_271;
	// 2426    .line 743
	// 2427    .end local v1    # "bytePos":I
	// 2428    .restart local v2    # "bytePos":I
label_cond_32e:
	curIndex = android::icu::text::UnicodeCompressor::makeIndex(curUC);
	cVar6 = this->fIndexCount;
	cVar6[curIndex] = ( cVar6[curIndex] + 0x1);
	if ( ( ucPos + 0x1) >= charBufferLimit )
		goto label_cond_362;
label_goto_344:
	if ( this->fIndexCount[curIndex] >  0x1 )
		goto label_cond_357;
	if ( curIndex != android::icu::text::UnicodeCompressor::makeIndex(nextUC) )
		goto label_cond_39a;
	if ( curIndex != android::icu::text::UnicodeCompressor::makeIndex(charBuffer[( ucPos + 0x1)]) )
		goto label_cond_39a;
label_cond_357:
	if ( ( bytePos + 0x2) <  byteBufferLimit )
		goto label_cond_364;
	( ucPos + -0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_56;
	// 2496    .line 750
	// 2497    .end local v1    # "bytePos":I
	// 2498    .restart local v2    # "bytePos":I
label_cond_362:
	-0x1;
	goto label_goto_344;
	// 2504    .line 770
label_cond_364:
	whichWindow = this->getLRDefinedWindow();
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( whichWindow + 0xe8));
	bytePos = ( bytePos + 0x1);
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(curIndex);
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( (curUC - android::icu::text::UnicodeCompressor::sOffsetTable[curIndex]) + 0x80));
	this->fOffsets[whichWindow] = android::icu::text::UnicodeCompressor::sOffsetTable[curIndex];
	this->fCurrentWindow = whichWindow;
	cVar7 = ( this->fTimeStamp + 0x1);
	this->fTimeStamp = cVar7;
	this->fTimeStamps[whichWindow] = cVar7;
	this->fMode = 0x0;
	goto label_goto_1f;
	// 2579    .line 792
	// 2580    .end local v1    # "bytePos":I
	// 2581    .restart local v2    # "bytePos":I
label_cond_39a:
	if ( ( bytePos + 0x2) <  byteBufferLimit )
		goto label_cond_3a5;
	( ucPos + -0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_56;
	// 2598    .line 795
	// 2599    .end local v1    # "bytePos":I
	// 2600    .restart local v2    # "bytePos":I
label_cond_3a5:
	hiByte = _ushri(curUC,0x8);
	if ( !(android::icu::text::UnicodeCompressor::sUnicodeTagTable[hiByte]) )  
		goto label_cond_3c1;
	bytePos = ( bytePos + 0x1);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = -0x10;
label_goto_3b5:
	bytePos = ( bytePos + 0x1);
	//    .end local v1    # "bytePos":I
	//    .restart local v2    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(hiByte);
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	byteBuffer[bytePos] = (unsigned char)(( curUC & 0xff));
	goto label_goto_271;
	// 2644    .end local v1    # "bytePos":I
	// 2645    .restart local v2    # "bytePos":I
label_cond_3c1:
	bytePos = bytePos;
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_3b5;
	// 2653    .end local v1    # "bytePos":I
	// 2654    .restart local v2    # "bytePos":I
label_cond_3c3:
	bytePos = bytePos;
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_322;
	// 2662    .end local v1    # "bytePos":I
	// 2663    .restart local v2    # "bytePos":I
label_cond_3c6:
	bytePos = bytePos;
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_267;
	// 2671    .end local v1    # "bytePos":I
	// 2672    .restart local v2    # "bytePos":I
label_cond_3c9:
	bytePos = bytePos;
	//    .end local v2    # "bytePos":I
	//    .restart local v1    # "bytePos":I
	goto label_goto_6a;
	// 2680    .line 393
	// 2681    :pswitch_data_3cc
	// 2682    .packed-switch 0x0
	// 2683        :pswitch_2d
	// 2684        :pswitch_221
	// 2685    .end packed-switch

}
// .method public reset()V
void android::icu::text::UnicodeCompressor::reset()
{
	
	int cVar0;
	int i;
	
	cVar0 = 0x0;
	this->fOffsets[cVar0] = 0x80;
	this->fOffsets[0x1] = 0xc0;
	this->fOffsets[0x2] = 0x400;
	this->fOffsets[0x3] = 0x600;
	this->fOffsets[0x4] = 0x900;
	this->fOffsets[0x5] = 0x3040;
	this->fOffsets[0x6] = 0x30a0;
	this->fOffsets[0x7] = 0xff00;
	i = 0x0;
	//    .local v0, "i":I
label_goto_3a:
	if ( i >= 0x8 )
		goto label_cond_45;
	this->fTimeStamps[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_3a;
	// 2783    .line 842
label_cond_45:
	i = 0x0;
label_goto_46:
	if ( i >  0xff )
		goto label_cond_51;
	this->fIndexCount[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_46;
	// 2802    .line 846
label_cond_51:
	this->fTimeStamp = cVar0;
	this->fCurrentWindow = cVar0;
	this->fMode = cVar0;
	return;

}


