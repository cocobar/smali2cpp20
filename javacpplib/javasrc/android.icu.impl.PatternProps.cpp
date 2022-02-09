// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\PatternProps.smali
#include "java2ctype.h"
#include "android.icu.impl.PatternProps.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"

static android::icu::impl::PatternProps::index2000;
static android::icu::impl::PatternProps::latin1;
static android::icu::impl::PatternProps::syntax2000;
static android::icu::impl::PatternProps::syntaxOrWhiteSpace2000;
// .method static constructor <clinit>()V
void android::icu::impl::PatternProps::static_cinit()
{
	
	int cVar0;
	std::shared<std::vector<unsigned char[]>> cVar1;
	std::shared<std::vector<unsigned char[]>> cVar2;
	std::shared<std::vector<int[]>> cVar3;
	std::shared<std::vector<int[]>> cVar4;
	
	cVar0 = 0xa;
	cVar1 = std::make_shared<std::vector<unsigned char[]>>(0x100);
	?;
	android::icu::impl::PatternProps::latin1 = cVar1;
	cVar2 = std::make_shared<std::vector<unsigned char[]>>(0x82);
	?;
	android::icu::impl::PatternProps::index2000 = cVar2;
	cVar3 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	android::icu::impl::PatternProps::syntax2000 = cVar3;
	cVar4 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	android::icu::impl::PatternProps::syntaxOrWhiteSpace2000 = cVar4;
	return;
	// 058    .line 180
	// 059    nop
	// 061    :array_24
	// 062    .array-data 1
	// 063        0x0t
	// 064        0x0t
	// 065        0x0t
	// 066        0x0t
	// 067        0x0t
	// 068        0x0t
	// 069        0x0t
	// 070        0x0t
	// 071        0x0t
	// 072        0x5t
	// 073        0x5t
	// 074        0x5t
	// 075        0x5t
	// 076        0x5t
	// 077        0x0t
	// 078        0x0t
	// 079        0x0t
	// 080        0x0t
	// 081        0x0t
	// 082        0x0t
	// 083        0x0t
	// 084        0x0t
	// 085        0x0t
	// 086        0x0t
	// 087        0x0t
	// 088        0x0t
	// 089        0x0t
	// 090        0x0t
	// 091        0x0t
	// 092        0x0t
	// 093        0x0t
	// 094        0x0t
	// 095        0x5t
	// 096        0x3t
	// 097        0x3t
	// 098        0x3t
	// 099        0x3t
	// 100        0x3t
	// 101        0x3t
	// 102        0x3t
	// 103        0x3t
	// 104        0x3t
	// 105        0x3t
	// 106        0x3t
	// 107        0x3t
	// 108        0x3t
	// 109        0x3t
	// 110        0x3t
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
	// 121        0x3t
	// 122        0x3t
	// 123        0x3t
	// 124        0x3t
	// 125        0x3t
	// 126        0x3t
	// 127        0x3t
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
	// 154        0x3t
	// 155        0x3t
	// 156        0x3t
	// 157        0x3t
	// 158        0x0t
	// 159        0x3t
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
	// 186        0x3t
	// 187        0x3t
	// 188        0x3t
	// 189        0x3t
	// 190        0x0t
	// 191        0x0t
	// 192        0x0t
	// 193        0x0t
	// 194        0x0t
	// 195        0x0t
	// 196        0x5t
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
	// 224        0x3t
	// 225        0x3t
	// 226        0x3t
	// 227        0x3t
	// 228        0x3t
	// 229        0x3t
	// 230        0x3t
	// 231        0x0t
	// 232        0x3t
	// 233        0x0t
	// 234        0x3t
	// 235        0x3t
	// 236        0x0t
	// 237        0x3t
	// 238        0x0t
	// 239        0x3t
	// 240        0x3t
	// 241        0x0t
	// 242        0x0t
	// 243        0x0t
	// 244        0x0t
	// 245        0x3t
	// 246        0x0t
	// 247        0x0t
	// 248        0x0t
	// 249        0x0t
	// 250        0x3t
	// 251        0x0t
	// 252        0x0t
	// 253        0x0t
	// 254        0x3t
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
	// 278        0x3t
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
	// 310        0x3t
	// 311        0x0t
	// 312        0x0t
	// 313        0x0t
	// 314        0x0t
	// 315        0x0t
	// 316        0x0t
	// 317        0x0t
	// 318        0x0t
	// 319    .end array-data
	// 321    .line 215
	// 322    :array_a8
	// 323    .array-data 1
	// 324        0x2t
	// 325        0x3t
	// 326        0x4t
	// 327        0x0t
	// 328        0x0t
	// 329        0x0t
	// 330        0x0t
	// 331        0x0t
	// 332        0x0t
	// 333        0x0t
	// 334        0x0t
	// 335        0x0t
	// 336        0x5t
	// 337        0x1t
	// 338        0x1t
	// 339        0x1t
	// 340        0x1t
	// 341        0x1t
	// 342        0x1t
	// 343        0x1t
	// 344        0x1t
	// 345        0x1t
	// 346        0x1t
	// 347        0x1t
	// 348        0x1t
	// 349        0x1t
	// 350        0x1t
	// 351        0x1t
	// 352        0x1t
	// 353        0x1t
	// 354        0x1t
	// 355        0x1t
	// 356        0x1t
	// 357        0x1t
	// 358        0x1t
	// 359        0x0t
	// 360        0x0t
	// 361        0x0t
	// 362        0x0t
	// 363        0x0t
	// 364        0x1t
	// 365        0x1t
	// 366        0x1t
	// 367        0x1t
	// 368        0x1t
	// 369        0x1t
	// 370        0x1t
	// 371        0x1t
	// 372        0x1t
	// 373        0x1t
	// 374        0x1t
	// 375        0x1t
	// 376        0x1t
	// 377        0x1t
	// 378        0x1t
	// 379        0x1t
	// 380        0x1t
	// 381        0x1t
	// 382        0x1t
	// 383        0x6t
	// 384        0x7t
	// 385        0x1t
	// 386        0x1t
	// 387        0x1t
	// 388        0x1t
	// 389        0x1t
	// 390        0x1t
	// 391        0x1t
	// 392        0x1t
	// 393        0x1t
	// 394        0x1t
	// 395        0x1t
	// 396        0x1t
	// 397        0x1t
	// 398        0x1t
	// 399        0x1t
	// 400        0x1t
	// 401        0x1t
	// 402        0x1t
	// 403        0x1t
	// 404        0x1t
	// 405        0x1t
	// 406        0x1t
	// 407        0x1t
	// 408        0x1t
	// 409        0x1t
	// 410        0x1t
	// 411        0x1t
	// 412        0x1t
	// 413        0x1t
	// 414        0x1t
	// 415        0x1t
	// 416        0x1t
	// 417        0x1t
	// 418        0x1t
	// 419        0x1t
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
	// 436        0x1t
	// 437        0x1t
	// 438        0x1t
	// 439        0x1t
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
	// 452        0x8t
	// 453        0x9t
	// 454    .end array-data
	// 456    .line 239
	// 457    nop
	// 459    :array_ee
	// 460    .array-data 4
	// 461        0x0
	// 462        -0x1
	// 463        -0x10000
	// 464        0x7fff00ff
	// 465        0x7feffffe
	// 466        -0x10000
	// 467        0x3fffff
	// 468        -0x100000
	// 469        -0xf2
	// 470        0x10001
	// 471    .end array-data
	// 473    .line 256
	// 474    :array_106
	// 475    .array-data 4
	// 476        0x0
	// 477        -0x1
	// 478        -0x4000
	// 479        0x7fff03ff
	// 480        0x7feffffe
	// 481        -0x10000
	// 482        0x3fffff
	// 483        -0x100000
	// 484        -0xf2
	// 485        0x10001
	// 486    .end array-data

}
// .method public constructor <init>()V
android::icu::impl::PatternProps::PatternProps()
{
	
	// 494    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static isIdentifier(Ljava/lang/CharSequence;)Z
bool android::icu::impl::PatternProps::isIdentifier(std::shared_ptr<java::lang::CharSequence> s)
{
	
	bool cVar0;
	int limit;
	int start;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	cVar0 = 0x0;
	limit = s->length();
	//    .local v0, "limit":I
	if ( limit )     
		goto label_cond_8;
	return cVar0;
	// 518    .line 134
label_cond_8:
	start = 0x0;
	//    .local v1, "start":I
label_goto_9:
	start = ( start + 0x1);
	//    .end local v1    # "start":I
	//    .local v2, "start":I
	if ( !(android::icu::impl::PatternProps::isSyntaxOrWhiteSpace(s->charAt(start))) )  
		goto label_cond_16;
	return cVar0;
	// 542    .line 139
label_cond_16:
	if ( start >= limit )
		goto label_cond_1a;
	start = start;
	//    .end local v2    # "start":I
	//    .restart local v1    # "start":I
	goto label_goto_9;
	// 552    .line 140
	// 553    .end local v1    # "start":I
	// 554    .restart local v2    # "start":I
label_cond_1a:
	return 0x1;

}
// .method public static isIdentifier(Ljava/lang/CharSequence;II)Z
bool android::icu::impl::PatternProps::isIdentifier(std::shared_ptr<java::lang::CharSequence> s,int start,int limit)
{
	
	bool cVar0;
	int start;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	cVar0 = 0x0;
	if ( start <  limit )
		goto label_cond_7;
	return cVar0;
	// 576    .line 157
	// 577    .end local p1    # "start":I
	// 578    .local v0, "start":I
label_cond_4:
	if ( start >= limit )
		goto label_cond_14;
	start = start;
	//    .end local v0    # "start":I
	//    .restart local p1    # "start":I
label_cond_7:
	start = ( start + 0x1);
	//    .end local p1    # "start":I
	//    .restart local v0    # "start":I
	if ( !(android::icu::impl::PatternProps::isSyntaxOrWhiteSpace(s->charAt(start))) )  
		goto label_cond_4;
	return cVar0;
	// 605    .line 158
label_cond_14:
	return 0x1;

}
// .method public static isSyntax(I)Z
bool android::icu::impl::PatternProps::isSyntax(int c)
{
	
	bool cVar0;
	bool cVar1;
	
	//    .param p0, "c"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( c >= 0 )
		goto label_cond_5;
	return cVar1;
	// 627    .line 42
label_cond_5:
	if ( c >  0xff )
		goto label_cond_13;
	if ( android::icu::impl::PatternProps::latin1[c] != 0x3 )
		goto label_cond_11;
label_goto_10:
	return cVar0;
label_cond_11:
	cVar0 = cVar1;
	goto label_goto_10;
	// 650    .line 44
label_cond_13:
	if ( c >= 0x2010 )
		goto label_cond_18;
	return cVar1;
	// 659    .line 46
label_cond_18:
	if ( c >  0x3030 )
		goto label_cond_33;
	//    .local v0, "bits":I
	if ( !(( _shri(android::icu::impl::PatternProps::syntax2000[android::icu::impl::PatternProps::index2000[_shri(( c + -0x2000),0x5)]],( c & 0x1f)) & 0x1)) )  
		goto label_cond_31;
label_goto_30:
	return cVar0;
label_cond_31:
	cVar0 = cVar1;
	goto label_goto_30;
	// 696    .line 49
	// 697    .end local v0    # "bits":I
label_cond_33:
	if ( 0xfd3e >  c )
		goto label_cond_4a;
	if ( c >  0xfe46 )
		goto label_cond_4a;
	if ( c <= 0xfd3f )
		goto label_cond_47;
	if ( 0xfe45 >  c )
		goto label_cond_48;
label_cond_47:
label_goto_47:
	return cVar0;
label_cond_48:
	cVar0 = cVar1;
	goto label_goto_47;
	// 725    .line 52
label_cond_4a:
	return cVar1;

}
// .method public static isSyntaxOrWhiteSpace(I)Z
bool android::icu::impl::PatternProps::isSyntaxOrWhiteSpace(int c)
{
	
	bool cVar0;
	bool cVar1;
	
	//    .param p0, "c"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( c >= 0 )
		goto label_cond_5;
	return cVar1;
	// 745    .line 62
label_cond_5:
	if ( c >  0xff )
		goto label_cond_12;
	if ( !(android::icu::impl::PatternProps::latin1[c]) )  
		goto label_cond_10;
label_goto_f:
	return cVar0;
label_cond_10:
	cVar0 = cVar1;
	goto label_goto_f;
	// 766    .line 64
label_cond_12:
	if ( c >= 0x200e )
		goto label_cond_17;
	return cVar1;
	// 775    .line 66
label_cond_17:
	if ( c >  0x3030 )
		goto label_cond_32;
	//    .local v0, "bits":I
	if ( !(( _shri(android::icu::impl::PatternProps::syntaxOrWhiteSpace2000[android::icu::impl::PatternProps::index2000[_shri(( c + -0x2000),0x5)]],( c & 0x1f)) & 0x1)) )  
		goto label_cond_30;
label_goto_2f:
	return cVar0;
label_cond_30:
	cVar0 = cVar1;
	goto label_goto_2f;
	// 812    .line 69
	// 813    .end local v0    # "bits":I
label_cond_32:
	if ( 0xfd3e >  c )
		goto label_cond_49;
	if ( c >  0xfe46 )
		goto label_cond_49;
	if ( c <= 0xfd3f )
		goto label_cond_46;
	if ( 0xfe45 >  c )
		goto label_cond_47;
label_cond_46:
label_goto_46:
	return cVar0;
label_cond_47:
	cVar0 = cVar1;
	goto label_goto_46;
	// 841    .line 72
label_cond_49:
	return cVar1;

}
// .method public static isWhiteSpace(I)Z
bool android::icu::impl::PatternProps::isWhiteSpace(int c)
{
	
	bool cVar0;
	bool cVar1;
	
	//    .param p0, "c"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( c >= 0 )
		goto label_cond_5;
	return cVar1;
	// 861    .line 82
label_cond_5:
	if ( c >  0xff )
		goto label_cond_13;
	if ( android::icu::impl::PatternProps::latin1[c] != 0x5 )
		goto label_cond_11;
label_goto_10:
	return cVar0;
label_cond_11:
	cVar0 = cVar1;
	goto label_goto_10;
	// 884    .line 84
label_cond_13:
	if ( 0x200e >  c )
		goto label_cond_26;
	if ( c >  0x2029 )
		goto label_cond_26;
	if ( c <= 0x200f )
		goto label_cond_23;
	if ( 0x2028 >  c )
		goto label_cond_24;
label_cond_23:
label_goto_23:
	return cVar0;
label_cond_24:
	cVar0 = cVar1;
	goto label_goto_23;
	// 912    .line 87
label_cond_26:
	return cVar1;

}
// .method public static skipIdentifier(Ljava/lang/CharSequence;I)I
int android::icu::impl::PatternProps::skipIdentifier(std::shared_ptr<java::lang::CharSequence> s,int i)
{
	
	int i;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	//    .param p1, "i"    # I
label_goto_0:
	if ( i >= s->length() )
		goto label_cond_15;
	if ( !(( android::icu::impl::PatternProps::isSyntaxOrWhiteSpace(s->charAt(i)) ^ 0x1)) )  
		goto label_cond_15;
	i = ( i + 0x1);
	goto label_goto_0;
	// 948    .line 170
label_cond_15:
	return i;

}
// .method public static skipWhiteSpace(Ljava/lang/CharSequence;I)I
int android::icu::impl::PatternProps::skipWhiteSpace(std::shared_ptr<java::lang::CharSequence> s,int i)
{
	
	int i;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	//    .param p1, "i"    # I
label_goto_0:
	if ( i >= s->length() )
		goto label_cond_13;
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(s->charAt(i))) )  
		goto label_cond_13;
	i = ( i + 0x1);
	goto label_goto_0;
	// 982    .line 99
label_cond_13:
	return i;

}
// .method public static trimWhiteSpace(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::PatternProps::trimWhiteSpace(std::shared_ptr<java::lang::String> s)
{
	
	int start;
	int limit;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( !(s->length()) )  
		goto label_cond_23;
	if ( android::icu::impl::PatternProps::isWhiteSpace(s->charAt(0x0)) )     
		goto label_cond_24;
	if ( !(( android::icu::impl::PatternProps::isWhiteSpace(s->charAt(( s->length() + -0x1))) ^ 0x1)) )  
		goto label_cond_24;
label_cond_23:
	return s;
	// 1033    .line 109
label_cond_24:
	start = 0x0;
	//    .local v1, "start":I
	limit = s->length();
	//    .local v0, "limit":I
label_goto_29:
	if ( start >= limit )
		goto label_cond_38;
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(s->charAt(start))) )  
		goto label_cond_38;
	start = ( start + 0x1);
	goto label_goto_29;
	// 1063    .line 114
label_cond_38:
	if ( start >= limit )
		goto label_cond_49;
label_goto_3a:
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(s->charAt(( limit + -0x1)))) )  
		goto label_cond_49;
	limit = ( limit + -0x1);
	goto label_goto_3a;
	// 1086    .line 121
label_cond_49:
	return s->substring(start, limit);

}


