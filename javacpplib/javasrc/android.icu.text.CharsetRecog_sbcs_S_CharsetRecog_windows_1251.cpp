// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_windows_1251.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_windows_1251.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1251::byteMap;
static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1251::ngrams;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1251::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::shared<std::vector<unsigned char[]>> cVar1;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x40);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1251::ngrams = cVar0;
	cVar1 = std::make_shared<std::vector<unsigned char[]>>(0x100);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1251::byteMap = cVar1;
	return;
	// 049    .line 919
	// 050    nop
	// 052    :array_14
	// 053    .array-data 4
	// 054        0x20e220
	// 055        0x20e2ee
	// 056        0x20e4ee
	// 057        0x20e7e0
	// 058        0x20e820
	// 059        0x20eae0
	// 060        0x20eaee
	// 061        0x20ede0
	// 062        0x20ede5
	// 063        0x20eee1
	// 064        0x20efee
	// 065        0x20eff0
	// 066        0x20f0e0
	// 067        0x20f1ee
	// 068        0x20f1f2
	// 069        0x20f2ee
	// 070        0x20f7f2
	// 071        0x20fdf2
	// 072        0xe0ede8
	// 073        0xe0f2fc
	// 074        0xe3ee20
	// 075        0xe5ebfc
	// 076        0xe5ede8
	// 077        0xe5f1f2
	// 078        0xe5f220
	// 079        0xe820ef
	// 080        0xe8e520
	// 081        0xe8e820
	// 082        0xe8ff20
	// 083        0xebe5ed
	// 084        0xebe820
	// 085        0xebfced
	// 086        0xede020
	// 087        0xede520
	// 088        0xede8e5
	// 089        0xede8ff
	// 090        0xedee20
	// 091        0xedeee2
	// 092        0xee20e2
	// 093        0xee20ef
	// 094        0xee20f1
	// 095        0xeee220
	// 096        0xeee2e0
	// 097        0xeee3ee
	// 098        0xeee920
	// 099        0xeeebfc
	// 100        0xeeec20
	// 101        0xeef1f2
	// 102        0xefeeeb
	// 103        0xeff0e5
	// 104        0xeff0e8
	// 105        0xeff0ee
	// 106        0xf0e0e2
	// 107        0xf0e5e4
	// 108        0xf1f2e0
	// 109        0xf1f2e2
	// 110        0xf1f2e8
	// 111        0xf1ff20
	// 112        0xf2e5eb
	// 113        0xf2ee20
	// 114        0xf2eef0
	// 115        0xf2fc20
	// 116        0xf7f2ee
	// 117        0xfbf520
	// 118    .end array-data
	// 120    .line 926
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
	// 251        -0x70t
	// 252        -0x7dt
	// 253        0x20t
	// 254        -0x7dt
	// 255        0x20t
	// 256        0x20t
	// 257        0x20t
	// 258        0x20t
	// 259        0x20t
	// 260        0x20t
	// 261        -0x66t
	// 262        0x20t
	// 263        -0x64t
	// 264        -0x63t
	// 265        -0x62t
	// 266        -0x61t
	// 267        -0x70t
	// 268        0x20t
	// 269        0x20t
	// 270        0x20t
	// 271        0x20t
	// 272        0x20t
	// 273        0x20t
	// 274        0x20t
	// 275        0x20t
	// 276        0x20t
	// 277        -0x66t
	// 278        0x20t
	// 279        -0x64t
	// 280        -0x63t
	// 281        -0x62t
	// 282        -0x61t
	// 283        0x20t
	// 284        -0x5et
	// 285        -0x5et
	// 286        -0x44t
	// 287        0x20t
	// 288        -0x4ct
	// 289        0x20t
	// 290        0x20t
	// 291        -0x48t
	// 292        0x20t
	// 293        -0x46t
	// 294        0x20t
	// 295        0x20t
	// 296        0x20t
	// 297        0x20t
	// 298        -0x41t
	// 299        0x20t
	// 300        0x20t
	// 301        -0x4dt
	// 302        -0x4dt
	// 303        -0x4ct
	// 304        -0x4bt
	// 305        0x20t
	// 306        0x20t
	// 307        -0x48t
	// 308        0x20t
	// 309        -0x46t
	// 310        0x20t
	// 311        -0x44t
	// 312        -0x42t
	// 313        -0x42t
	// 314        -0x41t
	// 315        -0x20t
	// 316        -0x1ft
	// 317        -0x1et
	// 318        -0x1dt
	// 319        -0x1ct
	// 320        -0x1bt
	// 321        -0x1at
	// 322        -0x19t
	// 323        -0x18t
	// 324        -0x17t
	// 325        -0x16t
	// 326        -0x15t
	// 327        -0x14t
	// 328        -0x13t
	// 329        -0x12t
	// 330        -0x11t
	// 331        -0x10t
	// 332        -0xft
	// 333        -0xet
	// 334        -0xdt
	// 335        -0xct
	// 336        -0xbt
	// 337        -0xat
	// 338        -0x9t
	// 339        -0x8t
	// 340        -0x7t
	// 341        -0x6t
	// 342        -0x5t
	// 343        -0x4t
	// 344        -0x3t
	// 345        -0x2t
	// 346        -0x1t
	// 347        -0x20t
	// 348        -0x1ft
	// 349        -0x1et
	// 350        -0x1dt
	// 351        -0x1ct
	// 352        -0x1bt
	// 353        -0x1at
	// 354        -0x19t
	// 355        -0x18t
	// 356        -0x17t
	// 357        -0x16t
	// 358        -0x15t
	// 359        -0x14t
	// 360        -0x13t
	// 361        -0x12t
	// 362        -0x11t
	// 363        -0x10t
	// 364        -0xft
	// 365        -0xet
	// 366        -0xdt
	// 367        -0xct
	// 368        -0xbt
	// 369        -0xat
	// 370        -0x9t
	// 371        -0x8t
	// 372        -0x7t
	// 373        -0x6t
	// 374        -0x5t
	// 375        -0x4t
	// 376        -0x3t
	// 377        -0x2t
	// 378        -0x1t
	// 379    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1251::CharsetRecog_sbcs_S_CharsetRecog_windows_1251()
{
	
	// 387    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs;-><init>()V
	return;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1251::getLanguage()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ru"));

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1251::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("windows-1251"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1251::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->match(det, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1251::ngrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1251::byteMap);
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


