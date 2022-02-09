// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ArabicShaping.smali
#include "java2ctype.h"
#include "android.icu.impl.UBiDiProps.h"
#include "android.icu.text.ArabicShaping.h"
#include "android.icu.text.ArabicShapingException.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"

static android::icu::text::ArabicShaping::ALEFTYPE = 0x20;
static android::icu::text::ArabicShaping::DESHAPE_MODE = 0x1;
static android::icu::text::ArabicShaping::DIGITS_AN2EN = 0x40;
static android::icu::text::ArabicShaping::DIGITS_EN2AN = 0x20;
static android::icu::text::ArabicShaping::DIGITS_EN2AN_INIT_AL = 0x80;
static android::icu::text::ArabicShaping::DIGITS_EN2AN_INIT_LR = 0x60;
static android::icu::text::ArabicShaping::DIGITS_MASK = 0xe0;
static android::icu::text::ArabicShaping::DIGITS_NOOP = 0x0;
static android::icu::text::ArabicShaping::DIGIT_TYPE_AN = 0x0;
static android::icu::text::ArabicShaping::DIGIT_TYPE_AN_EXTENDED = 0x100;
static android::icu::text::ArabicShaping::DIGIT_TYPE_MASK = 0x100;
static android::icu::text::ArabicShaping::HAMZA06_CHAR = '\u0621';
static android::icu::text::ArabicShaping::HAMZAFE_CHAR = '\ufe80';
static android::icu::text::ArabicShaping::IRRELEVANT = 0x4;
static android::icu::text::ArabicShaping::LAMALEF_AUTO = 0x10000;
static android::icu::text::ArabicShaping::LAMALEF_BEGIN = 0x3;
static android::icu::text::ArabicShaping::LAMALEF_END = 0x2;
static android::icu::text::ArabicShaping::LAMALEF_MASK = 0x10003;
static android::icu::text::ArabicShaping::LAMALEF_NEAR = 0x1;
static android::icu::text::ArabicShaping::LAMALEF_RESIZE = 0x0;
static android::icu::text::ArabicShaping::LAMALEF_SPACE_SUB = '\uffff';
static android::icu::text::ArabicShaping::LAMTYPE = 0x10;
static android::icu::text::ArabicShaping::LAM_CHAR = '\u0644';
static android::icu::text::ArabicShaping::LENGTH_FIXED_SPACES_AT_BEGINNING = 0x3;
static android::icu::text::ArabicShaping::LENGTH_FIXED_SPACES_AT_END = 0x2;
static android::icu::text::ArabicShaping::LENGTH_FIXED_SPACES_NEAR = 0x1;
static android::icu::text::ArabicShaping::LENGTH_GROW_SHRINK = 0x0;
static android::icu::text::ArabicShaping::LENGTH_MASK = 0x10003;
static android::icu::text::ArabicShaping::LETTERS_MASK = 0x18;
static android::icu::text::ArabicShaping::LETTERS_NOOP = 0x0;
static android::icu::text::ArabicShaping::LETTERS_SHAPE = 0x8;
static android::icu::text::ArabicShaping::LETTERS_SHAPE_TASHKEEL_ISOLATED = 0x18;
static android::icu::text::ArabicShaping::LETTERS_UNSHAPE = 0x10;
static android::icu::text::ArabicShaping::LINKL = 0x2;
static android::icu::text::ArabicShaping::LINKR = 0x1;
static android::icu::text::ArabicShaping::LINK_MASK = 0x3;
static android::icu::text::ArabicShaping::NEW_TAIL_CHAR = '\ufe73';
static android::icu::text::ArabicShaping::OLD_TAIL_CHAR = '\u200b';
static android::icu::text::ArabicShaping::SEEN_MASK = 0x700000;
static android::icu::text::ArabicShaping::SEEN_TWOCELL_NEAR = 0x200000;
static android::icu::text::ArabicShaping::SHADDA06_CHAR = '\u0651';
static android::icu::text::ArabicShaping::SHADDA_CHAR = '\ufe7c';
static android::icu::text::ArabicShaping::SHADDA_TATWEEL_CHAR = '\ufe7d';
static android::icu::text::ArabicShaping::SHAPE_MODE = 0x0;
static android::icu::text::ArabicShaping::SHAPE_TAIL_NEW_UNICODE = 0x8000000;
static android::icu::text::ArabicShaping::SHAPE_TAIL_TYPE_MASK = 0x8000000;
static android::icu::text::ArabicShaping::SPACES_RELATIVE_TO_TEXT_BEGIN_END = 0x4000000;
static android::icu::text::ArabicShaping::SPACES_RELATIVE_TO_TEXT_MASK = 0x4000000;
static android::icu::text::ArabicShaping::SPACE_CHAR = ' ';
static android::icu::text::ArabicShaping::TASHKEEL_BEGIN = 0x40000;
static android::icu::text::ArabicShaping::TASHKEEL_END = 0x60000;
static android::icu::text::ArabicShaping::TASHKEEL_MASK = 0xe0000;
static android::icu::text::ArabicShaping::TASHKEEL_REPLACE_BY_TATWEEL = 0xc0000;
static android::icu::text::ArabicShaping::TASHKEEL_RESIZE = 0x80000;
static android::icu::text::ArabicShaping::TASHKEEL_SPACE_SUB = '\ufffe';
static android::icu::text::ArabicShaping::TATWEEL_CHAR = '\u0640';
static android::icu::text::ArabicShaping::TEXT_DIRECTION_LOGICAL = 0x0;
static android::icu::text::ArabicShaping::TEXT_DIRECTION_MASK = 0x4;
static android::icu::text::ArabicShaping::TEXT_DIRECTION_VISUAL_LTR = 0x4;
static android::icu::text::ArabicShaping::TEXT_DIRECTION_VISUAL_RTL = 0x0;
static android::icu::text::ArabicShaping::YEHHAMZA_MASK = 0x3800000;
static android::icu::text::ArabicShaping::YEHHAMZA_TWOCELL_NEAR = 0x1000000;
static android::icu::text::ArabicShaping::YEH_HAMZAFE_CHAR = '\ufe89';
static android::icu::text::ArabicShaping::YEH_HAMZA_CHAR = '\u0626';
static android::icu::text::ArabicShaping::araLink;
static android::icu::text::ArabicShaping::convertFEto06;
static android::icu::text::ArabicShaping::convertNormalizedLamAlef;
static android::icu::text::ArabicShaping::irrelevantPos;
static android::icu::text::ArabicShaping::presLink;
static android::icu::text::ArabicShaping::shapeTable;
static android::icu::text::ArabicShaping::tailFamilyIsolatedFinal;
static android::icu::text::ArabicShaping::tashkeelMedial;
static android::icu::text::ArabicShaping::yehHamzaToYeh;
// .method static constructor <clinit>()V
void android::icu::text::ArabicShaping::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<int[]>> cVar5;
	std::shared<std::vector<int[]>> cVar6;
	std::shared<std::vector<int[]>> cVar7;
	std::shared<std::vector<char[]>> cVar8;
	std::shared<std::vector<char[]>> cVar9;
	std::shared<std::vector<int[]>> cVar10;
	std::shared<std::vector<int[]>> cVar11;
	std::shared<std::vector<int[]>> cVar12;
	std::shared<std::vector<int[][][]>> cVar13;
	std::shared<std::vector<int[][]>> cVar14;
	std::shared<std::vector<int[][]>> cVar15;
	std::shared<std::vector<int[][]>> cVar16;
	std::shared<std::vector<int[][]>> cVar17;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<int[]>>(0x8);
	?;
	android::icu::text::ArabicShaping::irrelevantPos = cVar5;
	cVar6 = std::make_shared<std::vector<int[]>>(0xe);
	?;
	android::icu::text::ArabicShaping::tailFamilyIsolatedFinal = cVar6;
	cVar7 = std::make_shared<std::vector<int[]>>(0x10);
	?;
	android::icu::text::ArabicShaping::tashkeelMedial = cVar7;
	cVar8 = std::make_shared<std::vector<char[]>>(cVar2);
	?;
	android::icu::text::ArabicShaping::yehHamzaToYeh = cVar8;
	cVar9 = std::make_shared<std::vector<char[]>>(cVar0);
	?;
	android::icu::text::ArabicShaping::convertNormalizedLamAlef = cVar9;
	cVar10 = std::make_shared<std::vector<int[]>>(0xb2);
	?;
	android::icu::text::ArabicShaping::araLink = cVar10;
	cVar11 = std::make_shared<std::vector<int[]>>(0x8d);
	?;
	android::icu::text::ArabicShaping::presLink = cVar11;
	cVar12 = std::make_shared<std::vector<int[]>>(0x8d);
	?;
	android::icu::text::ArabicShaping::convertFEto06 = cVar12;
	cVar13 = std::make_shared<std::vector<int[][][]>>(cVar0);
	cVar14 = std::make_shared<std::vector<int[][]>>(cVar0);
	?;
	cVar14[cVar4] = ?;
	?;
	cVar14[cVar3] = ?;
	?;
	cVar14[cVar2] = ?;
	?;
	cVar14[cVar1] = ?;
	cVar13[cVar4] = cVar14;
	cVar15 = std::make_shared<std::vector<int[][]>>(cVar0);
	?;
	cVar15[cVar4] = ?;
	?;
	cVar15[cVar3] = ?;
	?;
	cVar15[cVar2] = ?;
	?;
	cVar15[cVar1] = ?;
	cVar13[cVar3] = cVar15;
	cVar16 = std::make_shared<std::vector<int[][]>>(cVar0);
	?;
	cVar16[cVar4] = ?;
	?;
	cVar16[cVar3] = ?;
	?;
	cVar16[cVar2] = ?;
	?;
	cVar16[cVar1] = ?;
	cVar13[cVar2] = cVar16;
	cVar17 = std::make_shared<std::vector<int[][]>>(cVar0);
	?;
	cVar17[cVar4] = ?;
	?;
	cVar17[cVar3] = ?;
	?;
	cVar17[cVar2] = ?;
	?;
	cVar17[cVar1] = ?;
	cVar13[cVar1] = cVar17;
	android::icu::text::ArabicShaping::shapeTable = cVar13;
	return;
	// 373    .line 620
	// 374    :array_be
	// 375    .array-data 4
	// 376        0x0
	// 377        0x2
	// 378        0x4
	// 379        0x6
	// 380        0x8
	// 381        0xa
	// 382        0xc
	// 383        0xe
	// 384    .end array-data
	// 386    .line 637
	// 387    :array_d2
	// 388    .array-data 4
	// 389        0x1
	// 390        0x1
	// 391        0x0
	// 392        0x0
	// 393        0x1
	// 394        0x1
	// 395        0x0
	// 396        0x0
	// 397        0x1
	// 398        0x1
	// 399        0x0
	// 400        0x0
	// 401        0x1
	// 402        0x1
	// 403    .end array-data
	// 405    .line 654
	// 406    :array_f2
	// 407    .array-data 4
	// 408        0x0
	// 409        0x1
	// 410        0x0
	// 411        0x0
	// 412        0x0
	// 413        0x0
	// 414        0x0
	// 415        0x1
	// 416        0x0
	// 417        0x1
	// 418        0x0
	// 419        0x1
	// 420        0x0
	// 421        0x1
	// 422        0x0
	// 423        0x1
	// 424    .end array-data
	// 426    .line 674
	// 427    :array_116
	// 428    .array-data 2
	// 429        -0x111s
	// 430        -0x110s
	// 431    .end array-data
	// 433    .line 679
	// 434    :array_11c
	// 435    .array-data 2
	// 436        0x622s
	// 437        0x623s
	// 438        0x625s
	// 439        0x627s
	// 440    .end array-data
	// 442    .line 686
	// 443    :array_124
	// 444    .array-data 4
	// 445        0x1121
	// 446        0x1321
	// 447        0x1501
	// 448        0x1721
	// 449        0x1903
	// 450        0x1d21
	// 451        0x1f03
	// 452        0x2301
	// 453        0x2503
	// 454        0x2903
	// 455        0x2d03
	// 456        0x3103
	// 457        0x3503
	// 458        0x3901
	// 459        0x3b01
	// 460        0x3d01
	// 461        0x3f01
	// 462        0x4103
	// 463        0x4503
	// 464        0x4903
	// 465        0x4d03
	// 466        0x5103
	// 467        0x5503
	// 468        0x5903
	// 469        0x5d03
	// 470        0x0
	// 471        0x0
	// 472        0x0
	// 473        0x0
	// 474        0x0
	// 475        0x3
	// 476        0x6103
	// 477        0x6503
	// 478        0x6903
	// 479        0x6d13
	// 480        0x7103
	// 481        0x7503
	// 482        0x7903
	// 483        0x7d01
	// 484        0x7f01
	// 485        0x8103
	// 486        0x4
	// 487        0x4
	// 488        0x4
	// 489        0x4
	// 490        0x4
	// 491        0x4
	// 492        0x4
	// 493        0x4
	// 494        0x4
	// 495        0x4
	// 496        0x4
	// 497        0x0
	// 498        0x0
	// 499        0x0
	// 500        0x0
	// 501        0x0
	// 502        0x0
	// 503        0x8501
	// 504        0x8701
	// 505        0x8901
	// 506        0x8b01
	// 507        0x0
	// 508        0x0
	// 509        0x0
	// 510        0x0
	// 511        0x0
	// 512        0x0
	// 513        0x0
	// 514        0x0
	// 515        0x0
	// 516        0x0
	// 517        0x0
	// 518        0x0
	// 519        0x0
	// 520        0x0
	// 521        0x0
	// 522        0x0
	// 523        0x4
	// 524        0x0
	// 525        0x21
	// 526        0x21
	// 527        0x0
	// 528        0x21
	// 529        0x1
	// 530        0x1
	// 531        0x3
	// 532        0x3
	// 533        0x3
	// 534        0x3
	// 535        0x3
	// 536        0x3
	// 537        0x3
	// 538        0x3
	// 539        0x3
	// 540        0x3
	// 541        0x3
	// 542        0x3
	// 543        0x3
	// 544        0x3
	// 545        0x3
	// 546        0x3
	// 547        0x1
	// 548        0x1
	// 549        0x1
	// 550        0x1
	// 551        0x1
	// 552        0x1
	// 553        0x1
	// 554        0x1
	// 555        0x1
	// 556        0x1
	// 557        0x1
	// 558        0x1
	// 559        0x1
	// 560        0x1
	// 561        0x1
	// 562        0x1
	// 563        0x1
	// 564        0x1
	// 565        0x3
	// 566        0x3
	// 567        0x3
	// 568        0x3
	// 569        0x3
	// 570        0x3
	// 571        0x3
	// 572        0x3
	// 573        0x3
	// 574        0x3
	// 575        0x3
	// 576        0x3
	// 577        0x3
	// 578        0x3
	// 579        0x3
	// 580        0x3
	// 581        0x3
	// 582        0x3
	// 583        0x3
	// 584        0x3
	// 585        0x3
	// 586        0x3
	// 587        0x3
	// 588        0x3
	// 589        0x3
	// 590        0x3
	// 591        0x3
	// 592        0x3
	// 593        0x3
	// 594        0x3
	// 595        0x3
	// 596        0x3
	// 597        0x3
	// 598        0x3
	// 599        0x3
	// 600        0x3
	// 601        0x3
	// 602        0x3
	// 603        0x1
	// 604        0x3
	// 605        0x1
	// 606        0x1
	// 607        0x1
	// 608        0x1
	// 609        0x1
	// 610        0x1
	// 611        0x1
	// 612        0x1
	// 613        0x1
	// 614        0x1
	// 615        0x3
	// 616        0x1
	// 617        0x3
	// 618        0x3
	// 619        0x3
	// 620        0x3
	// 621        0x1
	// 622        0x1
	// 623    .end array-data
	// 625    .line 764
	// 626    :array_28c
	// 627    .array-data 4
	// 628        0x3
	// 629        0x3
	// 630        0x3
	// 631        0x0
	// 632        0x3
	// 633        0x0
	// 634        0x3
	// 635        0x3
	// 636        0x3
	// 637        0x3
	// 638        0x3
	// 639        0x3
	// 640        0x3
	// 641        0x3
	// 642        0x3
	// 643        0x3
	// 644        0x0
	// 645        0x20
	// 646        0x21
	// 647        0x20
	// 648        0x21
	// 649        0x0
	// 650        0x1
	// 651        0x20
	// 652        0x21
	// 653        0x0
	// 654        0x2
	// 655        0x3
	// 656        0x1
	// 657        0x20
	// 658        0x21
	// 659        0x0
	// 660        0x2
	// 661        0x3
	// 662        0x1
	// 663        0x0
	// 664        0x1
	// 665        0x0
	// 666        0x2
	// 667        0x3
	// 668        0x1
	// 669        0x0
	// 670        0x2
	// 671        0x3
	// 672        0x1
	// 673        0x0
	// 674        0x2
	// 675        0x3
	// 676        0x1
	// 677        0x0
	// 678        0x2
	// 679        0x3
	// 680        0x1
	// 681        0x0
	// 682        0x2
	// 683        0x3
	// 684        0x1
	// 685        0x0
	// 686        0x1
	// 687        0x0
	// 688        0x1
	// 689        0x0
	// 690        0x1
	// 691        0x0
	// 692        0x1
	// 693        0x0
	// 694        0x2
	// 695        0x3
	// 696        0x1
	// 697        0x0
	// 698        0x2
	// 699        0x3
	// 700        0x1
	// 701        0x0
	// 702        0x2
	// 703        0x3
	// 704        0x1
	// 705        0x0
	// 706        0x2
	// 707        0x3
	// 708        0x1
	// 709        0x0
	// 710        0x2
	// 711        0x3
	// 712        0x1
	// 713        0x0
	// 714        0x2
	// 715        0x3
	// 716        0x1
	// 717        0x0
	// 718        0x2
	// 719        0x3
	// 720        0x1
	// 721        0x0
	// 722        0x2
	// 723        0x3
	// 724        0x1
	// 725        0x0
	// 726        0x2
	// 727        0x3
	// 728        0x1
	// 729        0x0
	// 730        0x2
	// 731        0x3
	// 732        0x1
	// 733        0x0
	// 734        0x2
	// 735        0x3
	// 736        0x1
	// 737        0x10
	// 738        0x12
	// 739        0x13
	// 740        0x11
	// 741        0x0
	// 742        0x2
	// 743        0x3
	// 744        0x1
	// 745        0x0
	// 746        0x2
	// 747        0x3
	// 748        0x1
	// 749        0x0
	// 750        0x2
	// 751        0x3
	// 752        0x1
	// 753        0x0
	// 754        0x1
	// 755        0x0
	// 756        0x1
	// 757        0x0
	// 758        0x2
	// 759        0x3
	// 760        0x1
	// 761        0x0
	// 762        0x1
	// 763        0x0
	// 764        0x1
	// 765        0x0
	// 766        0x1
	// 767        0x0
	// 768        0x1
	// 769    .end array-data
	// 771    .line 805
	// 772    :array_3aa
	// 773    .array-data 4
	// 774        0x64b
	// 775        0x64b
	// 776        0x64c
	// 777        0x64c
	// 778        0x64d
	// 779        0x64d
	// 780        0x64e
	// 781        0x64e
	// 782        0x64f
	// 783        0x64f
	// 784        0x650
	// 785        0x650
	// 786        0x651
	// 787        0x651
	// 788        0x652
	// 789        0x652
	// 790        0x621
	// 791        0x622
	// 792        0x622
	// 793        0x623
	// 794        0x623
	// 795        0x624
	// 796        0x624
	// 797        0x625
	// 798        0x625
	// 799        0x626
	// 800        0x626
	// 801        0x626
	// 802        0x626
	// 803        0x627
	// 804        0x627
	// 805        0x628
	// 806        0x628
	// 807        0x628
	// 808        0x628
	// 809        0x629
	// 810        0x629
	// 811        0x62a
	// 812        0x62a
	// 813        0x62a
	// 814        0x62a
	// 815        0x62b
	// 816        0x62b
	// 817        0x62b
	// 818        0x62b
	// 819        0x62c
	// 820        0x62c
	// 821        0x62c
	// 822        0x62c
	// 823        0x62d
	// 824        0x62d
	// 825        0x62d
	// 826        0x62d
	// 827        0x62e
	// 828        0x62e
	// 829        0x62e
	// 830        0x62e
	// 831        0x62f
	// 832        0x62f
	// 833        0x630
	// 834        0x630
	// 835        0x631
	// 836        0x631
	// 837        0x632
	// 838        0x632
	// 839        0x633
	// 840        0x633
	// 841        0x633
	// 842        0x633
	// 843        0x634
	// 844        0x634
	// 845        0x634
	// 846        0x634
	// 847        0x635
	// 848        0x635
	// 849        0x635
	// 850        0x635
	// 851        0x636
	// 852        0x636
	// 853        0x636
	// 854        0x636
	// 855        0x637
	// 856        0x637
	// 857        0x637
	// 858        0x637
	// 859        0x638
	// 860        0x638
	// 861        0x638
	// 862        0x638
	// 863        0x639
	// 864        0x639
	// 865        0x639
	// 866        0x639
	// 867        0x63a
	// 868        0x63a
	// 869        0x63a
	// 870        0x63a
	// 871        0x641
	// 872        0x641
	// 873        0x641
	// 874        0x641
	// 875        0x642
	// 876        0x642
	// 877        0x642
	// 878        0x642
	// 879        0x643
	// 880        0x643
	// 881        0x643
	// 882        0x643
	// 883        0x644
	// 884        0x644
	// 885        0x644
	// 886        0x644
	// 887        0x645
	// 888        0x645
	// 889        0x645
	// 890        0x645
	// 891        0x646
	// 892        0x646
	// 893        0x646
	// 894        0x646
	// 895        0x647
	// 896        0x647
	// 897        0x647
	// 898        0x647
	// 899        0x648
	// 900        0x648
	// 901        0x649
	// 902        0x649
	// 903        0x64a
	// 904        0x64a
	// 905        0x64a
	// 906        0x64a
	// 907        0x65c
	// 908        0x65c
	// 909        0x65d
	// 910        0x65d
	// 911        0x65e
	// 912        0x65e
	// 913        0x65f
	// 914        0x65f
	// 915    .end array-data

}
// .method public constructor <init>(I)V
android::icu::text::ArabicShaping::ArabicShaping(int options)
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	int cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	bool cVar5;
	
	//    .param p1, "options"    # I
	cVar0 = 0x8000000;
	cVar1 = 0x4000000;
	cVar2 = 0x1;
	cVar3 = 0x0;
	// 932    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->options = options;
	if ( ( options & 0xe0) <= 0x80 )
		goto label_cond_1a;
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("bad DIGITS options")));
	// throw
	throw cVar4;
	// 953    .line 192
label_cond_1a:
	if ( ( options & 0x4) )     
		goto label_cond_31;
	cVar5 = cVar2;
label_goto_1f:
	this->isLogical = cVar5;
	if ( (options & cVar1) != cVar1 )
		goto label_cond_33;
label_goto_25:
	this->spacesRelativeToTextBeginEnd = cVar2;
	if ( (options & cVar0) != cVar0 )
		goto label_cond_35;
	this->tailChar = 0xfe73;
label_goto_30:
	return;
label_cond_31:
	cVar5 = cVar3;
	goto label_goto_1f;
label_cond_33:
	cVar2 = cVar3;
	goto label_goto_25;
	// 998    .line 198
label_cond_35:
	this->tailChar = 0x200b;
	goto label_goto_30;

}
// .method private calculateSize([CII)I
int android::icu::text::ArabicShaping::calculateSize(std::shared_ptr<char[]> source,int sourceStart,int sourceLength)
{
	
	int cVar0;
	int destSize;
	int i;
	
	//    .param p1, "source"    # [C
	//    .param p2, "sourceStart"    # I
	//    .param p3, "sourceLength"    # I
	cVar0 = 0x644;
	destSize = sourceLength;
	//    .local v0, "destSize":I
	// switch
	{
	auto item = ( ( this->options & 0x18) );
	if (item == 0x8) goto label_sswitch_b;
	if (item == 0x10) goto label_sswitch_52;
	if (item == 0x18) goto label_sswitch_b;
	}
label_cond_a:
	return destSize;
	// 1031    .line 1114
label_sswitch_b:
	if ( !(this->isLogical) )  
		goto label_cond_31;
	i = sourceStart;
	//    .local v2, "i":I
	//    .local v1, "e":I
label_goto_14:
	if ( i >= ( (sourceStart + sourceLength) + -0x1) )
		goto label_cond_a;
	if ( source[i] != cVar0 )
		goto label_cond_24;
	if ( android::icu::text::ArabicShaping::isAlefChar(source[( i + 0x1)]) )     
		goto label_cond_2c;
label_cond_24:
	if ( !(android::icu::text::ArabicShaping::isTashkeelCharFE(source[i])) )  
		goto label_cond_2e;
label_cond_2c:
	destSize = ( destSize + -0x1);
label_cond_2e:
	i = ( i + 0x1);
	goto label_goto_14;
	// 1083    .line 1121
	// 1084    .end local v1    # "e":I
	// 1085    .end local v2    # "i":I
label_cond_31:
	i = ( sourceStart + 0x1);
	//    .restart local v2    # "i":I
	//    .restart local v1    # "e":I
label_goto_35:
	if ( i >= (sourceStart + sourceLength) )
		goto label_cond_a;
	if ( source[i] != cVar0 )
		goto label_cond_45;
	if ( android::icu::text::ArabicShaping::isAlefChar(source[( i + -0x1)]) )     
		goto label_cond_4d;
label_cond_45:
	if ( !(android::icu::text::ArabicShaping::isTashkeelCharFE(source[i])) )  
		goto label_cond_4f;
label_cond_4d:
	destSize = ( destSize + -0x1);
label_cond_4f:
	i = ( i + 0x1);
	goto label_goto_35;
	// 1130    .line 1130
	// 1131    .end local v1    # "e":I
	// 1132    .end local v2    # "i":I
label_sswitch_52:
	i = sourceStart;
	//    .restart local v2    # "i":I
	//    .restart local v1    # "e":I
label_goto_55:
	if ( i >= (sourceStart + sourceLength) )
		goto label_cond_a;
	if ( !(android::icu::text::ArabicShaping::isLamAlefChar(source[i])) )  
		goto label_cond_61;
	destSize = ( destSize + 0x1);
label_cond_61:
	i = ( i + 0x1);
	goto label_goto_55;
	// 1161    .line 1111
	// 1162    :sswitch_data_64
	// 1163    .sparse-switch
	// 1164        0x8 -> :sswitch_b
	// 1165        0x10 -> :sswitch_52
	// 1166        0x18 -> :sswitch_b
	// 1167    .end sparse-switch

}
// .method private static changeLamAlef(C)C
char android::icu::text::ArabicShaping::changeLamAlef(char ch)
{
	
	//    .param p0, "ch"    # C
	// switch
	{
	auto item = ( ch );
	if (item == 1570) goto label_pswitch_5;
	if (item == 1571) goto label_pswitch_8;
	if (item == 1572) goto label_pswitch_3;
	if (item == 1573) goto label_pswitch_b;
	if (item == 1574) goto label_pswitch_3;
	if (item == 1575) goto label_pswitch_e;
	}
label_pswitch_3:
	return 0x0;
	// 1184    .line 886
label_pswitch_5:
	return 0x65c;
	// 1190    .line 887
label_pswitch_8:
	return 0x65d;
	// 1196    .line 888
label_pswitch_b:
	return 0x65e;
	// 1202    .line 889
label_pswitch_e:
	return 0x65f;
	// 1208    .line 885
	// 1209    nop
	// 1211    :pswitch_data_12
	// 1212    .packed-switch 0x622
	// 1213        :pswitch_5
	// 1214        :pswitch_8
	// 1215        :pswitch_3
	// 1216        :pswitch_b
	// 1217        :pswitch_3
	// 1218        :pswitch_e
	// 1219    .end packed-switch

}
// .method private static countSpaceSub([CIC)I
int android::icu::text::ArabicShaping::countSpaceSub(std::shared_ptr<char[]> dest,int length,char subChar)
{
	
	int i;
	int count;
	
	//    .param p0, "dest"    # [C
	//    .param p1, "length"    # I
	//    .param p2, "subChar"    # C
	i = 0x0;
	//    .local v1, "i":I
	count = 0x0;
	//    .local v0, "count":I
label_goto_2:
	if ( i >= length )
		goto label_cond_d;
	if ( dest[i] != subChar )
		goto label_cond_a;
	count = ( count + 0x1);
label_cond_a:
	i = ( i + 0x1);
	goto label_goto_2;
	// 1255    .line 1158
label_cond_d:
	return count;

}
// .method private static countSpacesLeft([CII)I
int android::icu::text::ArabicShaping::countSpacesLeft(std::shared_ptr<char[]> dest,int start,int count)
{
	
	int i;
	
	//    .param p0, "dest"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "count"    # I
	i = start;
	//    .local v1, "i":I
	//    .local v0, "e":I
label_goto_3:
	if ( i >= (start + count) )
		goto label_cond_11;
	if ( dest[i] == 0x20 )
		goto label_cond_e;
	return (i - start);
	// 1289    .line 945
label_cond_e:
	i = ( i + 0x1);
	goto label_goto_3;
	// 1295    .line 950
label_cond_11:
	return count;

}
// .method private static countSpacesRight([CII)I
int android::icu::text::ArabicShaping::countSpacesRight(std::shared_ptr<char[]> dest,int start,int count)
{
	
	int i;
	
	//    .param p0, "dest"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "count"    # I
	//    .local v0, "i":I
label_cond_2:
	i = ( i + -0x1);
	if ( i <  start )
		goto label_cond_12;
	if ( dest[i] == 0x20 )
		goto label_cond_2;
	return (( (start + count) + -0x1) -  i);
	// 1332    .line 962
label_cond_12:
	return count;

}
// .method private deShapeUnicode([CIII)I
int android::icu::text::ArabicShaping::deShapeUnicode(std::shared_ptr<char[]> dest,int start,int length,int destSize)
{
	
	int lamalef_count;
	int cVar0;
	
	//    .param p1, "dest"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	//    .param p4, "destSize"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1344        value = {
	// 1345            Landroid/icu/text/ArabicShapingException;
	// 1346        }
	// 1347    .end annotation
	lamalef_count = this->deshapeNormalize(dest, start, length);
	//    .local v4, "lamalef_count":I
	if ( !(lamalef_count) )  
		goto label_cond_10;
	cVar0 = this->expandCompositChar(dest, start, length, lamalef_count, 0x1);
label_goto_f:
	return cVar0;
	// 1378    .line 1786
label_cond_10:
	cVar0 = length;
	goto label_goto_f;

}
// .method private deshapeNormalize([CII)I
int android::icu::text::ArabicShaping::deshapeNormalize(std::shared_ptr<char[]> dest,int start,int length)
{
	
	int cVar0;
	char cVar1;
	int cVar2;
	int lacount;
	int i;
	char ch;
	
	//    .param p1, "dest"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	cVar0 = 0xfe70;
	cVar1 = 0x20;
	cVar2 = 0x1;
	lacount = 0x0;
	//    .local v3, "lacount":I
	0x0;
	//    .local v5, "yehHamzaComposeEnabled":I
	0x0;
	//    .local v4, "seenComposeEnabled":I
	if ( (this->options &  0x3800000) != 0x1000000 )
		goto label_cond_48;
label_goto_13:
	if ( (this->options &  0x700000) != 0x200000 )
		goto label_cond_4a;
label_goto_1d:
	i = start;
	//    .local v2, "i":I
	//    .local v1, "e":I
label_goto_20:
	if ( i >= (start + length) )
		goto label_cond_7e;
	ch = dest[i];
	//    .local v0, "ch":C
	if ( 0x1 != cVar2 )
		goto label_cond_4c;
	if ( ch == 0x621 )
		goto label_cond_2f;
	if ( ch != 0xfe80 )
		goto label_cond_4c;
label_cond_2f:
	if ( i >= ( length + -0x1) )
		goto label_cond_4c;
	if ( !(android::icu::text::ArabicShaping::isAlefMaksouraChar(dest[( i + 0x1)])) )  
		goto label_cond_4c;
	dest[i] = cVar1;
	dest[( i + 0x1)] = 0x626;
label_cond_45:
label_goto_45:
	i = ( i + 0x1);
	goto label_goto_20;
	// 1497    .line 1592
	// 1498    .end local v0    # "ch":C
	// 1499    .end local v1    # "e":I
	// 1500    .end local v2    # "i":I
label_cond_48:
	0x0;
	goto label_goto_13;
	// 1506    .line 1593
label_cond_4a:
	0x0;
	goto label_goto_1d;
	// 1512    .line 1602
	// 1513    .restart local v0    # "ch":C
	// 1514    .restart local v1    # "e":I
	// 1515    .restart local v2    # "i":I
label_cond_4c:
	if ( 0x1 != cVar2 )
		goto label_cond_65;
	if ( !(android::icu::text::ArabicShaping::isTailChar(ch)) )  
		goto label_cond_65;
	if ( i >= ( length + -0x1) )
		goto label_cond_65;
	if ( android::icu::text::ArabicShaping::isSeenTailFamilyChar(dest[( i + 0x1)]) != cVar2 )
		goto label_cond_65;
	dest[i] = cVar1;
	goto label_goto_45;
	// 1545    .line 1606
label_cond_65:
	if ( ch <  cVar0 )
		goto label_cond_45;
	if ( ch >  0xfefc )
		goto label_cond_45;
	if ( !(android::icu::text::ArabicShaping::isLamAlefChar(ch)) )  
		goto label_cond_74;
	lacount = ( lacount + 0x1);
label_cond_74:
	dest[i] = (char)(android::icu::text::ArabicShaping::convertFEto06[(ch - cVar0)]);
	goto label_goto_45;
	// 1577    .line 1613
	// 1578    .end local v0    # "ch":C
label_cond_7e:
	return lacount;

}
// .method private expandCompositChar([CIIII)I
int android::icu::text::ArabicShaping::expandCompositChar(std::shared_ptr<char[]> dest,int start,int length,int lacount,int shapingMode)
{
	
	int lenOptionsLamAlef;
	int spaceNotFound;
	std::shared_ptr<android::icu::text::ArabicShapingException> cVar0;
	std::shared_ptr<android::icu::text::ArabicShapingException> cVar1;
	std::shared_ptr<android::icu::text::ArabicShapingException> cVar2;
	std::shared_ptr<android::icu::text::ArabicShapingException> cVar3;
	std::shared_ptr<android::icu::text::ArabicShapingException> cVar4;
	int r;
	int w;
	char ch;
	int length;
	std::shared_ptr<android::icu::text::ArabicShapingException> cVar6;
	std::shared_ptr<android::icu::text::ArabicShapingException> cVar7;
	
	//    .param p1, "dest"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	//    .param p4, "lacount"    # I
	//    .param p5, "shapingMode"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1591        value = {
	// 1592            Landroid/icu/text/ArabicShapingException;
	// 1593        }
	// 1594    .end annotation
	lenOptionsLamAlef = (this->options & 0x10003);
	//    .local v9, "lenOptionsLamAlef":I
	//    .local v10, "lenOptionsSeen":I
	//    .local v11, "lenOptionsYehHamza":I
	0x0;
	//    .local v13, "spaceNotFound":Z
	if ( this->isLogical )     
		goto label_cond_21;
	if ( !(( this->spacesRelativeToTextBeginEnd ^ 0x1)) )  
		goto label_cond_21;
	// switch
	{
	auto item = ( lenOptionsLamAlef );
	if (item == 2) goto label_pswitch_55;
	if (item == 3) goto label_pswitch_53;
	}
label_cond_21:
label_goto_21:
	if ( shapingMode != 0x1 )
		goto label_cond_e9;
	if ( lenOptionsLamAlef != 0x10000 )
		goto label_cond_7c;
	if ( !(this->isLogical) )  
		goto label_cond_57;
	spaceNotFound = this->expandCompositCharAtEnd(dest, start, length, lacount);
	//    .local v13, "spaceNotFound":Z
	if ( !(spaceNotFound) )  
		goto label_cond_38;
	spaceNotFound = this->expandCompositCharAtBegin(dest, start, length, lacount);
label_cond_38:
	if ( !(spaceNotFound) )  
		goto label_cond_48;
label_cond_48:
	if ( !(spaceNotFound) )  
		goto label_cond_e8;
	cVar0 = std::make_shared<android::icu::text::ArabicShapingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No spacefor lamalef")));
	// throw
	throw cVar0;
	// 1708    .line 1483
	// 1709    .local v13, "spaceNotFound":Z
label_pswitch_53:
	0x2;
	goto label_goto_21;
	// 1715    .line 1484
label_pswitch_55:
	0x3;
	goto label_goto_21;
	// 1721    .line 1503
label_cond_57:
	spaceNotFound = this->expandCompositCharAtBegin(dest, start, length, lacount);
	//    .local v13, "spaceNotFound":Z
	if ( !(spaceNotFound) )  
		goto label_cond_61;
	spaceNotFound = this->expandCompositCharAtEnd(dest, start, length, lacount);
label_cond_61:
	if ( !(spaceNotFound) )  
		goto label_cond_71;
label_cond_71:
	if ( !(spaceNotFound) )  
		goto label_cond_e8;
	cVar1 = std::make_shared<android::icu::text::ArabicShapingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No spacefor lamalef")));
	// throw
	throw cVar1;
	// 1772    .line 1514
	// 1773    .local v13, "spaceNotFound":Z
label_cond_7c:
	if ( lenOptionsLamAlef != 0x2 )
		goto label_cond_8e;
	//    .local v13, "spaceNotFound":Z
	if ( !(this->expandCompositCharAtEnd(dest, start, length, lacount)) )  
		goto label_cond_e8;
	cVar2 = std::make_shared<android::icu::text::ArabicShapingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No spacefor lamalef")));
	// throw
	throw cVar2;
	// 1797    .line 1519
	// 1798    .local v13, "spaceNotFound":Z
label_cond_8e:
	if ( lenOptionsLamAlef != 0x3 )
		goto label_cond_a0;
	//    .local v13, "spaceNotFound":Z
	if ( !(this->expandCompositCharAtBegin(dest, start, length, lacount)) )  
		goto label_cond_e8;
	cVar3 = std::make_shared<android::icu::text::ArabicShapingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No spacefor lamalef")));
	// throw
	throw cVar3;
	// 1822    .line 1524
	// 1823    .local v13, "spaceNotFound":Z
label_cond_a0:
	if ( lenOptionsLamAlef != 0x1 )
		goto label_cond_bc;
	//    .local v13, "spaceNotFound":Z
	if ( !(this->expandCompositCharAtNear(dest, start, length, 0x0, 0x0, 0x1)) )  
		goto label_cond_e8;
	cVar4 = std::make_shared<android::icu::text::ArabicShapingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No spacefor lamalef")));
	// throw
	throw cVar4;
	// 1861    .line 1529
	// 1862    .local v13, "spaceNotFound":Z
label_cond_bc:
	if ( lenOptionsLamAlef )     
		goto label_cond_e8;
	r = (start + length);
	//    .local v12, "r":I
	w = (r + lacount);
	//    .local v14, "w":I
label_goto_c2:
	r = ( r + -0x1);
	if ( r <  start )
		goto label_cond_e6;
	ch = dest[r];
	//    .local v8, "ch":C
	if ( !(android::icu::text::ArabicShaping::isNormalizedLamAlefChar(ch)) )  
		goto label_cond_e1;
	w = ( w + -0x1);
	dest[w] = 0x644;
	w = ( w + -0x1);
	dest[w] = android::icu::text::ArabicShaping::convertNormalizedLamAlef[( ch + -0x65c)];
	goto label_goto_c2;
	// 1911    .line 1536
label_cond_e1:
	w = ( w + -0x1);
	dest[w] = ch;
	goto label_goto_c2;
	// 1919    .line 1539
	// 1920    .end local v8    # "ch":C
label_cond_e6:
	length = (length + lacount);
	//    .end local v12    # "r":I
	//    .end local v13    # "spaceNotFound":Z
	//    .end local v14    # "w":I
label_cond_e8:
	return length;
	// 1931    .line 1542
	// 1932    .restart local v13    # "spaceNotFound":Z
label_cond_e9:
	if ( (this->options & 0x700000) != 0x200000 )
		goto label_cond_106;
	//    .local v13, "spaceNotFound":Z
	if ( !(this->expandCompositCharAtNear(dest, start, length, 0x0, 0x1, 0x0)) )  
		goto label_cond_106;
	cVar6 = std::make_shared<android::icu::text::ArabicShapingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No space for Seen tail expansion")));
	// throw
	throw cVar6;
	// 1970    .line 1548
	// 1971    .end local v13    # "spaceNotFound":Z
label_cond_106:
	if ( (this->options & 0x3800000) != 0x1000000 )
		goto label_cond_e8;
	//    .restart local v13    # "spaceNotFound":Z
	if ( !(this->expandCompositCharAtNear(dest, start, length, 0x1, 0x0, 0x0)) )  
		goto label_cond_e8;
	cVar7 = std::make_shared<android::icu::text::ArabicShapingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No space for YehHamza expansion")));
	// throw
	throw cVar7;
	// 2009    .line 1482
	// 2010    nop
	// 2012    :pswitch_data_124
	// 2013    .packed-switch 0x2
	// 2014        :pswitch_55
	// 2015        :pswitch_53
	// 2016    .end packed-switch

}
// .method private expandCompositCharAtBegin([CIII)Z
bool android::icu::text::ArabicShaping::expandCompositCharAtBegin(std::shared_ptr<char[]> dest,int start,int length,int lacount)
{
	
	int w;
	int r;
	char ch;
	
	//    .param p1, "dest"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	//    .param p4, "lacount"    # I
	//    .local v2, "spaceNotFound":Z
	if ( lacount <= android::icu::text::ArabicShaping::countSpacesRight(dest, start, length) )
		goto label_cond_9;
	return 0x1;
	// 2044    .line 1366
label_cond_9:
	//    .local v1, "r":I
	w = (start + length);
	//    .local v3, "w":I
label_goto_f:
	r = ( r + -0x1);
	if ( r <  start )
		goto label_cond_31;
	ch = dest[r];
	//    .local v0, "ch":C
	if ( !(android::icu::text::ArabicShaping::isNormalizedLamAlefChar(ch)) )  
		goto label_cond_2c;
	w = ( w + -0x1);
	dest[w] = 0x644;
	w = ( w + -0x1);
	dest[w] = android::icu::text::ArabicShaping::convertNormalizedLamAlef[( ch + -0x65c)];
	goto label_goto_f;
	// 2090    .line 1372
label_cond_2c:
	w = ( w + -0x1);
	dest[w] = ch;
	goto label_goto_f;
	// 2098    .line 1375
	// 2099    .end local v0    # "ch":C
label_cond_31:
	return 0x0;

}
// .method private expandCompositCharAtEnd([CIII)Z
bool android::icu::text::ArabicShaping::expandCompositCharAtEnd(std::shared_ptr<char[]> dest,int start,int length,int lacount)
{
	
	int r;
	int w;
	char ch;
	
	//    .param p1, "dest"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	//    .param p4, "lacount"    # I
	//    .local v3, "spaceNotFound":Z
	if ( lacount <= android::icu::text::ArabicShaping::countSpacesLeft(dest, start, length) )
		goto label_cond_9;
	return 0x1;
	// 2129    .line 1396
label_cond_9:
	r = (start + lacount);
	//    .local v2, "r":I
	//    .local v4, "w":I
	//    .local v1, "e":I
	w = start;
	//    .end local v4    # "w":I
	//    .local v5, "w":I
label_goto_f:
	if ( r >= (start + length) )
		goto label_cond_33;
	ch = dest[r];
	//    .local v0, "ch":C
	if ( !(android::icu::text::ArabicShaping::isNormalizedLamAlefChar(ch)) )  
		goto label_cond_2e;
	w = ( w + 0x1);
	//    .end local v5    # "w":I
	//    .restart local v4    # "w":I
	dest[w] = android::icu::text::ArabicShaping::convertNormalizedLamAlef[( ch + -0x65c)];
	//    .end local v4    # "w":I
	//    .restart local v5    # "w":I
	dest[w] = 0x644;
	//    .end local v5    # "w":I
	//    .restart local v4    # "w":I
label_goto_2a:
	r = ( r + 0x1);
	w = w;
	//    .end local v4    # "w":I
	//    .restart local v5    # "w":I
	goto label_goto_f;
	// 2194    .line 1402
label_cond_2e:
	//    .end local v5    # "w":I
	//    .restart local v4    # "w":I
	dest[w] = ch;
	goto label_goto_2a;
	// 2204    .line 1405
	// 2205    .end local v0    # "ch":C
	// 2206    .end local v4    # "w":I
	// 2207    .restart local v5    # "w":I
label_cond_33:
	return 0x0;

}
// .method private expandCompositCharAtNear([CIIIII)Z
bool android::icu::text::ArabicShaping::expandCompositCharAtNear(std::shared_ptr<char[]> dest,int start,int length,int yehHamzaOption,int seenTailOption,int lamAlefOption)
{
	
	int cVar0;
	int cVar1;
	int i;
	char ch;
	
	//    .param p1, "dest"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	//    .param p4, "yehHamzaOption"    # I
	//    .param p5, "seenTailOption"    # I
	//    .param p6, "lamAlefOption"    # I
	cVar0 = 0x20;
	cVar1 = 0x1;
	0x0;
	//    .local v2, "spaceNotFound":Z
	if ( !(android::icu::text::ArabicShaping::isNormalizedLamAlefChar(dest[start])) )  
		goto label_cond_e;
	return 0x1;
	// 2245    .line 1426
label_cond_e:
	//    .local v1, "i":I
label_cond_10:
label_goto_10:
	i = ( i + -0x1);
	if ( i <  start )
		goto label_cond_75;
	ch = dest[i];
	//    .local v0, "ch":C
	if ( lamAlefOption != cVar1 )
		goto label_cond_37;
	if ( !(android::icu::text::ArabicShaping::isNormalizedLamAlefChar(ch)) )  
		goto label_cond_37;
	if ( i <= start )
		goto label_cond_35;
	if ( dest[( i + -0x1)] != cVar0 )
		goto label_cond_35;
	dest[i] = 0x644;
	i = ( i + -0x1);
	dest[i] = android::icu::text::ArabicShaping::convertNormalizedLamAlef[( ch + -0x65c)];
	goto label_goto_10;
	// 2296    .line 1433
label_cond_35:
	return 0x1;
	// 2303    .line 1436
label_cond_37:
	if ( seenTailOption != cVar1 )
		goto label_cond_50;
	if ( android::icu::text::ArabicShaping::isSeenTailFamilyChar(ch) != cVar1 )
		goto label_cond_50;
	if ( i <= start )
		goto label_cond_4e;
	if ( dest[( i + -0x1)] != cVar0 )
		goto label_cond_4e;
	dest[( i + -0x1)] = this->tailChar;
	goto label_goto_10;
	// 2331    .line 1440
label_cond_4e:
	return 0x1;
	// 2338    .line 1443
label_cond_50:
	if ( yehHamzaOption != cVar1 )
		goto label_cond_10;
	if ( !(android::icu::text::ArabicShaping::isYehHamzaChar(ch)) )  
		goto label_cond_10;
	if ( i <= start )
		goto label_cond_73;
	if ( dest[( i + -0x1)] != cVar0 )
		goto label_cond_73;
	dest[i] = android::icu::text::ArabicShaping::yehHamzaToYeh[(ch - 0xfe89)];
	dest[( i + -0x1)] = 0xfe80;
	goto label_goto_10;
	// 2377    .line 1449
label_cond_73:
	return 0x1;
	// 2384    .line 1456
	// 2385    .end local v0    # "ch":C
label_cond_75:
	return 0x0;

}
// .method private static flipArray([CIII)I
int android::icu::text::ArabicShaping::flipArray(std::shared_ptr<char[]> dest,int start,int e,int w)
{
	
	int r;
	int w;
	
	//    .param p0, "dest"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "e"    # I
	//    .param p3, "w"    # I
	if ( w <= start )
		goto label_cond_13;
	//    .local v0, "r":I
	r = w;
	//    .end local v0    # "r":I
	//    .local v1, "r":I
	w = start;
	//    .end local p3    # "w":I
	//    .local v2, "w":I
label_goto_6:
	if ( r >= e )
		goto label_cond_15;
	w = ( w + 0x1);
	//    .end local v2    # "w":I
	//    .restart local p3    # "w":I
	//    .end local v1    # "r":I
	//    .restart local v0    # "r":I
	dest[w] = dest[r];
	r = ( r + 0x1);
	//    .end local v0    # "r":I
	//    .restart local v1    # "r":I
	w = w;
	//    .end local p3    # "w":I
	//    .restart local v2    # "w":I
	goto label_goto_6;
	// 2445    .line 1193
	// 2446    .end local v1    # "r":I
	// 2447    .end local v2    # "w":I
	// 2448    .restart local p3    # "w":I
label_cond_13:
	w = e;
label_goto_14:
	return w;
	// 2456    .end local p3    # "w":I
	// 2457    .restart local v1    # "r":I
	// 2458    .restart local v2    # "w":I
label_cond_15:
	w = w;
	//    .end local v2    # "w":I
	//    .restart local p3    # "w":I
	goto label_goto_14;

}
// .method private static getLink(C)I
int android::icu::text::ArabicShaping::getLink(char ch)
{
	
	int cVar0;
	
	//    .param p0, "ch"    # C
	cVar0 = 0xfe70;
	if ( ch <  0x622 )
		goto label_cond_12;
	if ( ch >  0x6d3 )
		goto label_cond_12;
	return android::icu::text::ArabicShaping::araLink[( ch + -0x622)];
	// 2492    .line 926
label_cond_12:
	if ( ch != 0x200d )
		goto label_cond_18;
	return 0x3;
	// 2503    .line 928
label_cond_18:
	if ( ch <  0x206d )
		goto label_cond_22;
	if ( ch >  0x206f )
		goto label_cond_22;
	return 0x4;
	// 2518    .line 930
label_cond_22:
	if ( ch <  cVar0 )
		goto label_cond_30;
	if ( ch >  0xfefc )
		goto label_cond_30;
	return android::icu::text::ArabicShaping::presLink[(ch - cVar0)];
	// 2535    .line 933
label_cond_30:
	return 0x0;

}
// .method private handleGeneratedSpaces([CII)I
int android::icu::text::ArabicShaping::handleGeneratedSpaces(std::shared_ptr<char[]> dest,int start,int length)
{
	
	int lenOptionsLamAlef;
	int lenOptionsTashkeel;
	int lamAlefOn;
	int tashkeelOn;
	int i;
	int e;
	int wL;
	int wT;
	int length;
	
	//    .param p1, "dest"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	lenOptionsLamAlef = (this->options & 0x10003);
	//    .local v3, "lenOptionsLamAlef":I
	lenOptionsTashkeel = (this->options & 0xe0000);
	//    .local v4, "lenOptionsTashkeel":I
	lamAlefOn = 0x0;
	//    .local v2, "lamAlefOn":Z
	tashkeelOn = 0x0;
	//    .local v5, "tashkeelOn":Z
	if ( !((( this->isLogical ^ 0x1) &  ( this->spacesRelativeToTextBeginEnd ^ 0x1))) )  
		goto label_cond_20;
	// switch
	{
	auto item = ( lenOptionsLamAlef );
	if (item == 2) goto label_pswitch_38;
	if (item == 3) goto label_pswitch_36;
	}
label_goto_1d:
	// switch
	{
	auto item = ( lenOptionsTashkeel );
	if (item == 0x40000) goto label_sswitch_3a;
	if (item == 0x60000) goto label_sswitch_3d;
	}
label_cond_20:
label_goto_20:
	if ( lenOptionsLamAlef != 0x1 )
		goto label_cond_40;
	i = start;
	//    .local v1, "i":I
	//    .local v0, "e":I
label_goto_26:
	if ( i >= (start + length) )
		goto label_cond_f7;
	if ( dest[i] != 0xffff )
		goto label_cond_33;
	dest[i] = 0x20;
label_cond_33:
	i = ( i + 0x1);
	goto label_goto_26;
	// 2628    .line 1250
	// 2629    .end local v0    # "e":I
	// 2630    .end local v1    # "i":I
label_pswitch_36:
	lenOptionsLamAlef = 0x2;
	goto label_goto_1d;
	// 2636    .line 1251
label_pswitch_38:
	lenOptionsLamAlef = 0x3;
	goto label_goto_1d;
	// 2642    .line 1255
label_sswitch_3a:
	lenOptionsTashkeel = 0x60000;
	goto label_goto_20;
	// 2648    .line 1256
label_sswitch_3d:
	lenOptionsTashkeel = 0x40000;
	goto label_goto_20;
	// 2654    .line 1271
label_cond_40:
	e = (start + length);
	//    .restart local v0    # "e":I
	wL = android::icu::text::ArabicShaping::countSpaceSub(dest, length, 0xffff);
	//    .local v6, "wL":I
	wT = android::icu::text::ArabicShaping::countSpaceSub(dest, length, 0xfffe);
	//    .local v8, "wT":I
	if ( lenOptionsLamAlef != 0x2 )
		goto label_cond_54;
	lamAlefOn = 0x1;
label_cond_54:
	if ( lenOptionsTashkeel != 0x60000 )
		goto label_cond_59;
	tashkeelOn = 0x1;
label_cond_59:
	if ( !(lamAlefOn) )  
		goto label_cond_6d;
	if ( lenOptionsLamAlef != 0x2 )
		goto label_cond_6d;
	android::icu::text::ArabicShaping::shiftArray(dest, start, e, 0xffff);
label_goto_64:
	if ( wL <= start )
		goto label_cond_6d;
	wL = ( wL + -0x1);
	dest[wL] = 0x20;
	goto label_goto_64;
	// 2718    .line 1290
label_cond_6d:
	if ( !(tashkeelOn) )  
		goto label_cond_82;
	if ( lenOptionsTashkeel != 0x60000 )
		goto label_cond_82;
	android::icu::text::ArabicShaping::shiftArray(dest, start, e, 0xfffe);
label_goto_79:
	if ( wT <= start )
		goto label_cond_82;
	wT = ( wT + -0x1);
	dest[wT] = 0x20;
	goto label_goto_79;
	// 2744    .line 1297
label_cond_82:
	lamAlefOn = 0x0;
	tashkeelOn = 0x0;
	if ( lenOptionsLamAlef )     
		goto label_cond_87;
	lamAlefOn = 0x1;
label_cond_87:
	if ( lenOptionsTashkeel != 0x80000 )
		goto label_cond_8c;
	tashkeelOn = 0x1;
label_cond_8c:
	if ( !(lamAlefOn) )  
		goto label_cond_9c;
	if ( lenOptionsLamAlef )     
		goto label_cond_9c;
	android::icu::text::ArabicShaping::shiftArray(dest, start, e, 0xffff);
	wL = android::icu::text::ArabicShaping::flipArray(dest, start, e, wL);
	length = (wL - start);
label_cond_9c:
	if ( !(tashkeelOn) )  
		goto label_cond_ae;
	if ( lenOptionsTashkeel != 0x80000 )
		goto label_cond_ae;
	android::icu::text::ArabicShaping::shiftArray(dest, start, e, 0xfffe);
	wT = android::icu::text::ArabicShaping::flipArray(dest, start, e, wT);
	length = (wT - start);
label_cond_ae:
	lamAlefOn = 0x0;
	tashkeelOn = 0x0;
	if ( lenOptionsLamAlef == 0x3 )
		goto label_cond_b7;
	if ( lenOptionsLamAlef != 0x10000 )
		goto label_cond_b8;
label_cond_b7:
	lamAlefOn = 0x1;
label_cond_b8:
	if ( lenOptionsTashkeel != 0x40000 )
		goto label_cond_bd;
	tashkeelOn = 0x1;
label_cond_bd:
	if ( !(lamAlefOn) )  
		goto label_cond_dc;
	if ( lenOptionsLamAlef == 0x3 )
		goto label_cond_c6;
	if ( lenOptionsLamAlef != 0x10000 )
		goto label_cond_dc;
label_cond_c6:
	android::icu::text::ArabicShaping::shiftArray(dest, start, e, 0xffff);
	wL = android::icu::text::ArabicShaping::flipArray(dest, start, e, wL);
	//    .end local v6    # "wL":I
	//    .local v7, "wL":I
label_goto_d1:
	if ( wL >= e )
		goto label_cond_db;
	//    .end local v7    # "wL":I
	//    .restart local v6    # "wL":I
	dest[wL] = 0x20;
	wL = ( wL + 0x1);
	//    .end local v6    # "wL":I
	//    .restart local v7    # "wL":I
	goto label_goto_d1;
label_cond_db:
	wL;
	//    .end local v7    # "wL":I
	//    .restart local v6    # "wL":I
label_cond_dc:
	if ( !(tashkeelOn) )  
		goto label_cond_f7;
	if ( lenOptionsTashkeel != 0x40000 )
		goto label_cond_f7;
	android::icu::text::ArabicShaping::shiftArray(dest, start, e, 0xfffe);
	wT = android::icu::text::ArabicShaping::flipArray(dest, start, e, wT);
	//    .end local v8    # "wT":I
	//    .local v9, "wT":I
label_goto_ed:
	if ( wT >= e )
		goto label_cond_f7;
	//    .end local v9    # "wT":I
	//    .restart local v8    # "wT":I
	dest[wT] = 0x20;
	wT = ( wT + 0x1);
	//    .end local v8    # "wT":I
	//    .restart local v9    # "wT":I
	goto label_goto_ed;
	// 2929    .line 1346
	// 2930    .end local v6    # "wL":I
	// 2931    .end local v9    # "wT":I
label_cond_f7:
	return length;
	// 2935    .line 1249
	// 2936    :pswitch_data_f8
	// 2937    .packed-switch 0x2
	// 2938        :pswitch_38
	// 2939        :pswitch_36
	// 2940    .end packed-switch
	// 2942    .line 1254
	// 2943    :sswitch_data_100
	// 2944    .sparse-switch
	// 2945        0x40000 -> :sswitch_3a
	// 2946        0x60000 -> :sswitch_3d
	// 2947    .end sparse-switch

}
// .method private static handleTashkeelWithTatweel([CI)I
int android::icu::text::ArabicShaping::handleTashkeelWithTatweel(std::shared_ptr<char[]> dest,int sourceLength)
{
	
	int cVar0;
	int i;
	
	//    .param p0, "dest"    # [C
	//    .param p1, "sourceLength"    # I
	cVar0 = 0x1;
	i = 0x0;
	//    .local v0, "i":I
label_goto_2:
	if ( i >= sourceLength )
		goto label_cond_36;
	if ( android::icu::text::ArabicShaping::isTashkeelOnTatweelChar(dest[i]) != cVar0 )
		goto label_cond_13;
	dest[i] = 0x640;
label_cond_10:
label_goto_10:
	i = ( i + 0x1);
	goto label_goto_2;
	// 2986    .line 1212
label_cond_13:
	if ( android::icu::text::ArabicShaping::isTashkeelOnTatweelChar(dest[i]) != 0x2 )
		goto label_cond_22;
	dest[i] = 0xfe7d;
	goto label_goto_10;
	// 3005    .line 1214
label_cond_22:
	if ( android::icu::text::ArabicShaping::isIsolatedTashkeelChar(dest[i]) != cVar0 )
		goto label_cond_10;
	if ( dest[i] == 0xfe7c )
		goto label_cond_10;
	dest[i] = 0x20;
	goto label_goto_10;
	// 3028    .line 1218
label_cond_36:
	return sourceLength;

}
// .method private internalShape([CII[CII)I
int android::icu::text::ArabicShaping::internalShape(std::shared_ptr<char[]> source,int sourceStart,int sourceLength,std::shared_ptr<char[]> dest,int destStart,int destSize)
{
	
	std::shared<std::vector<char[]>> temp;
	int outputSize;
	std::shared_ptr<android::icu::text::ArabicShapingException> cVar0;
	char digitBase;
	int i;
	char ch;
	
	//    .param p1, "source"    # [C
	//    .param p2, "sourceStart"    # I
	//    .param p3, "sourceLength"    # I
	//    .param p4, "dest"    # [C
	//    .param p5, "destStart"    # I
	//    .param p6, "destSize"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 3042        value = {
	// 3043            Landroid/icu/text/ArabicShapingException;
	// 3044        }
	// 3045    .end annotation
	if ( sourceLength )     
		goto label_cond_4;
	return 0x0;
	// 3056    .line 1803
label_cond_4:
	if ( destSize )     
		goto label_cond_1a;
	if ( !(( this->options & 0x18)) )  
		goto label_cond_19;
	if ( (this->options &  0x10003) )     
		goto label_cond_19;
	return this->calculateSize(source, sourceStart, sourceLength);
	// 3083    .line 1809
label_cond_19:
	return sourceLength;
	// 3087    .line 1814
label_cond_1a:
	temp = std::make_shared<std::vector<char[]>>(( sourceLength * 0x2));
	//    .local v2, "temp":[C
	java::lang::System::arraycopy(source, sourceStart, temp, 0x0, sourceLength);
	if ( !(this->isLogical) )  
		goto label_cond_2a;
	android::icu::text::ArabicShaping::invertBuffer(temp, 0x0, sourceLength);
label_cond_2a:
	outputSize = sourceLength;
	//    .local v4, "outputSize":I
	// switch
	{
	auto item = ( ( this->options & 0x18) );
	if (item == 0x8) goto label_sswitch_4a;
	if (item == 0x10) goto label_sswitch_7d;
	if (item == 0x18) goto label_sswitch_3f;
	}
label_cond_32:
label_goto_32:
	if ( outputSize <= destSize )
		goto label_cond_85;
	cVar0 = std::make_shared<android::icu::text::ArabicShapingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not enough room for result data")));
	// throw
	throw cVar0;
	// 3137    .line 1825
label_sswitch_3f:
	outputSize = sourceLength;
	//    .end local v4    # "outputSize":I
	outputSize = this->shapeUnicode(temp, 0x0, outputSize, destSize, 0x1);
	//    .restart local v4    # "outputSize":I
	goto label_goto_32;
	// 3157    .line 1829
label_sswitch_4a:
	if ( !((this->options &  0xe0000)) )  
		goto label_cond_65;
	if ( (this->options &  0xe0000) == 0xc0000 )
		goto label_cond_65;
	outputSize = sourceLength;
	//    .end local v4    # "outputSize":I
	outputSize = this->shapeUnicode(temp, 0x0, outputSize, destSize, 0x2);
	//    .restart local v4    # "outputSize":I
	goto label_goto_32;
	// 3197    .line 1835
label_cond_65:
	outputSize = sourceLength;
	//    .end local v4    # "outputSize":I
	outputSize = this->shapeUnicode(temp, 0x0, outputSize, destSize, 0x0);
	//    .restart local v4    # "outputSize":I
	if ( (this->options &  0xe0000) != 0xc0000 )
		goto label_cond_32;
	outputSize = android::icu::text::ArabicShaping::handleTashkeelWithTatweel(temp, sourceLength);
	goto label_goto_32;
	// 3233    .line 1845
label_sswitch_7d:
	outputSize = this->deShapeUnicode(temp, 0x0, sourceLength, destSize);
	goto label_goto_32;
	// 3245    .line 1856
label_cond_85:
	if ( !(( this->options & 0xe0)) )  
		goto label_cond_9b;
	digitBase = 0x30;
	//    .local v5, "digitBase":C
	// switch
	{
	auto item = ( ( this->options & 0x100) );
	if (item == 0x0) goto label_sswitch_aa;
	if (item == 0x100) goto label_sswitch_ad;
	}
label_goto_94:
	// switch
	{
	auto item = ( ( this->options & 0xe0) );
	if (item == 0x20) goto label_sswitch_b0;
	if (item == 0x40) goto label_sswitch_c8;
	if (item == 0x60) goto label_sswitch_df;
	if (item == 0x80) goto label_sswitch_e6;
	}
	//    .end local v5    # "digitBase":C
label_cond_9b:
label_goto_9b:
	if ( !(this->isLogical) )  
		goto label_cond_a3;
	android::icu::text::ArabicShaping::invertBuffer(temp, 0x0, outputSize);
label_cond_a3:
	java::lang::System::arraycopy(temp, 0x0, dest, destStart, outputSize);
	return outputSize;
	// 3296    .line 1860
	// 3297    .restart local v5    # "digitBase":C
label_sswitch_aa:
	0x660;
	goto label_goto_94;
	// 3304    .line 1864
label_sswitch_ad:
	0x6f0;
	goto label_goto_94;
	// 3311    .line 1874
label_sswitch_b0:
	//    .local v8, "digitDelta":I
	i = 0x0;
	//    .local v10, "i":I
label_goto_b3:
	if ( i >= outputSize )
		goto label_cond_9b;
	ch = temp[i];
	//    .local v7, "ch":C
	if ( ch >  0x39 )
		goto label_cond_c5;
	if ( ch <  0x30 )
		goto label_cond_c5;
	temp[i] = (char)((temp[i] +  ( digitBase + -0x30)));
label_cond_c5:
	i = ( i + 0x1);
	goto label_goto_b3;
	// 3351    .line 1886
	// 3352    .end local v7    # "ch":C
	// 3353    .end local v8    # "digitDelta":I
	// 3354    .end local v10    # "i":I
label_sswitch_c8:
	//    .local v9, "digitTop":C
	//    .restart local v8    # "digitDelta":I
	i = 0x0;
	//    .restart local v10    # "i":I
label_goto_ce:
	if ( i >= outputSize )
		goto label_cond_9b;
	ch = temp[i];
	//    .restart local v7    # "ch":C
	if ( ch >  (char)(( digitBase + 0x9)) )
		goto label_cond_dc;
	if ( ch <  digitBase )
		goto label_cond_dc;
	temp[i] = (char)((temp[i] +  ( digitBase - 0x30)));
label_cond_dc:
	i = ( i + 0x1);
	goto label_goto_ce;
	// 3396    .line 1898
	// 3397    .end local v7    # "ch":C
	// 3398    .end local v8    # "digitDelta":I
	// 3399    .end local v9    # "digitTop":C
	// 3400    .end local v10    # "i":I
label_sswitch_df:
	this->shapeToArabicDigitsWithContext(temp, 0x0, outputSize, digitBase, 0x0);
	goto label_goto_9b;
	// 3412    .line 1902
label_sswitch_e6:
	this->shapeToArabicDigitsWithContext(temp, 0x0, outputSize, digitBase, 0x1);
	goto label_goto_9b;
	// 3424    .line 1823
	// 3425    nop
	// 3427    :sswitch_data_ee
	// 3428    .sparse-switch
	// 3429        0x8 -> :sswitch_4a
	// 3430        0x10 -> :sswitch_7d
	// 3431        0x18 -> :sswitch_3f
	// 3432    .end sparse-switch
	// 3434    .line 1858
	// 3435    :sswitch_data_fc
	// 3436    .sparse-switch
	// 3437        0x0 -> :sswitch_aa
	// 3438        0x100 -> :sswitch_ad
	// 3439    .end sparse-switch
	// 3441    .line 1871
	// 3442    :sswitch_data_106
	// 3443    .sparse-switch
	// 3444        0x20 -> :sswitch_b0
	// 3445        0x40 -> :sswitch_c8
	// 3446        0x60 -> :sswitch_df
	// 3447        0x80 -> :sswitch_e6
	// 3448    .end sparse-switch

}
// .method private static invertBuffer([CII)V
void android::icu::text::ArabicShaping::invertBuffer(std::shared_ptr<char[]> buffer,int start,int length)
{
	
	int i;
	int j;
	
	//    .param p0, "buffer"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "length"    # I
	i = start;
	//    .local v0, "i":I
	j = ( (start + length) + -0x1);
	//    .local v1, "j":I
label_goto_5:
	if ( i >= j )
		goto label_cond_14;
	//    .local v2, "temp":C
	buffer[i] = buffer[j];
	buffer[j] = buffer[i];
	i = ( i + 0x1);
	j = ( j + -0x1);
	goto label_goto_5;
	// 3489    .line 874
	// 3490    .end local v2    # "temp":C
label_cond_14:
	return;

}
// .method private static isAlefChar(C)Z
bool android::icu::text::ArabicShaping::isAlefChar(char ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # C
	cVar0 = 0x1;
	if ( ch == 0x622 )
		goto label_cond_9;
	if ( ch != 0x623 )
		goto label_cond_a;
label_cond_9:
label_goto_9:
	return cVar0;
label_cond_a:
	if ( ch == 0x625 )
		goto label_cond_9;
	if ( ch == 0x627 )
		goto label_cond_9;
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method private static isAlefMaksouraChar(C)Z
bool android::icu::text::ArabicShaping::isAlefMaksouraChar(char ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # C
	cVar0 = 0x1;
	if ( ch == 0xfeef )
		goto label_cond_b;
	if ( ch != 0xfef0 )
		goto label_cond_c;
label_cond_b:
label_goto_b:
	return cVar0;
label_cond_c:
	if ( ch == 0x649 )
		goto label_cond_b;
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method private static isIsolatedTashkeelChar(C)I
int android::icu::text::ArabicShaping::isIsolatedTashkeelChar(char ch)
{
	
	int cVar0;
	
	//    .param p0, "ch"    # C
	cVar0 = 0xfe70;
	if ( ch <  cVar0 )
		goto label_cond_1d;
	if ( ch >  0xfe7f )
		goto label_cond_1d;
	if ( ch == 0xfe73 )
		goto label_cond_1d;
	if ( ch == 0xfe75 )
		goto label_cond_1d;
	return ( android::icu::text::ArabicShaping::tashkeelMedial[(ch - cVar0)] - 0x1);
	// 3592    .line 1073
label_cond_1d:
	if ( ch <  0xfc5e )
		goto label_cond_29;
	if ( ch >  0xfc63 )
		goto label_cond_29;
	return 0x1;
	// 3607    .line 1076
label_cond_29:
	return 0x0;

}
// .method private static isLamAlefChar(C)Z
bool android::icu::text::ArabicShaping::isLamAlefChar(char ch)
{
	
	bool cVar1;
	
	//    .param p0, "ch"    # C
	cVar1 = 0x0;
	if ( ch <  0xfef5 )
		goto label_cond_c;
	if ( ch >  0xfefc )
		goto label_cond_c;
	cVar1 = 0x1;
label_cond_c:
	return cVar1;

}
// .method private static isNormalizedLamAlefChar(C)Z
bool android::icu::text::ArabicShaping::isNormalizedLamAlefChar(char ch)
{
	
	bool cVar1;
	
	//    .param p0, "ch"    # C
	cVar1 = 0x0;
	if ( ch <  0x65c )
		goto label_cond_a;
	if ( ch >  0x65f )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method private static isSeenFamilyChar(C)I
int android::icu::text::ArabicShaping::isSeenFamilyChar(char ch)
{
	
	//    .param p0, "ch"    # C
	if ( ch <  0x633 )
		goto label_cond_a;
	if ( ch >  0x636 )
		goto label_cond_a;
	return 0x1;
	// 3677    .line 996
label_cond_a:
	return 0x0;

}
// .method private static isSeenTailFamilyChar(C)I
int android::icu::text::ArabicShaping::isSeenTailFamilyChar(char ch)
{
	
	int cVar0;
	
	//    .param p0, "ch"    # C
	cVar0 = 0xfeb1;
	if ( ch <  cVar0 )
		goto label_cond_11;
	if ( ch >= 0xfebf )
		goto label_cond_11;
	return android::icu::text::ArabicShaping::tailFamilyIsolatedFinal[(ch - cVar0)];
	// 3707    .line 983
label_cond_11:
	return 0x0;

}
// .method private static isTailChar(C)Z
bool android::icu::text::ArabicShaping::isTailChar(char ch)
{
	
	//    .param p0, "ch"    # C
	if ( ch == 0x200b )
		goto label_cond_9;
	if ( ch != 0xfe73 )
		goto label_cond_b;
label_cond_9:
	return 0x1;
	// 3734    .line 1010
label_cond_b:
	return 0x0;

}
// .method private static isTashkeelChar(C)Z
bool android::icu::text::ArabicShaping::isTashkeelChar(char ch)
{
	
	bool cVar1;
	
	//    .param p0, "ch"    # C
	cVar1 = 0x0;
	if ( ch <  0x64b )
		goto label_cond_a;
	if ( ch >  0x652 )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method private static isTashkeelCharFE(C)Z
bool android::icu::text::ArabicShaping::isTashkeelCharFE(char ch)
{
	
	bool cVar1;
	
	//    .param p0, "ch"    # C
	cVar1 = 0x0;
	if ( ch == 0xfe75 )
		goto label_cond_11;
	if ( ch <  0xfe70 )
		goto label_cond_11;
	if ( ch >  0xfe7f )
		goto label_cond_11;
	cVar1 = 0x1;
label_cond_11:
	return cVar1;

}
// .method private static isTashkeelOnTatweelChar(C)I
int android::icu::text::ArabicShaping::isTashkeelOnTatweelChar(char ch)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p0, "ch"    # C
	cVar0 = 0xfe7d;
	cVar1 = 0xfe70;
	if ( ch <  cVar1 )
		goto label_cond_20;
	if ( ch >  0xfe7f )
		goto label_cond_20;
	if ( ch == 0xfe73 )
		goto label_cond_20;
	if ( ch == 0xfe75 )
		goto label_cond_20;
	if ( ch == cVar0 )
		goto label_cond_20;
	return android::icu::text::ArabicShaping::tashkeelMedial[(ch - cVar1)];
	// 3824    .line 1056
label_cond_20:
	if ( ch <  0xfcf2 )
		goto label_cond_2c;
	if ( ch >  0xfcf4 )
		goto label_cond_2c;
label_cond_2a:
	return 0x2;
	// 3840    .line 1056
label_cond_2c:
	if ( ch == cVar0 )
		goto label_cond_2a;
	return 0x0;

}
// .method private static isYehHamzaChar(C)Z
bool android::icu::text::ArabicShaping::isYehHamzaChar(char ch)
{
	
	//    .param p0, "ch"    # C
	if ( ch == 0xfe89 )
		goto label_cond_a;
	if ( ch != 0xfe8a )
		goto label_cond_c;
label_cond_a:
	return 0x1;
	// 3870    .line 1032
label_cond_c:
	return 0x0;

}
// .method private normalize([CII)I
int android::icu::text::ArabicShaping::normalize(std::shared_ptr<char[]> dest,int start,int length)
{
	
	int cVar0;
	int lacount;
	int i;
	char ch;
	
	//    .param p1, "dest"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	cVar0 = 0xfe70;
	lacount = 0x0;
	//    .local v3, "lacount":I
	i = start;
	//    .local v2, "i":I
	//    .local v1, "e":I
label_goto_7:
	if ( i >= (start + length) )
		goto label_cond_26;
	ch = dest[i];
	//    .local v0, "ch":C
	if ( ch <  cVar0 )
		goto label_cond_23;
	if ( ch >  0xfefc )
		goto label_cond_23;
	if ( !(android::icu::text::ArabicShaping::isLamAlefChar(ch)) )  
		goto label_cond_1a;
	lacount = ( lacount + 0x1);
label_cond_1a:
	dest[i] = (char)(android::icu::text::ArabicShaping::convertFEto06[(ch - cVar0)]);
label_cond_23:
	i = ( i + 0x1);
	goto label_goto_7;
	// 3939    .line 1575
	// 3940    .end local v0    # "ch":C
label_cond_26:
	return lacount;

}
// .method private shapeToArabicDigitsWithContext([CIICZ)V
void android::icu::text::ArabicShaping::shapeToArabicDigitsWithContext(std::shared_ptr<char[]> dest,int start,int length,char digitBase,bool lastStrongWasAL)
{
	
	int i;
	int ch;
	
	//    .param p1, "dest"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	//    .param p4, "digitBase"    # C
	//    .param p5, "lastStrongWasAL"    # Z
	//    .local v0, "bdp":Landroid/icu/impl/UBiDiProps;
	//    .end local p5    # "lastStrongWasAL":Z
	//    .local v2, "i":I
label_cond_7:
label_goto_7:
	i = ( i + -0x1);
	if ( i <  start )
		goto label_cond_25;
	ch = dest[i];
	//    .local v1, "ch":C
	// switch
	{
	auto item = ( android::icu::impl::UBiDiProps::INSTANCE->getClass(ch) );
	if (item == 0x0) goto label_sswitch_15;
	if (item == 0x1) goto label_sswitch_15;
	if (item == 0x2) goto label_sswitch_19;
	if (item == 0xd) goto label_sswitch_17;
	}
	goto label_goto_7;
	// 3987    .line 843
label_sswitch_15:
	0x0;
	//    .local p5, "lastStrongWasAL":Z
	goto label_goto_7;
	// 3995    .line 846
	// 3996    .end local p5    # "lastStrongWasAL":Z
label_sswitch_17:
	0x1;
	//    .restart local p5    # "lastStrongWasAL":Z
	goto label_goto_7;
	// 4004    .line 849
	// 4005    .end local p5    # "lastStrongWasAL":Z
label_sswitch_19:
	if ( !(lastStrongWasAL) )  
		goto label_cond_7;
	if ( ch >  0x39 )
		goto label_cond_7;
	dest[i] = (char)((ch + (char)(( digitBase + -0x30))));
	goto label_goto_7;
	// 4022    .line 857
	// 4023    .end local v1    # "ch":C
label_cond_25:
	return;
	// 4027    .line 840
	// 4028    :sswitch_data_26
	// 4029    .sparse-switch
	// 4030        0x0 -> :sswitch_15
	// 4031        0x1 -> :sswitch_15
	// 4032        0x2 -> :sswitch_19
	// 4033        0xd -> :sswitch_17
	// 4034    .end sparse-switch

}
// .method private shapeUnicode([CIIII)I
int android::icu::text::ArabicShaping::shapeUnicode(std::shared_ptr<char[]> dest,int start,int length,int destSize,int tashkeelFlag)
{
	
	int i;
	int currLink;
	int nextLink;
	int prevLink;
	int lastLink;
	int lastPos;
	int nx;
	int nw;
	char wLamalef;
	int flag;
	int shape;
	int cVar2;
	
	//    .param p1, "dest"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	//    .param p4, "destSize"    # I
	//    .param p5, "tashkeelFlag"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 4045        value = {
	// 4046            Landroid/icu/text/ArabicShapingException;
	// 4047        }
	// 4048    .end annotation
	//    .local v5, "lamalef_count":I
	//    .local v10, "lamalef_found":Z
	//    .local v17, "seenfam_found":Z
	//    .local v21, "yehhamza_found":Z
	//    .local v19, "tashkeel_found":Z
	i = ( (start + length) + -0x1);
	//    .local v9, "i":I
	currLink = android::icu::text::ArabicShaping::getLink(dest[i]);
	//    .local v7, "currLink":I
	nextLink = 0x0;
	//    .local v13, "nextLink":I
	prevLink = 0x0;
	//    .local v16, "prevLink":I
	lastLink = 0x0;
	//    .local v11, "lastLink":I
	lastPos = i;
	//    .local v12, "lastPos":I
	nx = -0x2;
	//    .local v15, "nx":I
	nw = 0x0;
	//    .local v14, "nw":I
label_cond_1c:
label_goto_1c:
	if ( i < 0 ) 
		goto label_cond_13d;
	if ( (0xff00 &  currLink) )     
		goto label_cond_2c;
	if ( !(android::icu::text::ArabicShaping::isTashkeelChar(dest[i])) )  
		goto label_cond_aa;
label_cond_2c:
	nw = ( i + -0x1);
	nx = -0x2;
label_goto_2f:
	if ( nx >= 0 )
		goto label_cond_48;
	if ( nw != -0x1 )
		goto label_cond_39;
	0x0;
	nx = 0x7fffffff;
	goto label_goto_2f;
	// 4153    .line 1656
label_cond_39:
	if ( ( android::icu::text::ArabicShaping::getLink(dest[nw]) & 0x4) )     
		goto label_cond_45;
	nx = nw;
	goto label_goto_2f;
	// 4171    .line 1660
label_cond_45:
	nw = ( nw + -0x1);
	goto label_goto_2f;
	// 4177    .line 1665
label_cond_48:
	if ( ( currLink & 0x20) <= 0 )
		goto label_cond_67;
	if ( ( lastLink & 0x10) <= 0 )
		goto label_cond_67;
	0x1;
	wLamalef = android::icu::text::ArabicShaping::changeLamAlef(dest[i]);
	//    .local v20, "wLamalef":C
	if ( !(wLamalef) )  
		goto label_cond_61;
	dest[i] = 0xffff;
	dest[lastPos] = wLamalef;
	i = lastPos;
label_cond_61:
	lastLink = prevLink;
	currLink = android::icu::text::ArabicShaping::getLink(wLamalef);
	//    .end local v20    # "wLamalef":C
label_cond_67:
	if ( i <= 0 )
		goto label_cond_c3;
	if ( dest[( i + -0x1)] != 0x20 )
		goto label_cond_c3;
	if ( android::icu::text::ArabicShaping::isSeenFamilyChar(dest[i]) != 0x1 )
		goto label_cond_ba;
	0x1;
label_cond_7c:
label_goto_7c:
	flag = android::icu::text::ArabicShaping::specialChar(dest[i]);
	//    .local v8, "flag":I
	shape = android::icu::text::ArabicShaping::shapeTable[( nextLink & 0x3)][( lastLink & 0x3)][( currLink & 0x3)];
	//    .local v18, "shape":I
	if ( flag != 0x1 )
		goto label_cond_da;
	shape = ( shape & 0x1);
label_cond_95:
label_goto_95:
	if ( flag != 0x2 )
		goto label_cond_125;
	if ( tashkeelFlag != 0x2 )
		goto label_cond_113;
	if ( dest[i] == 0x651 )
		goto label_cond_113;
	dest[i] = 0xfffe;
	0x1;
	//    .end local v8    # "flag":I
	//    .end local v18    # "shape":I
label_cond_aa:
label_goto_aa:
	if ( ( currLink & 0x4) )     
		goto label_cond_b2;
	prevLink = lastLink;
	lastLink = currLink;
	lastPos = i;
label_cond_b2:
	i = ( i + -0x1);
	if ( i != nx )
		goto label_cond_132;
	currLink = nextLink;
	-0x2;
	goto label_goto_1c;
	// 4347    .line 1682
label_cond_ba:
	if ( dest[i] != 0x626 )
		goto label_cond_7c;
	0x1;
	goto label_goto_7c;
	// 4360    .line 1686
label_cond_c3:
	if ( i )     
		goto label_cond_7c;
	if ( android::icu::text::ArabicShaping::isSeenFamilyChar(dest[i]) != 0x1 )
		goto label_cond_d1;
	0x1;
	goto label_goto_7c;
	// 4380    .line 1689
label_cond_d1:
	if ( dest[i] != 0x626 )
		goto label_cond_7c;
	0x1;
	goto label_goto_7c;
	// 4393    .line 1707
	// 4394    .restart local v8    # "flag":I
	// 4395    .restart local v18    # "shape":I
label_cond_da:
	if ( flag != 0x2 )
		goto label_cond_95;
	if ( tashkeelFlag )     
		goto label_cond_102;
	if ( !(( lastLink & 0x2)) )  
		goto label_cond_102;
	if ( !(( nextLink & 0x1)) )  
		goto label_cond_102;
	if ( dest[i] == 0x64c )
		goto label_cond_102;
	if ( dest[i] == 0x64d )
		goto label_cond_102;
	if ( ( nextLink & 0x20) != 0x20 )
		goto label_cond_ff;
	if ( ( lastLink & 0x10) == 0x10 )
		goto label_cond_102;
label_cond_ff:
	shape = 0x1;
	goto label_goto_95;
	// 4449    .line 1718
label_cond_102:
	if ( tashkeelFlag != 0x2 )
		goto label_cond_110;
	if ( dest[i] != 0x651 )
		goto label_cond_110;
	shape = 0x1;
	goto label_goto_95;
	// 4469    .line 1722
label_cond_110:
	shape = 0x0;
	goto label_goto_95;
	// 4475    .line 1731
label_cond_113:
	dest[i] = (char)(((android::icu::text::ArabicShaping::irrelevantPos[( dest[i] + -0x64b)] +  0xfe70) + shape));
	goto label_goto_aa;
	// 4497    .line 1735
label_cond_125:
	dest[i] = (char)(((_shri(currLink,0x8) +  0xfe70) + shape));
	goto label_goto_aa;
	// 4513    .line 1751
	// 4514    .end local v8    # "flag":I
	// 4515    .end local v18    # "shape":I
label_cond_132:
	if ( i == -0x1 )
		goto label_cond_1c;
	currLink = android::icu::text::ArabicShaping::getLink(dest[i]);
	goto label_goto_1c;
	// 4530    .line 1759
label_cond_13d:
	cVar2 = length;
	if ( 0x0 )     
		goto label_cond_143;
	if ( !(0x0) )  
		goto label_cond_147;
label_cond_143:
	cVar2 = this->handleGeneratedSpaces(dest, start, length);
label_cond_147:
	if ( 0x0 )     
		goto label_cond_14b;
	if ( !(0x0) )  
		goto label_cond_158;
label_cond_14b:
	cVar2 = this->expandCompositChar(dest, start, cVar2, this->normalize(dest, start, length), 0x0);
label_cond_158:
	return cVar2;

}
// .method private static shiftArray([CIIC)V
void android::icu::text::ArabicShaping::shiftArray(std::shared_ptr<char[]> dest,int start,int e,char subChar)
{
	
	int r;
	char ch;
	int w;
	
	//    .param p0, "dest"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "e"    # I
	//    .param p3, "subChar"    # C
	//    .local v2, "w":I
	//    .local v1, "r":I
label_cond_2:
label_goto_2:
	r = ( r + -0x1);
	if ( r <  start )
		goto label_cond_11;
	ch = dest[r];
	//    .local v0, "ch":C
	if ( ch == subChar )
		goto label_cond_2;
	w = ( w + -0x1);
	if ( w == r )
		goto label_cond_2;
	dest[w] = ch;
	goto label_goto_2;
	// 4613    .line 1177
	// 4614    .end local v0    # "ch":C
label_cond_11:
	return;

}
// .method private static specialChar(C)I
int android::icu::text::ArabicShaping::specialChar(char ch)
{
	
	//    .param p0, "ch"    # C
	if ( ch <= 0x621 )
		goto label_cond_a;
	if ( ch >= 0x626 )
		goto label_cond_a;
label_cond_8:
	return 0x1;
	// 4639    .line 901
label_cond_a:
	if ( ch == 0x627 )
		goto label_cond_8;
	if ( ch <= 0x62e )
		goto label_cond_16;
	if ( ch <  0x633 )
		goto label_cond_8;
label_cond_16:
	if ( ch <= 0x647 )
		goto label_cond_1e;
	if ( ch <  0x64a )
		goto label_cond_8;
label_cond_1e:
	if ( ch == 0x629 )
		goto label_cond_8;
	if ( ch <  0x64b )
		goto label_cond_2c;
	if ( ch >  0x652 )
		goto label_cond_2c;
	return 0x2;
	// 4684    .line 908
label_cond_2c:
	if ( ch <  0x653 )
		goto label_cond_36;
	if ( ch >  0x655 )
		goto label_cond_36;
label_cond_34:
	return 0x3;
	// 4700    .line 909
label_cond_36:
	if ( ch == 0x670 )
		goto label_cond_34;
	if ( ch <  0xfe70 )
		goto label_cond_44;
	if ( ch <= 0xfe7f )
		goto label_cond_34;
label_cond_44:
	return 0x0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::ArabicShaping::equals(std::shared_ptr<java::lang::Object> rhs)
{
	
	bool cVar1;
	
	//    .param p1, "rhs"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(rhs) )  
		goto label_cond_14;
	if ( rhs->getClass() != android::icu::text::ArabicShaping() )
		goto label_cond_14;
	rhs->checkCast("android::icu::text::ArabicShaping");
	//    .end local p1    # "rhs":Ljava/lang/Object;
	if ( this->options != rhs->options )
		goto label_cond_14;
	cVar1 = 0x1;
label_cond_14:
	return cVar1;

}
// .method public hashCode()I
int android::icu::text::ArabicShaping::hashCode()
{
	
	return this->options;

}
// .method public shape([CII[CII)I
int android::icu::text::ArabicShaping::shape(std::shared_ptr<char[]> source,int sourceStart,int sourceLength,std::shared_ptr<char[]> dest,int destStart,int destSize)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar8;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar9;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar10;
	
	//    .param p1, "source"    # [C
	//    .param p2, "sourceStart"    # I
	//    .param p3, "sourceLength"    # I
	//    .param p4, "dest"    # [C
	//    .param p5, "destStart"    # I
	//    .param p6, "destSize"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 4779        value = {
	// 4780            Landroid/icu/text/ArabicShapingException;
	// 4781        }
	// 4782    .end annotation
	cVar0 = 0xe0000;
	cVar1 = 0x10003;
	if ( source )     
		goto label_cond_10;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("source can not be null")));
	// throw
	throw cVar2;
	// 4801    .line 93
label_cond_10:
	if ( sourceStart < 0 ) 
		goto label_cond_14;
	if ( sourceLength >= 0 )
		goto label_cond_45;
label_cond_14:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("bad source start (")))->append(sourceStart)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") or length (")))->append(sourceLength)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") for buffer of length ")))->append(source->size())->toString());
	// throw
	throw cVar3;
	// 4861    .line 93
label_cond_45:
	if ( (sourceStart + sourceLength) >  source->size() )
		goto label_cond_14;
	if ( dest )     
		goto label_cond_57;
	if ( !(destSize) )  
		goto label_cond_57;
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("null dest requires destSize == 0")));
	// throw
	throw cVar5;
	// 4883    .line 101
label_cond_57:
	if ( !(destSize) )  
		goto label_cond_93;
	if ( destStart < 0 ) 
		goto label_cond_5d;
	if ( destSize >= 0 )
		goto label_cond_8e;
label_cond_5d:
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("bad dest start (")))->append(destStart)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") or size (")))->append(destSize)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") for buffer of length ")))->append(dest->size())->toString());
	// throw
	throw cVar6;
	// 4946    .line 102
label_cond_8e:
	if ( (destStart + destSize) >  dest->size() )
		goto label_cond_5d;
label_cond_93:
	if ( !((this->options &  cVar0)) )  
		goto label_cond_bd;
	if ( (this->options &  cVar0) == 0x40000 )
		goto label_cond_bd;
	if ( (this->options &  cVar0) == 0x60000 )
		goto label_cond_bd;
	if ( (this->options &  cVar0) == 0x80000 )
		goto label_cond_bd;
	if ( (this->options &  cVar0) == 0xc0000 )
		goto label_cond_bd;
	cVar8 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Wrong Tashkeel argument")));
	// throw
	throw cVar8;
	// 5007    .line 118
label_cond_bd:
	if ( !((this->options &  cVar1)) )  
		goto label_cond_e9;
	if ( (this->options &  cVar1) == 0x3 )
		goto label_cond_e9;
	if ( (this->options &  cVar1) == 0x2 )
		goto label_cond_e9;
	if ( !((this->options &  cVar1)) )  
		goto label_cond_e9;
	if ( (this->options &  cVar1) == 0x10000 )
		goto label_cond_e9;
	if ( (this->options &  cVar1) == 0x1 )
		goto label_cond_e9;
	cVar9 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Wrong Lam Alef argument")));
	// throw
	throw cVar9;
	// 5067    .line 129
label_cond_e9:
	if ( !((this->options &  cVar0)) )  
		goto label_cond_ff;
	if ( ( this->options & 0x18) != 0x10 )
		goto label_cond_ff;
	cVar10 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Tashkeel replacement should not be enabled in deshaping mode ")));
	// throw
	throw cVar10;
	// 5092    .line 132
label_cond_ff:
	return this->internalShape(source, sourceStart, sourceLength, dest, destStart, destSize);

}
// .method public shape(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ArabicShaping::shape(std::shared_ptr<java::lang::String> text)
{
	
	int cVar0;
	std::shared_ptr<char[]> src;
	std::shared_ptr<char[]> dest;
	std::shared<std::vector<char[]>> dest;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5105        value = {
	// 5106            Landroid/icu/text/ArabicShapingException;
	// 5107        }
	// 5108    .end annotation
	cVar0 = 0x0;
	src = text->toCharArray();
	//    .local v1, "src":[C
	dest = src;
	//    .local v4, "dest":[C
	if ( (this->options &  0x10003) )     
		goto label_cond_1b;
	if ( ( this->options & 0x18) != 0x10 )
		goto label_cond_1b;
	dest = std::make_shared<std::vector<char[]>>(( src->size() * 0x2));
label_cond_1b:
	//    .local v7, "len":I
	cVar1 = std::make_shared<java::lang::String>(dest, cVar0, this->shape(src, cVar0, src->size(), dest, cVar0, dest->size()));
	return cVar1;

}
// .method public shape([CII)V
void android::icu::text::ArabicShaping::shape(std::shared_ptr<char[]> source,int start,int length)
{
	
	std::shared_ptr<android::icu::text::ArabicShapingException> cVar0;
	
	//    .param p1, "source"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 5177        value = {
	// 5178            Landroid/icu/text/ArabicShapingException;
	// 5179        }
	// 5180    .end annotation
	if ( (this->options &  0x10003) )     
		goto label_cond_11;
	cVar0 = std::make_shared<android::icu::text::ArabicShapingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cannot shape in place with length option resize.")));
	// throw
	throw cVar0;
label_cond_11:
	this->shape(source, start, length, source, start, length);
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ArabicShaping::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	buf = std::make_shared<java::lang::StringBuilder>(this->toString());
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	buf->append(0x5b);
	// switch
	{
	auto item = ( (this->options &  0x10003) );
	if (item == 0x0) goto label_sswitch_56;
	if (item == 0x1) goto label_sswitch_5d;
	if (item == 0x2) goto label_sswitch_6b;
	if (item == 0x3) goto label_sswitch_64;
	if (item == 0x10000) goto label_sswitch_72;
	}
label_goto_17:
	// switch
	{
	auto item = ( ( this->options & 0x4) );
	if (item == 0x0) goto label_sswitch_79;
	if (item == 0x4) goto label_sswitch_80;
	}
label_goto_1e:
	// switch
	{
	auto item = ( ( this->options & 0x18) );
	if (item == 0x0) goto label_sswitch_87;
	if (item == 0x8) goto label_sswitch_8e;
	if (item == 0x10) goto label_sswitch_9c;
	if (item == 0x18) goto label_sswitch_95;
	}
label_goto_25:
	// switch
	{
	auto item = ( (this->options &  0x700000) );
	if (item == 2097152) goto label_pswitch_a3;
	}
label_goto_2d:
	// switch
	{
	auto item = ( (this->options &  0x3800000) );
	if (item == 16777216) goto label_pswitch_aa;
	}
label_goto_35:
	// switch
	{
	auto item = ( (this->options &  0xe0000) );
	if (item == 0x40000) goto label_sswitch_b1;
	if (item == 0x60000) goto label_sswitch_b8;
	if (item == 0x80000) goto label_sswitch_c8;
	if (item == 0xc0000) goto label_sswitch_c0;
	}
label_goto_3d:
	// switch
	{
	auto item = ( ( this->options & 0xe0) );
	if (item == 0x0) goto label_sswitch_d0;
	if (item == 0x20) goto label_sswitch_d8;
	if (item == 0x40) goto label_sswitch_e0;
	if (item == 0x60) goto label_sswitch_e8;
	if (item == 0x80) goto label_sswitch_f0;
	}
label_goto_44:
	// switch
	{
	auto item = ( ( this->options & 0x100) );
	if (item == 0x0) goto label_sswitch_f8;
	if (item == 0x100) goto label_sswitch_100;
	}
label_goto_4b:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")));
	return buf->toString();
	// 5326    .line 562
label_sswitch_56:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("LamAlef resize")));
	goto label_goto_17;
	// 5334    .line 563
label_sswitch_5d:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("LamAlef spaces at near")));
	goto label_goto_17;
	// 5342    .line 564
label_sswitch_64:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("LamAlef spaces at begin")));
	goto label_goto_17;
	// 5350    .line 565
label_sswitch_6b:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("LamAlef spaces at end")));
	goto label_goto_17;
	// 5358    .line 566
label_sswitch_72:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("lamAlef auto")));
	goto label_goto_17;
	// 5366    .line 569
label_sswitch_79:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", logical")));
	goto label_goto_1e;
	// 5374    .line 570
label_sswitch_80:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", visual")));
	goto label_goto_1e;
	// 5382    .line 573
label_sswitch_87:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", no letter shaping")));
	goto label_goto_25;
	// 5390    .line 574
label_sswitch_8e:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", shape letters")));
	goto label_goto_25;
	// 5398    .line 575
label_sswitch_95:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", shape letters tashkeel isolated")));
	goto label_goto_25;
	// 5406    .line 576
label_sswitch_9c:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", unshape letters")));
	goto label_goto_25;
	// 5414    .line 579
label_pswitch_a3:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", Seen at near")));
	goto label_goto_2d;
	// 5422    .line 582
label_pswitch_aa:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", Yeh Hamza at near")));
	goto label_goto_35;
	// 5430    .line 585
label_sswitch_b1:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", Tashkeel at begin")));
	goto label_goto_3d;
	// 5438    .line 586
label_sswitch_b8:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", Tashkeel at end")));
	goto label_goto_3d;
	// 5446    .line 587
label_sswitch_c0:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", Tashkeel replace with tatweel")));
	goto label_goto_3d;
	// 5454    .line 588
label_sswitch_c8:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", Tashkeel resize")));
	goto label_goto_3d;
	// 5462    .line 592
label_sswitch_d0:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", no digit shaping")));
	goto label_goto_44;
	// 5470    .line 593
label_sswitch_d8:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", shape digits to AN")));
	goto label_goto_44;
	// 5478    .line 594
label_sswitch_e0:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", shape digits to EN")));
	goto label_goto_44;
	// 5486    .line 595
label_sswitch_e8:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", shape digits to AN contextually: default EN")));
	goto label_goto_44;
	// 5494    .line 596
label_sswitch_f0:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", shape digits to AN contextually: default AL")));
	goto label_goto_44;
	// 5502    .line 599
label_sswitch_f8:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", standard Arabic-Indic digits")));
	goto label_goto_4b;
	// 5510    .line 600
label_sswitch_100:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", extended Arabic-Indic digits")));
	goto label_goto_4b;
	// 5518    .line 561
	// 5519    :sswitch_data_108
	// 5520    .sparse-switch
	// 5521        0x0 -> :sswitch_56
	// 5522        0x1 -> :sswitch_5d
	// 5523        0x2 -> :sswitch_6b
	// 5524        0x3 -> :sswitch_64
	// 5525        0x10000 -> :sswitch_72
	// 5526    .end sparse-switch
	// 5528    .line 568
	// 5529    :sswitch_data_11e
	// 5530    .sparse-switch
	// 5531        0x0 -> :sswitch_79
	// 5532        0x4 -> :sswitch_80
	// 5533    .end sparse-switch
	// 5535    .line 572
	// 5536    :sswitch_data_128
	// 5537    .sparse-switch
	// 5538        0x0 -> :sswitch_87
	// 5539        0x8 -> :sswitch_8e
	// 5540        0x10 -> :sswitch_9c
	// 5541        0x18 -> :sswitch_95
	// 5542    .end sparse-switch
	// 5544    .line 578
	// 5545    :pswitch_data_13a
	// 5546    .packed-switch 0x200000
	// 5547        :pswitch_a3
	// 5548    .end packed-switch
	// 5550    .line 581
	// 5551    :pswitch_data_140
	// 5552    .packed-switch 0x1000000
	// 5553        :pswitch_aa
	// 5554    .end packed-switch
	// 5556    .line 584
	// 5557    :sswitch_data_146
	// 5558    .sparse-switch
	// 5559        0x40000 -> :sswitch_b1
	// 5560        0x60000 -> :sswitch_b8
	// 5561        0x80000 -> :sswitch_c8
	// 5562        0xc0000 -> :sswitch_c0
	// 5563    .end sparse-switch
	// 5565    .line 591
	// 5566    :sswitch_data_158
	// 5567    .sparse-switch
	// 5568        0x0 -> :sswitch_d0
	// 5569        0x20 -> :sswitch_d8
	// 5570        0x40 -> :sswitch_e0
	// 5571        0x60 -> :sswitch_e8
	// 5572        0x80 -> :sswitch_f0
	// 5573    .end sparse-switch
	// 5575    .line 598
	// 5576    :sswitch_data_16e
	// 5577    .sparse-switch
	// 5578        0x0 -> :sswitch_f8
	// 5579        0x100 -> :sswitch_100
	// 5580    .end sparse-switch

}


