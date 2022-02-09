// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\JapaneseCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.GregorianCalendar.h"
#include "android.icu.util.JapaneseCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

static android::icu::util::JapaneseCalendar::CURRENT_ERA;
static android::icu::util::JapaneseCalendar::ERAS;
static android::icu::util::JapaneseCalendar::GREGORIAN_EPOCH = 0x7b2;
static android::icu::util::JapaneseCalendar::HEISEI;
static android::icu::util::JapaneseCalendar::MEIJI;
static android::icu::util::JapaneseCalendar::SHOWA;
static android::icu::util::JapaneseCalendar::TAISHO;
static android::icu::util::JapaneseCalendar::serialVersionUID = -0x29511a714d92d973L;
// .method static constructor <clinit>()V
void android::icu::util::JapaneseCalendar::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x2c4);
	?;
	android::icu::util::JapaneseCalendar::ERAS = cVar0;
	android::icu::util::JapaneseCalendar::CURRENT_ERA = ( ( android::icu::util::JapaneseCalendar::ERAS->size() / 0x3) + -0x1);
	android::icu::util::JapaneseCalendar::MEIJI = ( android::icu::util::JapaneseCalendar::CURRENT_ERA + -0x3);
	android::icu::util::JapaneseCalendar::TAISHO = ( android::icu::util::JapaneseCalendar::CURRENT_ERA + -0x2);
	android::icu::util::JapaneseCalendar::SHOWA = ( android::icu::util::JapaneseCalendar::CURRENT_ERA + -0x1);
	android::icu::util::JapaneseCalendar::HEISEI = android::icu::util::JapaneseCalendar::CURRENT_ERA;
	return;
	// 078    .line 311
	// 079    nop
	// 081    :array_2a
	// 082    .array-data 4
	// 083        0x285
	// 084        0x6
	// 085        0x13
	// 086        0x28a
	// 087        0x2
	// 088        0xf
	// 089        0x2a0
	// 090        0x1
	// 091        0x1
	// 092        0x2ae
	// 093        0x7
	// 094        0x14
	// 095        0x2bd
	// 096        0x3
	// 097        0x15
	// 098        0x2c0
	// 099        0x5
	// 100        0xa
	// 101        0x2c4
	// 102        0x1
	// 103        0xb
	// 104        0x2cb
	// 105        0x9
	// 106        0x2
	// 107        0x2cd
	// 108        0xb
	// 109        0x11
	// 110        0x2d4
	// 111        0x2
	// 112        0x4
	// 113        0x2d9
	// 114        0x8
	// 115        0x5
	// 116        0x2ed
	// 117        0x4
	// 118        0xe
	// 119        0x2ed
	// 120        0x7
	// 121        0x2
	// 122        0x2f5
	// 123        0x8
	// 124        0x12
	// 125        0x2fd
	// 126        0x1
	// 127        0x7
	// 128        0x2ff
	// 129        0x8
	// 130        0x10
	// 131        0x302
	// 132        0xa
	// 133        0x1
	// 134        0x30d
	// 135        0x1
	// 136        0x1
	// 137        0x30e
	// 138        0x8
	// 139        0x13
	// 140        0x326
	// 141        0x5
	// 142        0x12
	// 143        0x32a
	// 144        0x9
	// 145        0x13
	// 146        0x338
	// 147        0x1
	// 148        0x5
	// 149        0x342
	// 150        0x1
	// 151        0x3
	// 152        0x350
	// 153        0x6
	// 154        0xd
	// 155        0x353
	// 156        0x4
	// 157        0x1c
	// 158        0x356
	// 159        0xb
	// 160        0x1e
	// 161        0x359
	// 162        0x2
	// 163        0x15
	// 164        0x35b
	// 165        0x4
	// 166        0xf
	// 167        0x36d
	// 168        0x4
	// 169        0x10
	// 170        0x375
	// 171        0x2
	// 172        0x15
	// 173        0x379
	// 174        0x4
	// 175        0x1b
	// 176        0x382
	// 177        0x4
	// 178        0x1a
	// 179        0x385
	// 180        0x7
	// 181        0xf
	// 182        0x39b
	// 183        0x4
	// 184        0xb
	// 185        0x3a3
	// 186        0x4
	// 187        0x1a
	// 188        0x3aa
	// 189        0x5
	// 190        0x16
	// 191        0x3b3
	// 192        0x4
	// 193        0x16
	// 194        0x3bd
	// 195        0xa
	// 196        0x1b
	// 197        0x3c1
	// 198        0x2
	// 199        0x10
	// 200        0x3c4
	// 201        0x7
	// 202        0xa
	// 203        0x3c8
	// 204        0x8
	// 205        0xd
	// 206        0x3ca
	// 207        0x3
	// 208        0x19
	// 209        0x3cd
	// 210        0xc
	// 211        0x14
	// 212        0x3d0
	// 213        0x7
	// 214        0xd
	// 215        0x3d2
	// 216        0xb
	// 217        0x1d
	// 218        0x3d7
	// 219        0x4
	// 220        0xf
	// 221        0x3d9
	// 222        0x4
	// 223        0x1b
	// 224        0x3db
	// 225        0x4
	// 226        0x5
	// 227        0x3dd
	// 228        0x8
	// 229        0x8
	// 230        0x3de
	// 231        0xb
	// 232        0x7
	// 233        0x3e3
	// 234        0x2
	// 235        0x16
	// 236        0x3e7
	// 237        0x1
	// 238        0xd
	// 239        0x3ec
	// 240        0x7
	// 241        0x14
	// 242        0x3f4
	// 243        0xc
	// 244        0x19
	// 245        0x3f9
	// 246        0x4
	// 247        0x17
	// 248        0x3fd
	// 249        0x2
	// 250        0x2
	// 251        0x400
	// 252        0x7
	// 253        0xd
	// 254        0x404
	// 255        0x7
	// 256        0x19
	// 257        0x40d
	// 258        0x4
	// 259        0x15
	// 260        0x410
	// 261        0xb
	// 262        0xa
	// 263        0x414
	// 264        0xb
	// 265        0x18
	// 266        0x416
	// 267        0x4
	// 268        0xe
	// 269        0x41d
	// 270        0x1
	// 271        0xb
	// 272        0x422
	// 273        0x8
	// 274        0x1d
	// 275        0x429
	// 276        0x8
	// 277        0x2
	// 278        0x42d
	// 279        0x4
	// 280        0xd
	// 281        0x432
	// 282        0x8
	// 283        0x17
	// 284        0x435
	// 285        0xb
	// 286        0x11
	// 287        0x439
	// 288        0x2
	// 289        0xa
	// 290        0x43c
	// 291        0x2
	// 292        0x7
	// 293        0x43f
	// 294        0x4
	// 295        0x7
	// 296        0x446
	// 297        0xc
	// 298        0xf
	// 299        0x448
	// 300        0xc
	// 301        0x11
	// 302        0x449
	// 303        0xb
	// 304        0x15
	// 305        0x44b
	// 306        0x8
	// 307        0x1c
	// 308        0x450
	// 309        0x2
	// 310        0xa
	// 311        0x452
	// 312        0x4
	// 313        0x9
	// 314        0x454
	// 315        0x8
	// 316        0x3
	// 317        0x456
	// 318        0x7
	// 319        0xd
	// 320        0x459
	// 321        0x7
	// 322        0xd
	// 323        0x45e
	// 324        0x4
	// 325        0x3
	// 326        0x460
	// 327        0x4
	// 328        0xa
	// 329        0x464
	// 330        0x4
	// 331        0x3
	// 332        0x466
	// 333        0x1
	// 334        0x16
	// 335        0x46b
	// 336        0x1
	// 337        0x1d
	// 338        0x46c
	// 339        0x8
	// 340        0xb
	// 341        0x46f
	// 342        0x4
	// 343        0x1b
	// 344        0x475
	// 345        0x7
	// 346        0xa
	// 347        0x476
	// 348        0x4
	// 349        0x1c
	// 350        0x478
	// 351        0x2
	// 352        0x17
	// 353        0x479
	// 354        0x7
	// 355        0x16
	// 356        0x47f
	// 357        0x1
	// 358        0x1a
	// 359        0x482
	// 360        0xa
	// 361        0x1c
	// 362        0x484
	// 363        0x4
	// 364        0x1b
	// 365        0x487
	// 366        0x4
	// 367        0x14
	// 368        0x488
	// 369        0x1
	// 370        0xa
	// 371        0x489
	// 372        0x9
	// 373        0x4
	// 374        0x48b
	// 375        0x3
	// 376        0x1d
	// 377        0x48d
	// 378        0x6
	// 379        0x5
	// 380        0x48e
	// 381        0x8
	// 382        0x1b
	// 383        0x491
	// 384        0x4
	// 385        0x8
	// 386        0x493
	// 387        0x4
	// 388        0x15
	// 389        0x497
	// 390        0x7
	// 391        0x1c
	// 392        0x499
	// 393        0x8
	// 394        0x4
	// 395        0x49d
	// 396        0x7
	// 397        0xe
	// 398        0x49e
	// 399        0x5
	// 400        0x1b
	// 401        0x4a0
	// 402        0x4
	// 403        0x10
	// 404        0x4a1
	// 405        0x8
	// 406        0xe
	// 407        0x4a6
	// 408        0x4
	// 409        0xb
	// 410        0x4af
	// 411        0x4
	// 412        0x1b
	// 413        0x4b1
	// 414        0x2
	// 415        0xd
	// 416        0x4b4
	// 417        0x2
	// 418        0x14
	// 419        0x4b6
	// 420        0x4
	// 421        0x1b
	// 422        0x4b7
	// 423        0xa
	// 424        0x19
	// 425        0x4bb
	// 426        0x3
	// 427        0x9
	// 428        0x4bd
	// 429        0xc
	// 430        0x6
	// 431        0x4c3
	// 432        0x4
	// 433        0xc
	// 434        0x4c6
	// 435        0x4
	// 436        0xd
	// 437        0x4c8
	// 438        0xb
	// 439        0x14
	// 440        0x4c9
	// 441        0x4
	// 442        0x14
	// 443        0x4cb
	// 444        0xc
	// 445        0xa
	// 446        0x4cd
	// 447        0x3
	// 448        0x5
	// 449        0x4d0
	// 450        0x4
	// 451        0x2
	// 452        0x4d1
	// 453        0x4
	// 454        0xf
	// 455        0x4d2
	// 456        0xb
	// 457        0x5
	// 458        0x4d3
	// 459        0x9
	// 460        0x13
	// 461        0x4d6
	// 462        0xb
	// 463        0x17
	// 464        0x4d7
	// 465        0x2
	// 466        0x7
	// 467        0x4d8
	// 468        0x7
	// 469        0x10
	// 470        0x4db
	// 471        0x2
	// 472        0x1a
	// 473        0x4df
	// 474        0x2
	// 475        0x1c
	// 476        0x4e1
	// 477        0x3
	// 478        0x12
	// 479        0x4e8
	// 480        0xa
	// 481        0x5
	// 482        0x4e9
	// 483        0x3
	// 484        0xe
	// 485        0x4eb
	// 486        0x3
	// 487        0x1a
	// 488        0x4ec
	// 489        0x4
	// 490        0xd
	// 491        0x4ed
	// 492        0x2
	// 493        0x14
	// 494        0x4f0
	// 495        0x2
	// 496        0x1c
	// 497        0x4fb
	// 498        0x4
	// 499        0x19
	// 500        0x4fe
	// 501        0x2
	// 502        0x1d
	// 503        0x508
	// 504        0x4
	// 505        0x1c
	// 506        0x50d
	// 507        0x8
	// 508        0x37
	// 509        0x513
	// 510        0x4
	// 511        0x19
	// 512        0x516
	// 513        0xb
	// 514        0x15
	// 515        0x517
	// 516        0x8
	// 517        0x5
	// 518        0x51a
	// 519        0xc
	// 520        0xe
	// 521        0x51c
	// 522        0xa
	// 523        0x9
	// 524        0x51f
	// 525        0x4
	// 526        0x1c
	// 527        0x520
	// 528        0x3
	// 529        0x14
	// 530        0x525
	// 531        0x2
	// 532        0x3
	// 533        0x527
	// 534        0x4
	// 535        0x1c
	// 536        0x529
	// 537        0x2
	// 538        0x17
	// 539        0x52c
	// 540        0xc
	// 541        0x9
	// 542        0x52e
	// 543        0x4
	// 544        0x1a
	// 545        0x531
	// 546        0x8
	// 547        0x1d
	// 548        0x533
	// 549        0x8
	// 550        0x9
	// 551        0x536
	// 552        0x1
	// 553        0x1d
	// 554        0x538
	// 555        0x2
	// 556        0x1d
	// 557        0x53c
	// 558        0x4
	// 559        0x1c
	// 560        0x542
	// 561        0xc
	// 562        0x8
	// 563        0x55a
	// 564        0x7
	// 565        0x18
	// 566        0x55c
	// 567        0x4
	// 568        0x1
	// 569        0x55f
	// 570        0x5
	// 571        0x1b
	// 572        0x563
	// 573        0x3
	// 574        0x16
	// 575        0x565
	// 576        0x2
	// 577        0xa
	// 578        0x568
	// 579        0x4
	// 580        0x1c
	// 581        0x568
	// 582        0x2
	// 583        0x1b
	// 584        0x56b
	// 585        0x8
	// 586        0x17
	// 587        0x56d
	// 588        0x2
	// 589        0x9
	// 590        0x56e
	// 591        0x3
	// 592        0x1a
	// 593        0x572
	// 594        0x7
	// 595        0x5
	// 596        0x594
	// 597        0x4
	// 598        0x1b
	// 599        0x595
	// 600        0x9
	// 601        0x5
	// 602        0x5a1
	// 603        0x2
	// 604        0x11
	// 605        0x5a4
	// 606        0x2
	// 607        0x5
	// 608        0x5a9
	// 609        0x7
	// 610        0x1c
	// 611        0x5ac
	// 612        0x7
	// 613        0x19
	// 614        0x5af
	// 615        0x7
	// 616        0x19
	// 617        0x5b1
	// 618        0x9
	// 619        0x1c
	// 620        0x5b4
	// 621        0xc
	// 622        0x15
	// 623        0x5ba
	// 624        0x2
	// 625        0x1c
	// 626        0x5bb
	// 627        0x3
	// 628        0x3
	// 629        0x5bd
	// 630        0x4
	// 631        0x1c
	// 632        0x5cf
	// 633        0x7
	// 634        0x1d
	// 635        0x5d1
	// 636        0x8
	// 637        0x15
	// 638        0x5d4
	// 639        0x7
	// 640        0x13
	// 641        0x5dd
	// 642        0x2
	// 643        0x1d
	// 644        0x5e0
	// 645        0x2
	// 646        0x1e
	// 647        0x5f1
	// 648        0x8
	// 649        0x17
	// 650        0x5f8
	// 651        0x8
	// 652        0x14
	// 653        0x5fc
	// 654        0x7
	// 655        0x1d
	// 656        0x613
	// 657        0xa
	// 658        0x17
	// 659        0x616
	// 660        0x2
	// 661        0x1c
	// 662        0x622
	// 663        0x4
	// 664        0x17
	// 665        0x625
	// 666        0x7
	// 667        0x1c
	// 668        0x638
	// 669        0xc
	// 670        0x8
	// 671        0x63c
	// 672        0xa
	// 673        0x1b
	// 674        0x64f
	// 675        0x7
	// 676        0xd
	// 677        0x658
	// 678        0x2
	// 679        0x1e
	// 680        0x66c
	// 681        0xc
	// 682        0x10
	// 683        0x670
	// 684        0x2
	// 685        0xf
	// 686        0x674
	// 687        0x9
	// 688        0x12
	// 689        0x677
	// 690        0x4
	// 691        0xd
	// 692        0x67a
	// 693        0x7
	// 694        0x17
	// 695        0x67d
	// 696        0x4
	// 697        0x19
	// 698        0x689
	// 699        0x9
	// 700        0x15
	// 701        0x691
	// 702        0x9
	// 703        0x1d
	// 704        0x694
	// 705        0x2
	// 706        0x15
	// 707        0x698
	// 708        0x9
	// 709        0x1e
	// 710        0x6a8
	// 711        0x3
	// 712        0xd
	// 713        0x6af
	// 714        0x4
	// 715        0x19
	// 716        0x6b4
	// 717        0x6
	// 718        0x16
	// 719        0x6c8
	// 720        0x4
	// 721        0x1c
	// 722        0x6cd
	// 723        0x2
	// 724        0x1b
	// 725        0x6d0
	// 726        0x2
	// 727        0x15
	// 728        0x6d4
	// 729        0x7
	// 730        0xc
	// 731        0x6d7
	// 732        0xa
	// 733        0x1b
	// 734        0x6e4
	// 735        0x6
	// 736        0x2
	// 737        0x6ec
	// 738        0xb
	// 739        0x10
	// 740        0x6f5
	// 741        0x4
	// 742        0x2
	// 743        0x6fd
	// 744        0x1
	// 745        0x19
	// 746        0x709
	// 747        0x2
	// 748        0x5
	// 749        0x70c
	// 750        0x2
	// 751        0xb
	// 752        0x71a
	// 753        0x4
	// 754        0x16
	// 755        0x726
	// 756        0xc
	// 757        0xa
	// 758        0x734
	// 759        0xc
	// 760        0x2
	// 761        0x738
	// 762        0x2
	// 763        0x1c
	// 764        0x73e
	// 765        0xb
	// 766        0x1b
	// 767        0x744
	// 768        0x3
	// 769        0x12
	// 770        0x745
	// 771        0x2
	// 772        0x13
	// 773        0x748
	// 774        0x2
	// 775        0x14
	// 776        0x749
	// 777        0x4
	// 778        0x7
	// 779        0x74c
	// 780        0x9
	// 781        0x8
	// 782        0x778
	// 783        0x7
	// 784        0x1e
	// 785        0x786
	// 786        0xc
	// 787        0x19
	// 788        0x7c5
	// 789        0x1
	// 790        0x8
	// 791    .end array-data

}
// .method public constructor <init>()V
android::icu::util::JapaneseCalendar::JapaneseCalendar()
{
	
	// 799    invoke-direct {p0}, Landroid/icu/util/GregorianCalendar;-><init>()V
	return;

}
// .method public constructor <init>(III)V
android::icu::util::JapaneseCalendar::JapaneseCalendar(int year,int month,int date)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	android::icu::util::GregorianCalendar::(year, month, date);
	this->set(0x0, android::icu::util::JapaneseCalendar::CURRENT_ERA);
	return;

}
// .method public constructor <init>(IIII)V
android::icu::util::JapaneseCalendar::JapaneseCalendar(int era,int year,int month,int date)
{
	
	//    .param p1, "era"    # I
	//    .param p2, "year"    # I
	//    .param p3, "month"    # I
	//    .param p4, "date"    # I
	android::icu::util::GregorianCalendar::(year, month, date);
	this->set(0x0, era);
	return;

}
// .method public constructor <init>(IIIIII)V
android::icu::util::JapaneseCalendar::JapaneseCalendar(int year,int month,int date,int hour,int minute,int second)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	//    .param p4, "hour"    # I
	//    .param p5, "minute"    # I
	//    .param p6, "second"    # I
	android::icu::util::GregorianCalendar::(year, month, date, hour, minute, second);
	this->set(0x0, android::icu::util::JapaneseCalendar::CURRENT_ERA);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;)V
android::icu::util::JapaneseCalendar::JapaneseCalendar(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	android::icu::util::GregorianCalendar::(zone);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V
android::icu::util::JapaneseCalendar::JapaneseCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::GregorianCalendar::(zone, locale);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V
android::icu::util::JapaneseCalendar::JapaneseCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "aLocale"    # Ljava/util/Locale;
	android::icu::util::GregorianCalendar::(zone, aLocale);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::util::JapaneseCalendar::JapaneseCalendar(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::GregorianCalendar::(locale);
	return;

}
// .method public constructor <init>(Ljava/util/Date;)V
android::icu::util::JapaneseCalendar::JapaneseCalendar(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	// 926    invoke-direct {p0}, Landroid/icu/util/JapaneseCalendar;-><init>()V
	this->setTime(date);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::util::JapaneseCalendar::JapaneseCalendar(std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	android::icu::util::GregorianCalendar::(aLocale);
	return;

}
// .method public getActualMaximum(I)I
int android::icu::util::JapaneseCalendar::getActualMaximum(int field)
{
	
	int cVar0;
	int era;
	int maxYear;
	
	//    .param p1, "field"    # I
	cVar0 = 0x1;
	if ( field != cVar0 )
		goto label_cond_3f;
	era = this->get(0x0);
	//    .local v0, "era":I
	if ( era != android::icu::util::JapaneseCalendar::CURRENT_ERA )
		goto label_cond_12;
	return this->handleGetLimit(cVar0, 0x3);
	// 981    .line 641
label_cond_12:
	//    .local v4, "nextEraYear":I
	//    .local v3, "nextEraMonth":I
	//    .local v2, "nextEraDate":I
	maxYear = ( (android::icu::util::JapaneseCalendar::ERAS[( ( era + 0x1) * 0x3)] - android::icu::util::JapaneseCalendar::ERAS[( era * 0x3)]) + 0x1);
	//    .local v1, "maxYear":I
	if ( android::icu::util::JapaneseCalendar::ERAS[( ( ( era + 0x1) * 0x3) + 0x1)] != cVar0 )
		goto label_cond_3e;
	if ( android::icu::util::JapaneseCalendar::ERAS[( ( ( era + 0x1) * 0x3) + 0x2)] != cVar0 )
		goto label_cond_3e;
label_cond_3e:
	return maxYear;
	// 1040    .line 653
	// 1041    .end local v0    # "era":I
	// 1042    .end local v1    # "maxYear":I
	// 1043    .end local v2    # "nextEraDate":I
	// 1044    .end local v3    # "nextEraMonth":I
	// 1045    .end local v4    # "nextEraYear":I
label_cond_3f:
	return this->getActualMaximum(field);

}
// .method protected getDefaultDayInMonth(II)I
int android::icu::util::JapaneseCalendar::getDefaultDayInMonth(int extendedYear,int month)
{
	
	int era;
	
	//    .param p1, "extendedYear"    # I
	//    .param p2, "month"    # I
	era = this->internalGet(0x0, android::icu::util::JapaneseCalendar::CURRENT_ERA);
	//    .local v0, "era":I
	if ( extendedYear != android::icu::util::JapaneseCalendar::ERAS[( era * 0x3)] )
		goto label_cond_24;
	if ( month != ( android::icu::util::JapaneseCalendar::ERAS[( ( era * 0x3) + 0x1)] + -0x1) )
		goto label_cond_24;
	return android::icu::util::JapaneseCalendar::ERAS[( ( era * 0x3) + 0x2)];
	// 1103    .line 261
label_cond_24:
	return this->getDefaultDayInMonth(extendedYear, month);

}
// .method protected getDefaultMonthInYear(I)I
int android::icu::util::JapaneseCalendar::getDefaultMonthInYear(int extendedYear)
{
	
	int era;
	
	//    .param p1, "extendedYear"    # I
	era = this->internalGet(0x0, android::icu::util::JapaneseCalendar::CURRENT_ERA);
	//    .local v0, "era":I
	if ( extendedYear != android::icu::util::JapaneseCalendar::ERAS[( era * 0x3)] )
		goto label_cond_1a;
	return ( android::icu::util::JapaneseCalendar::ERAS[( ( era * 0x3) + 0x1)] + -0x1);
	// 1149    .line 239
label_cond_1a:
	return this->getDefaultMonthInYear(extendedYear);

}
// .method public getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::JapaneseCalendar::getType()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("japanese"));

}
// .method protected handleComputeFields(I)V
void android::icu::util::JapaneseCalendar::handleComputeFields(int julianDay)
{
	
	int year;
	int low;
	int high;
	int i;
	int diff;
	
	//    .param p1, "julianDay"    # I
	this->handleComputeFields(julianDay);
	year = this->internalGet(0x13);
	//    .local v4, "year":I
	low = 0x0;
	//    .local v3, "low":I
	if ( year <= android::icu::util::JapaneseCalendar::ERAS[( android::icu::util::JapaneseCalendar::ERAS->size() + -0x3)] )
		goto label_cond_2a;
	low = android::icu::util::JapaneseCalendar::CURRENT_ERA;
label_cond_18:
	this->internalSet(0x0, low);
	this->internalSet(0x1, ( (year - android::icu::util::JapaneseCalendar::ERAS[( low * 0x3)]) + 0x1));
	return;
	// 1228    .line 280
label_cond_2a:
	high = ( android::icu::util::JapaneseCalendar::ERAS->size() / 0x3);
	//    .local v1, "high":I
label_goto_2f:
	if ( low >= ( high + -0x1) )
		goto label_cond_18;
	i = ( (low + high) / 0x2);
	//    .local v2, "i":I
	diff = (year - android::icu::util::JapaneseCalendar::ERAS[( i * 0x3)]);
	//    .local v0, "diff":I
	if ( diff )     
		goto label_cond_63;
	diff = (this->internalGet(0x2) - ( android::icu::util::JapaneseCalendar::ERAS[( ( i * 0x3) + 0x1)] + -0x1));
	if ( diff )     
		goto label_cond_63;
label_cond_63:
	if ( diff < 0 ) 
		goto label_cond_67;
	low = i;
	goto label_goto_2f;
	// 1310    .line 298
label_cond_67:
	high = i;
	goto label_goto_2f;

}
// .method protected handleGetExtendedYear()I
int android::icu::util::JapaneseCalendar::handleGetExtendedYear()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	
	cVar0 = 0x0;
	cVar1 = 0x1;
	cVar2 = 0x13;
	if ( this->newerField(cVar2, cVar1) != cVar2 )
		goto label_cond_17;
	if ( this->newerField(cVar2, cVar0) != cVar2 )
		goto label_cond_17;
	//    .local v0, "year":I
label_goto_16:
	return year;
	// 1353    .line 214
	// 1354    .end local v0    # "year":I
label_cond_17:
	//    .restart local v0    # "year":I
	goto label_goto_16;

}
// .method protected handleGetLimit(II)I
int android::icu::util::JapaneseCalendar::handleGetLimit(int field,int limitType)
{
	
	int cVar0;
	
	//    .param p1, "field"    # I
	//    .param p2, "limitType"    # I
	cVar0 = 0x1;
	// switch
	{
	auto item = ( field );
	if (item == 0) goto label_pswitch_a;
	if (item == 1) goto label_pswitch_12;
	}
label_goto_5:
	return this->handleGetLimit(field, limitType);
	// 1403    .line 591
label_pswitch_a:
	if ( !(limitType) )  
		goto label_cond_e;
	if ( limitType != cVar0 )
		goto label_cond_f;
label_cond_e:
	return 0x0;
	// 1413    .line 594
label_cond_f:
	return android::icu::util::JapaneseCalendar::CURRENT_ERA;
	// 1419    .line 597
label_pswitch_12:
	// switch
	{
	auto item = ( limitType );
	if (item == 0) goto label_pswitch_16;
	if (item == 1) goto label_pswitch_16;
	if (item == 2) goto label_pswitch_17;
	if (item == 3) goto label_pswitch_18;
	}
	goto label_goto_5;
	// 1425    .line 600
label_pswitch_16:
	return cVar0;
	// 1429    .line 602
label_pswitch_17:
	return cVar0;
	// 1433    .line 604
label_pswitch_18:
	return (this->handleGetLimit(field, 0x3) -  android::icu::util::JapaneseCalendar::ERAS[( android::icu::util::JapaneseCalendar::CURRENT_ERA * 0x3)]);
	// 1453    .line 589
	// 1454    nop
	// 1456    :pswitch_data_28
	// 1457    .packed-switch 0x0
	// 1458        :pswitch_a
	// 1459        :pswitch_12
	// 1460    .end packed-switch
	// 1462    .line 597
	// 1463    :pswitch_data_30
	// 1464    .packed-switch 0x0
	// 1465        :pswitch_16
	// 1466        :pswitch_16
	// 1467        :pswitch_17
	// 1468        :pswitch_18
	// 1469    .end packed-switch

}
// .method public haveDefaultCentury()Z
bool android::icu::util::JapaneseCalendar::haveDefaultCentury()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1475    .end annotation
	return 0x0;

}


