// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CaseMapImpl$GreekUpper.smali
#include "java2ctype.h"
#include "android.icu.impl.CaseMapImpl_S_GreekUpper.h"
#include "android.icu.impl.CaseMapImpl.h"
#include "android.icu.impl.UCaseProps_S_ContextIterator.h"
#include "android.icu.impl.UCaseProps.h"
#include "android.icu.text.Edits.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"

static android::icu::impl::CaseMapImpl_S_GreekUpper::AFTER_CASED = 0x1;
static android::icu::impl::CaseMapImpl_S_GreekUpper::AFTER_VOWEL_WITH_ACCENT = 0x2;
static android::icu::impl::CaseMapImpl_S_GreekUpper::HAS_ACCENT = 0x4000;
static android::icu::impl::CaseMapImpl_S_GreekUpper::HAS_COMBINING_DIALYTIKA = 0x10000;
static android::icu::impl::CaseMapImpl_S_GreekUpper::HAS_DIALYTIKA = 0x8000;
static android::icu::impl::CaseMapImpl_S_GreekUpper::HAS_EITHER_DIALYTIKA = 0x18000;
static android::icu::impl::CaseMapImpl_S_GreekUpper::HAS_OTHER_GREEK_DIACRITIC = 0x20000;
static android::icu::impl::CaseMapImpl_S_GreekUpper::HAS_VOWEL = 0x1000;
static android::icu::impl::CaseMapImpl_S_GreekUpper::HAS_VOWEL_AND_ACCENT = 0x5000;
static android::icu::impl::CaseMapImpl_S_GreekUpper::HAS_VOWEL_AND_ACCENT_AND_DIALYTIKA = 0xd000;
static android::icu::impl::CaseMapImpl_S_GreekUpper::HAS_YPOGEGRAMMENI = 0x2000;
static android::icu::impl::CaseMapImpl_S_GreekUpper::UPPER_MASK = 0x3ff;
static android::icu::impl::CaseMapImpl_S_GreekUpper::data0370;
static android::icu::impl::CaseMapImpl_S_GreekUpper::data1F00;
static android::icu::impl::CaseMapImpl_S_GreekUpper::data2126 = '\u13a9';
// .method static synthetic -wrap0(ILjava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::impl::CaseMapImpl_S_GreekUpper::_wrap0(int options,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits)
{
	
	//    .param p0, "options"    # I
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p2, "dest"    # Ljava/lang/Appendable;
	//    .param p3, "edits"    # Landroid/icu/text/Edits;
	return android::icu::impl::CaseMapImpl_S_GreekUpper::toUpper(options, src, dest, edits);

}
// .method static constructor <clinit>()V
void android::icu::impl::CaseMapImpl_S_GreekUpper::static_cinit()
{
	
	std::shared<std::vector<char[]>> cVar0;
	std::shared<std::vector<char[]>> cVar1;
	
	cVar0 = std::make_shared<std::vector<char[]>>(0x90);
	?;
	android::icu::impl::CaseMapImpl_S_GreekUpper::data0370 = cVar0;
	cVar1 = std::make_shared<std::vector<char[]>>(0x100);
	?;
	android::icu::impl::CaseMapImpl_S_GreekUpper::data1F00 = cVar1;
	return;
	// 090    .line 397
	// 091    nop
	// 093    :array_14
	// 094    .array-data 2
	// 095        0x370s
	// 096        0x370s
	// 097        0x372s
	// 098        0x372s
	// 099        0x0s
	// 100        0x0s
	// 101        0x376s
	// 102        0x376s
	// 103        0x0s
	// 104        0x0s
	// 105        0x37as
	// 106        0x3fds
	// 107        0x3fes
	// 108        0x3ffs
	// 109        0x0s
	// 110        0x37fs
	// 111        0x0s
	// 112        0x0s
	// 113        0x0s
	// 114        0x0s
	// 115        0x0s
	// 116        0x0s
	// 117        0x5391s
	// 118        0x0s
	// 119        0x5395s
	// 120        0x5397s
	// 121        0x5399s
	// 122        0x0s
	// 123        0x539fs
	// 124        0x0s
	// 125        0x53a5s
	// 126        0x53a9s
	// 127        -0x2c67s
	// 128        0x1391s
	// 129        0x392s
	// 130        0x393s
	// 131        0x394s
	// 132        0x1395s
	// 133        0x396s
	// 134        0x1397s
	// 135        0x398s
	// 136        0x1399s
	// 137        0x39as
	// 138        0x39bs
	// 139        0x39cs
	// 140        0x39ds
	// 141        0x39es
	// 142        0x139fs
	// 143        0x3a0s
	// 144        0x3a1s
	// 145        0x0s
	// 146        0x3a3s
	// 147        0x3a4s
	// 148        0x13a5s
	// 149        0x3a6s
	// 150        0x3a7s
	// 151        0x3a8s
	// 152        0x13a9s
	// 153        -0x6c67s
	// 154        -0x6c5bs
	// 155        0x5391s
	// 156        0x5395s
	// 157        0x5397s
	// 158        0x5399s
	// 159        -0x2c5bs
	// 160        0x1391s
	// 161        0x392s
	// 162        0x393s
	// 163        0x394s
	// 164        0x1395s
	// 165        0x396s
	// 166        0x1397s
	// 167        0x398s
	// 168        0x1399s
	// 169        0x39as
	// 170        0x39bs
	// 171        0x39cs
	// 172        0x39ds
	// 173        0x39es
	// 174        0x139fs
	// 175        0x3a0s
	// 176        0x3a1s
	// 177        0x3a3s
	// 178        0x3a3s
	// 179        0x3a4s
	// 180        0x13a5s
	// 181        0x3a6s
	// 182        0x3a7s
	// 183        0x3a8s
	// 184        0x13a9s
	// 185        -0x6c67s
	// 186        -0x6c5bs
	// 187        0x539fs
	// 188        0x53a5s
	// 189        0x53a9s
	// 190        0x3cfs
	// 191        0x392s
	// 192        0x398s
	// 193        0x3d2s
	// 194        0x43d2s
	// 195        -0x7c2es
	// 196        0x3a6s
	// 197        0x3a0s
	// 198        0x3cfs
	// 199        0x3d8s
	// 200        0x3d8s
	// 201        0x3das
	// 202        0x3das
	// 203        0x3dcs
	// 204        0x3dcs
	// 205        0x3des
	// 206        0x3des
	// 207        0x3e0s
	// 208        0x3e0s
	// 209        0x0s
	// 210        0x0s
	// 211        0x0s
	// 212        0x0s
	// 213        0x0s
	// 214        0x0s
	// 215        0x0s
	// 216        0x0s
	// 217        0x0s
	// 218        0x0s
	// 219        0x0s
	// 220        0x0s
	// 221        0x0s
	// 222        0x0s
	// 223        0x39as
	// 224        0x3a1s
	// 225        0x3f9s
	// 226        0x37fs
	// 227        0x3f4s
	// 228        0x1395s
	// 229        0x0s
	// 230        0x3f7s
	// 231        0x3f7s
	// 232        0x3f9s
	// 233        0x3fas
	// 234        0x3fas
	// 235        0x3fcs
	// 236        0x3fds
	// 237        0x3fes
	// 238        0x3ffs
	// 239    .end array-data
	// 241    .line 545
	// 242    :array_a8
	// 243    .array-data 2
	// 244        0x1391s
	// 245        0x1391s
	// 246        0x5391s
	// 247        0x5391s
	// 248        0x5391s
	// 249        0x5391s
	// 250        0x5391s
	// 251        0x5391s
	// 252        0x1391s
	// 253        0x1391s
	// 254        0x5391s
	// 255        0x5391s
	// 256        0x5391s
	// 257        0x5391s
	// 258        0x5391s
	// 259        0x5391s
	// 260        0x1395s
	// 261        0x1395s
	// 262        0x5395s
	// 263        0x5395s
	// 264        0x5395s
	// 265        0x5395s
	// 266        0x0s
	// 267        0x0s
	// 268        0x1395s
	// 269        0x1395s
	// 270        0x5395s
	// 271        0x5395s
	// 272        0x5395s
	// 273        0x5395s
	// 274        0x0s
	// 275        0x0s
	// 276        0x1397s
	// 277        0x1397s
	// 278        0x5397s
	// 279        0x5397s
	// 280        0x5397s
	// 281        0x5397s
	// 282        0x5397s
	// 283        0x5397s
	// 284        0x1397s
	// 285        0x1397s
	// 286        0x5397s
	// 287        0x5397s
	// 288        0x5397s
	// 289        0x5397s
	// 290        0x5397s
	// 291        0x5397s
	// 292        0x1399s
	// 293        0x1399s
	// 294        0x5399s
	// 295        0x5399s
	// 296        0x5399s
	// 297        0x5399s
	// 298        0x5399s
	// 299        0x5399s
	// 300        0x1399s
	// 301        0x1399s
	// 302        0x5399s
	// 303        0x5399s
	// 304        0x5399s
	// 305        0x5399s
	// 306        0x5399s
	// 307        0x5399s
	// 308        0x139fs
	// 309        0x139fs
	// 310        0x539fs
	// 311        0x539fs
	// 312        0x539fs
	// 313        0x539fs
	// 314        0x0s
	// 315        0x0s
	// 316        0x139fs
	// 317        0x139fs
	// 318        0x539fs
	// 319        0x539fs
	// 320        0x539fs
	// 321        0x539fs
	// 322        0x0s
	// 323        0x0s
	// 324        0x13a5s
	// 325        0x13a5s
	// 326        0x53a5s
	// 327        0x53a5s
	// 328        0x53a5s
	// 329        0x53a5s
	// 330        0x53a5s
	// 331        0x53a5s
	// 332        0x0s
	// 333        0x13a5s
	// 334        0x0s
	// 335        0x53a5s
	// 336        0x0s
	// 337        0x53a5s
	// 338        0x0s
	// 339        0x53a5s
	// 340        0x13a9s
	// 341        0x13a9s
	// 342        0x53a9s
	// 343        0x53a9s
	// 344        0x53a9s
	// 345        0x53a9s
	// 346        0x53a9s
	// 347        0x53a9s
	// 348        0x13a9s
	// 349        0x13a9s
	// 350        0x53a9s
	// 351        0x53a9s
	// 352        0x53a9s
	// 353        0x53a9s
	// 354        0x53a9s
	// 355        0x53a9s
	// 356        0x5391s
	// 357        0x5391s
	// 358        0x5395s
	// 359        0x5395s
	// 360        0x5397s
	// 361        0x5397s
	// 362        0x5399s
	// 363        0x5399s
	// 364        0x539fs
	// 365        0x539fs
	// 366        0x53a5s
	// 367        0x53a5s
	// 368        0x53a9s
	// 369        0x53a9s
	// 370        0x0s
	// 371        0x0s
	// 372        0x3391s
	// 373        0x3391s
	// 374        0x7391s
	// 375        0x7391s
	// 376        0x7391s
	// 377        0x7391s
	// 378        0x7391s
	// 379        0x7391s
	// 380        0x3391s
	// 381        0x3391s
	// 382        0x7391s
	// 383        0x7391s
	// 384        0x7391s
	// 385        0x7391s
	// 386        0x7391s
	// 387        0x7391s
	// 388        0x3397s
	// 389        0x3397s
	// 390        0x7397s
	// 391        0x7397s
	// 392        0x7397s
	// 393        0x7397s
	// 394        0x7397s
	// 395        0x7397s
	// 396        0x3397s
	// 397        0x3397s
	// 398        0x7397s
	// 399        0x7397s
	// 400        0x7397s
	// 401        0x7397s
	// 402        0x7397s
	// 403        0x7397s
	// 404        0x33a9s
	// 405        0x33a9s
	// 406        0x73a9s
	// 407        0x73a9s
	// 408        0x73a9s
	// 409        0x73a9s
	// 410        0x73a9s
	// 411        0x73a9s
	// 412        0x33a9s
	// 413        0x33a9s
	// 414        0x73a9s
	// 415        0x73a9s
	// 416        0x73a9s
	// 417        0x73a9s
	// 418        0x73a9s
	// 419        0x73a9s
	// 420        0x1391s
	// 421        0x1391s
	// 422        0x7391s
	// 423        0x3391s
	// 424        0x7391s
	// 425        0x0s
	// 426        0x5391s
	// 427        0x7391s
	// 428        0x1391s
	// 429        0x1391s
	// 430        0x5391s
	// 431        0x5391s
	// 432        0x3391s
	// 433        0x0s
	// 434        0x1399s
	// 435        0x0s
	// 436        0x0s
	// 437        0x0s
	// 438        0x7397s
	// 439        0x3397s
	// 440        0x7397s
	// 441        0x0s
	// 442        0x5397s
	// 443        0x7397s
	// 444        0x5395s
	// 445        0x5395s
	// 446        0x5397s
	// 447        0x5397s
	// 448        0x3397s
	// 449        0x0s
	// 450        0x0s
	// 451        0x0s
	// 452        0x1399s
	// 453        0x1399s
	// 454        -0x2c67s
	// 455        -0x2c67s
	// 456        0x0s
	// 457        0x0s
	// 458        0x5399s
	// 459        -0x2c67s
	// 460        0x1399s
	// 461        0x1399s
	// 462        0x5399s
	// 463        0x5399s
	// 464        0x0s
	// 465        0x0s
	// 466        0x0s
	// 467        0x0s
	// 468        0x13a5s
	// 469        0x13a5s
	// 470        -0x2c5bs
	// 471        -0x2c5bs
	// 472        0x3a1s
	// 473        0x3a1s
	// 474        0x53a5s
	// 475        -0x2c5bs
	// 476        0x13a5s
	// 477        0x13a5s
	// 478        0x53a5s
	// 479        0x53a5s
	// 480        0x3a1s
	// 481        0x0s
	// 482        0x0s
	// 483        0x0s
	// 484        0x0s
	// 485        0x0s
	// 486        0x73a9s
	// 487        0x33a9s
	// 488        0x73a9s
	// 489        0x0s
	// 490        0x53a9s
	// 491        0x73a9s
	// 492        0x539fs
	// 493        0x539fs
	// 494        0x53a9s
	// 495        0x53a9s
	// 496        0x33a9s
	// 497        0x0s
	// 498        0x0s
	// 499        0x0s
	// 500    .end array-data

}
// .method private constructor <init>()V
android::icu::impl::CaseMapImpl_S_GreekUpper::CaseMapImpl_S_GreekUpper()
{
	
	// 508    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static final getDiacriticData(I)I
int android::icu::impl::CaseMapImpl_S_GreekUpper::getDiacriticData(int c)
{
	
	//    .param p0, "c"    # I
	// switch
	{
	auto item = ( c );
	if (item == 0x300) goto label_sswitch_5;
	if (item == 0x301) goto label_sswitch_5;
	if (item == 0x302) goto label_sswitch_5;
	if (item == 0x303) goto label_sswitch_5;
	if (item == 0x304) goto label_sswitch_12;
	if (item == 0x306) goto label_sswitch_12;
	if (item == 0x308) goto label_sswitch_8;
	if (item == 0x311) goto label_sswitch_5;
	if (item == 0x313) goto label_sswitch_12;
	if (item == 0x314) goto label_sswitch_12;
	if (item == 0x342) goto label_sswitch_5;
	if (item == 0x343) goto label_sswitch_12;
	if (item == 0x344) goto label_sswitch_b;
	if (item == 0x345) goto label_sswitch_f;
	}
	return 0x0;
	// 526    .line 835
label_sswitch_5:
	return 0x4000;
	// 532    .line 837
label_sswitch_8:
	return 0x10000;
	// 538    .line 839
label_sswitch_b:
	return 0x14000;
	// 544    .line 841
label_sswitch_f:
	return 0x2000;
	// 550    .line 847
label_sswitch_12:
	return 0x20000;
	// 556    .line 828
	// 557    nop
	// 559    :sswitch_data_16
	// 560    .sparse-switch
	// 561        0x300 -> :sswitch_5
	// 562        0x301 -> :sswitch_5
	// 563        0x302 -> :sswitch_5
	// 564        0x303 -> :sswitch_5
	// 565        0x304 -> :sswitch_12
	// 566        0x306 -> :sswitch_12
	// 567        0x308 -> :sswitch_8
	// 568        0x311 -> :sswitch_5
	// 569        0x313 -> :sswitch_12
	// 570        0x314 -> :sswitch_12
	// 571        0x342 -> :sswitch_5
	// 572        0x343 -> :sswitch_12
	// 573        0x344 -> :sswitch_b
	// 574        0x345 -> :sswitch_f
	// 575    .end sparse-switch

}
// .method private static final getLetterData(I)I
int android::icu::impl::CaseMapImpl_S_GreekUpper::getLetterData(int c)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	
	//    .param p0, "c"    # I
	cVar0 = 0x2126;
	cVar1 = 0x3ff;
	cVar2 = 0x0;
	if ( c <  0x370 )
		goto label_cond_b;
	if ( cVar0 >= c )
		goto label_cond_c;
label_cond_b:
	return cVar2;
	// 600    .line 809
label_cond_c:
	if ( cVar1 >= c )
		goto label_cond_12;
	if ( c <  0x1f00 )
		goto label_cond_b;
label_cond_12:
	if ( c >  cVar1 )
		goto label_cond_1b;
	return android::icu::impl::CaseMapImpl_S_GreekUpper::data0370[( c + -0x370)];
	// 621    .line 813
label_cond_1b:
	if ( c >  0x1fff )
		goto label_cond_26;
	return android::icu::impl::CaseMapImpl_S_GreekUpper::data1F00[( c + -0x1f00)];
	// 636    .line 815
label_cond_26:
	if ( c != cVar0 )
		goto label_cond_2b;
	return 0x13a9;
	// 645    .line 818
label_cond_2b:
	return cVar2;

}
// .method private static isFollowedByCasedLetter(Ljava/lang/CharSequence;I)Z
bool android::icu::impl::CaseMapImpl_S_GreekUpper::isFollowedByCasedLetter(std::shared_ptr<java::lang::CharSequence> s,int i)
{
	
	bool cVar0;
	int c;
	int type;
	int i;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	//    .param p1, "i"    # I
	cVar0 = 0x0;
label_goto_1:
	if ( i >= s->length() )
		goto label_cond_20;
	c = java::lang::Character::codePointAt(s, i);
	//    .local v0, "c":I
	type = android::icu::impl::UCaseProps::INSTANCE->getTypeOrIgnorable(c);
	//    .local v1, "type":I
	if ( !(( type & 0x4)) )  
		goto label_cond_1b;
	i = (i +  java::lang::Character::charCount(c));
	goto label_goto_1;
	// 694    .line 860
label_cond_1b:
	if ( !(type) )  
		goto label_cond_1f;
	return 0x1;
	// 703    .line 863
label_cond_1f:
	return cVar0;
	// 707    .line 866
	// 708    .end local v0    # "c":I
	// 709    .end local v1    # "type":I
label_cond_20:
	return cVar0;

}
// .method private static toUpper(ILjava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::impl::CaseMapImpl_S_GreekUpper::toUpper(int options,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits)
{
	
	int state;
	int i;
	int c;
	int nextIndex;
	int nextState;
	int type;
	int data;
	int upper;
	int numYpogegrammeni;
	int diacriticData;
	int addTonos;
	int cVar0;
	int i2;
	int cVar1;
	int cVar2;
	int oldLength;
	int newLength;
	int cVar3;
	
	//    .param p0, "options"    # I
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p3, "edits"    # Landroid/icu/text/Edits;
	//    .annotation system Ldalvik/annotation/Signature;
	// 720        value = {
	// 721            "<A::",
	// 722            "Ljava/lang/Appendable;",
	// 723            ">(I",
	// 724            "Ljava/lang/CharSequence;",
	// 725            "TA;",
	// 726            "Landroid/icu/text/Edits;",
	// 727            ")TA;"
	// 728        }
	// 729    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 732        value = {
	// 733            Ljava/io/IOException;
	// 734        }
	// 735    .end annotation
	//    .local p2, "dest":Ljava/lang/Appendable;, "TA;"
	state = 0x0;
	//    .local v16, "state":I
	i = 0x0;
	//    .local v9, "i":I
label_goto_3:
	if ( i >= src->length() )
		goto label_cond_1b3;
	c = java::lang::Character::codePointAt(src, i);
	//    .local v5, "c":I
	nextIndex = (i + java::lang::Character::charCount(c));
	//    .local v12, "nextIndex":I
	nextState = 0x0;
	//    .local v13, "nextState":I
	type = android::icu::impl::UCaseProps::INSTANCE->getTypeOrIgnorable(c);
	//    .local v17, "type":I
	if ( !(( type & 0x4)) )  
		goto label_cond_79;
	nextState = ( ( state & 0x1) | 0x0);
label_cond_28:
label_goto_28:
	data = android::icu::impl::CaseMapImpl_S_GreekUpper::getLetterData(c);
	//    .local v7, "data":I
	if ( data <= 0 )
		goto label_cond_18f;
	upper = ( data & 0x3ff);
	//    .local v18, "upper":I
	if ( !(( data & 0x1000)) )  
		goto label_cond_51;
	if ( !(( state & 0x2)) )  
		goto label_cond_51;
	if ( upper == 0x399 )
		goto label_cond_4c;
	if ( upper != 0x3a5 )
		goto label_cond_51;
label_cond_4c:
	data = (data | 0x8000);
label_cond_51:
	numYpogegrammeni = 0x0;
	//    .local v14, "numYpogegrammeni":I
	if ( !(( data & 0x2000)) )  
		goto label_cond_59;
	numYpogegrammeni = 0x1;
label_cond_59:
label_goto_59:
	if ( nextIndex >= src->length() )
		goto label_cond_7d;
	diacriticData = android::icu::impl::CaseMapImpl_S_GreekUpper::getDiacriticData(src->charAt(nextIndex));
	//    .local v8, "diacriticData":I
	if ( !(diacriticData) )  
		goto label_cond_7d;
	data = (data |  diacriticData);
	if ( !(( diacriticData & 0x2000)) )  
		goto label_cond_76;
	numYpogegrammeni = ( numYpogegrammeni + 0x1);
label_cond_76:
	nextIndex = ( nextIndex + 0x1);
	goto label_goto_59;
	// 907    .line 889
	// 908    .end local v7    # "data":I
	// 909    .end local v8    # "diacriticData":I
	// 910    .end local v14    # "numYpogegrammeni":I
	// 911    .end local v18    # "upper":I
label_cond_79:
	if ( !(type) )  
		goto label_cond_28;
	nextState = 0x1;
	goto label_goto_28;
	// 920    .line 923
	// 921    .restart local v7    # "data":I
	// 922    .restart local v14    # "numYpogegrammeni":I
	// 923    .restart local v18    # "upper":I
label_cond_7d:
	if ( (0xd000 & data) != 0x5000 )
		goto label_cond_8c;
	nextState = ( nextState | 0x2);
label_cond_8c:
	addTonos = 0x0;
	//    .local v4, "addTonos":Z
	if ( upper != 0x397 )
		goto label_cond_eb;
	if ( !(( data & 0x4000)) )  
		goto label_cond_eb;
	if ( numYpogegrammeni )     
		goto label_cond_eb;
	if ( ( state & 0x1) )     
		goto label_cond_eb;
	if ( !(( android::icu::impl::CaseMapImpl_S_GreekUpper::isFollowedByCasedLetter(src, nextIndex) ^ 0x1)) )  
		goto label_cond_eb;
	if ( i != nextIndex )
		goto label_cond_e9;
	upper = 0x389;
label_cond_af:
label_goto_af:
	if ( edits )     
		goto label_cond_112;
	cVar0 = 0x1;
label_cond_b2:
label_goto_b2:
	if ( !(cVar0) )  
		goto label_cond_1ae;
	dest->append((char)(upper));
	if ( !((0x18000 & data)) )  
		goto label_cond_d0;
	dest->append(0x308);
label_cond_d0:
	if ( !(addTonos) )  
		goto label_cond_db;
	dest->append(0x301);
label_cond_db:
label_goto_db:
	if ( numYpogegrammeni <= 0 )
		goto label_cond_1ae;
	dest->append(0x399);
	numYpogegrammeni = ( numYpogegrammeni + -0x1);
	goto label_goto_db;
	// 1061    .line 938
label_cond_e9:
	addTonos = 0x1;
	goto label_goto_af;
	// 1067    .line 940
label_cond_eb:
	if ( !((0x8000 & data)) )  
		goto label_cond_af;
	if ( upper != 0x399 )
		goto label_cond_102;
	upper = 0x3aa;
	data = (data & -0x18001);
	goto label_goto_af;
	// 1094    .line 945
label_cond_102:
	if ( upper != 0x3a5 )
		goto label_cond_af;
	upper = 0x3ab;
	data = (data & -0x18001);
	goto label_goto_af;
	// 1114    .line 956
label_cond_112:
	if ( src->charAt(i) != upper )
		goto label_cond_120;
	if ( numYpogegrammeni <= 0 )
		goto label_cond_16f;
label_cond_120:
	cVar0 = 0x1;
	//    .local v6, "change":Z
label_goto_121:
	i2 = ( i + 0x1);
	//    .local v10, "i2":I
	if ( !((0x18000 & data)) )  
		goto label_cond_140;
	if ( i2 >= nextIndex )
		goto label_cond_13a;
	if ( src->charAt(i2) == 0x308 )
		goto label_cond_171;
label_cond_13a:
	cVar1 = 0x1;
label_goto_13c:
	cVar0 = (cVar0 | cVar1);
	//    .local v6, "change":Z
	i2 = ( i2 + 0x1);
	//    .end local v6    # "change":Z
label_cond_140:
	if ( !(addTonos) )  
		goto label_cond_158;
	if ( i2 >= nextIndex )
		goto label_cond_152;
	if ( src->charAt(i2) == 0x301 )
		goto label_cond_174;
label_cond_152:
	cVar2 = 0x1;
label_goto_154:
	cVar0 = (cVar0 | cVar2);
	//    .restart local v6    # "change":Z
	//    .end local v6    # "change":Z
label_cond_158:
	oldLength = (nextIndex - i);
	//    .local v15, "oldLength":I
	newLength = ((i2 - i) + numYpogegrammeni);
	//    .local v11, "newLength":I
	if ( oldLength == newLength )
		goto label_cond_177;
	cVar3 = 0x1;
label_goto_162:
	cVar0 = (cVar0 | cVar3);
	//    .restart local v6    # "change":Z
	if ( !(cVar0) )  
		goto label_cond_17a;
	if ( !(edits) )  
		goto label_cond_b2;
	edits->addReplace(oldLength, newLength);
	goto label_goto_b2;
	// 1239    .line 956
	// 1240    .end local v6    # "change":Z
	// 1241    .end local v10    # "i2":I
	// 1242    .end local v11    # "newLength":I
	// 1243    .end local v15    # "oldLength":I
label_cond_16f:
	cVar0 = 0x0;
	//    .local v6, "change":Z
	goto label_goto_121;
	// 1250    .line 959
	// 1251    .restart local v10    # "i2":I
label_cond_171:
	cVar1 = 0x0;
	goto label_goto_13c;
	// 1257    .line 963
	// 1258    .end local v6    # "change":Z
label_cond_174:
	cVar2 = 0x0;
	goto label_goto_154;
	// 1264    .line 968
	// 1265    .restart local v11    # "newLength":I
	// 1266    .restart local v15    # "oldLength":I
label_cond_177:
	cVar3 = 0x0;
	goto label_goto_162;
	// 1272    .line 974
	// 1273    .local v6, "change":Z
label_cond_17a:
	if ( !(edits) )  
		goto label_cond_181;
	edits->addUnchanged(oldLength);
label_cond_181:
	if ( ( options & 0x4000) )     
		goto label_cond_18c;
	cVar0 = 0x1;
	//    .local v6, "change":Z
	goto label_goto_b2;
	// 1297    .local v6, "change":Z
label_cond_18c:
	cVar0 = 0x0;
	//    .local v6, "change":Z
	goto label_goto_b2;
	// 1304    .line 996
	// 1305    .end local v4    # "addTonos":Z
	// 1306    .end local v6    # "change":Z
	// 1307    .end local v10    # "i2":I
	// 1308    .end local v11    # "newLength":I
	// 1309    .end local v14    # "numYpogegrammeni":I
	// 1310    .end local v15    # "oldLength":I
	// 1311    .end local v18    # "upper":I
label_cond_18f:
	android::icu::impl::CaseMapImpl::-wrap0(android::icu::impl::UCaseProps::INSTANCE->toFullUpper(c, 0x0, dest, 0x4), dest, (nextIndex - i), options, edits);
label_cond_1ae:
	i = nextIndex;
	state = nextState;
	goto label_goto_3;
	// 1353    .line 1002
	// 1354    .end local v5    # "c":I
	// 1355    .end local v7    # "data":I
	// 1356    .end local v12    # "nextIndex":I
	// 1357    .end local v13    # "nextState":I
	// 1358    .end local v17    # "type":I
label_cond_1b3:
	return dest;

}


