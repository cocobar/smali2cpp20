// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_windows_1256.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_windows_1256.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1256::byteMap;
static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1256::ngrams;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1256::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::shared<std::vector<unsigned char[]>> cVar1;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x40);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1256::ngrams = cVar0;
	cVar1 = std::make_shared<std::vector<unsigned char[]>>(0x100);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1256::byteMap = cVar1;
	return;
	// 049    .line 983
	// 050    nop
	// 052    :array_14
	// 053    .array-data 4
	// 054        0x20c7e1
	// 055        0x20c7e4
	// 056        0x20c8c7
	// 057        0x20dae1
	// 058        0x20dded
	// 059        0x20e1e1
	// 060        0x20e3e4
	// 061        0x20e6c7
	// 062        0xc720c7
	// 063        0xc7c120
	// 064        0xc7ca20
	// 065        0xc7d120
	// 066        0xc7e120
	// 067        0xc7e1c3
	// 068        0xc7e1c7
	// 069        0xc7e1c8
	// 070        0xc7e1ca
	// 071        0xc7e1cc
	// 072        0xc7e1cd
	// 073        0xc7e1cf
	// 074        0xc7e1d3
	// 075        0xc7e1da
	// 076        0xc7e1de
	// 077        0xc7e1e3
	// 078        0xc7e1e6
	// 079        0xc7e1ed
	// 080        0xc7e320
	// 081        0xc7e420
	// 082        0xc7e4ca
	// 083        0xc820c7
	// 084        0xc920c7
	// 085        0xc920dd
	// 086        0xc920e1
	// 087        0xc920e3
	// 088        0xc920e6
	// 089        0xca20c7
	// 090        0xcf20c7
	// 091        0xcfc920
	// 092        0xd120c7
	// 093        0xd1c920
	// 094        0xd320c7
	// 095        0xda20c7
	// 096        0xdae1ec
	// 097        0xdded20
	// 098        0xe120c7
	// 099        0xe1c920
	// 100        0xe1ec20
	// 101        0xe1ed20
	// 102        0xe320c7
	// 103        0xe3c720
	// 104        0xe3c920
	// 105        0xe3e420
	// 106        0xe420c7
	// 107        0xe520c7
	// 108        0xe5c720
	// 109        0xe6c7e1
	// 110        0xe6e420
	// 111        0xec20c7
	// 112        0xed20c7
	// 113        0xed20e3
	// 114        0xed20e6
	// 115        0xedc920
	// 116        0xedd120
	// 117        0xede420
	// 118    .end array-data
	// 120    .line 990
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
	// 252        -0x7ft
	// 253        0x20t
	// 254        -0x7dt
	// 255        0x20t
	// 256        0x20t
	// 257        0x20t
	// 258        0x20t
	// 259        -0x78t
	// 260        0x20t
	// 261        -0x76t
	// 262        0x20t
	// 263        -0x64t
	// 264        -0x73t
	// 265        -0x72t
	// 266        -0x71t
	// 267        -0x70t
	// 268        0x20t
	// 269        0x20t
	// 270        0x20t
	// 271        0x20t
	// 272        0x20t
	// 273        0x20t
	// 274        0x20t
	// 275        -0x68t
	// 276        0x20t
	// 277        -0x66t
	// 278        0x20t
	// 279        -0x64t
	// 280        0x20t
	// 281        0x20t
	// 282        -0x61t
	// 283        0x20t
	// 284        0x20t
	// 285        0x20t
	// 286        0x20t
	// 287        0x20t
	// 288        0x20t
	// 289        0x20t
	// 290        0x20t
	// 291        0x20t
	// 292        0x20t
	// 293        -0x56t
	// 294        0x20t
	// 295        0x20t
	// 296        0x20t
	// 297        0x20t
	// 298        0x20t
	// 299        0x20t
	// 300        0x20t
	// 301        0x20t
	// 302        0x20t
	// 303        0x20t
	// 304        -0x4bt
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
	// 338        0x20t
	// 339        -0x28t
	// 340        -0x27t
	// 341        -0x26t
	// 342        -0x25t
	// 343        -0x24t
	// 344        -0x23t
	// 345        -0x22t
	// 346        -0x21t
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
	// 363        0x20t
	// 364        0x20t
	// 365        0x20t
	// 366        0x20t
	// 367        -0xct
	// 368        0x20t
	// 369        0x20t
	// 370        0x20t
	// 371        0x20t
	// 372        -0x7t
	// 373        0x20t
	// 374        -0x5t
	// 375        -0x4t
	// 376        0x20t
	// 377        0x20t
	// 378        -0x1t
	// 379    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1256::CharsetRecog_sbcs_S_CharsetRecog_windows_1256()
{
	
	// 387    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs;-><init>()V
	return;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1256::getLanguage()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ar"));

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1256::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("windows-1256"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1256::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->match(det, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1256::ngrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1256::byteMap);
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


