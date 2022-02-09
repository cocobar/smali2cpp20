// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_8859_1.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_1.h"
#include "android.icu.text.CharsetRecog_sbcs_S_NGramsPlusLang.h"
#include "android.icu.text.CharsetRecognizer.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_1::byteMap;
static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_1::ngrams_8859_1;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_1::static_cinit()
{
	
	int cVar0;
	std::shared<std::vector<unsigned char[]>> cVar1;
	std::shared<std::vector<std::vector<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>>> cVar2;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang> cVar3;
	std::shared<std::vector<int[]>> cVar4;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang> cVar5;
	std::shared<std::vector<int[]>> cVar6;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang> cVar7;
	std::shared<std::vector<int[]>> cVar8;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang> cVar9;
	std::shared<std::vector<int[]>> cVar10;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang> cVar11;
	std::shared<std::vector<int[]>> cVar12;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang> cVar13;
	std::shared<std::vector<int[]>> cVar14;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang> cVar15;
	std::shared<std::vector<int[]>> cVar16;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang> cVar17;
	std::shared<std::vector<int[]>> cVar18;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang> cVar19;
	std::shared<std::vector<int[]>> cVar20;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang> cVar21;
	std::shared<std::vector<int[]>> cVar22;
	
	cVar0 = 0x40;
	cVar1 = std::make_shared<std::vector<unsigned char[]>>(0x100);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_1::byteMap = cVar1;
	cVar2 = std::make_shared<std::vector<std::vector<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>>>(0xa);
	cVar4 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar3 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>(std::make_shared<java::lang::String>(std::make_shared<char[]>("da")), cVar4);
	cVar2[0x0] = cVar3;
	cVar6 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar5 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>(std::make_shared<java::lang::String>(std::make_shared<char[]>("de")), cVar6);
	cVar2[0x1] = cVar5;
	cVar8 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar7 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>(std::make_shared<java::lang::String>(std::make_shared<char[]>("en")), cVar8);
	cVar2[0x2] = cVar7;
	cVar10 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar9 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>(std::make_shared<java::lang::String>(std::make_shared<char[]>("es")), cVar10);
	cVar2[0x3] = cVar9;
	cVar12 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar11 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>(std::make_shared<java::lang::String>(std::make_shared<char[]>("fr")), cVar12);
	cVar2[0x4] = cVar11;
	cVar14 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar13 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>(std::make_shared<java::lang::String>(std::make_shared<char[]>("it")), cVar14);
	cVar2[0x5] = cVar13;
	cVar16 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar15 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>(std::make_shared<java::lang::String>(std::make_shared<char[]>("nl")), cVar16);
	cVar2[0x6] = cVar15;
	cVar18 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar17 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>(std::make_shared<java::lang::String>(std::make_shared<char[]>("no")), cVar18);
	cVar2[0x7] = cVar17;
	cVar20 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar19 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>(std::make_shared<java::lang::String>(std::make_shared<char[]>("pt")), cVar20);
	cVar2[0x8] = cVar19;
	cVar22 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar21 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>(std::make_shared<java::lang::String>(std::make_shared<char[]>("sv")), cVar22);
	cVar2[0x9] = cVar21;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_1::ngrams_8859_1 = cVar2;
	return;
	// 230    .line 297
	// 231    :array_b4
	// 232    .array-data 1
	// 233        0x20t
	// 234        0x20t
	// 235        0x20t
	// 236        0x20t
	// 237        0x20t
	// 238        0x20t
	// 239        0x20t
	// 240        0x20t
	// 241        0x20t
	// 242        0x20t
	// 243        0x20t
	// 244        0x20t
	// 245        0x20t
	// 246        0x20t
	// 247        0x20t
	// 248        0x20t
	// 249        0x20t
	// 250        0x20t
	// 251        0x20t
	// 252        0x20t
	// 253        0x20t
	// 254        0x20t
	// 255        0x20t
	// 256        0x20t
	// 257        0x20t
	// 258        0x20t
	// 259        0x20t
	// 260        0x20t
	// 261        0x20t
	// 262        0x20t
	// 263        0x20t
	// 264        0x20t
	// 265        0x20t
	// 266        0x20t
	// 267        0x20t
	// 268        0x20t
	// 269        0x20t
	// 270        0x20t
	// 271        0x20t
	// 272        0x0t
	// 273        0x20t
	// 274        0x20t
	// 275        0x20t
	// 276        0x20t
	// 277        0x20t
	// 278        0x20t
	// 279        0x20t
	// 280        0x20t
	// 281        0x20t
	// 282        0x20t
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
	// 293        0x20t
	// 294        0x20t
	// 295        0x20t
	// 296        0x20t
	// 297        0x20t
	// 298        0x61t
	// 299        0x62t
	// 300        0x63t
	// 301        0x64t
	// 302        0x65t
	// 303        0x66t
	// 304        0x67t
	// 305        0x68t
	// 306        0x69t
	// 307        0x6at
	// 308        0x6bt
	// 309        0x6ct
	// 310        0x6dt
	// 311        0x6et
	// 312        0x6ft
	// 313        0x70t
	// 314        0x71t
	// 315        0x72t
	// 316        0x73t
	// 317        0x74t
	// 318        0x75t
	// 319        0x76t
	// 320        0x77t
	// 321        0x78t
	// 322        0x79t
	// 323        0x7at
	// 324        0x20t
	// 325        0x20t
	// 326        0x20t
	// 327        0x20t
	// 328        0x20t
	// 329        0x20t
	// 330        0x61t
	// 331        0x62t
	// 332        0x63t
	// 333        0x64t
	// 334        0x65t
	// 335        0x66t
	// 336        0x67t
	// 337        0x68t
	// 338        0x69t
	// 339        0x6at
	// 340        0x6bt
	// 341        0x6ct
	// 342        0x6dt
	// 343        0x6et
	// 344        0x6ft
	// 345        0x70t
	// 346        0x71t
	// 347        0x72t
	// 348        0x73t
	// 349        0x74t
	// 350        0x75t
	// 351        0x76t
	// 352        0x77t
	// 353        0x78t
	// 354        0x79t
	// 355        0x7at
	// 356        0x20t
	// 357        0x20t
	// 358        0x20t
	// 359        0x20t
	// 360        0x20t
	// 361        0x20t
	// 362        0x20t
	// 363        0x20t
	// 364        0x20t
	// 365        0x20t
	// 366        0x20t
	// 367        0x20t
	// 368        0x20t
	// 369        0x20t
	// 370        0x20t
	// 371        0x20t
	// 372        0x20t
	// 373        0x20t
	// 374        0x20t
	// 375        0x20t
	// 376        0x20t
	// 377        0x20t
	// 378        0x20t
	// 379        0x20t
	// 380        0x20t
	// 381        0x20t
	// 382        0x20t
	// 383        0x20t
	// 384        0x20t
	// 385        0x20t
	// 386        0x20t
	// 387        0x20t
	// 388        0x20t
	// 389        0x20t
	// 390        0x20t
	// 391        0x20t
	// 392        0x20t
	// 393        0x20t
	// 394        0x20t
	// 395        0x20t
	// 396        0x20t
	// 397        0x20t
	// 398        0x20t
	// 399        0x20t
	// 400        0x20t
	// 401        0x20t
	// 402        0x20t
	// 403        -0x56t
	// 404        0x20t
	// 405        0x20t
	// 406        0x20t
	// 407        0x20t
	// 408        0x20t
	// 409        0x20t
	// 410        0x20t
	// 411        0x20t
	// 412        0x20t
	// 413        0x20t
	// 414        -0x4bt
	// 415        0x20t
	// 416        0x20t
	// 417        0x20t
	// 418        0x20t
	// 419        -0x46t
	// 420        0x20t
	// 421        0x20t
	// 422        0x20t
	// 423        0x20t
	// 424        0x20t
	// 425        -0x20t
	// 426        -0x1ft
	// 427        -0x1et
	// 428        -0x1dt
	// 429        -0x1ct
	// 430        -0x1bt
	// 431        -0x1at
	// 432        -0x19t
	// 433        -0x18t
	// 434        -0x17t
	// 435        -0x16t
	// 436        -0x15t
	// 437        -0x14t
	// 438        -0x13t
	// 439        -0x12t
	// 440        -0x11t
	// 441        -0x10t
	// 442        -0xft
	// 443        -0xet
	// 444        -0xdt
	// 445        -0xct
	// 446        -0xbt
	// 447        -0xat
	// 448        0x20t
	// 449        -0x8t
	// 450        -0x7t
	// 451        -0x6t
	// 452        -0x5t
	// 453        -0x4t
	// 454        -0x3t
	// 455        -0x2t
	// 456        -0x21t
	// 457        -0x20t
	// 458        -0x1ft
	// 459        -0x1et
	// 460        -0x1dt
	// 461        -0x1ct
	// 462        -0x1bt
	// 463        -0x1at
	// 464        -0x19t
	// 465        -0x18t
	// 466        -0x17t
	// 467        -0x16t
	// 468        -0x15t
	// 469        -0x14t
	// 470        -0x13t
	// 471        -0x12t
	// 472        -0x11t
	// 473        -0x10t
	// 474        -0xft
	// 475        -0xet
	// 476        -0xdt
	// 477        -0xct
	// 478        -0xbt
	// 479        -0xat
	// 480        0x20t
	// 481        -0x8t
	// 482        -0x7t
	// 483        -0x6t
	// 484        -0x5t
	// 485        -0x4t
	// 486        -0x3t
	// 487        -0x2t
	// 488        -0x1t
	// 489    .end array-data
	// 491    .line 336
	// 492    :array_138
	// 493    .array-data 4
	// 494        0x206166
	// 495        0x206174
	// 496        0x206465
	// 497        0x20656e
	// 498        0x206572
	// 499        0x20666f
	// 500        0x206861
	// 501        0x206920
	// 502        0x206d65
	// 503        0x206f67
	// 504        0x2070e5
	// 505        0x207369
	// 506        0x207374
	// 507        0x207469
	// 508        0x207669
	// 509        0x616620
	// 510        0x616e20
	// 511        0x616e64
	// 512        0x617220
	// 513        0x617420
	// 514        0x646520
	// 515        0x64656e
	// 516        0x646572
	// 517        0x646574
	// 518        0x652073
	// 519        0x656420
	// 520        0x656465
	// 521        0x656e20
	// 522        0x656e64
	// 523        0x657220
	// 524        0x657265
	// 525        0x657320
	// 526        0x657420
	// 527        0x666f72
	// 528        0x676520
	// 529        0x67656e
	// 530        0x676572
	// 531        0x696765
	// 532        0x696c20
	// 533        0x696e67
	// 534        0x6b6520
	// 535        0x6b6b65
	// 536        0x6c6572
	// 537        0x6c6967
	// 538        0x6c6c65
	// 539        0x6d6564
	// 540        0x6e6465
	// 541        0x6e6520
	// 542        0x6e6720
	// 543        0x6e6765
	// 544        0x6f6720
	// 545        0x6f6d20
	// 546        0x6f7220
	// 547        0x70e520
	// 548        0x722064
	// 549        0x722065
	// 550        0x722073
	// 551        0x726520
	// 552        0x737465
	// 553        0x742073
	// 554        0x746520
	// 555        0x746572
	// 556        0x74696c
	// 557        0x766572
	// 558    .end array-data
	// 560    .line 344
	// 561    :array_1bc
	// 562    .array-data 4
	// 563        0x20616e
	// 564        0x206175
	// 565        0x206265
	// 566        0x206461
	// 567        0x206465
	// 568        0x206469
	// 569        0x206569
	// 570        0x206765
	// 571        0x206861
	// 572        0x20696e
	// 573        0x206d69
	// 574        0x207363
	// 575        0x207365
	// 576        0x20756e
	// 577        0x207665
	// 578        0x20766f
	// 579        0x207765
	// 580        0x207a75
	// 581        0x626572
	// 582        0x636820
	// 583        0x636865
	// 584        0x636874
	// 585        0x646173
	// 586        0x64656e
	// 587        0x646572
	// 588        0x646965
	// 589        0x652064
	// 590        0x652073
	// 591        0x65696e
	// 592        0x656974
	// 593        0x656e20
	// 594        0x657220
	// 595        0x657320
	// 596        0x67656e
	// 597        0x68656e
	// 598        0x687420
	// 599        0x696368
	// 600        0x696520
	// 601        0x696e20
	// 602        0x696e65
	// 603        0x697420
	// 604        0x6c6963
	// 605        0x6c6c65
	// 606        0x6e2061
	// 607        0x6e2064
	// 608        0x6e2073
	// 609        0x6e6420
	// 610        0x6e6465
	// 611        0x6e6520
	// 612        0x6e6720
	// 613        0x6e6765
	// 614        0x6e7465
	// 615        0x722064
	// 616        0x726465
	// 617        0x726569
	// 618        0x736368
	// 619        0x737465
	// 620        0x742064
	// 621        0x746520
	// 622        0x74656e
	// 623        0x746572
	// 624        0x756e64
	// 625        0x756e67
	// 626        0x766572
	// 627    .end array-data
	// 629    .line 352
	// 630    :array_240
	// 631    .array-data 4
	// 632        0x206120
	// 633        0x20616e
	// 634        0x206265
	// 635        0x20636f
	// 636        0x20666f
	// 637        0x206861
	// 638        0x206865
	// 639        0x20696e
	// 640        0x206d61
	// 641        0x206f66
	// 642        0x207072
	// 643        0x207265
	// 644        0x207361
	// 645        0x207374
	// 646        0x207468
	// 647        0x20746f
	// 648        0x207768
	// 649        0x616964
	// 650        0x616c20
	// 651        0x616e20
	// 652        0x616e64
	// 653        0x617320
	// 654        0x617420
	// 655        0x617465
	// 656        0x617469
	// 657        0x642061
	// 658        0x642074
	// 659        0x652061    # 9.287E-39f
	// 660        0x652073
	// 661        0x652074
	// 662        0x656420
	// 663        0x656e74
	// 664        0x657220
	// 665        0x657320
	// 666        0x666f72
	// 667        0x686174
	// 668        0x686520
	// 669        0x686572
	// 670        0x696420
	// 671        0x696e20
	// 672        0x696e67
	// 673        0x696f6e
	// 674        0x697320
	// 675        0x6e2061
	// 676        0x6e2074
	// 677        0x6e6420
	// 678        0x6e6720
	// 679        0x6e7420
	// 680        0x6f6620
	// 681        0x6f6e20
	// 682        0x6f7220
	// 683        0x726520
	// 684        0x727320
	// 685        0x732061
	// 686        0x732074
	// 687        0x736169
	// 688        0x737420
	// 689        0x742074
	// 690        0x746572
	// 691        0x746861
	// 692        0x746865
	// 693        0x74696f
	// 694        0x746f20
	// 695        0x747320
	// 696    .end array-data
	// 698    .line 361
	// 699    :array_2c4
	// 700    .array-data 4
	// 701        0x206120
	// 702        0x206361
	// 703        0x20636f
	// 704        0x206465
	// 705        0x20656c
	// 706        0x20656e
	// 707        0x206573
	// 708        0x20696e
	// 709        0x206c61
	// 710        0x206c6f
	// 711        0x207061
	// 712        0x20706f
	// 713        0x207072
	// 714        0x207175
	// 715        0x207265
	// 716        0x207365
	// 717        0x20756e
	// 718        0x207920
	// 719        0x612063
	// 720        0x612064
	// 721        0x612065
	// 722        0x61206c
	// 723        0x612070
	// 724        0x616369
	// 725        0x61646f
	// 726        0x616c20
	// 727        0x617220
	// 728        0x617320
	// 729        0x6369f3
	// 730        0x636f6e
	// 731        0x646520
	// 732        0x64656c
	// 733        0x646f20
	// 734        0x652064
	// 735        0x652065
	// 736        0x65206c
	// 737        0x656c20
	// 738        0x656e20
	// 739        0x656e74
	// 740        0x657320
	// 741        0x657374
	// 742        0x69656e
	// 743        0x69f36e
	// 744        0x6c6120
	// 745        0x6c6f73
	// 746        0x6e2065
	// 747        0x6e7465
	// 748        0x6f2064
	// 749        0x6f2065
	// 750        0x6f6e20
	// 751        0x6f7220
	// 752        0x6f7320
	// 753        0x706172
	// 754        0x717565
	// 755        0x726120
	// 756        0x726573
	// 757        0x732064
	// 758        0x732065
	// 759        0x732070
	// 760        0x736520
	// 761        0x746520
	// 762        0x746f20
	// 763        0x756520
	// 764        0xf36e20
	// 765    .end array-data
	// 767    .line 370
	// 768    :array_348
	// 769    .array-data 4
	// 770        0x206175
	// 771        0x20636f
	// 772        0x206461
	// 773        0x206465
	// 774        0x206475
	// 775        0x20656e
	// 776        0x206574
	// 777        0x206c61
	// 778        0x206c65
	// 779        0x207061
	// 780        0x20706f
	// 781        0x207072
	// 782        0x207175
	// 783        0x207365
	// 784        0x20736f
	// 785        0x20756e
	// 786        0x20e020
	// 787        0x616e74
	// 788        0x617469
	// 789        0x636520
	// 790        0x636f6e
	// 791        0x646520
	// 792        0x646573
	// 793        0x647520
	// 794        0x652061    # 9.287E-39f
	// 795        0x652063
	// 796        0x652064
	// 797        0x652065
	// 798        0x65206c
	// 799        0x652070
	// 800        0x652073
	// 801        0x656e20
	// 802        0x656e74
	// 803        0x657220
	// 804        0x657320
	// 805        0x657420
	// 806        0x657572
	// 807        0x696f6e
	// 808        0x697320
	// 809        0x697420
	// 810        0x6c6120
	// 811        0x6c6520
	// 812        0x6c6573
	// 813        0x6d656e
	// 814        0x6e2064
	// 815        0x6e6520
	// 816        0x6e7320
	// 817        0x6e7420
	// 818        0x6f6e20
	// 819        0x6f6e74
	// 820        0x6f7572
	// 821        0x717565
	// 822        0x72206c
	// 823        0x726520
	// 824        0x732061
	// 825        0x732064
	// 826        0x732065
	// 827        0x73206c
	// 828        0x732070
	// 829        0x742064
	// 830        0x746520
	// 831        0x74696f
	// 832        0x756520
	// 833        0x757220
	// 834    .end array-data
	// 836    .line 379
	// 837    :array_3cc
	// 838    .array-data 4
	// 839        0x20616c
	// 840        0x206368
	// 841        0x20636f
	// 842        0x206465
	// 843        0x206469
	// 844        0x206520
	// 845        0x20696c
	// 846        0x20696e
	// 847        0x206c61
	// 848        0x207065
	// 849        0x207072
	// 850        0x20756e
	// 851        0x612063
	// 852        0x612064
	// 853        0x612070
	// 854        0x612073
	// 855        0x61746f
	// 856        0x636865
	// 857        0x636f6e
	// 858        0x64656c
	// 859        0x646920
	// 860        0x652061    # 9.287E-39f
	// 861        0x652063
	// 862        0x652064
	// 863        0x652069
	// 864        0x65206c
	// 865        0x652070
	// 866        0x652073
	// 867        0x656c20
	// 868        0x656c6c
	// 869        0x656e74
	// 870        0x657220
	// 871        0x686520
	// 872        0x692061
	// 873        0x692063
	// 874        0x692064
	// 875        0x692073
	// 876        0x696120
	// 877        0x696c20
	// 878        0x696e20
	// 879        0x696f6e
	// 880        0x6c6120
	// 881        0x6c6520
	// 882        0x6c6920
	// 883        0x6c6c61
	// 884        0x6e6520
	// 885        0x6e6920
	// 886        0x6e6f20
	// 887        0x6e7465
	// 888        0x6f2061
	// 889        0x6f2064
	// 890        0x6f2069
	// 891        0x6f2073
	// 892        0x6f6e20
	// 893        0x6f6e65
	// 894        0x706572
	// 895        0x726120
	// 896        0x726520
	// 897        0x736920
	// 898        0x746120
	// 899        0x746520
	// 900        0x746920
	// 901        0x746f20
	// 902        0x7a696f
	// 903    .end array-data
	// 905    .line 388
	// 906    :array_450
	// 907    .array-data 4
	// 908        0x20616c
	// 909        0x206265
	// 910        0x206461
	// 911        0x206465
	// 912        0x206469
	// 913        0x206565
	// 914        0x20656e
	// 915        0x206765
	// 916        0x206865
	// 917        0x20696e
	// 918        0x206d61
	// 919        0x206d65
	// 920        0x206f70
	// 921        0x207465
	// 922        0x207661
	// 923        0x207665
	// 924        0x20766f
	// 925        0x207765
	// 926        0x207a69
	// 927        0x61616e
	// 928        0x616172    # 8.943E-39f
	// 929        0x616e20
	// 930        0x616e64
	// 931        0x617220
	// 932        0x617420
	// 933        0x636874
	// 934        0x646520
	// 935        0x64656e
	// 936        0x646572
	// 937        0x652062
	// 938        0x652076
	// 939        0x65656e
	// 940        0x656572
	// 941        0x656e20
	// 942        0x657220
	// 943        0x657273
	// 944        0x657420
	// 945        0x67656e
	// 946        0x686574
	// 947        0x696520
	// 948        0x696e20
	// 949        0x696e67
	// 950        0x697320
	// 951        0x6e2062
	// 952        0x6e2064
	// 953        0x6e2065
	// 954        0x6e2068
	// 955        0x6e206f
	// 956        0x6e2076
	// 957        0x6e6465
	// 958        0x6e6720
	// 959        0x6f6e64
	// 960        0x6f6f72
	// 961        0x6f7020
	// 962        0x6f7220
	// 963        0x736368
	// 964        0x737465
	// 965        0x742064
	// 966        0x746520
	// 967        0x74656e
	// 968        0x746572
	// 969        0x76616e
	// 970        0x766572
	// 971        0x766f6f
	// 972    .end array-data
	// 974    .line 397
	// 975    :array_4d4
	// 976    .array-data 4
	// 977        0x206174
	// 978        0x206176
	// 979        0x206465
	// 980        0x20656e
	// 981        0x206572
	// 982        0x20666f
	// 983        0x206861
	// 984        0x206920
	// 985        0x206d65
	// 986        0x206f67
	// 987        0x2070e5
	// 988        0x207365
	// 989        0x20736b
	// 990        0x20736f
	// 991        0x207374
	// 992        0x207469
	// 993        0x207669
	// 994        0x20e520
	// 995        0x616e64
	// 996        0x617220
	// 997        0x617420
	// 998        0x646520
	// 999        0x64656e
	// 1000        0x646574
	// 1001        0x652073
	// 1002        0x656420
	// 1003        0x656e20
	// 1004        0x656e65
	// 1005        0x657220
	// 1006        0x657265
	// 1007        0x657420
	// 1008        0x657474
	// 1009        0x666f72
	// 1010        0x67656e
	// 1011        0x696b6b
	// 1012        0x696c20
	// 1013        0x696e67
	// 1014        0x6b6520
	// 1015        0x6b6b65
	// 1016        0x6c6520
	// 1017        0x6c6c65
	// 1018        0x6d6564
	// 1019        0x6d656e
	// 1020        0x6e2073
	// 1021        0x6e6520
	// 1022        0x6e6720
	// 1023        0x6e6765
	// 1024        0x6e6e65
	// 1025        0x6f6720
	// 1026        0x6f6d20
	// 1027        0x6f7220
	// 1028        0x70e520
	// 1029        0x722073
	// 1030        0x726520
	// 1031        0x736f6d
	// 1032        0x737465
	// 1033        0x742073
	// 1034        0x746520
	// 1035        0x74656e
	// 1036        0x746572
	// 1037        0x74696c
	// 1038        0x747420
	// 1039        0x747465
	// 1040        0x766572
	// 1041    .end array-data
	// 1043    .line 406
	// 1044    :array_558
	// 1045    .array-data 4
	// 1046        0x206120
	// 1047        0x20636f
	// 1048        0x206461
	// 1049        0x206465
	// 1050        0x20646f
	// 1051        0x206520
	// 1052        0x206573
	// 1053        0x206d61
	// 1054        0x206e6f
	// 1055        0x206f20
	// 1056        0x207061
	// 1057        0x20706f
	// 1058        0x207072
	// 1059        0x207175
	// 1060        0x207265
	// 1061        0x207365
	// 1062        0x20756d
	// 1063        0x612061
	// 1064        0x612063
	// 1065        0x612064
	// 1066        0x612070
	// 1067        0x616465
	// 1068        0x61646f
	// 1069        0x616c20
	// 1070        0x617220
	// 1071        0x617261
	// 1072        0x617320
	// 1073        0x636f6d
	// 1074        0x636f6e
	// 1075        0x646120
	// 1076        0x646520
	// 1077        0x646f20
	// 1078        0x646f73
	// 1079        0x652061    # 9.287E-39f
	// 1080        0x652064
	// 1081        0x656d20
	// 1082        0x656e74
	// 1083        0x657320
	// 1084        0x657374
	// 1085        0x696120
	// 1086        0x696361
	// 1087        0x6d656e
	// 1088        0x6e7465
	// 1089        0x6e746f
	// 1090        0x6f2061
	// 1091        0x6f2063
	// 1092        0x6f2064
	// 1093        0x6f2065
	// 1094        0x6f2070
	// 1095        0x6f7320
	// 1096        0x706172
	// 1097        0x717565
	// 1098        0x726120
	// 1099        0x726573
	// 1100        0x732061
	// 1101        0x732064
	// 1102        0x732065
	// 1103        0x732070
	// 1104        0x737461
	// 1105        0x746520
	// 1106        0x746f20
	// 1107        0x756520
	// 1108        0xe36f20
	// 1109        0xe7e36f
	// 1110    .end array-data
	// 1112    .line 416
	// 1113    :array_5dc
	// 1114    .array-data 4
	// 1115        0x206174
	// 1116        0x206176
	// 1117        0x206465
	// 1118        0x20656e
	// 1119        0x2066f6
	// 1120        0x206861
	// 1121        0x206920
	// 1122        0x20696e
	// 1123        0x206b6f
	// 1124        0x206d65
	// 1125        0x206f63
	// 1126        0x2070e5
	// 1127        0x20736b
	// 1128        0x20736f
	// 1129        0x207374
	// 1130        0x207469
	// 1131        0x207661
	// 1132        0x207669
	// 1133        0x20e472
	// 1134        0x616465
	// 1135        0x616e20
	// 1136        0x616e64
	// 1137        0x617220
	// 1138        0x617474
	// 1139        0x636820
	// 1140        0x646520
	// 1141        0x64656e
	// 1142        0x646572
	// 1143        0x646574
	// 1144        0x656420
	// 1145        0x656e20
	// 1146        0x657220
	// 1147        0x657420
	// 1148        0x66f672
	// 1149        0x67656e
	// 1150        0x696c6c
	// 1151        0x696e67
	// 1152        0x6b6120
	// 1153        0x6c6c20
	// 1154        0x6d6564
	// 1155        0x6e2073
	// 1156        0x6e6120
	// 1157        0x6e6465
	// 1158        0x6e6720
	// 1159        0x6e6765
	// 1160        0x6e696e
	// 1161        0x6f6368
	// 1162        0x6f6d20
	// 1163        0x6f6e20
	// 1164        0x70e520
	// 1165        0x722061
	// 1166        0x722073
	// 1167        0x726120
	// 1168        0x736b61
	// 1169        0x736f6d
	// 1170        0x742073
	// 1171        0x746120
	// 1172        0x746520
	// 1173        0x746572
	// 1174        0x74696c
	// 1175        0x747420
	// 1176        0x766172
	// 1177        0xe47220
	// 1178        0xf67220
	// 1179    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_1::CharsetRecog_sbcs_S_CharsetRecog_8859_1()
{
	
	// 1187    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs;-><init>()V
	return;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_1::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO-8859-1"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_1::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int cVar0;
	int bestConfidenceSoFar;
	std::shared_ptr<std::vector<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>> cVar1;
	std::shared_ptr<int[]> ngl;
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar3;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	cVar0 = 0x0;
	if ( !(det->fC1Bytes) )  
		goto label_cond_21;
	//    .local v4, "name":Ljava/lang/String;
label_goto_8:
	bestConfidenceSoFar = -0x1;
	//    .local v3, "bestConfidenceSoFar":I
	//    .local v5, "lang":Ljava/lang/String;
	cVar1 = android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_1::ngrams_8859_1;
	//    .end local v5    # "lang":Ljava/lang/String;
label_goto_d:
	if ( cVar0 >= cVar1->size() )
		goto label_cond_25;
	ngl = cVar1[cVar0];
	//    .local v7, "ngl":Landroid/icu/text/CharsetRecog_sbcs$NGramsPlusLang;
	confidence = this->match(det, ngl->fNGrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_1::byteMap);
	//    .local v6, "confidence":I
	if ( confidence <= bestConfidenceSoFar )
		goto label_cond_1e;
	bestConfidenceSoFar = confidence;
	ngl->fLang;
label_cond_1e:
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_d;
	// 1265    .line 429
	// 1266    .end local v3    # "bestConfidenceSoFar":I
	// 1267    .end local v4    # "name":Ljava/lang/String;
	// 1268    .end local v6    # "confidence":I
	// 1269    .end local v7    # "ngl":Landroid/icu/text/CharsetRecog_sbcs$NGramsPlusLang;
label_cond_21:
	//    .restart local v4    # "name":Ljava/lang/String;
	goto label_goto_8;
	// 1276    .line 439
	// 1277    .restart local v3    # "bestConfidenceSoFar":I
label_cond_25:
	if ( bestConfidenceSoFar > 0 ) 
		goto label_cond_29;
	cVar3 = 0x0;
label_goto_28:
	return cVar3;
label_cond_29:
	cVar3 = std::make_shared<android::icu::text::CharsetMatch>(det, this, bestConfidenceSoFar, name, 0x0);
	goto label_goto_28;

}


