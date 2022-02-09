// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SCSU.smali
#include "java2ctype.h"
#include "android.icu.text.SCSU.h"

static android::icu::text::SCSU::ARMENIANINDEX = 0xfc;
static android::icu::text::SCSU::COMPRESSIONOFFSET = 0x80;
static android::icu::text::SCSU::GREEKINDEX = 0xfb;
static android::icu::text::SCSU::HALFWIDTHKATAKANAINDEX = 0xff;
static android::icu::text::SCSU::HIRAGANAINDEX = 0xfd;
static android::icu::text::SCSU::INVALIDCHAR = -0x1;
static android::icu::text::SCSU::INVALIDWINDOW = -0x1;
static android::icu::text::SCSU::IPAEXTENSIONINDEX = 0xfa;
static android::icu::text::SCSU::KATAKANAINDEX = 0xfe;
static android::icu::text::SCSU::LATININDEX = 0xf9;
static android::icu::text::SCSU::MAXINDEX = 0xff;
static android::icu::text::SCSU::NUMSTATICWINDOWS = 0x8;
static android::icu::text::SCSU::NUMWINDOWS = 0x8;
static android::icu::text::SCSU::RESERVEDINDEX = 0x0;
static android::icu::text::SCSU::SCHANGE0 = 0x10;
static android::icu::text::SCSU::SCHANGE1 = 0x11;
static android::icu::text::SCSU::SCHANGE2 = 0x12;
static android::icu::text::SCSU::SCHANGE3 = 0x13;
static android::icu::text::SCSU::SCHANGE4 = 0x14;
static android::icu::text::SCSU::SCHANGE5 = 0x15;
static android::icu::text::SCSU::SCHANGE6 = 0x16;
static android::icu::text::SCSU::SCHANGE7 = 0x17;
static android::icu::text::SCSU::SCHANGEU = 0xf;
static android::icu::text::SCSU::SDEFINE0 = 0x18;
static android::icu::text::SCSU::SDEFINE1 = 0x19;
static android::icu::text::SCSU::SDEFINE2 = 0x1a;
static android::icu::text::SCSU::SDEFINE3 = 0x1b;
static android::icu::text::SCSU::SDEFINE4 = 0x1c;
static android::icu::text::SCSU::SDEFINE5 = 0x1d;
static android::icu::text::SCSU::SDEFINE6 = 0x1e;
static android::icu::text::SCSU::SDEFINE7 = 0x1f;
static android::icu::text::SCSU::SDEFINEX = 0xb;
static android::icu::text::SCSU::SINGLEBYTEMODE = 0x0;
static android::icu::text::SCSU::SQUOTE0 = 0x1;
static android::icu::text::SCSU::SQUOTE1 = 0x2;
static android::icu::text::SCSU::SQUOTE2 = 0x3;
static android::icu::text::SCSU::SQUOTE3 = 0x4;
static android::icu::text::SCSU::SQUOTE4 = 0x5;
static android::icu::text::SCSU::SQUOTE5 = 0x6;
static android::icu::text::SCSU::SQUOTE6 = 0x7;
static android::icu::text::SCSU::SQUOTE7 = 0x8;
static android::icu::text::SCSU::SQUOTEU = 0xe;
static android::icu::text::SCSU::SRESERVED = 0xc;
static android::icu::text::SCSU::UCHANGE0 = 0xe0;
static android::icu::text::SCSU::UCHANGE1 = 0xe1;
static android::icu::text::SCSU::UCHANGE2 = 0xe2;
static android::icu::text::SCSU::UCHANGE3 = 0xe3;
static android::icu::text::SCSU::UCHANGE4 = 0xe4;
static android::icu::text::SCSU::UCHANGE5 = 0xe5;
static android::icu::text::SCSU::UCHANGE6 = 0xe6;
static android::icu::text::SCSU::UCHANGE7 = 0xe7;
static android::icu::text::SCSU::UDEFINE0 = 0xe8;
static android::icu::text::SCSU::UDEFINE1 = 0xe9;
static android::icu::text::SCSU::UDEFINE2 = 0xea;
static android::icu::text::SCSU::UDEFINE3 = 0xeb;
static android::icu::text::SCSU::UDEFINE4 = 0xec;
static android::icu::text::SCSU::UDEFINE5 = 0xed;
static android::icu::text::SCSU::UDEFINE6 = 0xee;
static android::icu::text::SCSU::UDEFINE7 = 0xef;
static android::icu::text::SCSU::UDEFINEX = 0xf1;
static android::icu::text::SCSU::UNICODEMODE = 0x1;
static android::icu::text::SCSU::UQUOTEU = 0xf0;
static android::icu::text::SCSU::URESERVED = 0xf2;
static android::icu::text::SCSU::sOffsetTable;
static android::icu::text::SCSU::sOffsets;
// .method static constructor <clinit>()V
void android::icu::text::SCSU::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::shared<std::vector<int[]>> cVar1;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x100);
	?;
	android::icu::text::SCSU::sOffsetTable = cVar0;
	cVar1 = std::make_shared<std::vector<int[]>>(0x8);
	?;
	android::icu::text::SCSU::sOffsets = cVar1;
	return;
	// 164    .line 139
	// 165    nop
	// 167    :array_14
	// 168    .array-data 4
	// 169        0x0
	// 170        0x80
	// 171        0x100
	// 172        0x180
	// 173        0x200
	// 174        0x280
	// 175        0x300
	// 176        0x380
	// 177        0x400
	// 178        0x480
	// 179        0x500
	// 180        0x580
	// 181        0x600
	// 182        0x680
	// 183        0x700
	// 184        0x780
	// 185        0x800
	// 186        0x880
	// 187        0x900
	// 188        0x980
	// 189        0xa00
	// 190        0xa80
	// 191        0xb00
	// 192        0xb80
	// 193        0xc00
	// 194        0xc80
	// 195        0xd00
	// 196        0xd80
	// 197        0xe00
	// 198        0xe80
	// 199        0xf00
	// 200        0xf80
	// 201        0x1000
	// 202        0x1080
	// 203        0x1100
	// 204        0x1180
	// 205        0x1200
	// 206        0x1280
	// 207        0x1300
	// 208        0x1380
	// 209        0x1400
	// 210        0x1480
	// 211        0x1500
	// 212        0x1580
	// 213        0x1600
	// 214        0x1680
	// 215        0x1700
	// 216        0x1780
	// 217        0x1800
	// 218        0x1880
	// 219        0x1900
	// 220        0x1980
	// 221        0x1a00
	// 222        0x1a80
	// 223        0x1b00
	// 224        0x1b80
	// 225        0x1c00
	// 226        0x1c80
	// 227        0x1d00
	// 228        0x1d80
	// 229        0x1e00
	// 230        0x1e80
	// 231        0x1f00
	// 232        0x1f80
	// 233        0x2000
	// 234        0x2080
	// 235        0x2100
	// 236        0x2180
	// 237        0x2200
	// 238        0x2280
	// 239        0x2300
	// 240        0x2380
	// 241        0x2400
	// 242        0x2480
	// 243        0x2500
	// 244        0x2580
	// 245        0x2600
	// 246        0x2680
	// 247        0x2700
	// 248        0x2780
	// 249        0x2800
	// 250        0x2880
	// 251        0x2900
	// 252        0x2980
	// 253        0x2a00
	// 254        0x2a80
	// 255        0x2b00
	// 256        0x2b80
	// 257        0x2c00
	// 258        0x2c80
	// 259        0x2d00
	// 260        0x2d80
	// 261        0x2e00
	// 262        0x2e80
	// 263        0x2f00
	// 264        0x2f80
	// 265        0x3000
	// 266        0x3080
	// 267        0x3100
	// 268        0x3180
	// 269        0x3200
	// 270        0x3280
	// 271        0x3300
	// 272        0x3380
	// 273        0xe000
	// 274        0xe080
	// 275        0xe100
	// 276        0xe180
	// 277        0xe200
	// 278        0xe280
	// 279        0xe300
	// 280        0xe380
	// 281        0xe400
	// 282        0xe480
	// 283        0xe500
	// 284        0xe580
	// 285        0xe600
	// 286        0xe680
	// 287        0xe700
	// 288        0xe780
	// 289        0xe800
	// 290        0xe880
	// 291        0xe900
	// 292        0xe980
	// 293        0xea00
	// 294        0xea80
	// 295        0xeb00
	// 296        0xeb80
	// 297        0xec00
	// 298        0xec80
	// 299        0xed00
	// 300        0xed80
	// 301        0xee00
	// 302        0xee80
	// 303        0xef00
	// 304        0xef80
	// 305        0xf000
	// 306        0xf080
	// 307        0xf100
	// 308        0xf180
	// 309        0xf200
	// 310        0xf280
	// 311        0xf300
	// 312        0xf380
	// 313        0xf400
	// 314        0xf480
	// 315        0xf500
	// 316        0xf580
	// 317        0xf600
	// 318        0xf680
	// 319        0xf700
	// 320        0xf780
	// 321        0xf800
	// 322        0xf880
	// 323        0xf900
	// 324        0xf980
	// 325        0xfa00
	// 326        0xfa80
	// 327        0xfb00
	// 328        0xfb80
	// 329        0xfc00
	// 330        0xfc80
	// 331        0xfd00
	// 332        0xfd80
	// 333        0xfe00
	// 334        0xfe80
	// 335        0xff00
	// 336        0xff80
	// 337        0x0
	// 338        0x0
	// 339        0x0
	// 340        0x0
	// 341        0x0
	// 342        0x0
	// 343        0x0
	// 344        0x0
	// 345        0x0
	// 346        0x0
	// 347        0x0
	// 348        0x0
	// 349        0x0
	// 350        0x0
	// 351        0x0
	// 352        0x0
	// 353        0x0
	// 354        0x0
	// 355        0x0
	// 356        0x0
	// 357        0x0
	// 358        0x0
	// 359        0x0
	// 360        0x0
	// 361        0x0
	// 362        0x0
	// 363        0x0
	// 364        0x0
	// 365        0x0
	// 366        0x0
	// 367        0x0
	// 368        0x0
	// 369        0x0
	// 370        0x0
	// 371        0x0
	// 372        0x0
	// 373        0x0
	// 374        0x0
	// 375        0x0
	// 376        0x0
	// 377        0x0
	// 378        0x0
	// 379        0x0
	// 380        0x0
	// 381        0x0
	// 382        0x0
	// 383        0x0
	// 384        0x0
	// 385        0x0
	// 386        0x0
	// 387        0x0
	// 388        0x0
	// 389        0x0
	// 390        0x0
	// 391        0x0
	// 392        0x0
	// 393        0x0
	// 394        0x0
	// 395        0x0
	// 396        0x0
	// 397        0x0
	// 398        0x0
	// 399        0x0
	// 400        0x0
	// 401        0x0
	// 402        0x0
	// 403        0x0
	// 404        0x0
	// 405        0x0
	// 406        0x0
	// 407        0x0
	// 408        0x0
	// 409        0x0
	// 410        0x0
	// 411        0x0
	// 412        0x0
	// 413        0x0
	// 414        0x0
	// 415        0x0
	// 416        0x0
	// 417        0x0
	// 418        0xc0
	// 419        0x250
	// 420        0x370
	// 421        0x530
	// 422        0x3040
	// 423        0x30a0
	// 424        0xff60
	// 425    .end array-data
	// 427    .line 175
	// 428    :array_218
	// 429    .array-data 4
	// 430        0x0
	// 431        0x80
	// 432        0x100
	// 433        0x300
	// 434        0x2000
	// 435        0x2080
	// 436        0x2100
	// 437        0x3000
	// 438    .end array-data

}


