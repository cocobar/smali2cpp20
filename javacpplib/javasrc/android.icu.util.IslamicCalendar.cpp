// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\IslamicCalendar.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarAstronomer.h"
#include "android.icu.impl.CalendarCache.h"
#include "android.icu.impl.CalendarUtil.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.IslamicCalendar_S_CalculationType.h"
#include "android.icu.util.IslamicCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

static android::icu::util::IslamicCalendar::ASTRONOMICAL_EPOC = 0x1dbb17L;
static android::icu::util::IslamicCalendar::CIVIL_EPOC = 0x1dbb18L;
static android::icu::util::IslamicCalendar::DHU_AL_HIJJAH = 0xb;
static android::icu::util::IslamicCalendar::DHU_AL_QIDAH = 0xa;
static android::icu::util::IslamicCalendar::HIJRA_MILLIS = -0x26ac5419b000L;
static android::icu::util::IslamicCalendar::JUMADA_1 = 0x4;
static android::icu::util::IslamicCalendar::JUMADA_2 = 0x5;
static android::icu::util::IslamicCalendar::LIMITS;
static android::icu::util::IslamicCalendar::MUHARRAM = 0x0;
static android::icu::util::IslamicCalendar::RABI_1 = 0x2;
static android::icu::util::IslamicCalendar::RABI_2 = 0x3;
static android::icu::util::IslamicCalendar::RAJAB = 0x6;
static android::icu::util::IslamicCalendar::RAMADAN = 0x8;
static android::icu::util::IslamicCalendar::SAFAR = 0x1;
static android::icu::util::IslamicCalendar::SHABAN = 0x7;
static android::icu::util::IslamicCalendar::SHAWWAL = 0x9;
static android::icu::util::IslamicCalendar::UMALQURA_MONTHLENGTH;
static android::icu::util::IslamicCalendar::UMALQURA_YEAR_END = 0x640;
static android::icu::util::IslamicCalendar::UMALQURA_YEAR_START = 0x514;
static android::icu::util::IslamicCalendar::UMALQURA_YEAR_START_ESTIMATE_FIX;
static android::icu::util::IslamicCalendar::astro = nullptr;
static android::icu::util::IslamicCalendar::cache = nullptr;
static android::icu::util::IslamicCalendar::serialVersionUID = -0x56c86ac454dd7c0dL;
// .method static constructor <clinit>()V
void android::icu::util::IslamicCalendar::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<int[][]>> cVar5;
	std::shared<std::vector<int[]>> cVar6;
	std::shared<std::vector<unsigned char[]>> cVar7;
	std::shared_ptr<android::icu::impl::CalendarAstronomer> cVar8;
	std::shared_ptr<android::icu::impl::CalendarCache> cVar9;
	
	cVar0 = 0xb;
	cVar1 = 0x5;
	cVar2 = 0x4c4b40;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<int[][]>>(0x16);
	?;
	cVar5[cVar4] = ?;
	?;
	cVar5[cVar3] = ?;
	?;
	cVar5[0x2] = ?;
	?;
	cVar5[0x3] = ?;
	cVar5[0x4] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar5[cVar1] = ?;
	?;
	cVar5[0x6] = ?;
	cVar5[0x7] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar5[0x8] = ?;
	cVar5[0x9] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0xa] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[cVar0] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0xc] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0xd] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0xe] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0xf] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0x10] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar5[0x11] = ?;
	cVar5[0x12] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar5[0x13] = ?;
	cVar5[0x14] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0x15] = std::make_shared<std::vector<int[]>>(cVar4);
	android::icu::util::IslamicCalendar::LIMITS = cVar5;
	cVar6 = std::make_shared<std::vector<int[]>>(0x12d);
	?;
	android::icu::util::IslamicCalendar::UMALQURA_MONTHLENGTH = cVar6;
	cVar7 = std::make_shared<std::vector<unsigned char[]>>(0x12d);
	?;
	android::icu::util::IslamicCalendar::UMALQURA_YEAR_START_ESTIMATE_FIX = cVar7;
	cVar8 = std::make_shared<android::icu::impl::CalendarAstronomer>();
	android::icu::util::IslamicCalendar::astro = cVar8;
	cVar9 = std::make_shared<android::icu::impl::CalendarCache>();
	android::icu::util::IslamicCalendar::cache = cVar9;
	return;
	// 306    .line 377
	// 307    :array_c6
	// 308    .array-data 4
	// 309        0xaaa
	// 310        0xd54
	// 311        0xec9
	// 312        0x6d4
	// 313        0x6ea
	// 314        0x36c
	// 315        0xaad
	// 316        0x555
	// 317        0x6a9
	// 318        0x792
	// 319        0xba9
	// 320        0x5d4
	// 321        0xada
	// 322        0x55c
	// 323        0xd2d
	// 324        0x695
	// 325        0x74a
	// 326        0xb54
	// 327        0xb6a
	// 328        0x5ad
	// 329        0x4ae
	// 330        0xa4f
	// 331        0x517
	// 332        0x68b
	// 333        0x6a5
	// 334        0xad5
	// 335        0x2d6
	// 336        0x95b
	// 337        0x49d
	// 338        0xa4d
	// 339        0xd26
	// 340        0xd95
	// 341        0x5ac
	// 342        0x9b6
	// 343        0x2ba
	// 344        0xa5b
	// 345        0x52b
	// 346        0xa95
	// 347        0x6ca
	// 348        0xae9
	// 349        0x2f4
	// 350        0x976
	// 351        0x2b6
	// 352        0x956
	// 353        0xaca
	// 354        0xba4
	// 355        0xbd2
	// 356        0x5d9
	// 357        0x2dc
	// 358        0x96d
	// 359        0x54d
	// 360        0xaa5
	// 361        0xb52
	// 362        0xba5
	// 363        0x5b4
	// 364        0x9b6
	// 365        0x557
	// 366        0x297
	// 367        0x54b
	// 368        0x6a3
	// 369        0x752
	// 370        0xb65
	// 371        0x56a
	// 372        0xaab
	// 373        0x52b
	// 374        0xc95
	// 375        0xd4a
	// 376        0xda5
	// 377        0x5ca
	// 378        0xad6
	// 379        0x957
	// 380        0x4ab
	// 381        0x94b
	// 382        0xaa5
	// 383        0xb52
	// 384        0xb6a
	// 385        0x575
	// 386        0x276
	// 387        0x8b7
	// 388        0x45b
	// 389        0x555
	// 390        0x5a9
	// 391        0x5b4
	// 392        0x9da
	// 393        0x4dd
	// 394        0x26e
	// 395        0x936
	// 396        0xaaa
	// 397        0xd54
	// 398        0xdb2
	// 399        0x5d5
	// 400        0x2da
	// 401        0x95b
	// 402        0x4ab
	// 403        0xa55
	// 404        0xb49
	// 405        0xb64
	// 406        0xb71
	// 407        0x5b4
	// 408        0xab5
	// 409        0xa55
	// 410        0xd25
	// 411        0xe92
	// 412        0xec9
	// 413        0x6d4
	// 414        0xae9
	// 415        0x96b
	// 416        0x4ab
	// 417        0xa93
	// 418        0xd49
	// 419        0xda4
	// 420        0xdb2
	// 421        0xab9
	// 422        0x4ba
	// 423        0xa5b
	// 424        0x52b
	// 425        0xa95
	// 426        0xb2a
	// 427        0xb55
	// 428        0x55c
	// 429        0x4bd
	// 430        0x23d
	// 431        0x91d
	// 432        0xa95
	// 433        0xb4a
	// 434        0xb5a
	// 435        0x56d
	// 436        0x2b6
	// 437        0x93b
	// 438        0x49b
	// 439        0x655
	// 440        0x6a9
	// 441        0x754
	// 442        0xb6a
	// 443        0x56c
	// 444        0xaad
	// 445        0x555
	// 446        0xb29
	// 447        0xb92
	// 448        0xba9
	// 449        0x5d4
	// 450        0xada
	// 451        0x55a
	// 452        0xaab
	// 453        0x595
	// 454        0x749
	// 455        0x764
	// 456        0xbaa
	// 457        0x5b5
	// 458        0x2b6
	// 459        0xa56
	// 460        0xe4d
	// 461        0xb25
	// 462        0xb52
	// 463        0xb6a
	// 464        0x5ad
	// 465        0x2ae
	// 466        0x92f
	// 467        0x497
	// 468        0x64b
	// 469        0x6a5
	// 470        0x6ac
	// 471        0xad6
	// 472        0x55d
	// 473        0x49d
	// 474        0xa4d
	// 475        0xd16
	// 476        0xd95
	// 477        0x5aa
	// 478        0x5b5
	// 479        0x2da
	// 480        0x95b
	// 481        0x4ad
	// 482        0x595
	// 483        0x6ca
	// 484        0x6e4
	// 485        0xaea
	// 486        0x4f5
	// 487        0x2b6
	// 488        0x956
	// 489        0xaaa
	// 490        0xb54
	// 491        0xbd2
	// 492        0x5d9
	// 493        0x2ea
	// 494        0x96d
	// 495        0x4ad
	// 496        0xa95
	// 497        0xb4a
	// 498        0xba5
	// 499        0x5b2
	// 500        0x9b5
	// 501        0x4d6
	// 502        0xa97
	// 503        0x547
	// 504        0x693
	// 505        0x749
	// 506        0xb55
	// 507        0x56a
	// 508        0xa6b
	// 509        0x52b
	// 510        0xa8b
	// 511        0xd46
	// 512        0xda3
	// 513        0x5ca
	// 514        0xad6
	// 515        0x4db
	// 516        0x26b
	// 517        0x94b
	// 518        0xaa5
	// 519        0xb52
	// 520        0xb69
	// 521        0x575
	// 522        0x176
	// 523        0x8b7
	// 524        0x25b
	// 525        0x52b
	// 526        0x565
	// 527        0x5b4
	// 528        0x9da
	// 529        0x4ed
	// 530        0x16d
	// 531        0x8b6
	// 532        0xaa6
	// 533        0xd52
	// 534        0xda9
	// 535        0x5d4
	// 536        0xada
	// 537        0x95b
	// 538        0x4ab
	// 539        0x653
	// 540        0x729
	// 541        0x762
	// 542        0xba9
	// 543        0x5b2
	// 544        0xab5
	// 545        0x555
	// 546        0xb25
	// 547        0xd92
	// 548        0xec9
	// 549        0x6d2
	// 550        0xae9
	// 551        0x56b
	// 552        0x4ab
	// 553        0xa55
	// 554        0xd29
	// 555        0xd54
	// 556        0xdaa
	// 557        0x9b5
	// 558        0x4ba
	// 559        0xa3b
	// 560        0x49b
	// 561        0xa4d
	// 562        0xaaa
	// 563        0xad5
	// 564        0x2da
	// 565        0x95d
	// 566        0x45e
	// 567        0xa2e
	// 568        0xc9a
	// 569        0xd55
	// 570        0x6b2
	// 571        0x6b9
	// 572        0x4ba
	// 573        0xa5d
	// 574        0x52d
	// 575        0xa95
	// 576        0xb52
	// 577        0xba8
	// 578        0xbb4
	// 579        0x5b9
	// 580        0x2da
	// 581        0x95a
	// 582        0xb4a
	// 583        0xda4
	// 584        0xed1
	// 585        0x6e8
	// 586        0xb6a
	// 587        0x56d
	// 588        0x535
	// 589        0x695
	// 590        0xd4a
	// 591        0xda8
	// 592        0xdd4
	// 593        0x6da
	// 594        0x55b
	// 595        0x29d
	// 596        0x62b
	// 597        0xb15
	// 598        0xb4a
	// 599        0xb95
	// 600        0x5aa
	// 601        0xaae
	// 602        0x92e
	// 603        0xc8f
	// 604        0x527
	// 605        0x695
	// 606        0x6aa
	// 607        0xad6
	// 608        0x55d
	// 609        0x29d
	// 610    .end array-data
	// 612    .line 496
	// 613    :array_324
	// 614    .array-data 1
	// 615        0x0t
	// 616        0x0t
	// 617        -0x1t
	// 618        0x0t
	// 619        -0x1t
	// 620        0x0t
	// 621        0x0t
	// 622        0x0t
	// 623        0x0t
	// 624        0x0t
	// 625        -0x1t
	// 626        0x0t
	// 627        0x0t
	// 628        0x0t
	// 629        0x0t
	// 630        0x0t
	// 631        0x0t
	// 632        0x0t
	// 633        -0x1t
	// 634        0x0t
	// 635        0x1t
	// 636        0x0t
	// 637        0x1t
	// 638        0x1t
	// 639        0x0t
	// 640        0x0t
	// 641        0x0t
	// 642        0x0t
	// 643        0x1t
	// 644        0x0t
	// 645        0x0t
	// 646        0x0t
	// 647        0x0t
	// 648        0x0t
	// 649        0x0t
	// 650        0x0t
	// 651        0x1t
	// 652        0x0t
	// 653        0x0t
	// 654        0x0t
	// 655        0x0t
	// 656        0x0t
	// 657        0x1t
	// 658        0x0t
	// 659        0x0t
	// 660        -0x1t
	// 661        -0x1t
	// 662        0x0t
	// 663        0x0t
	// 664        0x0t
	// 665        0x1t
	// 666        0x0t
	// 667        0x0t
	// 668        -0x1t
	// 669        0x0t
	// 670        0x0t
	// 671        0x0t
	// 672        0x1t
	// 673        0x1t
	// 674        0x0t
	// 675        0x0t
	// 676        0x0t
	// 677        0x0t
	// 678        0x0t
	// 679        0x0t
	// 680        0x0t
	// 681        0x0t
	// 682        -0x1t
	// 683        0x0t
	// 684        0x0t
	// 685        0x0t
	// 686        0x1t
	// 687        0x1t
	// 688        0x0t
	// 689        0x0t
	// 690        -0x1t
	// 691        0x0t
	// 692        0x1t
	// 693        0x0t
	// 694        0x1t
	// 695        0x1t
	// 696        0x0t
	// 697        0x0t
	// 698        -0x1t
	// 699        0x0t
	// 700        0x1t
	// 701        0x0t
	// 702        0x0t
	// 703        0x0t
	// 704        -0x1t
	// 705        0x0t
	// 706        0x1t
	// 707        0x0t
	// 708        0x1t
	// 709        0x0t
	// 710        0x0t
	// 711        0x0t
	// 712        -0x1t
	// 713        0x0t
	// 714        0x0t
	// 715        0x0t
	// 716        0x0t
	// 717        -0x1t
	// 718        -0x1t
	// 719        0x0t
	// 720        -0x1t
	// 721        0x0t
	// 722        0x1t
	// 723        0x0t
	// 724        0x0t
	// 725        0x0t
	// 726        -0x1t
	// 727        0x0t
	// 728        0x0t
	// 729        0x0t
	// 730        0x1t
	// 731        0x0t
	// 732        0x0t
	// 733        0x0t
	// 734        0x0t
	// 735        0x0t
	// 736        0x1t
	// 737        0x0t
	// 738        0x0t
	// 739        -0x1t
	// 740        -0x1t
	// 741        0x0t
	// 742        0x0t
	// 743        0x0t
	// 744        0x1t
	// 745        0x0t
	// 746        0x0t
	// 747        -0x1t
	// 748        -0x1t
	// 749        0x0t
	// 750        -0x1t
	// 751        0x0t
	// 752        0x0t
	// 753        -0x1t
	// 754        -0x1t
	// 755        0x0t
	// 756        -0x1t
	// 757        0x0t
	// 758        -0x1t
	// 759        0x0t
	// 760        0x0t
	// 761        -0x1t
	// 762        -0x1t
	// 763        0x0t
	// 764        0x0t
	// 765        0x0t
	// 766        0x0t
	// 767        0x0t
	// 768        0x0t
	// 769        -0x1t
	// 770        0x0t
	// 771        0x1t
	// 772        0x0t
	// 773        0x1t
	// 774        0x1t
	// 775        0x0t
	// 776        0x0t
	// 777        -0x1t
	// 778        0x0t
	// 779        0x1t
	// 780        0x0t
	// 781        0x0t
	// 782        0x0t
	// 783        0x0t
	// 784        0x0t
	// 785        0x1t
	// 786        0x0t
	// 787        0x1t
	// 788        0x0t
	// 789        0x0t
	// 790        0x0t
	// 791        -0x1t
	// 792        0x0t
	// 793        0x1t
	// 794        0x0t
	// 795        0x0t
	// 796        -0x1t
	// 797        -0x1t
	// 798        0x0t
	// 799        0x0t
	// 800        0x0t
	// 801        0x1t
	// 802        0x0t
	// 803        0x0t
	// 804        0x0t
	// 805        0x0t
	// 806        0x0t
	// 807        0x0t
	// 808        0x0t
	// 809        0x1t
	// 810        0x0t
	// 811        0x0t
	// 812        0x0t
	// 813        0x0t
	// 814        0x0t
	// 815        0x1t
	// 816        0x0t
	// 817        0x0t
	// 818        -0x1t
	// 819        0x0t
	// 820        0x0t
	// 821        0x0t
	// 822        0x1t
	// 823        0x1t
	// 824        0x0t
	// 825        0x0t
	// 826        -0x1t
	// 827        0x0t
	// 828        0x1t
	// 829        0x0t
	// 830        0x1t
	// 831        0x1t
	// 832        0x0t
	// 833        0x0t
	// 834        0x0t
	// 835        0x0t
	// 836        0x1t
	// 837        0x0t
	// 838        0x0t
	// 839        0x0t
	// 840        -0x1t
	// 841        0x0t
	// 842        0x0t
	// 843        0x0t
	// 844        0x1t
	// 845        0x0t
	// 846        0x0t
	// 847        0x0t
	// 848        -0x1t
	// 849        0x0t
	// 850        0x0t
	// 851        0x0t
	// 852        0x0t
	// 853        0x0t
	// 854        -0x1t
	// 855        0x0t
	// 856        -0x1t
	// 857        0x0t
	// 858        0x1t
	// 859        0x0t
	// 860        0x0t
	// 861        0x0t
	// 862        -0x1t
	// 863        0x0t
	// 864        0x1t
	// 865        0x0t
	// 866        0x1t
	// 867        0x0t
	// 868        0x0t
	// 869        0x0t
	// 870        0x0t
	// 871        0x0t
	// 872        0x1t
	// 873        0x0t
	// 874        0x0t
	// 875        -0x1t
	// 876        0x0t
	// 877        0x0t
	// 878        0x0t
	// 879        0x0t
	// 880        0x1t
	// 881        0x0t
	// 882        0x0t
	// 883        0x0t
	// 884        -0x1t
	// 885        0x0t
	// 886        0x0t
	// 887        0x0t
	// 888        0x0t
	// 889        -0x1t
	// 890        -0x1t
	// 891        0x0t
	// 892        -0x1t
	// 893        0x0t
	// 894        0x1t
	// 895        0x0t
	// 896        0x0t
	// 897        -0x1t
	// 898        -0x1t
	// 899        0x0t
	// 900        0x0t
	// 901        0x1t
	// 902        0x1t
	// 903        0x0t
	// 904        0x0t
	// 905        -0x1t
	// 906        0x0t
	// 907        0x0t
	// 908        0x0t
	// 909        0x0t
	// 910        0x1t
	// 911        0x0t
	// 912        0x0t
	// 913        0x0t
	// 914        0x0t
	// 915        0x1t
	// 916    .end array-data

}
// .method public constructor <init>()V
android::icu::util::IslamicCalendar::IslamicCalendar()
{
	
	android::icu::util::IslamicCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(III)V
android::icu::util::IslamicCalendar::IslamicCalendar(int year,int month,int date)
{
	
	bool cVar0;
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	cVar0 = 0x1;
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->civil = cVar0;
	this->cType = android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL;
	this->set(cVar0, year);
	this->set(0x2, month);
	this->set(0x5, date);
	return;

}
// .method public constructor <init>(IIIIII)V
android::icu::util::IslamicCalendar::IslamicCalendar(int year,int month,int date,int hour,int minute,int second)
{
	
	bool cVar0;
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	//    .param p4, "hour"    # I
	//    .param p5, "minute"    # I
	//    .param p6, "second"    # I
	cVar0 = 0x1;
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->civil = cVar0;
	this->cType = android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL;
	this->set(cVar0, year);
	this->set(0x2, month);
	this->set(0x5, date);
	this->set(0xb, hour);
	this->set(0xc, minute);
	this->set(0xd, second);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;)V
android::icu::util::IslamicCalendar::IslamicCalendar(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	android::icu::util::IslamicCalendar::(zone, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V
android::icu::util::IslamicCalendar::IslamicCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::Calendar::(zone, locale);
	this->civil = 0x1;
	this->cType = android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL;
	this->setCalcTypeForLocale(locale);
	this->setTimeInMillis(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V
android::icu::util::IslamicCalendar::IslamicCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "aLocale"    # Ljava/util/Locale;
	android::icu::util::IslamicCalendar::(zone, android::icu::util::ULocale::forLocale(aLocale));
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::util::IslamicCalendar::IslamicCalendar(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::IslamicCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), locale);
	return;

}
// .method public constructor <init>(Ljava/util/Date;)V
android::icu::util::IslamicCalendar::IslamicCalendar(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->civil = 0x1;
	this->cType = android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL;
	this->setTime(date);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::util::IslamicCalendar::IslamicCalendar(std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	android::icu::util::IslamicCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), aLocale);
	return;

}
// .method private static final civilLeapYear(I)Z
bool android::icu::util::IslamicCalendar::civilLeapYear(int year)
{
	
	bool cVar0;
	
	//    .param p0, "year"    # I
	if ( ( ( ( year * 0xb) + 0xe) % 0x1e) >= 0xb )
		goto label_cond_c;
	cVar0 = 0x1;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method private monthStart(II)J
long long android::icu::util::IslamicCalendar::monthStart(int year,int month)
{
	
	int realYear;
	int realMonth;
	long long ms;
	int i;
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	realYear = (year + ( month / 0xc));
	//    .local v4, "realYear":I
	realMonth = ( month % 0xc);
	//    .local v1, "realMonth":I
	ms = 0x0;
	//    .local v2, "ms":J
	if ( this->cType == android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL )
		goto label_cond_14;
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_TBLA )
		goto label_cond_36;
label_cond_14:
	ms = (((long long)(java::lang::Math::ceil(( (double)(realMonth) * 0x403d800000000000L))) +  (long long)(( ( realYear + -0x1) * 0x162))) + (long long)(java::lang::Math::floor(( (double)(( ( realYear * 0xb) + 0x3)) / 0x403e000000000000L))));
label_cond_35:
label_goto_35:
	return ms;
	// 1297    .line 593
label_cond_36:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_UMALQURA )
		goto label_cond_40;
	if ( year <  0x514 )
		goto label_cond_14;
label_cond_40:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC )
		goto label_cond_51;
	ms = android::icu::util::IslamicCalendar::trueMonthStart((long long)((( ( realYear + -0x1) * 0xc) +  realMonth)));
	goto label_goto_35;
	// 1332    .line 598
label_cond_51:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_UMALQURA )
		goto label_cond_35;
	ms = this->yearStart(year);
	i = 0x0;
	//    .local v0, "i":I
label_goto_5c:
	if ( i >= month )
		goto label_cond_35;
	ms = (ms +  (long long)(this->handleGetMonthLength(year, i)));
	i = ( i + 0x1);
	goto label_goto_5c;

}
// .method static final moonAge(J)D
double android::icu::util::IslamicCalendar::moonAge(long long time)
{
	
	double cVar0;
	std::shared_ptr<android::icu::impl::CalendarAstronomer> cVar1;
	double age;
	
	//    .param p0, "time"    # J
	cVar0 = 0x4066800000000000L;
	0x0;
	//    .local v0, "age":D
	cVar1 = android::icu::util::IslamicCalendar::astro;
	cVar1->monitor_enter();
	try {
	//label_try_start_a:
	android::icu::util::IslamicCalendar::astro->setTime(time);
	//label_try_end_14:
	}
	catch (...){
		goto label_catchall_2a;
	}
	//    .catchall {:try_start_a .. :try_end_14} :catchall_2a
	cVar1->monitor_exit();
	age = ((android::icu::util::IslamicCalendar::astro->getMoonAge() *  cVar0) /  0x400921fb54442d18L);
	if ( (age < cVar0) <= 0 )
		goto label_cond_29;
label_cond_29:
	return age;
	// 1421    .line 663
label_catchall_2a:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::util::IslamicCalendar::readObject(std::shared_ptr<java::io::ObjectInputStream> in)
{
	
	std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> cVar0;
	bool cVar2;
	
	//    .param p1, "in"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1434        value = {
	// 1435            Ljava/io/IOException;,
	// 1436            Ljava/lang/ClassNotFoundException;
	// 1437        }
	// 1438    .end annotation
	in->defaultReadObject();
	if ( this->cType )     
		goto label_cond_13;
	if ( !(this->civil) )  
		goto label_cond_10;
	cVar0 = android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL;
label_goto_d:
	this->cType = cVar0;
label_goto_f:
	return;
	// 1463    .line 983
label_cond_10:
	cVar0 = android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC;
	goto label_goto_d;
	// 1469    .line 986
label_cond_13:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL )
		goto label_cond_1d;
	cVar2 = 0x1;
label_goto_1a:
	this->civil = cVar2;
	goto label_goto_f;
label_cond_1d:
	cVar2 = 0x0;
	goto label_goto_1a;

}
// .method private setCalcTypeForLocale(Landroid/icu/util/ULocale;)V
void android::icu::util::IslamicCalendar::setCalcTypeForLocale(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::lang::Object> localeCalType;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	localeCalType = android::icu::impl::CalendarUtil::getCalendarType(locale);
	//    .local v0, "localeCalType":Ljava/lang/String;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic-civil"))->equals(localeCalType)) )  
		goto label_cond_13;
	this->setCalculationType(android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL);
label_goto_12:
	return;
	// 1519    .line 952
label_cond_13:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic-umalqura"))->equals(localeCalType)) )  
		goto label_cond_22;
	this->setCalculationType(android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_UMALQURA);
	goto label_goto_12;
	// 1536    .line 954
label_cond_22:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic-tbla"))->equals(localeCalType)) )  
		goto label_cond_31;
	this->setCalculationType(android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_TBLA);
	goto label_goto_12;
	// 1553    .line 956
label_cond_31:
	if ( !(localeCalType->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic")))) )  
		goto label_cond_40;
	this->setCalculationType(android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC);
	goto label_goto_12;
	// 1570    .line 959
label_cond_40:
	this->setCalculationType(android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL);
	goto label_goto_12;

}
// .method private static final trueMonthStart(J)J
long long android::icu::util::IslamicCalendar::trueMonthStart(long long month)
{
	
	long long start;
	long long origin;
	
	//    .param p0, "month"    # J
	start = android::icu::util::IslamicCalendar::cache->get(month);
	//    .local v4, "start":J
	if ( (start > android::icu::impl::CalendarCache::EMPTY) )     
		goto label_cond_53;
	origin = (-0x26ac5419b000L + ((long long)(java::lang::Math::floor(( (double)(month) * 0x403d87d4abcb41d5L))) *  0x5265c00));
	//    .local v2, "origin":J
	android::icu::util::IslamicCalendar::moonAge(origin);
	//    .local v0, "age":D
	if ( (android::icu::util::IslamicCalendar::moonAge(origin) < 0x0) < 0 ) 
		goto label_cond_54;
label_cond_31:
	origin = (origin -  0x5265c00);
	if ( (android::icu::util::IslamicCalendar::moonAge(origin) < 0x0) >= 0 )
		goto label_cond_31;
label_cond_3f:
	start = (((origin - -0x26ac5419b000L) /  0x5265c00) + 0x1);
	android::icu::util::IslamicCalendar::cache->put(month, start);
	//    .end local v0    # "age":D
	//    .end local v2    # "origin":J
label_cond_53:
	return start;
	// 1682    .line 638
	// 1683    .restart local v0    # "age":D
	// 1684    .restart local v2    # "origin":J
label_cond_54:
label_goto_54:
	origin = (origin +  0x5265c00);
	if ( (android::icu::util::IslamicCalendar::moonAge(origin) > 0x0) >= 0 )
		goto label_cond_3f;
	goto label_goto_54;

}
// .method private yearStart(I)J
long long android::icu::util::IslamicCalendar::yearStart(int year)
{
	
	long long ys;
	int cVar0;
	
	//    .param p1, "year"    # I
	ys = 0x0;
	//    .local v2, "ys":J
	if ( this->cType == android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL )
		goto label_cond_e;
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_TBLA )
		goto label_cond_23;
label_cond_e:
	ys = ((long long)(( ( year + -0x1) * 0x162)) + (long long)(java::lang::Math::floor(( (double)(( ( year * 0xb) + 0x3)) / 0x403e000000000000L))));
label_cond_22:
label_goto_22:
	return ys;
	// 1760    .line 564
label_cond_23:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_UMALQURA )
		goto label_cond_31;
	if ( year <  0x514 )
		goto label_cond_e;
	if ( year >  0x640 )
		goto label_cond_e;
label_cond_31:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC )
		goto label_cond_41;
	ys = android::icu::util::IslamicCalendar::trueMonthStart((long long)(( ( year + -0x1) * 0xc)));
	goto label_goto_22;
	// 1797    .line 568
label_cond_41:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_UMALQURA )
		goto label_cond_22;
	cVar0 = ( year + -0x514);
	//    .local v0, "yrStartLinearEstimate":I
	ys = (long long)((android::icu::util::IslamicCalendar::UMALQURA_YEAR_START_ESTIMATE_FIX[cVar0] +  (int)(( ( ( (double)(cVar0) * 0x407625e00d1b7176L) + 0x411c188833333333L) + 0x3fe0000000000000L))));
	goto label_goto_22;

}
// .method public getCalculationType()Landroid/icu/util/IslamicCalendar$CalculationType;
std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> android::icu::util::IslamicCalendar::getCalculationType()
{
	
	return this->cType;

}
// .method public getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::IslamicCalendar::getType()
{
	
	if ( this->cType )     
		goto label_cond_8;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic"));
	// 1864    .line 974
label_cond_8:
	return this->cType->bcpType();

}
// .method protected handleComputeFields(I)V
void android::icu::util::IslamicCalendar::handleComputeFields(int julianDay)
{
	
	int year;
	int month;
	long long days;
	int months;
	int y;
	int m;
	auto d;
	long long d;
	int monthLen;
	
	//    .param p1, "julianDay"    # I
	year = 0x0;
	//    .local v19, "year":I
	month = 0x0;
	//    .local v11, "month":I
	0x0;
	//    .local v6, "dayOfMonth":I
	0x0;
	//    .local v7, "dayOfYear":I
	days = ((long long)(julianDay) - 0x1dbb18);
	//    .local v8, "days":J
	if ( this->cType == android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL )
		goto label_cond_2b;
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_TBLA )
		goto label_cond_ee;
label_cond_2b:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_TBLA )
		goto label_cond_43;
	days = ((long long)(julianDay) - 0x1dbb17);
label_cond_43:
	year = (int)(java::lang::Math::floor(((double)(((0x1e * days) + 0x2996)) /  0x40c4c38000000000L)));
	month = (int)(java::lang::Math::ceil(((double)(((days - 0x1d) - this->yearStart(year))) /  0x403d800000000000L)));
	month = java::lang::Math::min(month, 0xb);
label_cond_89:
label_goto_89:
	this->internalSet(0x0, 0x0);
	this->internalSet(0x1, year);
	this->internalSet(0x13, year);
	this->internalSet(0x2, month);
	this->internalSet(0x5, ( (int)((days - this->monthStart(year, month))) + 0x1));
	this->internalSet(0x6, (int)(((days - this->monthStart(year, 0x0)) + 0x1)));
	return;
	// 2142    .line 824
label_cond_ee:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC )
		goto label_cond_150;
	months = (int)(java::lang::Math::floor(((double)(days) /  0x403d87d4abcb41d5L)));
	//    .local v13, "months":I
	//    .local v14, "monthStart":J
	if ( ((days - (long long)(java::lang::Math::floor((((double)(months) *  0x403d87d4abcb41d5L) -  0x3ff0000000000000L)))) > 0x19) < 0 ) 
		goto label_cond_13a;
	if ( (android::icu::util::IslamicCalendar::moonAge(this->internalGetTimeInMillis()) < 0x0) <= 0 )
		goto label_cond_13a;
	months = ( months + 0x1);
label_cond_13a:
label_goto_13a:
	if ( (android::icu::util::IslamicCalendar::trueMonthStart((long long)(months)) > days) <= 0 )
		goto label_cond_148;
	months = ( months + -0x1);
	goto label_goto_13a;
	// 2244    .line 842
label_cond_148:
	year = ( ( months / 0xc) + 0x1);
	month = ( months % 0xc);
	goto label_goto_89;
	// 2255    .line 844
	// 2256    .end local v13    # "months":I
	// 2257    .end local v14    # "monthStart":J
label_cond_150:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_UMALQURA )
		goto label_cond_89;
	//    .local v16, "umalquraStartdays":J
	if ( (days > this->yearStart(0x514)) >= 0 )
		goto label_cond_1b4;
	year = (int)(java::lang::Math::floor(((double)(((0x1e * days) + 0x2996)) /  0x40c4c38000000000L)));
	month = (int)(java::lang::Math::ceil(((double)(((days - 0x1d) - this->yearStart(year))) /  0x403d800000000000L)));
	month = java::lang::Math::min(month, 0xb);
	goto label_goto_89;
	// 2363    .line 852
label_cond_1b4:
	y = 0x513;
	//    .local v18, "y":I
	m = 0x0;
	//    .local v10, "m":I
	d = 0x1;
	//    .local v4, "d":J
label_cond_1b9:
	if ( (d > 0x0) <= 0 )
		goto label_cond_1e2;
	y = ( y + 0x1);
	d = ((days - this->yearStart(y)) + 0x1);
	if ( (d > (long long)(this->handleGetYearLength(y))) )     
		goto label_cond_1e7;
label_cond_1e2:
	year = y;
	month = m;
	goto label_goto_89;
	// 2432    .line 860
label_cond_1e7:
	if ( (d > (long long)(this->handleGetYearLength(y))) >= 0 )
		goto label_cond_1b9;
	monthLen = this->handleGetMonthLength(y, m);
	//    .local v12, "monthLen":I
	m = 0x0;
label_goto_201:
	if ( (d > (long long)(monthLen)) <= 0 )
		goto label_cond_1e2;
	d = (d - (long long)(monthLen));
	m = ( m + 0x1);
	monthLen = this->handleGetMonthLength(y, m);
	goto label_goto_201;

}
// .method protected handleComputeMonthStart(IIZ)I
int android::icu::util::IslamicCalendar::handleComputeMonthStart(int eyear,int month,bool useMonth)
{
	
	long long cVar0;
	
	//    .param p1, "eyear"    # I
	//    .param p2, "month"    # I
	//    .param p3, "useMonth"    # Z
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_TBLA )
		goto label_cond_13;
	cVar0 = 0x1dbb17;
label_goto_d:
	return (int)(((cVar0 +  this->monthStart(eyear, month)) -  0x1));
label_cond_13:
	cVar0 = 0x1dbb18;
	goto label_goto_d;

}
// .method protected handleGetExtendedYear()I
int android::icu::util::IslamicCalendar::handleGetExtendedYear()
{
	
	int cVar0;
	int cVar1;
	
	cVar0 = 0x13;
	cVar1 = 0x1;
	if ( this->newerField(cVar0, cVar1) != cVar0 )
		goto label_cond_e;
	//    .local v0, "year":I
label_goto_d:
	return year;
	// 2559    .line 790
	// 2560    .end local v0    # "year":I
label_cond_e:
	//    .restart local v0    # "year":I
	goto label_goto_d;

}
// .method protected handleGetLimit(II)I
int android::icu::util::IslamicCalendar::handleGetLimit(int field,int limitType)
{
	
	//    .param p1, "field"    # I
	//    .param p2, "limitType"    # I
	return android::icu::util::IslamicCalendar::LIMITS[field][limitType];

}
// .method protected handleGetMonthLength(II)I
int android::icu::util::IslamicCalendar::handleGetMonthLength(int extendedYear,int month)
{
	
	int length;
	int cVar0;
	
	//    .param p1, "extendedYear"    # I
	//    .param p2, "month"    # I
	if ( this->cType == android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL )
		goto label_cond_c;
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_TBLA )
		goto label_cond_1f;
label_cond_c:
	length = ( ( ( month + 0x1) % 0x2) + 0x1d);
	//    .local v1, "length":I
	if ( month != 0xb )
		goto label_cond_1e;
	if ( !(android::icu::util::IslamicCalendar::civilLeapYear(extendedYear)) )  
		goto label_cond_1e;
label_cond_1e:
label_goto_1e:
	return length;
	// 2634    .line 718
	// 2635    .end local v1    # "length":I
label_cond_1f:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_UMALQURA )
		goto label_cond_2d;
	if ( extendedYear <  0x514 )
		goto label_cond_c;
	if ( extendedYear >  0x640 )
		goto label_cond_c;
label_cond_2d:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC )
		goto label_cond_47;
	cVar0 = (month +  ( ( extendedYear + -0x1) * 0xc));
	//    .restart local v1    # "length":I
	goto label_goto_1e;
	// 2688    .line 729
	// 2689    .end local v1    # "length":I
label_cond_47:
	//    .local v0, "idx":I
	//    .local v2, "mask":I
	if ( (android::icu::util::IslamicCalendar::UMALQURA_MONTHLENGTH[( extendedYear + -0x514)] &  (0x1 << ( month - 0xb))) )     
		goto label_cond_58;
	//    .restart local v1    # "length":I
	goto label_goto_1e;
	// 2717    .line 735
	// 2718    .end local v1    # "length":I
label_cond_58:
	//    .restart local v1    # "length":I
	goto label_goto_1e;

}
// .method protected handleGetYearLength(I)I
int android::icu::util::IslamicCalendar::handleGetYearLength(int extendedYear)
{
	
	int length;
	int cVar0;
	int month;
	int i;
	
	//    .param p1, "extendedYear"    # I
	length = 0x0;
	//    .local v1, "length":I
	if ( this->cType == android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL )
		goto label_cond_f;
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_TBLA )
		goto label_cond_19;
label_cond_f:
	if ( !(android::icu::util::IslamicCalendar::civilLeapYear(extendedYear)) )  
		goto label_cond_40;
	cVar0 = 0x1;
label_goto_16:
	length = ( cVar0 + 0x162);
label_cond_18:
label_goto_18:
	return length;
	// 2769    .line 749
label_cond_19:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_UMALQURA )
		goto label_cond_27;
	if ( extendedYear <  0x514 )
		goto label_cond_f;
	if ( extendedYear >  0x640 )
		goto label_cond_f;
label_cond_27:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC )
		goto label_cond_42;
	month = ( ( extendedYear + -0x1) * 0xc);
	//    .local v2, "month":I
	length = (int)((android::icu::util::IslamicCalendar::trueMonthStart((long long)(( month + 0xc))) -  android::icu::util::IslamicCalendar::trueMonthStart((long long)(month))));
	goto label_goto_18;
	// 2820    .line 750
	// 2821    .end local v2    # "month":I
label_cond_40:
	cVar0 = 0x0;
	goto label_goto_16;
	// 2827    .line 754
label_cond_42:
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_UMALQURA )
		goto label_cond_18;
	i = 0x0;
	//    .local v0, "i":I
label_goto_49:
	if ( i >= 0xc )
		goto label_cond_18;
	length = (length +  this->handleGetMonthLength(extendedYear, i));
	i = ( i + 0x1);
	goto label_goto_49;

}
// .method public isCivil()Z
bool android::icu::util::IslamicCalendar::isCivil()
{
	
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL )
		goto label_cond_8;
	return 0x1;
	// 2871    .line 337
label_cond_8:
	return 0x0;

}
// .method public setCalculationType(Landroid/icu/util/IslamicCalendar$CalculationType;)V
void android::icu::util::IslamicCalendar::setCalculationType(std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> type)
{
	
	//    .param p1, "type"    # Landroid/icu/util/IslamicCalendar$CalculationType;
	this->cType = type;
	if ( this->cType != android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL )
		goto label_cond_c;
	this->civil = 0x1;
label_goto_b:
	return;
	// 2902    .line 935
label_cond_c:
	this->civil = 0x0;
	goto label_goto_b;

}
// .method public setCivil(Z)V
void android::icu::util::IslamicCalendar::setCivil(bool beCivil)
{
	
	//    .param p1, "beCivil"    # Z
	this->civil = beCivil;
	if ( !(beCivil) )  
		goto label_cond_19;
	if ( this->cType == android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL )
		goto label_cond_19;
	//    .local v0, "m":J
	this->cType = android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL;
	this->clear();
	this->setTimeInMillis(this->getTimeInMillis());
	//    .end local v0    # "m":J
label_cond_18:
label_goto_18:
	return;
	// 2951    .line 316
label_cond_19:
	if ( beCivil )     
		goto label_cond_18;
	if ( this->cType == android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC )
		goto label_cond_18;
	//    .restart local v0    # "m":J
	this->cType = android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC;
	this->clear();
	this->setTimeInMillis(this->getTimeInMillis());
	goto label_goto_18;

}


