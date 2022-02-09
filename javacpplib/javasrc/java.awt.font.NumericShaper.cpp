// CPP L:\smali2cpp20\x64\Release\out\java\awt\font\NumericShaper.smali
#include "java2ctype.h"
#include "java.awt.font.NumericShaper_S_1.h"
#include "java.awt.font.NumericShaper_S_Range.h"
#include "java.awt.font.NumericShaper.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.ClassCastException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Integer.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Arrays.h"
#include "java.util.EnumSet.h"
#include "java.util.Set.h"

static java::awt::font::NumericShaper::ALL_RANGES = 0x7ffff;
static java::awt::font::NumericShaper::ARABIC = 0x2;
static java::awt::font::NumericShaper::ARABIC_KEY = 0x1;
static java::awt::font::NumericShaper::BENGALI = 0x10;
static java::awt::font::NumericShaper::BENGALI_KEY = 0x4;
static java::awt::font::NumericShaper::BSEARCH_THRESHOLD = 0x3;
static java::awt::font::NumericShaper::CONTEXTUAL_MASK = -0x80000000;
static java::awt::font::NumericShaper::DEVANAGARI = 0x8;
static java::awt::font::NumericShaper::DEVANAGARI_KEY = 0x3;
static java::awt::font::NumericShaper::EASTERN_ARABIC = 0x4;
static java::awt::font::NumericShaper::EASTERN_ARABIC_KEY = 0x2;
static java::awt::font::NumericShaper::ETHIOPIC = 0x10000;
static java::awt::font::NumericShaper::ETHIOPIC_KEY = 0x10;
static java::awt::font::NumericShaper::EUROPEAN = 0x1;
static java::awt::font::NumericShaper::EUROPEAN_KEY = 0x0;
static java::awt::font::NumericShaper::GUJARATI = 0x40;
static java::awt::font::NumericShaper::GUJARATI_KEY = 0x6;
static java::awt::font::NumericShaper::GURMUKHI = 0x20;
static java::awt::font::NumericShaper::GURMUKHI_KEY = 0x5;
static java::awt::font::NumericShaper::KANNADA = 0x400;
static java::awt::font::NumericShaper::KANNADA_KEY = 0xa;
static java::awt::font::NumericShaper::KHMER = 0x20000;
static java::awt::font::NumericShaper::KHMER_KEY = 0x11;
static java::awt::font::NumericShaper::LAO = 0x2000;
static java::awt::font::NumericShaper::LAO_KEY = 0xd;
static java::awt::font::NumericShaper::MALAYALAM = 0x800;
static java::awt::font::NumericShaper::MALAYALAM_KEY = 0xb;
static java::awt::font::NumericShaper::MONGOLIAN = 0x40000;
static java::awt::font::NumericShaper::MONGOLIAN_KEY = 0x12;
static java::awt::font::NumericShaper::MYANMAR = 0x8000;
static java::awt::font::NumericShaper::MYANMAR_KEY = 0xf;
static java::awt::font::NumericShaper::NUM_KEYS = 0x13;
static java::awt::font::NumericShaper::ORIYA = 0x80;
static java::awt::font::NumericShaper::ORIYA_KEY = 0x7;
static java::awt::font::NumericShaper::TAMIL = 0x100;
static java::awt::font::NumericShaper::TAMIL_KEY = 0x8;
static java::awt::font::NumericShaper::TELUGU = 0x200;
static java::awt::font::NumericShaper::TELUGU_KEY = 0x9;
static java::awt::font::NumericShaper::THAI = 0x1000;
static java::awt::font::NumericShaper::THAI_KEY = 0xc;
static java::awt::font::NumericShaper::TIBETAN = 0x4000;
static java::awt::font::NumericShaper::TIBETAN_KEY = 0xe;
static java::awt::font::NumericShaper::bases;
static java::awt::font::NumericShaper::contexts;
static java::awt::font::NumericShaper::ctCache = 0x0;
static java::awt::font::NumericShaper::ctCacheLimit = 0x0;
static java::awt::font::NumericShaper::serialVersionUID = -0x6f5695fe5d200b84L;
static java::awt::font::NumericShaper::strongTable;
// .method static constructor <clinit>()V
void java::awt::font::NumericShaper::static_cinit()
{
	
	std::shared<std::vector<char[]>> cVar0;
	std::shared<std::vector<char[]>> cVar1;
	std::shared<std::vector<int[]>> cVar2;
	
	cVar0 = std::make_shared<std::vector<char[]>>(0x13);
	?;
	java::awt::font::NumericShaper::bases = cVar0;
	cVar1 = std::make_shared<std::vector<char[]>>(0x27);
	?;
	java::awt::font::NumericShaper::contexts = cVar1;
	java::awt::font::NumericShaper::ctCache = 0x0;
	java::awt::font::NumericShaper::ctCacheLimit = ( java::awt::font::NumericShaper::contexts->size() + -0x2);
	cVar2 = std::make_shared<std::vector<int[]>>(0x258);
	?;
	java::awt::font::NumericShaper::strongTable = cVar2;
	return;
	// 189    .line 498
	// 190    :array_26
	// 191    .array-data 2
	// 192        0x0s
	// 193        0x630s
	// 194        0x6c0s
	// 195        0x936s
	// 196        0x9b6s
	// 197        0xa36s
	// 198        0xab6s
	// 199        0xb36s
	// 200        0xbb6s
	// 201        0xc36s
	// 202        0xcb6s
	// 203        0xd36s
	// 204        0xe20s
	// 205        0xea0s
	// 206        0xef0s
	// 207        0x1010s
	// 208        0x1338s
	// 209        0x17b0s
	// 210        0x17e0s
	// 211    .end array-data
	// 213    .line 522
	// 214    nop
	// 216    :array_3e
	// 217    .array-data 2
	// 218        0x0s
	// 219        0x300s
	// 220        0x600s
	// 221        0x780s
	// 222        0x600s
	// 223        0x780s
	// 224        0x900s
	// 225        0x980s
	// 226        0x980s
	// 227        0xa00s
	// 228        0xa00s
	// 229        0xa80s
	// 230        0xa80s
	// 231        0xb00s
	// 232        0xb00s
	// 233        0xb80s
	// 234        0xb80s
	// 235        0xc00s
	// 236        0xc00s
	// 237        0xc80s
	// 238        0xc80s
	// 239        0xd00s
	// 240        0xd00s
	// 241        0xd80s
	// 242        0xe00s
	// 243        0xe80s
	// 244        0xe80s
	// 245        0xf00s
	// 246        0xf00s
	// 247        0x1000s
	// 248        0x1000s
	// 249        0x1080s
	// 250        0x1200s
	// 251        0x1380s
	// 252        0x1780s
	// 253        0x1800s
	// 254        0x1800s
	// 255        0x1900s
	// 256        -0x1s
	// 257    .end array-data
	// 259    .line 603
	// 260    nop
	// 262    :array_6a
	// 263    .array-data 4
	// 264        0x0
	// 265        0x41
	// 266        0x5b
	// 267        0x61
	// 268        0x7b
	// 269        0xaa
	// 270        0xab
	// 271        0xb5
	// 272        0xb6
	// 273        0xba
	// 274        0xbb
	// 275        0xc0
	// 276        0xd7
	// 277        0xd8
	// 278        0xf7
	// 279        0xf8
	// 280        0x2b9
	// 281        0x2bb
	// 282        0x2c2
	// 283        0x2d0
	// 284        0x2d2
	// 285        0x2e0
	// 286        0x2e5
	// 287        0x2ee
	// 288        0x2ef
	// 289        0x370
	// 290        0x374
	// 291        0x376
	// 292        0x37e
	// 293        0x386
	// 294        0x387
	// 295        0x388
	// 296        0x3f6
	// 297        0x3f7
	// 298        0x483
	// 299        0x48a
	// 300        0x58a
	// 301        0x5be
	// 302        0x5bf
	// 303        0x5c0
	// 304        0x5c1
	// 305        0x5c3
	// 306        0x5c4
	// 307        0x5c6
	// 308        0x5c7
	// 309        0x5d0
	// 310        0x600
	// 311        0x608
	// 312        0x609
	// 313        0x60b
	// 314        0x60c
	// 315        0x60d
	// 316        0x60e
	// 317        0x61b
	// 318        0x64b
	// 319        0x66d
	// 320        0x670
	// 321        0x671
	// 322        0x6d6
	// 323        0x6e5
	// 324        0x6e7
	// 325        0x6ee
	// 326        0x6f0
	// 327        0x6fa
	// 328        0x711
	// 329        0x712
	// 330        0x730
	// 331        0x74d
	// 332        0x7a6
	// 333        0x7b1
	// 334        0x7eb
	// 335        0x7f4
	// 336        0x7f6
	// 337        0x7fa
	// 338        0x816
	// 339        0x81a
	// 340        0x81b
	// 341        0x824
	// 342        0x825
	// 343        0x828
	// 344        0x829
	// 345        0x830
	// 346        0x859
	// 347        0x85e
	// 348        0x8e4
	// 349        0x903
	// 350        0x93a
	// 351        0x93b
	// 352        0x93c
	// 353        0x93d
	// 354        0x941
	// 355        0x949
	// 356        0x94d
	// 357        0x94e
	// 358        0x951
	// 359        0x958
	// 360        0x962
	// 361        0x964
	// 362        0x981
	// 363        0x982
	// 364        0x9bc
	// 365        0x9bd
	// 366        0x9c1
	// 367        0x9c7
	// 368        0x9cd
	// 369        0x9ce
	// 370        0x9e2
	// 371        0x9e6
	// 372        0x9f2
	// 373        0x9f4
	// 374        0x9fb
	// 375        0xa03
	// 376        0xa3c
	// 377        0xa3e
	// 378        0xa41
	// 379        0xa59
	// 380        0xa70
	// 381        0xa72
	// 382        0xa75
	// 383        0xa83
	// 384        0xabc
	// 385        0xabd
	// 386        0xac1
	// 387        0xac9
	// 388        0xacd
	// 389        0xad0
	// 390        0xae2
	// 391        0xae6
	// 392        0xaf1
	// 393        0xb02
	// 394        0xb3c
	// 395        0xb3d
	// 396        0xb3f
	// 397        0xb40
	// 398        0xb41
	// 399        0xb47
	// 400        0xb4d
	// 401        0xb57
	// 402        0xb62
	// 403        0xb66
	// 404        0xb82
	// 405        0xb83
	// 406        0xbc0
	// 407        0xbc1
	// 408        0xbcd
	// 409        0xbd0
	// 410        0xbf3
	// 411        0xc01
	// 412        0xc3e
	// 413        0xc41
	// 414        0xc46
	// 415        0xc58
	// 416        0xc62
	// 417        0xc66
	// 418        0xc78
	// 419        0xc7f
	// 420        0xcbc
	// 421        0xcbd
	// 422        0xccc
	// 423        0xcd5
	// 424        0xce2
	// 425        0xce6
	// 426        0xd41
	// 427        0xd46
	// 428        0xd4d
	// 429        0xd4e
	// 430        0xd62
	// 431        0xd66
	// 432        0xdca
	// 433        0xdcf
	// 434        0xdd2
	// 435        0xdd8
	// 436        0xe31
	// 437        0xe32
	// 438        0xe34
	// 439        0xe40
	// 440        0xe47
	// 441        0xe4f
	// 442        0xeb1
	// 443        0xeb2
	// 444        0xeb4
	// 445        0xebd
	// 446        0xec8
	// 447        0xed0
	// 448        0xf18
	// 449        0xf1a
	// 450        0xf35
	// 451        0xf36
	// 452        0xf37
	// 453        0xf38
	// 454        0xf39
	// 455        0xf3e
	// 456        0xf71
	// 457        0xf7f
	// 458        0xf80
	// 459        0xf85
	// 460        0xf86
	// 461        0xf88
	// 462        0xf8d
	// 463        0xfbe
	// 464        0xfc6
	// 465        0xfc7
	// 466        0x102d
	// 467        0x1031
	// 468        0x1032
	// 469        0x1038
	// 470        0x1039
	// 471        0x103b
	// 472        0x103d
	// 473        0x103f
	// 474        0x1058
	// 475        0x105a
	// 476        0x105e
	// 477        0x1061
	// 478        0x1071
	// 479        0x1075
	// 480        0x1082
	// 481        0x1083
	// 482        0x1085
	// 483        0x1087
	// 484        0x108d
	// 485        0x108e
	// 486        0x109d
	// 487        0x109e
	// 488        0x135d
	// 489        0x1360
	// 490        0x1390
	// 491        0x13a0
	// 492        0x1400
	// 493        0x1401
	// 494        0x1680
	// 495        0x1681
	// 496        0x169b
	// 497        0x16a0
	// 498        0x1712
	// 499        0x1720
	// 500        0x1732
	// 501        0x1735
	// 502        0x1752
	// 503        0x1760
	// 504        0x1772
	// 505        0x1780
	// 506        0x17b4
	// 507        0x17b6
	// 508        0x17b7
	// 509        0x17be
	// 510        0x17c6
	// 511        0x17c7
	// 512        0x17c9
	// 513        0x17d4
	// 514        0x17db
	// 515        0x17dc
	// 516        0x17dd
	// 517        0x17e0
	// 518        0x17f0
	// 519        0x1810
	// 520        0x18a9
	// 521        0x18aa
	// 522        0x1920
	// 523        0x1923
	// 524        0x1927
	// 525        0x1929
	// 526        0x1932
	// 527        0x1933
	// 528        0x1939
	// 529        0x1946
	// 530        0x19de
	// 531        0x1a00
	// 532        0x1a17
	// 533        0x1a19
	// 534        0x1a56
	// 535        0x1a57
	// 536        0x1a58
	// 537        0x1a61
	// 538        0x1a62
	// 539        0x1a63
	// 540        0x1a65
	// 541        0x1a6d
	// 542        0x1a73
	// 543        0x1a80
	// 544        0x1b00
	// 545        0x1b04
	// 546        0x1b34
	// 547        0x1b35
	// 548        0x1b36
	// 549        0x1b3b
	// 550        0x1b3c
	// 551        0x1b3d
	// 552        0x1b42
	// 553        0x1b43
	// 554        0x1b6b
	// 555        0x1b74
	// 556        0x1b80
	// 557        0x1b82
	// 558        0x1ba2
	// 559        0x1ba6
	// 560        0x1ba8
	// 561        0x1baa
	// 562        0x1bab
	// 563        0x1bac
	// 564        0x1be6    # 1.0008E-41f
	// 565        0x1be7    # 1.001E-41f
	// 566        0x1be8
	// 567        0x1bea
	// 568        0x1bed
	// 569        0x1bee
	// 570        0x1bef
	// 571        0x1bf2
	// 572        0x1c2c
	// 573        0x1c34
	// 574        0x1c36
	// 575        0x1c3b
	// 576        0x1cd0
	// 577        0x1cd3
	// 578        0x1cd4
	// 579        0x1ce1
	// 580        0x1ce2
	// 581        0x1ce9
	// 582        0x1ced
	// 583        0x1cee
	// 584        0x1cf4
	// 585        0x1cf5
	// 586        0x1dc0
	// 587        0x1e00
	// 588        0x1fbd
	// 589        0x1fbe
	// 590        0x1fbf
	// 591        0x1fc2
	// 592        0x1fcd
	// 593        0x1fd0
	// 594        0x1fdd
	// 595        0x1fe0
	// 596        0x1fed
	// 597        0x1ff2
	// 598        0x1ffd
	// 599        0x200e
	// 600        0x2010
	// 601        0x2071
	// 602        0x2074
	// 603        0x207f
	// 604        0x2080
	// 605        0x2090
	// 606        0x20a0
	// 607        0x2102
	// 608        0x2103
	// 609        0x2107
	// 610        0x2108
	// 611        0x210a
	// 612        0x2114
	// 613        0x2115
	// 614        0x2116
	// 615        0x2119
	// 616        0x211e
	// 617        0x2124
	// 618        0x2125
	// 619        0x2126
	// 620        0x2127
	// 621        0x2128
	// 622        0x2129
	// 623        0x212a
	// 624        0x212e
	// 625        0x212f
	// 626        0x213a
	// 627        0x213c
	// 628        0x2140
	// 629        0x2145
	// 630        0x214a
	// 631        0x214e
	// 632        0x2150
	// 633        0x2160
	// 634        0x2189
	// 635        0x2336
	// 636        0x237b
	// 637        0x2395
	// 638        0x2396
	// 639        0x249c
	// 640        0x24ea
	// 641        0x26ac
	// 642        0x26ad
	// 643        0x2800
	// 644        0x2900
	// 645        0x2c00
	// 646        0x2ce5
	// 647        0x2ceb
	// 648        0x2cef
	// 649        0x2cf2
	// 650        0x2cf9
	// 651        0x2d00
	// 652        0x2d7f
	// 653        0x2d80
	// 654        0x2de0
	// 655        0x3005
	// 656        0x3008
	// 657        0x3021
	// 658        0x302a
	// 659        0x3031
	// 660        0x3036
	// 661        0x3038
	// 662        0x303d
	// 663        0x3041
	// 664        0x3099
	// 665        0x309d
	// 666        0x30a0
	// 667        0x30a1
	// 668        0x30fb
	// 669        0x30fc
	// 670        0x31c0
	// 671        0x31f0
	// 672        0x321d
	// 673        0x3220
	// 674        0x3250
	// 675        0x3260
	// 676        0x327c
	// 677        0x327f
	// 678        0x32b1
	// 679        0x32c0
	// 680        0x32cc
	// 681        0x32d0
	// 682        0x3377
	// 683        0x337b
	// 684        0x33de
	// 685        0x33e0
	// 686        0x33ff
	// 687        0x3400
	// 688        0x4dc0
	// 689        0x4e00
	// 690        0xa490
	// 691        0xa4d0
	// 692        0xa60d
	// 693        0xa610
	// 694        0xa66f
	// 695        0xa680
	// 696        0xa69f
	// 697        0xa6a0
	// 698        0xa6f0
	// 699        0xa6f2
	// 700        0xa700
	// 701        0xa722
	// 702        0xa788
	// 703        0xa789
	// 704        0xa802
	// 705        0xa803
	// 706        0xa806
	// 707        0xa807
	// 708        0xa80b
	// 709        0xa80c
	// 710        0xa825
	// 711        0xa827
	// 712        0xa828
	// 713        0xa830
	// 714        0xa838
	// 715        0xa840
	// 716        0xa874
	// 717        0xa880
	// 718        0xa8c4
	// 719        0xa8ce
	// 720        0xa8e0
	// 721        0xa8f2
	// 722        0xa926
	// 723        0xa92e
	// 724        0xa947
	// 725        0xa952
	// 726        0xa980
	// 727        0xa983
	// 728        0xa9b3
	// 729        0xa9b4
	// 730        0xa9b6
	// 731        0xa9ba
	// 732        0xa9bc
	// 733        0xa9bd
	// 734        0xaa29
	// 735        0xaa2f
	// 736        0xaa31
	// 737        0xaa33
	// 738        0xaa35
	// 739        0xaa40
	// 740        0xaa43
	// 741        0xaa44
	// 742        0xaa4c
	// 743        0xaa4d
	// 744        0xaab0
	// 745        0xaab1
	// 746        0xaab2
	// 747        0xaab5
	// 748        0xaab7
	// 749        0xaab9
	// 750        0xaabe
	// 751        0xaac0
	// 752        0xaac1
	// 753        0xaac2
	// 754        0xaaec
	// 755        0xaaee
	// 756        0xaaf6
	// 757        0xab01
	// 758        0xabe5
	// 759        0xabe6
	// 760        0xabe8
	// 761        0xabe9
	// 762        0xabed
	// 763        0xabf0
	// 764        0xfb1e
	// 765        0xfb1f
	// 766        0xfb29
	// 767        0xfb2a
	// 768        0xfd3e
	// 769        0xfd50
	// 770        0xfdfd
	// 771        0xfe70
	// 772        0xfeff
	// 773        0xff21
	// 774        0xff3b
	// 775        0xff41
	// 776        0xff5b
	// 777        0xff66
	// 778        0xffe0
	// 779        0x10000
	// 780        0x10101
	// 781        0x10102
	// 782        0x10140
	// 783        0x101d0
	// 784        0x101fd
	// 785        0x10280
	// 786        0x1091f
	// 787        0x10920
	// 788        0x10a01
	// 789        0x10a10
	// 790        0x10a38
	// 791        0x10a40
	// 792        0x10b39
	// 793        0x10b40
	// 794        0x10e60
	// 795        0x11000
	// 796        0x11001
	// 797        0x11002
	// 798        0x11038
	// 799        0x11047
	// 800        0x11052
	// 801        0x11066
	// 802        0x11080
	// 803        0x11082
	// 804        0x110b3
	// 805        0x110b7
	// 806        0x110b9
	// 807        0x110bb
	// 808        0x11100
	// 809        0x11103
	// 810        0x11127
	// 811        0x1112c
	// 812        0x1112d
	// 813        0x11136
	// 814        0x11180
	// 815        0x11182
	// 816        0x111b6
	// 817        0x111bf
	// 818        0x116ab
	// 819        0x116ac
	// 820        0x116ad
	// 821        0x116ae
	// 822        0x116b0
	// 823        0x116b6
	// 824        0x116b7
	// 825        0x116c0    # 9.9997E-41f
	// 826        0x16f8f
	// 827        0x16f93
	// 828        0x1d167
	// 829        0x1d16a
	// 830        0x1d173
	// 831        0x1d183
	// 832        0x1d185
	// 833        0x1d18c
	// 834        0x1d1aa
	// 835        0x1d1ae
	// 836        0x1d200
	// 837        0x1d360
	// 838        0x1d6db
	// 839        0x1d6dc
	// 840        0x1d715
	// 841        0x1d716
	// 842        0x1d74f
	// 843        0x1d750
	// 844        0x1d789
	// 845        0x1d78a
	// 846        0x1d7c3
	// 847        0x1d7c4
	// 848        0x1d7ce
	// 849        0x1ee00
	// 850        0x1eef0
	// 851        0x1f110
	// 852        0x1f16a
	// 853        0x1f170
	// 854        0x1f300
	// 855        0x1f48c
	// 856        0x1f48d
	// 857        0x1f524
	// 858        0x1f525
	// 859        0x20000
	// 860        0xe0001
	// 861        0xf0000
	// 862        0x10fffe
	// 863        0x10ffff
	// 864    .end array-data

}
// .method private constructor <init>(II)V
java::awt::font::NumericShaper::NumericShaper(int key,int mask)
{
	
	//    .param p1, "key"    # I
	//    .param p2, "mask"    # I
	// 874    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->currentRange = java::awt::font::NumericShaper_S_Range::EUROPEAN;
	this->stCache = 0x0;
	this->key = key;
	this->mask = mask;
	return;

}
// .method private constructor <init>(Ljava/awt/font/NumericShaper$Range;Ljava/util/Set;)V
java::awt::font::NumericShaper::NumericShaper(std::shared_ptr<java::awt::font::NumericShaper_S_Range> defaultContext,std::shared_ptr<java::util::Set<java::awt::font::NumericShaper_S_Range>> ranges)
{
	
	std::shared_ptr<std::vector<java::awt::font::NumericShaper_S_Range>> cVar0;
	std::shared_ptr<java::awt::font::NumericShaper_S_1> cVar1;
	
	//    .param p1, "defaultContext"    # Ljava/awt/font/NumericShaper$Range;
	//    .annotation system Ldalvik/annotation/Signature;
	// 900        value = {
	// 901            "(",
	// 902            "Ljava/awt/font/NumericShaper$Range;",
	// 903            "Ljava/util/Set",
	// 904            "<",
	// 905            "Ljava/awt/font/NumericShaper$Range;",
	// 906            ">;)V"
	// 907        }
	// 908    .end annotation
	//    .local p2, "ranges":Ljava/util/Set;, "Ljava/util/Set<Ljava/awt/font/NumericShaper$Range;>;"
	// 913    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->currentRange = java::awt::font::NumericShaper_S_Range::EUROPEAN;
	this->stCache = 0x0;
	this->shapingRange = defaultContext;
	this->rangeSet = java::util::EnumSet::copyOf(ranges);
	if ( !(this->rangeSet->contains(java::awt::font::NumericShaper_S_Range::EASTERN_ARABIC)) )  
		goto label_cond_2d;
	if ( !(this->rangeSet->contains(java::awt::font::NumericShaper_S_Range::ARABIC)) )  
		goto label_cond_2d;
	this->rangeSet->remove(java::awt::font::NumericShaper_S_Range::ARABIC);
label_cond_2d:
	if ( !(this->rangeSet->contains(java::awt::font::NumericShaper_S_Range::TAI_THAM_THAM)) )  
		goto label_cond_48;
	if ( !(this->rangeSet->contains(java::awt::font::NumericShaper_S_Range::TAI_THAM_HORA)) )  
		goto label_cond_48;
	this->rangeSet->remove(java::awt::font::NumericShaper_S_Range::TAI_THAM_HORA);
label_cond_48:
	cVar0 = this->rangeSet->toArray(std::make_shared<std::vector<std::vector<java::awt::font::NumericShaper_S_Range>>>(this->rangeSet->size()));
	cVar0->checkCast("std::vector<java::awt::font::NumericShaper_S_Range>");
	this->rangeArray = cVar0;
	if ( this->rangeArray->size() <= 0x3 )
		goto label_cond_6a;
	cVar1 = std::make_shared<java::awt::font::NumericShaper_S_1>(this);
	java::util::Arrays::sort(this->rangeArray, cVar1);
label_cond_6a:
	return;

}
// .method private checkParams([CII)V
void java::awt::font::NumericShaper::checkParams(std::shared_ptr<char[]> text,int start,int count)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "text"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "count"    # I
	if ( text )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("text is null")));
	// throw
	throw cVar0;
	// 1060    .line 1189
label_cond_b:
	if ( start < 0 ) 
		goto label_cond_10;
	if ( start <= text->size() )
		goto label_cond_2b;
label_cond_10:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("bad start or count for text of length ")))->append(text->size())->toString());
	// throw
	throw cVar1;
	// 1099    .line 1191
label_cond_2b:
	if ( (start + count) < 0 ) 
		goto label_cond_10;
	if ( (start + count) >  text->size() )
		goto label_cond_10;
	return;

}
// .method private static getContextKey(C)I
int java::awt::font::NumericShaper::getContextKey(char c)
{
	
	int cVar1;
	
	//    .param p0, "c"    # C
	cVar1 = 0x0;
	if ( c >= java::awt::font::NumericShaper::contexts[java::awt::font::NumericShaper::ctCache] )
		goto label_cond_1c;
label_goto_9:
	if ( java::awt::font::NumericShaper::ctCache <= 0 )
		goto label_cond_3d;
	if ( c >= java::awt::font::NumericShaper::contexts[java::awt::font::NumericShaper::ctCache] )
		goto label_cond_3d;
	java::awt::font::NumericShaper::ctCache = ( java::awt::font::NumericShaper::ctCache + -0x1);
	goto label_goto_9;
	// 1154    .line 555
label_cond_1c:
	if ( c <  java::awt::font::NumericShaper::contexts[( java::awt::font::NumericShaper::ctCache + 0x1)] )
		goto label_cond_3d;
label_goto_26:
	if ( java::awt::font::NumericShaper::ctCache >= java::awt::font::NumericShaper::ctCacheLimit )
		goto label_cond_3d;
	if ( c <  java::awt::font::NumericShaper::contexts[( java::awt::font::NumericShaper::ctCache + 0x1)] )
		goto label_cond_3d;
	java::awt::font::NumericShaper::ctCache = ( java::awt::font::NumericShaper::ctCache + 0x1);
	goto label_goto_26;
	// 1192    .line 560
label_cond_3d:
	if ( ( java::awt::font::NumericShaper::ctCache & 0x1) )     
		goto label_cond_47;
	cVar1 = ( java::awt::font::NumericShaper::ctCache / 0x2);
label_cond_47:
	return cVar1;

}
// .method public static getContextualShaper(I)Ljava/awt/font/NumericShaper;
std::shared_ptr<java::awt::font::NumericShaper> java::awt::font::NumericShaper::getContextualShaper(int ranges)
{
	
	std::shared_ptr<java::awt::font::NumericShaper> cVar0;
	
	//    .param p0, "ranges"    # I
	cVar0 = std::make_shared<java::awt::font::NumericShaper>(0x0, (ranges |  -0x80000000));
	return cVar0;

}
// .method public static getContextualShaper(II)Ljava/awt/font/NumericShaper;
std::shared_ptr<java::awt::font::NumericShaper> java::awt::font::NumericShaper::getContextualShaper(int ranges,int defaultContext)
{
	
	std::shared_ptr<java::awt::font::NumericShaper> cVar0;
	
	//    .param p0, "ranges"    # I
	//    .param p1, "defaultContext"    # I
	//    .local v0, "key":I
	cVar0 = std::make_shared<java::awt::font::NumericShaper>(java::awt::font::NumericShaper::getKeyFromMask(defaultContext), (ranges |  -0x80000000));
	return cVar0;

}
// .method public static getContextualShaper(Ljava/util/Set;)Ljava/awt/font/NumericShaper;
std::shared_ptr<java::awt::font::NumericShaper> java::awt::font::NumericShaper::getContextualShaper(std::shared_ptr<java::util::Set<java::awt::font::NumericShaper_S_Range>> ranges)
{
	
	std::shared_ptr<java::awt::font::NumericShaper> shaper;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1256        value = {
	// 1257            "(",
	// 1258            "Ljava/util/Set",
	// 1259            "<",
	// 1260            "Ljava/awt/font/NumericShaper$Range;",
	// 1261            ">;)",
	// 1262            "Ljava/awt/font/NumericShaper;"
	// 1263        }
	// 1264    .end annotation
	//    .local p0, "ranges":Ljava/util/Set;, "Ljava/util/Set<Ljava/awt/font/NumericShaper$Range;>;"
	shaper = std::make_shared<java::awt::font::NumericShaper>(java::awt::font::NumericShaper_S_Range::EUROPEAN, ranges);
	//    .local v0, "shaper":Ljava/awt/font/NumericShaper;
	shaper->mask = -0x80000000;
	return shaper;

}
// .method public static getContextualShaper(Ljava/util/Set;Ljava/awt/font/NumericShaper$Range;)Ljava/awt/font/NumericShaper;
std::shared_ptr<java::awt::font::NumericShaper> java::awt::font::NumericShaper::getContextualShaper(std::shared_ptr<java::util::Set<java::awt::font::NumericShaper_S_Range>> ranges,std::shared_ptr<java::awt::font::NumericShaper_S_Range> defaultContext)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::awt::font::NumericShaper> shaper;
	
	//    .param p1, "defaultContext"    # Ljava/awt/font/NumericShaper$Range;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1289        value = {
	// 1290            "(",
	// 1291            "Ljava/util/Set",
	// 1292            "<",
	// 1293            "Ljava/awt/font/NumericShaper$Range;",
	// 1294            ">;",
	// 1295            "Ljava/awt/font/NumericShaper$Range;",
	// 1296            ")",
	// 1297            "Ljava/awt/font/NumericShaper;"
	// 1298        }
	// 1299    .end annotation
	//    .local p0, "ranges":Ljava/util/Set;, "Ljava/util/Set<Ljava/awt/font/NumericShaper$Range;>;"
	if ( defaultContext )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 1313    .line 1045
label_cond_8:
	shaper = std::make_shared<java::awt::font::NumericShaper>(defaultContext, ranges);
	//    .local v0, "shaper":Ljava/awt/font/NumericShaper;
	shaper->mask = -0x80000000;
	return shaper;

}
// .method private static getHighBit(I)I
int java::awt::font::NumericShaper::getHighBit(int cVar3)
{
	
	int cVar3;
	int bit;
	
	//    .param p0, "value"    # I
	if ( cVar3 > 0 ) 
		goto label_cond_5;
	return -0x20;
	// 1342    .line 1449
label_cond_5:
	//    .local v0, "bit":I
	if ( cVar3 <  0x10000 )
		goto label_cond_e;
	cVar3 = _shri(cVar3,0x10);
	bit = 0x10;
label_cond_e:
	if ( cVar3 <  0x100 )
		goto label_cond_16;
	cVar3 = _shri(cVar3,0x8);
	bit = ( bit + 0x8);
label_cond_16:
	if ( cVar3 <  0x10 )
		goto label_cond_1e;
	cVar3 = _shri(cVar3,0x4);
	bit = ( bit + 0x4);
label_cond_1e:
	if ( cVar3 <  0x4 )
		goto label_cond_25;
	cVar3 = _shri(cVar3,0x2);
	bit = ( bit + 0x2);
label_cond_25:
	if ( cVar3 <  0x2 )
		goto label_cond_2a;
label_cond_2a:
	return 0x0;

}
// .method private static getKeyFromMask(I)I
int java::awt::font::NumericShaper::getKeyFromMask(int mask)
{
	
	int cVar0;
	int cVar1;
	int key;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p0, "mask"    # I
	cVar0 = 0x13;
	cVar1 = 0x1;
	key = 0x0;
	//    .local v0, "key":I
label_goto_4:
	if ( key >= cVar0 )
		goto label_cond_e;
	if ( ((cVar1 << key) &  mask) )     
		goto label_cond_e;
	key = ( key + 0x1);
	goto label_goto_4;
	// 1436    .line 929
label_cond_e:
	if ( key == cVar0 )
		goto label_cond_16;
	if ( !(((~(cVar1 << key)) &  mask)) )  
		goto label_cond_34;
label_cond_16:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid shaper: ")))->append(java::lang::Integer::toHexString(mask))->toString());
	// throw
	throw cVar2;
	// 1478    .line 932
label_cond_34:
	return key;

}
// .method public static getShaper(I)Ljava/awt/font/NumericShaper;
std::shared_ptr<java::awt::font::NumericShaper> java::awt::font::NumericShaper::getShaper(int singleRange)
{
	
	std::shared_ptr<java::awt::font::NumericShaper> cVar0;
	
	//    .param p0, "singleRange"    # I
	//    .local v0, "key":I
	cVar0 = std::make_shared<java::awt::font::NumericShaper>(java::awt::font::NumericShaper::getKeyFromMask(singleRange), singleRange);
	return cVar0;

}
// .method public static getShaper(Ljava/awt/font/NumericShaper$Range;)Ljava/awt/font/NumericShaper;
std::shared_ptr<java::awt::font::NumericShaper> java::awt::font::NumericShaper::getShaper(std::shared_ptr<java::awt::font::NumericShaper_S_Range> singleRange)
{
	
	std::shared_ptr<java::awt::font::NumericShaper> cVar0;
	
	//    .param p0, "singleRange"    # Ljava/awt/font/NumericShaper$Range;
	cVar0 = std::make_shared<java::awt::font::NumericShaper>(singleRange, java::util::EnumSet::of(singleRange));
	return cVar0;

}
// .method private isStrongDirectional(C)Z
bool java::awt::font::NumericShaper::isStrongDirectional(char c)
{
	
	int cachedIndex;
	
	//    .param p1, "c"    # C
	cachedIndex = this->stCache;
	//    .local v0, "cachedIndex":I
	if ( c >= java::awt::font::NumericShaper::strongTable[cachedIndex] )
		goto label_cond_18;
	cachedIndex = java::awt::font::NumericShaper::search(c, java::awt::font::NumericShaper::strongTable, 0x0, cachedIndex);
label_cond_f:
label_goto_f:
	if ( ( cachedIndex & 0x1) != 0x1 )
		goto label_cond_2f;
	//    .local v1, "val":Z
label_goto_15:
	this->stCache = cachedIndex;
	return val;
	// 1563    .line 915
	// 1564    .end local v1    # "val":Z
label_cond_18:
	if ( c <  java::awt::font::NumericShaper::strongTable[( cachedIndex + 0x1)] )
		goto label_cond_f;
	cachedIndex = java::awt::font::NumericShaper::search(c, java::awt::font::NumericShaper::strongTable, ( cachedIndex + 0x1), ( (java::awt::font::NumericShaper::strongTable->size() -  cachedIndex) + -0x1));
	goto label_goto_f;
	// 1595    .line 919
label_cond_2f:
	//    .restart local v1    # "val":Z
	goto label_goto_15;

}
// .method private rangeForCodePoint(I)Ljava/awt/font/NumericShaper$Range;
std::shared_ptr<java::awt::font::NumericShaper_S_Range> java::awt::font::NumericShaper::rangeForCodePoint(int codepoint)
{
	
	std::shared_ptr<std::vector<java::awt::font::NumericShaper_S_Range>> ranges;
	int lo;
	int hi;
	int mid;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> range;
	int i;
	
	//    .param p1, "codepoint"    # I
	if ( !(java::awt::font::NumericShaper_S_Range::-wrap0(this->currentRange, codepoint)) )  
		goto label_cond_b;
	return this->currentRange;
	// 1622    .line 571
label_cond_b:
	ranges = this->rangeArray;
	//    .local v5, "ranges":[Ljava/awt/font/NumericShaper$Range;
	if ( ranges->size() <= 0x3 )
		goto label_cond_32;
	lo = 0x0;
	//    .local v2, "lo":I
	hi = ( ranges->size() + -0x1);
	//    .local v0, "hi":I
label_goto_15:
	if ( lo >  hi )
		goto label_cond_44;
	mid = ( (lo + hi) / 0x2);
	//    .local v3, "mid":I
	range = ranges[mid];
	//    .local v4, "range":Ljava/awt/font/NumericShaper$Range;
	if ( codepoint >= java::awt::font::NumericShaper_S_Range::-get2(range) )
		goto label_cond_26;
	hi = ( mid + -0x1);
	goto label_goto_15;
	// 1670    .line 580
label_cond_26:
	if ( codepoint <  java::awt::font::NumericShaper_S_Range::-get1(range) )
		goto label_cond_2f;
	lo = ( mid + 0x1);
	goto label_goto_15;
	// 1683    .line 583
label_cond_2f:
	this->currentRange = range;
	return range;
	// 1690    .line 588
	// 1691    .end local v0    # "hi":I
	// 1692    .end local v2    # "lo":I
	// 1693    .end local v3    # "mid":I
	// 1694    .end local v4    # "range":Ljava/awt/font/NumericShaper$Range;
label_cond_32:
	i = 0x0;
	//    .local v1, "i":I
label_goto_33:
	if ( i >= ranges->size() )
		goto label_cond_44;
	if ( !(java::awt::font::NumericShaper_S_Range::-wrap0(ranges[i], codepoint)) )  
		goto label_cond_41;
	return ranges[i];
	// 1718    .line 588
label_cond_41:
	i = ( i + 0x1);
	goto label_goto_33;
	// 1724    .line 594
	// 1725    .end local v1    # "i":I
label_cond_44:
	return java::awt::font::NumericShaper_S_Range::EUROPEAN;

}
// .method private static search(I[III)I
int java::awt::font::NumericShaper::search(int value,std::shared_ptr<int[]> array,int start,int length)
{
	
	int cVar0;
	int power;
	int extra;
	int probe;
	int index;
	
	//    .param p0, "value"    # I
	//    .param p1, "array"    # [I
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	cVar0 = 0x1;
	power = (cVar0 << java::awt::font::NumericShaper::getHighBit(length));
	//    .local v2, "power":I
	extra = (length - power);
	//    .local v0, "extra":I
	probe = power;
	//    .local v3, "probe":I
	index = start;
	//    .local v1, "index":I
	if ( value <  array[(start + extra)] )
		goto label_cond_13;
	index = (start + extra);
label_cond_13:
label_goto_13:
	if ( probe <= cVar0 )
		goto label_cond_1f;
	probe = _shri(probe,0x1);
	if ( value <  array[(index + probe)] )
		goto label_cond_13;
	index = (index +  probe);
	goto label_goto_13;
	// 1792    .line 1500
label_cond_1f:
	return index;

}
// .method private declared-synchronized shapeContextually([CIII)V
void java::awt::font::NumericShaper::shapeContextually(std::shared_ptr<char[]> text,int start,int count,int cVar0)
{
	
	int cVar0;
	int lastkey;
	char base;
	int minDigit;
	std::shared_ptr<java::awt::font::NumericShaper> cVar1;
	int i;
	char c;
	int newkey;
	int cVar3;
	
	//    .param p1, "text"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "count"    # I
	//    .param p4, "ctxKey"    # I
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( (this->mask &  (0x1 << cVar0)) )     
		goto label_cond_9;
	cVar0 = 0x0;
label_cond_9:
	lastkey = cVar0;
	//    .local v4, "lastkey":I
	base = java::awt::font::NumericShaper::bases[cVar0];
	//    .local v0, "base":I
	if ( cVar0 != 0x10 )
		goto label_cond_51;
	minDigit = 0x31;
	//    .local v5, "minDigit":C
label_goto_14:
	cVar1 = java::awt::font::NumericShaper();
	cVar1->monitor_enter();
	//label_try_end_17:
	}
	catch (...){
		goto label_catchall_74;
	}
	//    .catchall {:try_start_1 .. :try_end_17} :catchall_74
	i = start;
	//    .local v3, "i":I
	//    .local v2, "e":I
label_goto_1a:
	if ( i >= (start + count) )
		goto label_cond_6e;
	try {
	//label_try_start_1c:
	c = text[i];
	//    .local v1, "c":C
	if ( c <  minDigit )
		goto label_cond_29;
	if ( c >  0x39 )
		goto label_cond_29;
	text[i] = (char)((c + base));
label_cond_29:
	if ( !(this->isStrongDirectional(c)) )  
		goto label_cond_4e;
	newkey = java::awt::font::NumericShaper::getContextKey(c);
	//    .local v6, "newkey":I
	if ( newkey == lastkey )
		goto label_cond_4e;
	lastkey = newkey;
	cVar3 = newkey;
	if ( !(( this->mask & 0x4)) )  
		goto label_cond_54;
	if ( newkey == 0x1 )
		goto label_cond_43;
	if ( newkey != 0x2 )
		goto label_cond_54;
label_cond_43:
	cVar3 = 0x2;
label_cond_44:
label_goto_44:
	base = java::awt::font::NumericShaper::bases[cVar3];
	if ( cVar3 != 0x10 )
		goto label_cond_6b;
	minDigit = 0x31;
	//    .end local v6    # "newkey":I
label_cond_4e:
label_goto_4e:
	i = ( i + 0x1);
	goto label_goto_1a;
	// 1944    .line 1277
	// 1945    .end local v1    # "c":C
	// 1946    .end local v2    # "e":I
	// 1947    .end local v3    # "i":I
	// 1948    .end local v5    # "minDigit":C
label_cond_51:
	minDigit = 0x30;
	//    .restart local v5    # "minDigit":C
	goto label_goto_14;
	// 1955    .line 1296
	// 1956    .restart local v1    # "c":C
	// 1957    .restart local v2    # "e":I
	// 1958    .restart local v3    # "i":I
	// 1959    .restart local v6    # "newkey":I
label_cond_54:
	if ( !(( this->mask & 0x2)) )  
		goto label_cond_62;
	if ( newkey == 0x1 )
		goto label_cond_60;
	if ( newkey != 0x2 )
		goto label_cond_62;
label_cond_60:
	cVar3 = 0x1;
	goto label_goto_44;
	// 1983    .line 1300
label_cond_62:
	//label_try_end_64:
	}
	catch (...){
		goto label_catchall_71;
	}
	//    .catchall {:try_start_1c .. :try_end_64} :catchall_71
	if ( (this->mask &  (0x1 << newkey)) )     
		goto label_cond_44;
	cVar3 = 0x0;
	goto label_goto_44;
	// 2002    .line 1306
label_cond_6b:
	minDigit = 0x30;
	goto label_goto_4e;
	// 2008    .end local v1    # "c":C
	// 2009    .end local v6    # "newkey":I
label_cond_6e:
	try {
	//label_try_start_6e:
	cVar1->monitor_exit();
	//label_try_end_6f:
	}
	catch (...){
		goto label_catchall_74;
	}
	//    .catchall {:try_start_6e .. :try_end_6f} :catchall_74
	this->monitor_exit();
	return;
	// 2021    .line 1279
label_catchall_71:
	// move-exception
	
	try {
	//label_try_start_72:
	cVar1->monitor_exit();
	// throw
	throw;
	// 2029    :try_end_74
	// 2030    .catchall {:try_start_72 .. :try_end_74} :catchall_74
	// 2032    .end local v0    # "base":I
	// 2033    .end local v2    # "e":I
	// 2034    .end local v3    # "i":I
	// 2035    .end local v4    # "lastkey":I
	// 2036    .end local v5    # "minDigit":C
label_catchall_74:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private shapeContextually([CIILjava/awt/font/NumericShaper$Range;)V
void java::awt::font::NumericShaper::shapeContextually(std::shared_ptr<char[]> text,int start,int count,std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar0)
{
	
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar0;
	auto lastKey;
	char minDigit;
	int i;
	char c;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar1;
	
	//    .param p1, "text"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "count"    # I
	//    .param p4, "ctxKey"    # Ljava/awt/font/NumericShaper$Range;
	if ( !(cVar0) )  
		goto label_cond_c;
	if ( !(( this->rangeSet->contains(cVar0) ^ 0x1)) )  
		goto label_cond_e;
label_cond_c:
	cVar0 = java::awt::font::NumericShaper_S_Range::EUROPEAN;
label_cond_e:
	lastKey = cVar0;
	//    .local v4, "lastKey":Ljava/awt/font/NumericShaper$Range;
	//    .local v0, "base":I
	minDigit = (char)(( cVar0->getNumericBase() + 0x30));
	//    .local v5, "minDigit":C
	//    .local v2, "end":I
	i = start;
	//    .local v3, "i":I
label_goto_1d:
	if ( i >= (start + count) )
		goto label_cond_48;
	c = text[i];
	//    .local v1, "c":C
	if ( c <  minDigit )
		goto label_cond_2f;
	if ( c >  0x39 )
		goto label_cond_2f;
	text[i] = (char)((c + java::awt::font::NumericShaper_S_Range::-wrap1(cVar0)));
label_cond_2c:
label_goto_2c:
	i = ( i + 0x1);
	goto label_goto_1d;
	// 2127    .line 1329
label_cond_2f:
	if ( !(this->isStrongDirectional(c)) )  
		goto label_cond_2c;
	cVar1 = this->rangeForCodePoint(c);
	if ( cVar1 == lastKey )
		goto label_cond_2c;
	lastKey = cVar1;
	java::awt::font::NumericShaper_S_Range::-wrap1(cVar1);
	minDigit = (char)(( cVar1->getNumericBase() + 0x30));
	goto label_goto_2c;
	// 2162    .line 1338
	// 2163    .end local v1    # "c":C
label_cond_48:
	return;

}
// .method private shapeNonContextually([CII)V
void java::awt::font::NumericShaper::shapeNonContextually(std::shared_ptr<char[]> text,int start,int count)
{
	
	int i;
	char c;
	
	//    .param p1, "text"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "count"    # I
	0x30;
	//    .local v4, "minDigit":C
	if ( !(this->shapingRange) )  
		goto label_cond_2a;
	//    .local v0, "base":I
	//    .end local v4    # "minDigit":C
label_cond_15:
label_goto_15:
	i = start;
	//    .local v3, "i":I
	//    .local v2, "e":I
label_goto_18:
	if ( i >= (start + count) )
		goto label_cond_3a;
	c = text[i];
	//    .local v1, "c":C
	if ( c <  (char)(( this->shapingRange->getNumericBase() + 0x30)) )
		goto label_cond_27;
	if ( c >  0x39 )
		goto label_cond_27;
	text[i] = (char)((c + java::awt::font::NumericShaper_S_Range::-wrap1(this->shapingRange)));
label_cond_27:
	i = ( i + 0x1);
	goto label_goto_18;
	// 2240    .line 1251
	// 2241    .end local v0    # "base":I
	// 2242    .end local v1    # "c":C
	// 2243    .end local v2    # "e":I
	// 2244    .end local v3    # "i":I
	// 2245    .restart local v4    # "minDigit":C
label_cond_2a:
	java::awt::font::NumericShaper::bases[this->key];
	//    .restart local v0    # "base":I
	if ( this->key != 0x10 )
		goto label_cond_15;
	(char)(0x31);
	//    .local v4, "minDigit":C
	goto label_goto_15;
	// 2269    .line 1262
	// 2270    .end local v4    # "minDigit":C
	// 2271    .restart local v2    # "e":I
	// 2272    .restart local v3    # "i":I
label_cond_3a:
	return;

}
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void java::awt::font::NumericShaper::writeObject(std::shared_ptr<java::io::ObjectOutputStream> stream)
{
	
	int index;
	
	//    .param p1, "stream"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2281        value = {
	// 2282            Ljava/io/IOException;
	// 2283        }
	// 2284    .end annotation
	if ( !(this->shapingRange) )  
		goto label_cond_e;
	index = java::awt::font::NumericShaper_S_Range::-wrap2(this->shapingRange);
	//    .local v0, "index":I
	if ( index < 0 ) 
		goto label_cond_e;
	this->key = index;
	//    .end local v0    # "index":I
label_cond_e:
	if ( !(this->rangeSet) )  
		goto label_cond_1d;
	this->mask = (this->mask |  java::awt::font::NumericShaper_S_Range::-wrap3(this->rangeSet));
label_cond_1d:
	stream->defaultWriteObject();
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool java::awt::font::NumericShaper::equals(std::shared_ptr<java::lang::Object> o)
{
	
	bool cVar0;
	bool cVar5;
	std::shared_ptr<java::awt::font::NumericShaper> cVar2;
	std::shared_ptr<java::util::Set> rhs;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "o"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar5 = 0x0;
	if ( !(o) )  
		goto label_cond_8a;
	try {
	//label_try_start_4:
	cVar2 = o;
	cVar2->checkCast("java::awt::font::NumericShaper");
	rhs = cVar2;
	//    .local v2, "rhs":Ljava/awt/font/NumericShaper;
	if ( !(this->rangeSet) )  
		goto label_cond_53;
	if ( !(rhs->rangeSet) )  
		goto label_cond_2f;
	if ( this->isContextual() != rhs->isContextual() )
		goto label_cond_2d;
	if ( !(this->rangeSet->equals(rhs->rangeSet)) )  
		goto label_cond_2d;
	if ( this->shapingRange != rhs->shapingRange )
		goto label_cond_2b;
label_goto_2a:
	return cVar0;
label_cond_2b:
	cVar0 = cVar5;
	goto label_goto_2a;
label_cond_2d:
	cVar0 = cVar5;
	goto label_goto_2a;
	// 2413    .line 1385
label_cond_2f:
	if ( this->isContextual() != rhs->isContextual() )
		goto label_cond_52;
	if ( !(this->rangeSet->equals(java::awt::font::NumericShaper_S_Range::-wrap5(rhs->mask))) )  
		goto label_cond_52;
	if ( this->shapingRange != java::awt::font::NumericShaper_S_Range::-wrap4(rhs->key) )
		goto label_cond_52;
	cVar5 = cVar0;
label_cond_52:
	return cVar5;
	// 2458    .line 1388
label_cond_53:
	if ( !(rhs->rangeSet) )  
		goto label_cond_7b;
	//    .local v3, "rset":Ljava/util/Set;, "Ljava/util/Set<Ljava/awt/font/NumericShaper$Range;>;"
	//    .local v4, "srange":Ljava/awt/font/NumericShaper$Range;
	if ( this->isContextual() != rhs->isContextual() )
		goto label_cond_7a;
	if ( !(java::awt::font::NumericShaper_S_Range::-wrap5(this->mask)->equals(rhs->rangeSet)) )  
		goto label_cond_7a;
	if ( java::awt::font::NumericShaper_S_Range::-wrap4(this->key) != rhs->shapingRange )
		goto label_cond_7a;
	cVar5 = cVar0;
label_cond_7a:
	return cVar5;
	// 2512    .line 1395
	// 2513    .end local v3    # "rset":Ljava/util/Set;, "Ljava/util/Set<Ljava/awt/font/NumericShaper$Range;>;"
	// 2514    .end local v4    # "srange":Ljava/awt/font/NumericShaper$Range;
label_cond_7b:
	if ( rhs->mask != this->mask )
		goto label_cond_88;
	//label_try_end_85:
	}
	catch (java::lang::ClassCastException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_89;
	}
	//    .catch Ljava/lang/ClassCastException; {:try_start_4 .. :try_end_85} :catch_89
	if ( rhs->key != this->key )
		goto label_cond_88;
	cVar5 = cVar0;
label_cond_88:
	return cVar5;
	// 2535    .line 1397
	// 2536    .end local v2    # "rhs":Ljava/awt/font/NumericShaper;
label_catch_89:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_8a:
	return cVar5;

}
// .method public getRangeSet()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::awt::font::NumericShaper_S_Range>> java::awt::font::NumericShaper::getRangeSet()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2548        value = {
	// 2549            "()",
	// 2550            "Ljava/util/Set",
	// 2551            "<",
	// 2552            "Ljava/awt/font/NumericShaper$Range;",
	// 2553            ">;"
	// 2554        }
	// 2555    .end annotation
	if ( !(this->rangeSet) )  
		goto label_cond_b;
	return java::util::EnumSet::copyOf(this->rangeSet);
	// 2572    .line 1238
label_cond_b:
	return java::awt::font::NumericShaper_S_Range::-wrap5(this->mask);

}
// .method public getRanges()I
int java::awt::font::NumericShaper::getRanges()
{
	
	return (this->mask &  0x7fffffff);

}
// .method public hashCode()I
int java::awt::font::NumericShaper::hashCode()
{
	
	int hash;
	
	hash = this->mask;
	//    .local v0, "hash":I
	if ( !(this->rangeSet) )  
		goto label_cond_10;
label_cond_10:
	return hash;

}
// .method public isContextual()Z
bool java::awt::font::NumericShaper::isContextual()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( !((this->mask &  -0x80000000)) )  
		goto label_cond_9;
	cVar1 = 0x1;
label_cond_9:
	return cVar1;

}
// .method public shape([CII)V
void java::awt::font::NumericShaper::shape(std::shared_ptr<char[]> text,int start,int count)
{
	
	//    .param p1, "text"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "count"    # I
	this->checkParams(text, start, count);
	if ( !(this->isContextual()) )  
		goto label_cond_19;
	if ( this->rangeSet )     
		goto label_cond_13;
	this->shapeContextually(text, start, count, this->key);
label_goto_12:
	return;
	// 2681    .line 1106
label_cond_13:
	this->shapeContextually(text, start, count, this->shapingRange);
	goto label_goto_12;
	// 2689    .line 1109
label_cond_19:
	this->shapeNonContextually(text, start, count);
	goto label_goto_12;

}
// .method public shape([CIII)V
void java::awt::font::NumericShaper::shape(std::shared_ptr<char[]> text,int start,int count,int context)
{
	
	int ctxKey;
	
	//    .param p1, "text"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "count"    # I
	//    .param p4, "context"    # I
	this->checkParams(text, start, count);
	if ( !(this->isContextual()) )  
		goto label_cond_1f;
	ctxKey = java::awt::font::NumericShaper::getKeyFromMask(context);
	//    .local v0, "ctxKey":I
	if ( this->rangeSet )     
		goto label_cond_15;
	this->shapeContextually(text, start, count, ctxKey);
	//    .end local v0    # "ctxKey":I
label_goto_14:
	return;
	// 2733    .line 1138
	// 2734    .restart local v0    # "ctxKey":I
label_cond_15:
	this->shapeContextually(text, start, count, java::awt::font::NumericShaper_S_Range::values({const[class].FS-Param})[ctxKey]);
	goto label_goto_14;
	// 2746    .line 1141
	// 2747    .end local v0    # "ctxKey":I
label_cond_1f:
	this->shapeNonContextually(text, start, count);
	goto label_goto_14;

}
// .method public shape([CIILjava/awt/font/NumericShaper$Range;)V
void java::awt::font::NumericShaper::shape(std::shared_ptr<char[]> text,int start,int count,std::shared_ptr<java::awt::font::NumericShaper_S_Range> context)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	int key;
	
	//    .param p1, "text"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "count"    # I
	//    .param p4, "context"    # Ljava/awt/font/NumericShaper$Range;
	this->checkParams(text, start, count);
	if ( context )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("context is null")));
	// throw
	throw cVar0;
	// 2777    .line 1169
label_cond_e:
	if ( !(this->isContextual()) )  
		goto label_cond_2c;
	if ( !(this->rangeSet) )  
		goto label_cond_1c;
	this->shapeContextually(text, start, count, context);
label_goto_1b:
	return;
	// 2797    .line 1173
label_cond_1c:
	key = java::awt::font::NumericShaper_S_Range::-wrap2(context);
	//    .local v0, "key":I
	if ( key < 0 ) 
		goto label_cond_26;
	this->shapeContextually(text, start, count, key);
	goto label_goto_1b;
	// 2812    .line 1177
label_cond_26:
	this->shapeContextually(text, start, count, this->shapingRange);
	goto label_goto_1b;
	// 2820    .line 1181
	// 2821    .end local v0    # "key":I
label_cond_2c:
	this->shapeNonContextually(text, start, count);
	goto label_goto_1b;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::awt::font::NumericShaper::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared_ptr<java::lang::Object> cVar0;
	int first;
	int i;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar0;
	
	buf = std::make_shared<java::lang::StringBuilder>(this->toString());
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[contextual:")))->append(this->isContextual());
	0x0;
	//    .local v3, "keyNames":[Ljava/lang/String;
	if ( !(this->isContextual()) )  
		goto label_cond_33;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", context:")));
	if ( this->shapingRange )     
		goto label_cond_59;
	cVar0 = java::awt::font::NumericShaper_S_Range::values({const[class].FS-Param})[this->key];
label_goto_30:
	buf->append(cVar0);
label_cond_33:
	if ( this->rangeSet )     
		goto label_cond_63;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", range(s): ")));
	first = 0x1;
	//    .local v1, "first":Z
	i = 0x0;
	//    .local v2, "i":I
label_goto_3f:
	if ( i >= 0x13 )
		goto label_cond_6f;
	if ( !((this->mask &  (0x1 << i))) )  
		goto label_cond_56;
	if ( !(first) )  
		goto label_cond_5c;
	first = 0x0;
label_goto_4d:
	buf->append(java::awt::font::NumericShaper_S_Range::values({const[class].FS-Param})[i]);
label_cond_56:
	i = ( i + 0x1);
	goto label_goto_3f;
	// 2944    .line 1416
	// 2945    .end local v1    # "first":Z
	// 2946    .end local v2    # "i":I
label_cond_59:
	cVar0 = this->shapingRange;
	goto label_goto_30;
	// 2952    .line 1427
	// 2953    .restart local v1    # "first":Z
	// 2954    .restart local v2    # "i":I
label_cond_5c:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")));
	goto label_goto_4d;
	// 2962    .line 1433
	// 2963    .end local v1    # "first":Z
	// 2964    .end local v2    # "i":I
label_cond_63:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", range set: ")))->append(this->rangeSet);
label_cond_6f:
	buf->append(0x5d);
	return buf->toString();

}


