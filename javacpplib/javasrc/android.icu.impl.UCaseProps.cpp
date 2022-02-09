// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCaseProps.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2_16.h"
#include "android.icu.impl.UCaseProps_S_ContextIterator.h"
#include "android.icu.impl.UCaseProps_S_IsAcceptable.h"
#include "android.icu.impl.UCaseProps.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "android.icu.util.ULocale.h"
#include "java.io.IOException.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Iterator.h"
#include "java.util.Locale.h"

static android::icu::impl::UCaseProps::ABOVE = 0x40;
static android::icu::impl::UCaseProps::CLOSURE_MAX_LENGTH = 0xf;
static android::icu::impl::UCaseProps::DATA_FILE_NAME = std::make_shared<java::lang::String>("ucase.icu");
static android::icu::impl::UCaseProps::DATA_NAME = std::make_shared<java::lang::String>("ucase");
static android::icu::impl::UCaseProps::DATA_TYPE = std::make_shared<java::lang::String>("icu");
static android::icu::impl::UCaseProps::DELTA_SHIFT = 0x7;
static android::icu::impl::UCaseProps::DOT_MASK = 0x60;
static android::icu::impl::UCaseProps::EXCEPTION = 0x10;
static android::icu::impl::UCaseProps::EXC_CLOSURE = 0x6;
static android::icu::impl::UCaseProps::EXC_CONDITIONAL_FOLD = 0x8000;
static android::icu::impl::UCaseProps::EXC_CONDITIONAL_SPECIAL = 0x4000;
static android::icu::impl::UCaseProps::EXC_DOT_SHIFT = 0x7;
static android::icu::impl::UCaseProps::EXC_DOUBLE_SLOTS = 0x100;
static android::icu::impl::UCaseProps::EXC_FOLD = 0x1;
static android::icu::impl::UCaseProps::EXC_FULL_MAPPINGS = 0x7;
static android::icu::impl::UCaseProps::EXC_LOWER = 0x0;
static android::icu::impl::UCaseProps::EXC_SHIFT = 0x5;
static android::icu::impl::UCaseProps::EXC_TITLE = 0x3;
static android::icu::impl::UCaseProps::EXC_UPPER = 0x2;
static android::icu::impl::UCaseProps::FMT = 0x63415345;
static android::icu::impl::UCaseProps::FOLD_CASE_OPTIONS_MASK = 0xff;
static android::icu::impl::UCaseProps::FULL_LOWER = 0xf;
static android::icu::impl::UCaseProps::IGNORABLE = 0x4;
static android::icu::impl::UCaseProps::INSTANCE;
static android::icu::impl::UCaseProps::IX_EXC_LENGTH = 0x3;
static android::icu::impl::UCaseProps::IX_TOP = 0x10;
static android::icu::impl::UCaseProps::IX_TRIE_SIZE = 0x2;
static android::icu::impl::UCaseProps::IX_UNFOLD_LENGTH = 0x4;
static android::icu::impl::UCaseProps::LOC_DUTCH = 0x5;
static android::icu::impl::UCaseProps::LOC_GREEK = 0x4;
static android::icu::impl::UCaseProps::LOC_LITHUANIAN = 0x3;
static android::icu::impl::UCaseProps::LOC_ROOT = 0x1;
static android::icu::impl::UCaseProps::LOC_TURKISH = 0x2;
static android::icu::impl::UCaseProps::LOWER = 0x1;
static android::icu::impl::UCaseProps::MAX_STRING_LENGTH = 0x1f;
static android::icu::impl::UCaseProps::NONE = 0x0;
static android::icu::impl::UCaseProps::OTHER_ACCENT = 0x60;
static android::icu::impl::UCaseProps::SENSITIVE = 0x8;
static android::icu::impl::UCaseProps::SOFT_DOTTED = 0x20;
static android::icu::impl::UCaseProps::TITLE = 0x3;
static android::icu::impl::UCaseProps::TYPE_MASK = 0x3;
static android::icu::impl::UCaseProps::UNFOLD_ROWS = 0x0;
static android::icu::impl::UCaseProps::UNFOLD_ROW_WIDTH = 0x1;
static android::icu::impl::UCaseProps::UNFOLD_STRING_WIDTH = 0x2;
static android::icu::impl::UCaseProps::UPPER = 0x2;
static android::icu::impl::UCaseProps::dummyStringBuilder;
static android::icu::impl::UCaseProps::flagsOffset;
static android::icu::impl::UCaseProps::iDot = std::make_shared<java::lang::String>("i\u0307");
static android::icu::impl::UCaseProps::iDotAcute = std::make_shared<java::lang::String>("i\u0307\u0301");
static android::icu::impl::UCaseProps::iDotGrave = std::make_shared<java::lang::String>("i\u0307\u0300");
static android::icu::impl::UCaseProps::iDotTilde = std::make_shared<java::lang::String>("i\u0307\u0303");
static android::icu::impl::UCaseProps::iOgonekDot = std::make_shared<java::lang::String>("\u012f\u0307");
static android::icu::impl::UCaseProps::jDot = std::make_shared<java::lang::String>("j\u0307");
// .method static constructor <clinit>()V
void android::icu::impl::UCaseProps::static_cinit()
{
	
	std::shared<std::vector<unsigned char[]>> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar3;
	std::shared_ptr<android::icu::impl::UCaseProps> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = std::make_shared<std::vector<unsigned char[]>>(0x100);
	?;
	android::icu::impl::UCaseProps::flagsOffset = cVar0;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	android::icu::impl::UCaseProps::dummyStringBuilder = cVar1;
	try {
	//label_try_start_10:
	cVar2 = std::make_shared<android::icu::impl::UCaseProps>();
	android::icu::impl::UCaseProps::INSTANCE = cVar2;
	//label_try_end_17:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_18;
	}
	//    .catch Ljava/io/IOException; {:try_start_10 .. :try_end_17} :catch_18
	return;
	// 167    .line 1461
label_catch_18:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar3 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar3;
	// 179    .line 127
	// 180    nop
	// 182    :array_20
	// 183    .array-data 1
	// 184        0x0t
	// 185        0x1t
	// 186        0x1t
	// 187        0x2t
	// 188        0x1t
	// 189        0x2t
	// 190        0x2t
	// 191        0x3t
	// 192        0x1t
	// 193        0x2t
	// 194        0x2t
	// 195        0x3t
	// 196        0x2t
	// 197        0x3t
	// 198        0x3t
	// 199        0x4t
	// 200        0x1t
	// 201        0x2t
	// 202        0x2t
	// 203        0x3t
	// 204        0x2t
	// 205        0x3t
	// 206        0x3t
	// 207        0x4t
	// 208        0x2t
	// 209        0x3t
	// 210        0x3t
	// 211        0x4t
	// 212        0x3t
	// 213        0x4t
	// 214        0x4t
	// 215        0x5t
	// 216        0x1t
	// 217        0x2t
	// 218        0x2t
	// 219        0x3t
	// 220        0x2t
	// 221        0x3t
	// 222        0x3t
	// 223        0x4t
	// 224        0x2t
	// 225        0x3t
	// 226        0x3t
	// 227        0x4t
	// 228        0x3t
	// 229        0x4t
	// 230        0x4t
	// 231        0x5t
	// 232        0x2t
	// 233        0x3t
	// 234        0x3t
	// 235        0x4t
	// 236        0x3t
	// 237        0x4t
	// 238        0x4t
	// 239        0x5t
	// 240        0x3t
	// 241        0x4t
	// 242        0x4t
	// 243        0x5t
	// 244        0x4t
	// 245        0x5t
	// 246        0x5t
	// 247        0x6t
	// 248        0x1t
	// 249        0x2t
	// 250        0x2t
	// 251        0x3t
	// 252        0x2t
	// 253        0x3t
	// 254        0x3t
	// 255        0x4t
	// 256        0x2t
	// 257        0x3t
	// 258        0x3t
	// 259        0x4t
	// 260        0x3t
	// 261        0x4t
	// 262        0x4t
	// 263        0x5t
	// 264        0x2t
	// 265        0x3t
	// 266        0x3t
	// 267        0x4t
	// 268        0x3t
	// 269        0x4t
	// 270        0x4t
	// 271        0x5t
	// 272        0x3t
	// 273        0x4t
	// 274        0x4t
	// 275        0x5t
	// 276        0x4t
	// 277        0x5t
	// 278        0x5t
	// 279        0x6t
	// 280        0x2t
	// 281        0x3t
	// 282        0x3t
	// 283        0x4t
	// 284        0x3t
	// 285        0x4t
	// 286        0x4t
	// 287        0x5t
	// 288        0x3t
	// 289        0x4t
	// 290        0x4t
	// 291        0x5t
	// 292        0x4t
	// 293        0x5t
	// 294        0x5t
	// 295        0x6t
	// 296        0x3t
	// 297        0x4t
	// 298        0x4t
	// 299        0x5t
	// 300        0x4t
	// 301        0x5t
	// 302        0x5t
	// 303        0x6t
	// 304        0x4t
	// 305        0x5t
	// 306        0x5t
	// 307        0x6t
	// 308        0x5t
	// 309        0x6t
	// 310        0x6t
	// 311        0x7t
	// 312        0x1t
	// 313        0x2t
	// 314        0x2t
	// 315        0x3t
	// 316        0x2t
	// 317        0x3t
	// 318        0x3t
	// 319        0x4t
	// 320        0x2t
	// 321        0x3t
	// 322        0x3t
	// 323        0x4t
	// 324        0x3t
	// 325        0x4t
	// 326        0x4t
	// 327        0x5t
	// 328        0x2t
	// 329        0x3t
	// 330        0x3t
	// 331        0x4t
	// 332        0x3t
	// 333        0x4t
	// 334        0x4t
	// 335        0x5t
	// 336        0x3t
	// 337        0x4t
	// 338        0x4t
	// 339        0x5t
	// 340        0x4t
	// 341        0x5t
	// 342        0x5t
	// 343        0x6t
	// 344        0x2t
	// 345        0x3t
	// 346        0x3t
	// 347        0x4t
	// 348        0x3t
	// 349        0x4t
	// 350        0x4t
	// 351        0x5t
	// 352        0x3t
	// 353        0x4t
	// 354        0x4t
	// 355        0x5t
	// 356        0x4t
	// 357        0x5t
	// 358        0x5t
	// 359        0x6t
	// 360        0x3t
	// 361        0x4t
	// 362        0x4t
	// 363        0x5t
	// 364        0x4t
	// 365        0x5t
	// 366        0x5t
	// 367        0x6t
	// 368        0x4t
	// 369        0x5t
	// 370        0x5t
	// 371        0x6t
	// 372        0x5t
	// 373        0x6t
	// 374        0x6t
	// 375        0x7t
	// 376        0x2t
	// 377        0x3t
	// 378        0x3t
	// 379        0x4t
	// 380        0x3t
	// 381        0x4t
	// 382        0x4t
	// 383        0x5t
	// 384        0x3t
	// 385        0x4t
	// 386        0x4t
	// 387        0x5t
	// 388        0x4t
	// 389        0x5t
	// 390        0x5t
	// 391        0x6t
	// 392        0x3t
	// 393        0x4t
	// 394        0x4t
	// 395        0x5t
	// 396        0x4t
	// 397        0x5t
	// 398        0x5t
	// 399        0x6t
	// 400        0x4t
	// 401        0x5t
	// 402        0x5t
	// 403        0x6t
	// 404        0x5t
	// 405        0x6t
	// 406        0x6t
	// 407        0x7t
	// 408        0x3t
	// 409        0x4t
	// 410        0x4t
	// 411        0x5t
	// 412        0x4t
	// 413        0x5t
	// 414        0x5t
	// 415        0x6t
	// 416        0x4t
	// 417        0x5t
	// 418        0x5t
	// 419        0x6t
	// 420        0x5t
	// 421        0x6t
	// 422        0x6t
	// 423        0x7t
	// 424        0x4t
	// 425        0x5t
	// 426        0x5t
	// 427        0x6t
	// 428        0x5t
	// 429        0x6t
	// 430        0x6t
	// 431        0x7t
	// 432        0x5t
	// 433        0x6t
	// 434        0x6t
	// 435        0x7t
	// 436        0x6t
	// 437        0x7t
	// 438        0x7t
	// 439        0x8t
	// 440    .end array-data

}
// .method private constructor <init>()V
android::icu::impl::UCaseProps::UCaseProps()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 446        value = {
	// 447            Ljava/io/IOException;
	// 448        }
	// 449    .end annotation
	// 453    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	//    .local v0, "bytes":Ljava/nio/ByteBuffer;
	this->readData(android::icu::impl::ICUBinary::getRequiredData(std::make_shared<java::lang::String>(std::make_shared<char[]>("ucase.icu"))));
	return;

}
// .method public static final getCaseLocale(Landroid/icu/util/ULocale;)I
int android::icu::impl::UCaseProps::getCaseLocale(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::impl::UCaseProps::getCaseLocale(locale->getLanguage());

}
// .method private static final getCaseLocale(Ljava/lang/String;)I
int android::icu::impl::UCaseProps::getCaseLocale(std::shared_ptr<java::lang::String> language)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	
	//    .param p0, "language"    # Ljava/lang/String;
	cVar0 = 0x5;
	cVar1 = 0x4;
	cVar2 = 0x1;
	cVar3 = 0x3;
	cVar4 = 0x2;
	if ( language->length() != cVar4 )
		goto label_cond_4f;
	if ( language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("en"))) )     
		goto label_cond_1d;
	if ( language->charAt(0x0) <= 0x74 )
		goto label_cond_1e;
label_cond_1d:
	return cVar2;
	// 532    .line 636
label_cond_1e:
	if ( language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("tr"))) )     
		goto label_cond_30;
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("az")))) )  
		goto label_cond_31;
label_cond_30:
	return cVar4;
	// 554    .line 638
label_cond_31:
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("el")))) )  
		goto label_cond_3b;
	return cVar1;
	// 567    .line 640
label_cond_3b:
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("lt")))) )  
		goto label_cond_45;
	return cVar3;
	// 580    .line 642
label_cond_45:
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("nl")))) )  
		goto label_cond_86;
	return cVar0;
	// 593    .line 645
label_cond_4f:
	if ( language->length() != cVar3 )
		goto label_cond_86;
	if ( language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("tur"))) )     
		goto label_cond_67;
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("aze")))) )  
		goto label_cond_68;
label_cond_67:
	return cVar4;
	// 622    .line 648
label_cond_68:
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("ell")))) )  
		goto label_cond_72;
	return cVar1;
	// 635    .line 650
label_cond_72:
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("lit")))) )  
		goto label_cond_7c;
	return cVar3;
	// 648    .line 652
label_cond_7c:
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("nld")))) )  
		goto label_cond_86;
	return cVar0;
	// 661    .line 656
label_cond_86:
	return cVar2;

}
// .method public static final getCaseLocale(Ljava/util/Locale;)I
int android::icu::impl::UCaseProps::getCaseLocale(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::impl::UCaseProps::getCaseLocale(locale->getLanguage());

}
// .method private static final getDelta(I)I
int android::icu::impl::UCaseProps::getDelta(int props)
{
	
	//    .param p0, "props"    # I
	return _shri((short)(props),0x7);

}
// .method private static final getExceptionsOffset(I)I
int android::icu::impl::UCaseProps::getExceptionsOffset(int props)
{
	
	//    .param p0, "props"    # I
	return _shri(props,0x5);

}
// .method private final getSlotValue(III)I
int android::icu::impl::UCaseProps::getSlotValue(int excWord,int index,int excOffset)
{
	
	int value;
	int cVar0;
	int excOffset;
	
	//    .param p1, "excWord"    # I
	//    .param p2, "index"    # I
	//    .param p3, "excOffset"    # I
	if ( ( excWord & 0x100) )     
		goto label_cond_10;
	value = this->exceptions->charAt((excOffset +  android::icu::impl::UCaseProps::slotOffset(excWord, index)));
	//    .local v1, "value":I
label_goto_f:
	return value;
	// 738    .line 182
	// 739    .end local v1    # "value":I
label_cond_10:
	cVar0 = (excOffset +  ( android::icu::impl::UCaseProps::slotOffset(excWord, index) * 0x2));
	excOffset = ( cVar0 + 0x1);
	//    .end local p3    # "excOffset":I
	//    .local v0, "excOffset":I
	value = this->exceptions->charAt(cVar0);
	//    .restart local v1    # "value":I
	value = (( value << 0x10) | this->exceptions->charAt(excOffset));
	excOffset;
	//    .end local v0    # "excOffset":I
	//    .restart local p3    # "excOffset":I
	goto label_goto_f;

}
// .method private final getSlotValueAndOffset(III)J
long long android::icu::impl::UCaseProps::getSlotValueAndOffset(int excWord,int index,int cVar0)
{
	
	int cVar0;
	long long value;
	int cVar1;
	
	//    .param p1, "excWord"    # I
	//    .param p2, "index"    # I
	//    .param p3, "excOffset"    # I
	if ( ( excWord & 0x100) )     
		goto label_cond_16;
	cVar0 = (cVar0 +  android::icu::impl::UCaseProps::slotOffset(excWord, index));
	value = (long long)(this->exceptions->charAt(cVar0));
	//    .local v2, "value":J
label_goto_10:
	return (((long long)(cVar0) << 0x20) |  value);
	// 820    .line 168
	// 821    .end local v2    # "value":J
label_cond_16:
	cVar1 = (cVar0 +  ( android::icu::impl::UCaseProps::slotOffset(excWord, index) * 0x2));
	cVar0 = ( cVar1 + 0x1);
	//    .end local p3    # "excOffset":I
	//    .local v0, "excOffset":I
	value = (long long)(this->exceptions->charAt(cVar1));
	//    .restart local v2    # "value":J
	value = ((value << 0x10) | (long long)(this->exceptions->charAt(cVar0)));
	cVar0 = cVar0;
	//    .end local v0    # "excOffset":I
	//    .restart local p3    # "excOffset":I
	goto label_goto_10;

}
// .method private static final getTypeAndIgnorableFromProps(I)I
int android::icu::impl::UCaseProps::getTypeAndIgnorableFromProps(int props)
{
	
	//    .param p0, "props"    # I
	return ( props & 0x7);

}
// .method private static final getTypeFromProps(I)I
int android::icu::impl::UCaseProps::getTypeFromProps(int props)
{
	
	//    .param p0, "props"    # I
	return ( props & 0x3);

}
// .method private static final hasSlot(II)Z
bool android::icu::impl::UCaseProps::hasSlot(int flags,int index)
{
	
	bool cVar0;
	
	//    .param p0, "flags"    # I
	//    .param p1, "index"    # I
	cVar0 = 0x1;
	if ( !(((cVar0 << index) &  flags)) )  
		goto label_cond_8;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method private final isFollowedByCasedLetter(Landroid/icu/impl/UCaseProps$ContextIterator;I)Z
bool android::icu::impl::UCaseProps::isFollowedByCasedLetter(std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter,int dir)
{
	
	bool cVar0;
	int c;
	int type;
	
	//    .param p1, "iter"    # Landroid/icu/impl/UCaseProps$ContextIterator;
	//    .param p2, "dir"    # I
	cVar0 = 0x0;
	if ( iter )     
		goto label_cond_4;
	return cVar0;
	// 929    .line 667
label_cond_4:
	iter->reset(dir);
label_cond_7:
	c = iter->next();
	//    .local v0, "c":I
	if ( c < 0 ) 
		goto label_cond_1a;
	type = this->getTypeOrIgnorable(c);
	//    .local v1, "type":I
	if ( ( type & 0x4) )     
		goto label_cond_7;
	if ( !(type) )  
		goto label_cond_19;
	return 0x1;
	// 960    .line 674
label_cond_19:
	return cVar0;
	// 964    .line 678
	// 965    .end local v1    # "type":I
label_cond_1a:
	return cVar0;

}
// .method private final isFollowedByDotAbove(Landroid/icu/impl/UCaseProps$ContextIterator;)Z
bool android::icu::impl::UCaseProps::isFollowedByDotAbove(std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter)
{
	
	int cVar0;
	bool cVar1;
	int c;
	
	//    .param p1, "iter"    # Landroid/icu/impl/UCaseProps$ContextIterator;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( iter )     
		goto label_cond_5;
	return cVar1;
	// 985    .line 788
label_cond_5:
	iter->reset(cVar0);
label_cond_8:
	c = iter->next();
	//    .local v0, "c":I
	if ( c < 0 ) 
		goto label_cond_1c;
	if ( c != 0x307 )
		goto label_cond_13;
	return cVar0;
	// 1005    .line 792
label_cond_13:
	//    .local v1, "dotType":I
	if ( this->getDotType(c) == 0x60 )
		goto label_cond_8;
	return cVar1;
	// 1020    .line 798
	// 1021    .end local v1    # "dotType":I
label_cond_1c:
	return cVar1;

}
// .method private final isFollowedByMoreAbove(Landroid/icu/impl/UCaseProps$ContextIterator;)Z
bool android::icu::impl::UCaseProps::isFollowedByMoreAbove(std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter)
{
	
	int cVar0;
	bool cVar1;
	int c;
	int dotType;
	
	//    .param p1, "iter"    # Landroid/icu/impl/UCaseProps$ContextIterator;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( iter )     
		goto label_cond_5;
	return cVar1;
	// 1041    .line 767
label_cond_5:
	iter->reset(cVar0);
label_cond_8:
	c = iter->next();
	//    .local v0, "c":I
	if ( c < 0 ) 
		goto label_cond_1c;
	dotType = this->getDotType(c);
	//    .local v1, "dotType":I
	if ( dotType != 0x40 )
		goto label_cond_17;
	return cVar0;
	// 1067    .line 771
label_cond_17:
	if ( dotType == 0x60 )
		goto label_cond_8;
	return cVar1;
	// 1076    .line 776
	// 1077    .end local v1    # "dotType":I
label_cond_1c:
	return cVar1;

}
// .method private final isPrecededBySoftDotted(Landroid/icu/impl/UCaseProps$ContextIterator;)Z
bool android::icu::impl::UCaseProps::isPrecededBySoftDotted(std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter)
{
	
	bool cVar0;
	int c;
	int dotType;
	
	//    .param p1, "iter"    # Landroid/icu/impl/UCaseProps$ContextIterator;
	cVar0 = 0x0;
	if ( iter )     
		goto label_cond_4;
	return cVar0;
	// 1095    .line 690
label_cond_4:
	iter->reset(-0x1);
label_cond_8:
	c = iter->next();
	//    .local v0, "c":I
	if ( c < 0 ) 
		goto label_cond_1d;
	dotType = this->getDotType(c);
	//    .local v1, "dotType":I
	if ( dotType != 0x20 )
		goto label_cond_18;
	return 0x1;
	// 1125    .line 694
label_cond_18:
	if ( dotType == 0x60 )
		goto label_cond_8;
	return cVar0;
	// 1134    .line 699
	// 1135    .end local v1    # "dotType":I
label_cond_1d:
	return cVar0;

}
// .method private final isPrecededBy_I(Landroid/icu/impl/UCaseProps$ContextIterator;)Z
bool android::icu::impl::UCaseProps::isPrecededBy_I(std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter)
{
	
	bool cVar0;
	int c;
	
	//    .param p1, "iter"    # Landroid/icu/impl/UCaseProps$ContextIterator;
	cVar0 = 0x0;
	if ( iter )     
		goto label_cond_4;
	return cVar0;
	// 1153    .line 745
label_cond_4:
	iter->reset(-0x1);
label_cond_8:
	c = iter->next();
	//    .local v0, "c":I
	if ( c < 0 ) 
		goto label_cond_1d;
	if ( c != 0x49 )
		goto label_cond_14;
	return 0x1;
	// 1177    .line 749
label_cond_14:
	//    .local v1, "dotType":I
	if ( this->getDotType(c) == 0x60 )
		goto label_cond_8;
	return cVar0;
	// 1192    .line 755
	// 1193    .end local v1    # "dotType":I
label_cond_1d:
	return cVar0;

}
// .method private static final propsHasException(I)Z
bool android::icu::impl::UCaseProps::propsHasException(int props)
{
	
	bool cVar1;
	
	//    .param p0, "props"    # I
	cVar1 = 0x0;
	if ( !(( props & 0x10)) )  
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method private final readData(Ljava/nio/ByteBuffer;)V
void android::icu::impl::UCaseProps::readData(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::UCaseProps_S_IsAcceptable> cVar1;
	int count;
	std::shared_ptr<java::io::IOException> cVar2;
	int i;
	int expectedTrieLength;
	int trieLength;
	std::shared_ptr<java::io::IOException> cVar3;
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1220        value = {
	// 1221            Ljava/io/IOException;
	// 1222        }
	// 1223    .end annotation
	cVar0 = 0x0;
	cVar1 = std::make_shared<android::icu::impl::UCaseProps_S_IsAcceptable>(0x0);
	android::icu::impl::ICUBinary::readHeader(bytes, 0x63415345, cVar1);
	count = bytes->getInt();
	//    .local v0, "count":I
	if ( count >= 0x10 )
		goto label_cond_1e;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("indexes[0] too small in ucase.icu")));
	// throw
	throw cVar2;
	// 1259    .line 59
label_cond_1e:
	this->indexes = std::make_shared<std::vector<int[]>>(count);
	this->indexes[cVar0] = count;
	i = 0x1;
	//    .local v2, "i":I
label_goto_27:
	if ( i >= count )
		goto label_cond_34;
	this->indexes[i] = bytes->getInt();
	i = ( i + 0x1);
	goto label_goto_27;
	// 1291    .line 67
label_cond_34:
	this->trie = android::icu::impl::Trie2_16::createFromSerialized(bytes);
	expectedTrieLength = this->indexes[0x2];
	//    .local v1, "expectedTrieLength":I
	trieLength = this->trie->getSerializedLength();
	//    .local v3, "trieLength":I
	if ( trieLength <= expectedTrieLength )
		goto label_cond_50;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ucase.icu: not enough bytes for the trie")));
	// throw
	throw cVar3;
	// 1327    .line 74
label_cond_50:
	android::icu::impl::ICUBinary::skipBytes(bytes, (expectedTrieLength - trieLength));
	count = this->indexes[0x3];
	if ( count <= 0 )
		goto label_cond_62;
	this->exceptions = android::icu::impl::ICUBinary::getString(bytes, count, cVar0);
label_cond_62:
	count = this->indexes[0x4];
	if ( count <= 0 )
		goto label_cond_6f;
	this->unfold = android::icu::impl::ICUBinary::getChars(bytes, count, cVar0);
label_cond_6f:
	return;

}
// .method private static final slotOffset(II)B
unsigned char android::icu::impl::UCaseProps::slotOffset(int flags,int index)
{
	
	//    .param p0, "flags"    # I
	//    .param p1, "index"    # I
	return android::icu::impl::UCaseProps::flagsOffset[(( (0x1 << index) + -0x1) &  flags)];

}
// .method private final strcmpMax(Ljava/lang/String;II)I
int android::icu::impl::UCaseProps::strcmpMax(std::shared_ptr<java::lang::String> s,int unfoldOffset,int max)
{
	
	int length;
	int cVar0;
	int i1;
	int unfoldOffset;
	char c2;
	int c1;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "unfoldOffset"    # I
	//    .param p3, "max"    # I
	length = s->length();
	//    .local v4, "length":I
	cVar0 = (max -  length);
	i1 = 0x0;
	//    .local v2, "i1":I
label_goto_7:
	//    .end local v2    # "i1":I
	//    .local v3, "i1":I
	//    .local v0, "c1":I
	unfoldOffset = ( unfoldOffset + 0x1);
	//    .end local p2    # "unfoldOffset":I
	//    .local v5, "unfoldOffset":I
	c2 = this->unfold[unfoldOffset];
	//    .local v1, "c2":I
	if ( c2 )     
		goto label_cond_17;
	return 0x1;
	// 1446    .line 380
label_cond_17:
	c1 = (s->charAt(i1) -  c2);
	if ( !(c1) )  
		goto label_cond_1b;
	return c1;
	// 1456    .line 384
label_cond_1b:
	length = ( length + -0x1);
	if ( length <= 0 )
		goto label_cond_22;
	i1 = ( i1 + 0x1);
	//    .end local v3    # "i1":I
	//    .restart local v2    # "i1":I
	unfoldOffset = unfoldOffset;
	//    .end local v5    # "unfoldOffset":I
	//    .restart local p2    # "unfoldOffset":I
	goto label_goto_7;
	// 1472    .line 387
	// 1473    .end local v2    # "i1":I
	// 1474    .end local p2    # "unfoldOffset":I
	// 1475    .restart local v3    # "i1":I
	// 1476    .restart local v5    # "unfoldOffset":I
label_cond_22:
	if ( !(cVar0) )  
		goto label_cond_2a;
	if ( this->unfold[unfoldOffset] )     
		goto label_cond_2b;
label_cond_2a:
	return 0x0;
	// 1490    .line 390
label_cond_2b:
	return (0 - cVar0);

}
// .method private final toUpperOrTitle(ILandroid/icu/impl/UCaseProps$ContextIterator;Ljava/lang/Appendable;IZ)I
int android::icu::impl::UCaseProps::toUpperOrTitle(int c,std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter,std::shared_ptr<java::lang::Appendable> out,int loc,bool upperNotTitle)
{
	
	int result;
	int props;
	int excOffset;
	int excWord;
	auto value;
	int full;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "c"    # I
	//    .param p2, "iter"    # Landroid/icu/impl/UCaseProps$ContextIterator;
	//    .param p3, "out"    # Ljava/lang/Appendable;
	//    .param p4, "loc"    # I
	//    .param p5, "upperNotTitle"    # Z
	result = c;
	//    .local v10, "result":I
	props = this->trie->get(c);
	//    .local v9, "props":I
	if ( android::icu::impl::UCaseProps::propsHasException(props) )     
		goto label_cond_25;
	if ( android::icu::impl::UCaseProps::getTypeFromProps(props) != 0x1 )
		goto label_cond_1f;
	result = (c + android::icu::impl::UCaseProps::getDelta(props));
label_cond_1f:
label_goto_1f:
	if ( result != c )
		goto label_cond_24;
	result = (~result);
	//    .end local v10    # "result":I
label_cond_24:
	return result;
	// 1558    .line 992
	// 1559    .restart local v10    # "result":I
label_cond_25:
	excOffset = android::icu::impl::UCaseProps::getExceptionsOffset(props);
	//    .local v3, "excOffset":I
	excOffset = ( excOffset + 0x1);
	//    .end local v3    # "excOffset":I
	//    .local v4, "excOffset":I
	excWord = this->exceptions->charAt(excOffset);
	//    .local v6, "excWord":I
	//    .local v5, "excOffset2":I
	if ( !(( excWord & 0x4000)) )  
		goto label_cond_6f;
	if ( loc != 0x2 )
		goto label_cond_46;
	if ( c != 0x69 )
		goto label_cond_46;
	return 0x130;
	// 1607    .line 1013
label_cond_46:
	if ( loc != 0x3 )
		goto label_cond_5d;
	if ( c != 0x307 )
		goto label_cond_5d;
	if ( !(this->isPrecededBySoftDotted(iter)) )  
		goto label_cond_c2;
	return 0x0;
label_cond_5d:
	excOffset;
	//    .end local v4    # "excOffset":I
	//    .restart local v3    # "excOffset":I
label_cond_5e:
label_goto_5e:
	if ( upperNotTitle )     
		goto label_cond_b5;
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, 0x3)) )  
		goto label_cond_b5;
	//    .local v8, "index":I
label_goto_68:
	result = this->getSlotValue(excWord, index, excOffset);
	goto label_goto_1f;
	// 1668    .line 1027
	// 1669    .end local v3    # "excOffset":I
	// 1670    .end local v8    # "index":I
	// 1671    .restart local v4    # "excOffset":I
label_cond_6f:
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, 0x7)) )  
		goto label_cond_c2;
	value = this->getSlotValueAndOffset(excWord, 0x7, excOffset);
	//    .local v12, "value":J
	full = ((int)(value) & 0xffff);
	//    .local v7, "full":I
	//    .end local v4    # "excOffset":I
	//    .restart local v3    # "excOffset":I
	full = _shri(full,0x4);
	excOffset = ((( (int)(_shrll(value,0x20)) + 0x1) +  ( full & 0xf)) +  ( full & 0xf));
	full = _shri(full,0x4);
	if ( !(upperNotTitle) )  
		goto label_cond_a6;
	full = ( full & 0xf);
label_goto_98:
	if ( !(full) )  
		goto label_cond_5e;
	try {
	//label_try_start_9a:
	out->append(this->exceptions, excOffset, (excOffset + full));
	//label_try_end_a5:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ae;
	}
	//    .catch Ljava/io/IOException; {:try_start_9a .. :try_end_a5} :catch_ae
	return full;
	// 1753    .line 1044
label_cond_a6:
	(excOffset +  ( full & 0xf));
	full = ( _shri(full,0x4) & 0xf);
	goto label_goto_98;
	// 1766    .line 1055
label_catch_ae:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 1778    .line 1063
	// 1779    .end local v2    # "e":Ljava/io/IOException;
	// 1780    .end local v7    # "full":I
	// 1781    .end local v12    # "value":J
label_cond_b5:
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, 0x2)) )  
		goto label_cond_be;
	//    .restart local v8    # "index":I
	goto label_goto_68;
	// 1797    .line 1067
	// 1798    .end local v8    # "index":I
label_cond_be:
	return (~c);
	// 1806    .end local v3    # "excOffset":I
	// 1807    .restart local v4    # "excOffset":I
label_cond_c2:
	excOffset;
	//    .end local v4    # "excOffset":I
	//    .restart local v3    # "excOffset":I
	goto label_goto_5e;

}
// .method public final addCaseClosure(ILandroid/icu/text/UnicodeSet;)V
void android::icu::impl::UCaseProps::addCaseClosure(int c,std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	int props;
	int delta;
	int excOffset;
	int excWord;
	int excOffset0;
	int index;
	auto value;
	int closureOffset;
	int fullLength;
	int length;
	int cVar0;
	
	//    .param p1, "c"    # I
	//    .param p2, "set"    # Landroid/icu/text/UnicodeSet;
	// switch
	{
	auto item = ( c );
	if (item == 0x49) goto label_sswitch_2d;
	if (item == 0x69) goto label_sswitch_37;
	if (item == 0x130) goto label_sswitch_41;
	if (item == 0x131) goto label_sswitch_4c;
	}
	props = this->trie->get(c);
	//    .local v13, "props":I
	if ( android::icu::impl::UCaseProps::propsHasException(props) )     
		goto label_cond_4d;
	if ( !(android::icu::impl::UCaseProps::getTypeFromProps(props)) )  
		goto label_cond_2c;
	delta = android::icu::impl::UCaseProps::getDelta(props);
	//    .local v4, "delta":I
	if ( !(delta) )  
		goto label_cond_2c;
	set->add((c + delta));
	//    .end local v4    # "delta":I
label_cond_2c:
	return;
	// 1880    .line 266
	// 1881    .end local v13    # "props":I
label_sswitch_2d:
	set->add(0x69);
	return;
	// 1894    .line 269
label_sswitch_37:
	set->add(0x49);
	return;
	// 1907    .line 273
label_sswitch_41:
	set->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("i\u0307")));
	return;
	// 1920    .line 277
label_sswitch_4c:
	return;
	// 1924    .line 297
	// 1925    .restart local v13    # "props":I
label_cond_4d:
	excOffset = android::icu::impl::UCaseProps::getExceptionsOffset(props);
	//    .local v5, "excOffset":I
	excOffset = ( excOffset + 0x1);
	//    .end local v5    # "excOffset":I
	//    .local v6, "excOffset":I
	excWord = this->exceptions->charAt(excOffset);
	//    .local v8, "excWord":I
	excOffset0 = excOffset;
	//    .local v7, "excOffset0":I
	index = 0x0;
	//    .local v10, "index":I
	excOffset;
	//    .end local v6    # "excOffset":I
	//    .restart local v5    # "excOffset":I
label_goto_62:
	if ( index >  0x3 )
		goto label_cond_7f;
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, index)) )  
		goto label_cond_7c;
	excOffset0;
	set->add(this->getSlotValue(excWord, index, excOffset0));
label_cond_7c:
	index = ( index + 0x1);
	goto label_goto_62;
	// 1999    .line 314
label_cond_7f:
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, 0x6)) )  
		goto label_cond_115;
	excOffset0;
	value = this->getSlotValueAndOffset(excWord, 0x6, excOffset0);
	//    .local v14, "value":J
	//    .local v2, "closureLength":I
	closureOffset = ( (int)(_shrll(value,0x20)) + 0x1);
	//    .end local v14    # "value":J
	//    .local v3, "closureOffset":I
label_goto_a4:
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, 0x7)) )  
		goto label_cond_f6;
	excOffset0;
	value = this->getSlotValueAndOffset(excWord, 0x7, excOffset0);
	//    .restart local v14    # "value":J
	//    .local v9, "fullLength":I
	fullLength = ((int)(value) & 0xffff);
	excOffset = (( (int)(_shrll(value,0x20)) + 0x1) + ( fullLength & 0xf));
	fullLength = _shri(fullLength,0x4);
	length = ( fullLength & 0xf);
	//    .local v11, "length":I
	if ( !(length) )  
		goto label_cond_ec;
	set->add(this->exceptions->substring(excOffset, (excOffset + length)));
label_cond_ec:
	fullLength = _shri(fullLength,0x4);
	closureOffset = ((excOffset + ( fullLength & 0xf)) +  _shri(fullLength,0x4));
	//    .end local v9    # "fullLength":I
	//    .end local v11    # "length":I
	//    .end local v14    # "value":J
label_cond_f6:
	//    .local v12, "limit":I
	index = closureOffset;
label_goto_f9:
	if ( index >= (closureOffset + closureLength) )
		goto label_cond_2c;
	cVar0 = this->exceptions->codePointAt(index);
	set->add(cVar0);
	index = (index + android::icu::text::UTF16::getCharCount(cVar0));
	goto label_goto_f9;
	// 2200    .line 320
	// 2201    .end local v2    # "closureLength":I
	// 2202    .end local v3    # "closureOffset":I
	// 2203    .end local v12    # "limit":I
label_cond_115:
	//    .restart local v2    # "closureLength":I
	closureOffset = 0x0;
	//    .restart local v3    # "closureOffset":I
	goto label_goto_a4;
	// 2214    .line 263
	// 2215    :sswitch_data_118
	// 2216    .sparse-switch
	// 2217        0x49 -> :sswitch_2d
	// 2218        0x69 -> :sswitch_37
	// 2219        0x130 -> :sswitch_41
	// 2220        0x131 -> :sswitch_4c
	// 2221    .end sparse-switch

}
// .method public final addPropertyStarts(Landroid/icu/text/UnicodeSet;)V
void android::icu::impl::UCaseProps::addPropertyStarts(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	std::shared_ptr<java::util::Iterator> trieIterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> range;
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	trieIterator = this->trie->iterator();
	//    .local v1, "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_goto_6:
	if ( !(trieIterator->hasNext()) )  
		goto label_cond_1e;
	range = trieIterator->next();
	range->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v0, "range":Landroid/icu/impl/Trie2$Range;
	if ( !(( range->leadSurrogate ^ 0x1)) )  
		goto label_cond_1e;
	set->add(range->startCodePoint);
	goto label_goto_6;
	// 2265    .line 115
	// 2266    .end local v0    # "range":Landroid/icu/impl/Trie2$Range;
label_cond_1e:
	return;

}
// .method public final addStringCaseClosure(Ljava/lang/String;Landroid/icu/text/UnicodeSet;)Z
bool android::icu::impl::UCaseProps::addStringCaseClosure(std::shared_ptr<java::lang::String> s,std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	int length;
	char unfoldRowWidth;
	int unfoldStringWidth;
	int start;
	int limit;
	int i;
	int unfoldOffset;
	int result;
	int c;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "set"    # Landroid/icu/text/UnicodeSet;
	if ( !(this->unfold) )  
		goto label_cond_6;
	if ( s )     
		goto label_cond_8;
label_cond_6:
	return 0x0;
	// 2290    .line 411
label_cond_8:
	length = s->length();
	//    .local v2, "length":I
	if ( length >  0x1 )
		goto label_cond_11;
	return 0x0;
	// 2307    .line 423
label_cond_11:
	//    .local v8, "unfoldRows":I
	unfoldRowWidth = this->unfold[0x1];
	//    .local v7, "unfoldRowWidth":I
	unfoldStringWidth = this->unfold[0x2];
	//    .local v9, "unfoldStringWidth":I
	if ( length <= unfoldStringWidth )
		goto label_cond_24;
	return 0x0;
	// 2340    .line 434
label_cond_24:
	start = 0x0;
	//    .local v5, "start":I
	limit = this->unfold[0x0];
	//    .local v3, "limit":I
label_goto_26:
	if ( start >= limit )
		goto label_cond_5f;
	i = ( (start + limit) / 0x2);
	//    .local v1, "i":I
	unfoldOffset = (( i + 0x1) * unfoldRowWidth);
	//    .local v6, "unfoldOffset":I
	result = this->strcmpMax(s, unfoldOffset, unfoldStringWidth);
	//    .local v4, "result":I
	if ( result )     
		goto label_cond_58;
	i = unfoldStringWidth;
label_goto_37:
	if ( i >= unfoldRowWidth )
		goto label_cond_56;
	if ( !(this->unfold[(unfoldOffset + i)]) )  
		goto label_cond_56;
	c = android::icu::text::UTF16::charAt(this->unfold, unfoldOffset, this->unfold->size(), i);
	//    .local v0, "c":I
	set->add(c);
	this->addCaseClosure(c, set);
	i = (i +  android::icu::text::UTF16::getCharCount(c));
	goto label_goto_37;
	// 2415    .line 450
	// 2416    .end local v0    # "c":I
label_cond_56:
	return 0x1;
	// 2422    .line 451
label_cond_58:
	if ( result >= 0 )
		goto label_cond_5c;
	limit = i;
	goto label_goto_26;
	// 2431    .line 454
label_cond_5c:
	start = ( i + 0x1);
	goto label_goto_26;
	// 2437    .line 458
	// 2438    .end local v1    # "i":I
	// 2439    .end local v4    # "result":I
	// 2440    .end local v6    # "unfoldOffset":I
label_cond_5f:
	return 0x0;

}
// .method public final fold(II)I
int android::icu::impl::UCaseProps::fold(int cVar3,int options)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int props;
	int cVar3;
	int excOffset;
	int excWord;
	
	//    .param p1, "c"    # I
	//    .param p2, "options"    # I
	cVar0 = 0x130;
	cVar1 = 0x69;
	cVar2 = 0x49;
	props = this->trie->get(cVar3);
	//    .local v4, "props":I
	if ( android::icu::impl::UCaseProps::propsHasException(props) )     
		goto label_cond_20;
	if ( android::icu::impl::UCaseProps::getTypeFromProps(props) <  0x2 )
		goto label_cond_1f;
	cVar3 = (cVar3 +  android::icu::impl::UCaseProps::getDelta(props));
label_cond_1f:
label_goto_1f:
	return cVar3;
	// 2497    .line 1143
label_cond_20:
	excOffset = android::icu::impl::UCaseProps::getExceptionsOffset(props);
	//    .local v0, "excOffset":I
	//    .end local v0    # "excOffset":I
	//    .local v1, "excOffset":I
	excWord = this->exceptions->charAt(excOffset);
	//    .local v2, "excWord":I
	if ( !((0x8000 &  excWord)) )  
		goto label_cond_44;
	if ( ( options & 0xff) )     
		goto label_cond_3c;
	if ( cVar3 != cVar2 )
		goto label_cond_39;
	return cVar1;
	// 2534    .line 1153
label_cond_39:
	if ( cVar3 != cVar0 )
		goto label_cond_44;
	return cVar3;
	// 2541    .line 1159
label_cond_3c:
	if ( cVar3 != cVar2 )
		goto label_cond_41;
	return 0x131;
	// 2550    .line 1162
label_cond_41:
	if ( cVar3 != cVar0 )
		goto label_cond_44;
	return cVar1;
	// 2557    .line 1168
label_cond_44:
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, 0x1)) )  
		goto label_cond_51;
	//    .local v3, "index":I
label_goto_4c:
	cVar3 = this->getSlotValue(excWord, index, ( excOffset + 0x1));
	goto label_goto_1f;
	// 2579    .line 1170
	// 2580    .end local v3    # "index":I
label_cond_51:
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, 0x0)) )  
		goto label_cond_59;
	//    .restart local v3    # "index":I
	goto label_goto_4c;
	// 2594    .line 1173
	// 2595    .end local v3    # "index":I
label_cond_59:
	return cVar3;

}
// .method public final getDotType(I)I
int android::icu::impl::UCaseProps::getDotType(int c)
{
	
	int props;
	
	//    .param p1, "c"    # I
	props = this->trie->get(c);
	//    .local v0, "props":I
	if ( android::icu::impl::UCaseProps::propsHasException(props) )     
		goto label_cond_f;
	return ( props & 0x60);
	// 2625    .line 477
label_cond_f:
	return ( _shri(this->exceptions->charAt(android::icu::impl::UCaseProps::getExceptionsOffset(props)),0x7) & 0x60);

}
// .method public final getType(I)I
int android::icu::impl::UCaseProps::getType(int c)
{
	
	//    .param p1, "c"    # I
	return android::icu::impl::UCaseProps::getTypeFromProps(this->trie->get(c));

}
// .method public final getTypeOrIgnorable(I)I
int android::icu::impl::UCaseProps::getTypeOrIgnorable(int c)
{
	
	//    .param p1, "c"    # I
	return android::icu::impl::UCaseProps::getTypeAndIgnorableFromProps(this->trie->get(c));

}
// .method public final hasBinaryProperty(II)Z
bool android::icu::impl::UCaseProps::hasBinaryProperty(int c,int which)
{
	
	std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> cVar0;
	bool cVar1;
	bool cVar2;
	
	//    .param p1, "c"    # I
	//    .param p2, "which"    # I
	cVar0 = 0x0;
	cVar1 = 0x1;
	cVar2 = 0x0;
	// switch
	{
	auto item = ( which );
	if (item == 0x16) goto label_sswitch_7;
	if (item == 0x1b) goto label_sswitch_1a;
	if (item == 0x1e) goto label_sswitch_10;
	if (item == 0x22) goto label_sswitch_1f;
	if (item == 0x31) goto label_sswitch_24;
	if (item == 0x32) goto label_sswitch_2d;
	if (item == 0x33) goto label_sswitch_38;
	if (item == 0x34) goto label_sswitch_48;
	if (item == 0x35) goto label_sswitch_58;
	if (item == 0x37) goto label_sswitch_68;
	}
	return cVar2;
	// 2700    .line 1291
label_sswitch_7:
	if ( cVar1 != this->getType(c) )
		goto label_cond_e;
label_goto_d:
	return cVar1;
label_cond_e:
	cVar1 = cVar2;
	goto label_goto_d;
	// 2716    .line 1293
label_sswitch_10:
	if ( 0x2 != this->getType(c) )
		goto label_cond_18;
label_goto_17:
	return cVar1;
label_cond_18:
	cVar1 = cVar2;
	goto label_goto_17;
	// 2734    .line 1295
label_sswitch_1a:
	return this->isSoftDotted(c);
	// 2742    .line 1297
label_sswitch_1f:
	return this->isCaseSensitive(c);
	// 2750    .line 1299
label_sswitch_24:
	if ( !(this->getType(c)) )  
		goto label_cond_2b;
label_goto_2a:
	return cVar1;
label_cond_2b:
	cVar1 = cVar2;
	goto label_goto_2a;
	// 2766    .line 1301
label_sswitch_2d:
	if ( !(_shri(this->getTypeOrIgnorable(c),0x2)) )  
		goto label_cond_36;
label_goto_35:
	return cVar1;
label_cond_36:
	cVar1 = cVar2;
	goto label_goto_35;
	// 2784    .line 1315
label_sswitch_38:
	android::icu::impl::UCaseProps::dummyStringBuilder->setLength(cVar2);
	if ( this->toFullLower(c, cVar0, android::icu::impl::UCaseProps::dummyStringBuilder, cVar1) < 0 ) 
		goto label_cond_46;
label_goto_45:
	return cVar1;
label_cond_46:
	cVar1 = cVar2;
	goto label_goto_45;
	// 2807    .line 1318
label_sswitch_48:
	android::icu::impl::UCaseProps::dummyStringBuilder->setLength(cVar2);
	if ( this->toFullUpper(c, cVar0, android::icu::impl::UCaseProps::dummyStringBuilder, cVar1) < 0 ) 
		goto label_cond_56;
label_goto_55:
	return cVar1;
label_cond_56:
	cVar1 = cVar2;
	goto label_goto_55;
	// 2830    .line 1321
label_sswitch_58:
	android::icu::impl::UCaseProps::dummyStringBuilder->setLength(cVar2);
	if ( this->toFullTitle(c, cVar0, android::icu::impl::UCaseProps::dummyStringBuilder, cVar1) < 0 ) 
		goto label_cond_66;
label_goto_65:
	return cVar1;
label_cond_66:
	cVar1 = cVar2;
	goto label_goto_65;
	// 2853    .line 1325
label_sswitch_68:
	android::icu::impl::UCaseProps::dummyStringBuilder->setLength(cVar2);
	if ( this->toFullLower(c, cVar0, android::icu::impl::UCaseProps::dummyStringBuilder, cVar1) >= 0 )
		goto label_cond_7d;
	if ( this->toFullUpper(c, cVar0, android::icu::impl::UCaseProps::dummyStringBuilder, cVar1) < 0 ) 
		goto label_cond_7e;
label_cond_7d:
label_goto_7d:
	return cVar1;
	// 2882    .line 1329
label_cond_7e:
	if ( this->toFullTitle(c, cVar0, android::icu::impl::UCaseProps::dummyStringBuilder, cVar1) >= 0 )
		goto label_cond_7d;
	cVar1 = cVar2;
	goto label_goto_7d;
	// 2896    .line 1289
	// 2897    :sswitch_data_88
	// 2898    .sparse-switch
	// 2899        0x16 -> :sswitch_7
	// 2900        0x1b -> :sswitch_1a
	// 2901        0x1e -> :sswitch_10
	// 2902        0x22 -> :sswitch_1f
	// 2903        0x31 -> :sswitch_24
	// 2904        0x32 -> :sswitch_2d
	// 2905        0x33 -> :sswitch_38
	// 2906        0x34 -> :sswitch_48
	// 2907        0x35 -> :sswitch_58
	// 2908        0x37 -> :sswitch_68
	// 2909    .end sparse-switch

}
// .method public final isCaseSensitive(I)Z
bool android::icu::impl::UCaseProps::isCaseSensitive(int c)
{
	
	bool cVar1;
	
	//    .param p1, "c"    # I
	cVar1 = 0x0;
	if ( !(( this->trie->get(c) & 0x8)) )  
		goto label_cond_c;
	cVar1 = 0x1;
label_cond_c:
	return cVar1;

}
// .method public final isSoftDotted(I)Z
bool android::icu::impl::UCaseProps::isSoftDotted(int c)
{
	
	bool cVar0;
	
	//    .param p1, "c"    # I
	if ( this->getDotType(c) != 0x20 )
		goto label_cond_a;
	cVar0 = 0x1;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public final toFullFolding(ILjava/lang/Appendable;I)I
int android::icu::impl::UCaseProps::toFullFolding(int c,std::shared_ptr<java::lang::Appendable> out,int options)
{
	
	int result;
	int props;
	int excOffset;
	int excWord;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	auto value;
	int full;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar1;
	
	//    .param p1, "c"    # I
	//    .param p2, "out"    # Ljava/lang/Appendable;
	//    .param p3, "options"    # I
	result = c;
	//    .local v10, "result":I
	props = this->trie->get(c);
	//    .local v9, "props":I
	if ( android::icu::impl::UCaseProps::propsHasException(props) )     
		goto label_cond_25;
	if ( android::icu::impl::UCaseProps::getTypeFromProps(props) <  0x2 )
		goto label_cond_1f;
	result = (c + android::icu::impl::UCaseProps::getDelta(props));
label_cond_1f:
label_goto_1f:
	if ( result != c )
		goto label_cond_24;
	result = (~result);
	//    .end local v10    # "result":I
label_cond_24:
	return result;
	// 3020    .line 1206
	// 3021    .restart local v10    # "result":I
label_cond_25:
	excOffset = android::icu::impl::UCaseProps::getExceptionsOffset(props);
	//    .local v3, "excOffset":I
	excOffset = ( excOffset + 0x1);
	//    .end local v3    # "excOffset":I
	//    .local v4, "excOffset":I
	excWord = this->exceptions->charAt(excOffset);
	//    .local v6, "excWord":I
	//    .local v5, "excOffset2":I
	if ( !((0x8000 &  excWord)) )  
		goto label_cond_72;
	if ( ( options & 0xff) )     
		goto label_cond_60;
	if ( c != 0x49 )
		goto label_cond_49;
	return 0x69;
	// 3072    .line 1219
label_cond_49:
	if ( c != 0x130 )
		goto label_cond_a9;
	try {
	//label_try_start_4f:
	out->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("i\u0307")));
	//label_try_end_57:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_59;
	}
	//    .catch Ljava/io/IOException; {:try_start_4f .. :try_end_57} :catch_59
	return 0x2;
	// 3095    .line 1224
label_catch_59:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 3107    .line 1230
	// 3108    .end local v2    # "e":Ljava/io/IOException;
label_cond_60:
	if ( c != 0x49 )
		goto label_cond_69;
	return 0x131;
	// 3121    .line 1233
label_cond_69:
	if ( c != 0x130 )
		goto label_cond_a9;
	return 0x69;
	// 3134    .line 1238
label_cond_72:
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, 0x7)) )  
		goto label_cond_a9;
	value = this->getSlotValueAndOffset(excWord, 0x7, excOffset);
	//    .local v12, "value":J
	full = ((int)(value) & 0xffff);
	//    .local v7, "full":I
	//    .end local v4    # "excOffset":I
	//    .restart local v3    # "excOffset":I
	excOffset = (( (int)(_shrll(value,0x20)) + 0x1) +  ( full & 0xf));
	full = ( _shri(full,0x4) & 0xf);
	if ( !(full) )  
		goto label_cond_aa;
	try {
	//label_try_start_96:
	out->append(this->exceptions, excOffset, (excOffset + full));
	//label_try_end_a1:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a2;
	}
	//    .catch Ljava/io/IOException; {:try_start_96 .. :try_end_a1} :catch_a2
	return full;
	// 3203    .line 1256
label_catch_a2:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v2    # "e":Ljava/io/IOException;
	cVar1 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 3215    .end local v2    # "e":Ljava/io/IOException;
	// 3216    .end local v3    # "excOffset":I
	// 3217    .end local v7    # "full":I
	// 3218    .end local v12    # "value":J
	// 3219    .restart local v4    # "excOffset":I
label_cond_a9:
	excOffset;
	//    .end local v4    # "excOffset":I
	//    .restart local v3    # "excOffset":I
label_cond_aa:
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, 0x1)) )  
		goto label_cond_ba;
	//    .local v8, "index":I
label_goto_b2:
	result = this->getSlotValue(excWord, index, excOffset);
	goto label_goto_1f;
	// 3249    .line 1264
	// 3250    .end local v8    # "index":I
label_cond_ba:
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, 0x0)) )  
		goto label_cond_c3;
	//    .restart local v8    # "index":I
	goto label_goto_b2;
	// 3266    .line 1267
	// 3267    .end local v8    # "index":I
label_cond_c3:
	return (~c);

}
// .method public final toFullLower(ILandroid/icu/impl/UCaseProps$ContextIterator;Ljava/lang/Appendable;I)I
int android::icu::impl::UCaseProps::toFullLower(int c,std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter,std::shared_ptr<java::lang::Appendable> out,int caseLocale)
{
	
	int result;
	int props;
	int excOffset;
	int excWord;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar1;
	auto value;
	int full;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar2;
	
	//    .param p1, "c"    # I
	//    .param p2, "iter"    # Landroid/icu/impl/UCaseProps$ContextIterator;
	//    .param p3, "out"    # Ljava/lang/Appendable;
	//    .param p4, "caseLocale"    # I
	result = c;
	//    .local v9, "result":I
	props = this->trie->get(c);
	//    .local v8, "props":I
	if ( android::icu::impl::UCaseProps::propsHasException(props) )     
		goto label_cond_1e;
	if ( android::icu::impl::UCaseProps::getTypeFromProps(props) <  0x2 )
		goto label_cond_1a;
	result = (c + android::icu::impl::UCaseProps::getDelta(props));
label_cond_1a:
label_goto_1a:
	if ( result != c )
		goto label_cond_1d;
	result = (~result);
	//    .end local v9    # "result":I
label_cond_1d:
	return result;
	// 3330    .line 834
	// 3331    .restart local v9    # "result":I
label_cond_1e:
	excOffset = android::icu::impl::UCaseProps::getExceptionsOffset(props);
	//    .local v3, "excOffset":I
	excOffset = ( excOffset + 0x1);
	//    .end local v3    # "excOffset":I
	//    .local v4, "excOffset":I
	excWord = this->exceptions->charAt(excOffset);
	//    .local v6, "excWord":I
	excOffset;
	//    .local v5, "excOffset2":I
	if ( !(( excWord & 0x4000)) )  
		goto label_cond_102;
	if ( caseLocale != 0x3 )
		goto label_cond_5a;
	if ( c == 0x49 )
		goto label_cond_3c;
	if ( c != 0x4a )
		goto label_cond_51;
label_cond_3c:
label_goto_3c:
	if ( this->isFollowedByMoreAbove(iter) )     
		goto label_cond_4c;
label_cond_44:
	if ( c == 0xcc )
		goto label_cond_4c;
	if ( c != 0xcd )
		goto label_cond_56;
label_cond_4c:
	// switch
	{
	auto item = ( c );
	if (item == 0x49) goto label_sswitch_66;
	if (item == 0x4a) goto label_sswitch_70;
	if (item == 0xcc) goto label_sswitch_84;
	if (item == 0xcd) goto label_sswitch_8e;
	if (item == 0x128) goto label_sswitch_98;
	if (item == 0x12e) goto label_sswitch_7a;
	}
	return 0x0;
	// 3406    .line 850
label_cond_51:
	if ( c != 0x12e )
		goto label_cond_44;
	goto label_goto_3c;
	// 3414    .line 853
label_cond_56:
	if ( c == 0x128 )
		goto label_cond_4c;
label_cond_5a:
	if ( caseLocale != 0x2 )
		goto label_cond_a9;
	if ( c != 0x130 )
		goto label_cond_a9;
	return 0x69;
	// 3437    .line 874
label_sswitch_66:
	try {
	//label_try_start_66:
	out->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("i\u0307")));
	return 0x2;
	// 3451    .line 877
label_sswitch_70:
	out->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("j\u0307")));
	return 0x2;
	// 3464    .line 880
label_sswitch_7a:
	out->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u012f\u0307")));
	return 0x2;
	// 3477    .line 883
label_sswitch_84:
	out->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("i\u0307\u0300")));
	return 0x3;
	// 3490    .line 886
label_sswitch_8e:
	out->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("i\u0307\u0301")));
	return 0x3;
	// 3503    .line 889
label_sswitch_98:
	out->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("i\u0307\u0303")));
	//label_try_end_a0:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a2;
	}
	//    .catch Ljava/io/IOException; {:try_start_66 .. :try_end_a0} :catch_a2
	return 0x3;
	// 3518    .line 894
label_catch_a2:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 3530    .line 907
	// 3531    .end local v2    # "e":Ljava/io/IOException;
label_cond_a9:
	if ( caseLocale != 0x2 )
		goto label_cond_bc;
	if ( c != 0x307 )
		goto label_cond_bc;
	if ( !(this->isPrecededBy_I(iter)) )  
		goto label_cond_bc;
	return 0x0;
	// 3556    .line 916
label_cond_bc:
	if ( caseLocale != 0x2 )
		goto label_cond_d2;
	if ( c != 0x49 )
		goto label_cond_d2;
	if ( !(( this->isFollowedByDotAbove(iter) ^ 0x1)) )  
		goto label_cond_d2;
	return 0x131;
	// 3583    .line 924
label_cond_d2:
	if ( c != 0x130 )
		goto label_cond_e7;
	try {
	//label_try_start_d6:
	out->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("i\u0307")));
	//label_try_end_de:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e0;
	}
	//    .catch Ljava/io/IOException; {:try_start_d6 .. :try_end_de} :catch_e0
	return 0x2;
	// 3604    .line 933
label_catch_e0:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v2    # "e":Ljava/io/IOException;
	cVar1 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 3616    .line 936
	// 3617    .end local v2    # "e":Ljava/io/IOException;
label_cond_e7:
	if ( c != 0x3a3 )
		goto label_cond_12b;
	if ( !(( this->isFollowedByCasedLetter(iter, 0x1) ^ 0x1)) )  
		goto label_cond_12b;
	if ( !(this->isFollowedByCasedLetter(iter, -0x1)) )  
		goto label_cond_12b;
	return 0x3c2;
	// 3654    .line 950
label_cond_102:
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, 0x7)) )  
		goto label_cond_12b;
	value = this->getSlotValueAndOffset(excWord, 0x7, excOffset);
	//    .local v10, "value":J
	full = ( (int)(value) & 0xf);
	//    .local v7, "full":I
	if ( !(full) )  
		goto label_cond_12b;
	excOffset = ( (int)(_shrll(value,0x20)) + 0x1);
	//    .end local v4    # "excOffset":I
	//    .restart local v3    # "excOffset":I
	try {
	//label_try_start_11a:
	out->append(this->exceptions, excOffset, (excOffset + full));
	//label_try_end_123:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_124;
	}
	//    .catch Ljava/io/IOException; {:try_start_11a .. :try_end_123} :catch_124
	return full;
	// 3707    .line 963
label_catch_124:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v2    # "e":Ljava/io/IOException;
	cVar2 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar2;
	// 3719    .line 969
	// 3720    .end local v2    # "e":Ljava/io/IOException;
	// 3721    .end local v3    # "excOffset":I
	// 3722    .end local v7    # "full":I
	// 3723    .end local v10    # "value":J
	// 3724    .restart local v4    # "excOffset":I
label_cond_12b:
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, 0x0)) )  
		goto label_cond_1a;
	result = this->getSlotValue(excWord, 0x0, excOffset);
	goto label_goto_1a;
	// 3743    .line 872
	// 3744    nop
	// 3746    :sswitch_data_13a
	// 3747    .sparse-switch
	// 3748        0x49 -> :sswitch_66
	// 3749        0x4a -> :sswitch_70
	// 3750        0xcc -> :sswitch_84
	// 3751        0xcd -> :sswitch_8e
	// 3752        0x128 -> :sswitch_98
	// 3753        0x12e -> :sswitch_7a
	// 3754    .end sparse-switch

}
// .method public final toFullTitle(ILandroid/icu/impl/UCaseProps$ContextIterator;Ljava/lang/Appendable;I)I
int android::icu::impl::UCaseProps::toFullTitle(int c,std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter,std::shared_ptr<java::lang::Appendable> out,int caseLocale)
{
	
	//    .param p1, "c"    # I
	//    .param p2, "iter"    # Landroid/icu/impl/UCaseProps$ContextIterator;
	//    .param p3, "out"    # Ljava/lang/Appendable;
	//    .param p4, "caseLocale"    # I
	return this->toUpperOrTitle(c, iter, out, caseLocale, 0x0);

}
// .method public final toFullUpper(ILandroid/icu/impl/UCaseProps$ContextIterator;Ljava/lang/Appendable;I)I
int android::icu::impl::UCaseProps::toFullUpper(int c,std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter,std::shared_ptr<java::lang::Appendable> out,int caseLocale)
{
	
	//    .param p1, "c"    # I
	//    .param p2, "iter"    # Landroid/icu/impl/UCaseProps$ContextIterator;
	//    .param p3, "out"    # Ljava/lang/Appendable;
	//    .param p4, "caseLocale"    # I
	return this->toUpperOrTitle(c, iter, out, caseLocale, 0x1);

}
// .method public final tolower(I)I
int android::icu::impl::UCaseProps::tolower(int cVar1)
{
	
	int cVar0;
	int props;
	int cVar1;
	int excOffset;
	int excWord;
	
	//    .param p1, "c"    # I
	cVar0 = 0x0;
	props = this->trie->get(cVar1);
	//    .local v3, "props":I
	if ( android::icu::impl::UCaseProps::propsHasException(props) )     
		goto label_cond_1a;
	if ( android::icu::impl::UCaseProps::getTypeFromProps(props) <  0x2 )
		goto label_cond_19;
	cVar1 = (cVar1 +  android::icu::impl::UCaseProps::getDelta(props));
label_cond_19:
label_goto_19:
	return cVar1;
	// 3856    .line 198
label_cond_1a:
	excOffset = android::icu::impl::UCaseProps::getExceptionsOffset(props);
	//    .local v0, "excOffset":I
	//    .end local v0    # "excOffset":I
	//    .local v1, "excOffset":I
	excWord = this->exceptions->charAt(excOffset);
	//    .local v2, "excWord":I
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, cVar0)) )  
		goto label_cond_19;
	cVar1 = this->getSlotValue(excWord, cVar0, ( excOffset + 0x1));
	goto label_goto_19;

}
// .method public final totitle(I)I
int android::icu::impl::UCaseProps::totitle(int cVar0)
{
	
	int props;
	int cVar0;
	int excOffset;
	int excWord;
	
	//    .param p1, "c"    # I
	props = this->trie->get(cVar0);
	//    .local v4, "props":I
	if ( android::icu::impl::UCaseProps::propsHasException(props) )     
		goto label_cond_19;
	if ( android::icu::impl::UCaseProps::getTypeFromProps(props) != 0x1 )
		goto label_cond_18;
	cVar0 = (cVar0 +  android::icu::impl::UCaseProps::getDelta(props));
label_cond_18:
label_goto_18:
	return cVar0;
	// 3931    .line 230
label_cond_19:
	excOffset = android::icu::impl::UCaseProps::getExceptionsOffset(props);
	//    .local v0, "excOffset":I
	//    .end local v0    # "excOffset":I
	//    .local v1, "excOffset":I
	excWord = this->exceptions->charAt(excOffset);
	//    .local v2, "excWord":I
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, 0x3)) )  
		goto label_cond_32;
	//    .local v3, "index":I
label_goto_2d:
	cVar0 = this->getSlotValue(excWord, index, ( excOffset + 0x1));
	goto label_goto_18;
	// 3971    .line 235
	// 3972    .end local v3    # "index":I
label_cond_32:
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, 0x2)) )  
		goto label_cond_3b;
	//    .restart local v3    # "index":I
	goto label_goto_2d;
	// 3988    .line 238
	// 3989    .end local v3    # "index":I
label_cond_3b:
	return cVar0;

}
// .method public final toupper(I)I
int android::icu::impl::UCaseProps::toupper(int cVar1)
{
	
	int cVar0;
	int props;
	int cVar1;
	int excOffset;
	int excWord;
	
	//    .param p1, "c"    # I
	cVar0 = 0x2;
	props = this->trie->get(cVar1);
	//    .local v3, "props":I
	if ( android::icu::impl::UCaseProps::propsHasException(props) )     
		goto label_cond_1a;
	if ( android::icu::impl::UCaseProps::getTypeFromProps(props) != 0x1 )
		goto label_cond_19;
	cVar1 = (cVar1 +  android::icu::impl::UCaseProps::getDelta(props));
label_cond_19:
label_goto_19:
	return cVar1;
	// 4037    .line 214
label_cond_1a:
	excOffset = android::icu::impl::UCaseProps::getExceptionsOffset(props);
	//    .local v0, "excOffset":I
	//    .end local v0    # "excOffset":I
	//    .local v1, "excOffset":I
	excWord = this->exceptions->charAt(excOffset);
	//    .local v2, "excWord":I
	if ( !(android::icu::impl::UCaseProps::hasSlot(excWord, cVar0)) )  
		goto label_cond_19;
	cVar1 = this->getSlotValue(excWord, cVar0, ( excOffset + 0x1));
	goto label_goto_19;

}


