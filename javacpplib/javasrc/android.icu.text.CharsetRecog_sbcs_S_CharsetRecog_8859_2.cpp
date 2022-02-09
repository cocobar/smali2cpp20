// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_8859_2.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_2.h"
#include "android.icu.text.CharsetRecog_sbcs_S_NGramsPlusLang.h"
#include "android.icu.text.CharsetRecognizer.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_2::byteMap;
static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_2::ngrams_8859_2;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_2::static_cinit()
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
	
	cVar0 = 0x40;
	cVar1 = std::make_shared<std::vector<unsigned char[]>>(0x100);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_2::byteMap = cVar1;
	cVar2 = std::make_shared<std::vector<std::vector<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>>>(0x4);
	cVar4 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar3 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cs")), cVar4);
	cVar2[0x0] = cVar3;
	cVar6 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar5 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hu")), cVar6);
	cVar2[0x1] = cVar5;
	cVar8 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar7 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>(std::make_shared<java::lang::String>(std::make_shared<char[]>("pl")), cVar8);
	cVar2[0x2] = cVar7;
	cVar10 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar9 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ro")), cVar10);
	cVar2[0x3] = cVar9;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_2::ngrams_8859_2 = cVar2;
	return;
	// 122    .line 453
	// 123    nop
	// 125    :array_52
	// 126    .array-data 1
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
	// 162        0x20t
	// 163        0x20t
	// 164        0x20t
	// 165        0x20t
	// 166        0x0t
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
	// 188        0x20t
	// 189        0x20t
	// 190        0x20t
	// 191        0x20t
	// 192        0x61t
	// 193        0x62t
	// 194        0x63t
	// 195        0x64t
	// 196        0x65t
	// 197        0x66t
	// 198        0x67t
	// 199        0x68t
	// 200        0x69t
	// 201        0x6at
	// 202        0x6bt
	// 203        0x6ct
	// 204        0x6dt
	// 205        0x6et
	// 206        0x6ft
	// 207        0x70t
	// 208        0x71t
	// 209        0x72t
	// 210        0x73t
	// 211        0x74t
	// 212        0x75t
	// 213        0x76t
	// 214        0x77t
	// 215        0x78t
	// 216        0x79t
	// 217        0x7at
	// 218        0x20t
	// 219        0x20t
	// 220        0x20t
	// 221        0x20t
	// 222        0x20t
	// 223        0x20t
	// 224        0x61t
	// 225        0x62t
	// 226        0x63t
	// 227        0x64t
	// 228        0x65t
	// 229        0x66t
	// 230        0x67t
	// 231        0x68t
	// 232        0x69t
	// 233        0x6at
	// 234        0x6bt
	// 235        0x6ct
	// 236        0x6dt
	// 237        0x6et
	// 238        0x6ft
	// 239        0x70t
	// 240        0x71t
	// 241        0x72t
	// 242        0x73t
	// 243        0x74t
	// 244        0x75t
	// 245        0x76t
	// 246        0x77t
	// 247        0x78t
	// 248        0x79t
	// 249        0x7at
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
	// 272        0x20t
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
	// 288        -0x4ft
	// 289        0x20t
	// 290        -0x4dt
	// 291        0x20t
	// 292        -0x4bt
	// 293        -0x4at
	// 294        0x20t
	// 295        0x20t
	// 296        -0x47t
	// 297        -0x46t
	// 298        -0x45t
	// 299        -0x44t
	// 300        0x20t
	// 301        -0x42t
	// 302        -0x41t
	// 303        0x20t
	// 304        -0x4ft
	// 305        0x20t
	// 306        -0x4dt
	// 307        0x20t
	// 308        -0x4bt
	// 309        -0x4at
	// 310        -0x49t
	// 311        0x20t
	// 312        -0x47t
	// 313        -0x46t
	// 314        -0x45t
	// 315        -0x44t
	// 316        0x20t
	// 317        -0x42t
	// 318        -0x41t
	// 319        -0x20t
	// 320        -0x1ft
	// 321        -0x1et
	// 322        -0x1dt
	// 323        -0x1ct
	// 324        -0x1bt
	// 325        -0x1at
	// 326        -0x19t
	// 327        -0x18t
	// 328        -0x17t
	// 329        -0x16t
	// 330        -0x15t
	// 331        -0x14t
	// 332        -0x13t
	// 333        -0x12t
	// 334        -0x11t
	// 335        -0x10t
	// 336        -0xft
	// 337        -0xet
	// 338        -0xdt
	// 339        -0xct
	// 340        -0xbt
	// 341        -0xat
	// 342        0x20t
	// 343        -0x8t
	// 344        -0x7t
	// 345        -0x6t
	// 346        -0x5t
	// 347        -0x4t
	// 348        -0x3t
	// 349        -0x2t
	// 350        -0x21t
	// 351        -0x20t
	// 352        -0x1ft
	// 353        -0x1et
	// 354        -0x1dt
	// 355        -0x1ct
	// 356        -0x1bt
	// 357        -0x1at
	// 358        -0x19t
	// 359        -0x18t
	// 360        -0x17t
	// 361        -0x16t
	// 362        -0x15t
	// 363        -0x14t
	// 364        -0x13t
	// 365        -0x12t
	// 366        -0x11t
	// 367        -0x10t
	// 368        -0xft
	// 369        -0xet
	// 370        -0xdt
	// 371        -0xct
	// 372        -0xbt
	// 373        -0xat
	// 374        0x20t
	// 375        -0x8t
	// 376        -0x7t
	// 377        -0x6t
	// 378        -0x5t
	// 379        -0x4t
	// 380        -0x3t
	// 381        -0x2t
	// 382        0x20t
	// 383    .end array-data
	// 385    .line 491
	// 386    :array_d6
	// 387    .array-data 4
	// 388        0x206120
	// 389        0x206279
	// 390        0x20646f
	// 391        0x206a65
	// 392        0x206e61
	// 393        0x206e65
	// 394        0x206f20
	// 395        0x206f64
	// 396        0x20706f
	// 397        0x207072
	// 398        0x2070f8
	// 399        0x20726f
	// 400        0x207365
	// 401        0x20736f
	// 402        0x207374
	// 403        0x20746f
	// 404        0x207620
	// 405        0x207679
	// 406        0x207a61
	// 407        0x612070
	// 408        0x636520
	// 409        0x636820
	// 410        0x652070
	// 411        0x652073
	// 412        0x652076
	// 413        0x656d20
	// 414        0x656eed
	// 415        0x686f20
	// 416        0x686f64
	// 417        0x697374
	// 418        0x6a6520
	// 419        0x6b7465
	// 420        0x6c6520
	// 421        0x6c6920
	// 422        0x6e6120
	// 423        0x6ee920
	// 424        0x6eec20
	// 425        0x6eed20
	// 426        0x6f2070
	// 427        0x6f646e
	// 428        0x6f6a69
	// 429        0x6f7374
	// 430        0x6f7520
	// 431        0x6f7661
	// 432        0x706f64
	// 433        0x706f6a
	// 434        0x70726f
	// 435        0x70f865
	// 436        0x736520
	// 437        0x736f75
	// 438        0x737461
	// 439        0x737469
	// 440        0x73746e
	// 441        0x746572
	// 442        0x746eed
	// 443        0x746f20
	// 444        0x752070
	// 445        0xbe6520
	// 446        0xe16eed
	// 447        0xe9686f
	// 448        0xed2070
	// 449        0xed2073
	// 450        0xed6d20
	// 451        0xf86564
	// 452    .end array-data
	// 454    .line 499
	// 455    :array_15a
	// 456    .array-data 4
	// 457        0x206120
	// 458        0x20617a
	// 459        0x206265
	// 460        0x206567
	// 461        0x20656c
	// 462        0x206665
	// 463        0x206861
	// 464        0x20686f
	// 465        0x206973
	// 466        0x206b65
	// 467        0x206b69
	// 468        0x206bf6
	// 469        0x206c65
	// 470        0x206d61
	// 471        0x206d65
	// 472        0x206d69
	// 473        0x206e65
	// 474        0x20737a
	// 475        0x207465
	// 476        0x20e973
	// 477        0x612061
	// 478        0x61206b
	// 479        0x61206d
	// 480        0x612073
	// 481        0x616b20
	// 482        0x616e20
	// 483        0x617a20
	// 484        0x62616e
	// 485        0x62656e
	// 486        0x656779
	// 487        0x656b20
	// 488        0x656c20
	// 489        0x656c65
	// 490        0x656d20
	// 491        0x656e20
	// 492        0x657265
	// 493        0x657420
	// 494        0x657465
	// 495        0x657474
	// 496        0x677920
	// 497        0x686f67
	// 498        0x696e74
	// 499        0x697320
	// 500        0x6b2061
	// 501        0x6bf67a
	// 502        0x6d6567
	// 503        0x6d696e
	// 504        0x6e2061
	// 505        0x6e616b
	// 506        0x6e656b
	// 507        0x6e656d
	// 508        0x6e7420
	// 509        0x6f6779
	// 510        0x732061
	// 511        0x737a65
	// 512        0x737a74
	// 513        0x737ae1
	// 514        0x73e967
	// 515        0x742061
	// 516        0x747420
	// 517        0x74e173
	// 518        0x7a6572
	// 519        0xe16e20
	// 520        0xe97320
	// 521    .end array-data
	// 523    .line 507
	// 524    :array_1de
	// 525    .array-data 4
	// 526        0x20637a
	// 527        0x20646f
	// 528        0x206920
	// 529        0x206a65
	// 530        0x206b6f
	// 531        0x206d61
	// 532        0x206d69
	// 533        0x206e61
	// 534        0x206e69
	// 535        0x206f64
	// 536        0x20706f
	// 537        0x207072
	// 538        0x207369
	// 539        0x207720
	// 540        0x207769
	// 541        0x207779
	// 542        0x207a20
	// 543        0x207a61
	// 544        0x612070
	// 545        0x612077
	// 546        0x616e69
	// 547        0x636820
	// 548        0x637a65
	// 549        0x637a79
	// 550        0x646f20
	// 551        0x647a69
	// 552        0x652070
	// 553        0x652073
	// 554        0x652077
	// 555        0x65207a
	// 556        0x65676f
	// 557        0x656a20
	// 558        0x656d20
	// 559        0x656e69
	// 560        0x676f20
	// 561        0x696120
	// 562        0x696520
	// 563        0x69656a
	// 564        0x6b6120
	// 565        0x6b6920
	// 566        0x6b6965
	// 567        0x6d6965
	// 568        0x6e6120
	// 569        0x6e6961
	// 570        0x6e6965
	// 571        0x6f2070
	// 572        0x6f7761
	// 573        0x6f7769
	// 574        0x706f6c
	// 575        0x707261
	// 576        0x70726f
	// 577        0x70727a
	// 578        0x727a65
	// 579        0x727a79
	// 580        0x7369ea
	// 581        0x736b69
	// 582        0x737461
	// 583        0x776965
	// 584        0x796368
	// 585        0x796d20
	// 586        0x7a6520
	// 587        0x7a6965
	// 588        0x7a7920
	// 589        0xf37720
	// 590    .end array-data
	// 592    .line 515
	// 593    :array_262
	// 594    .array-data 4
	// 595        0x206120
	// 596        0x206163
	// 597        0x206361
	// 598        0x206365
	// 599        0x20636f
	// 600        0x206375
	// 601        0x206465
	// 602        0x206469
	// 603        0x206c61
	// 604        0x206d61
	// 605        0x207065
	// 606        0x207072
	// 607        0x207365
	// 608        0x2073e3
	// 609        0x20756e
	// 610        0x20ba69
	// 611        0x20ee6e
	// 612        0x612063
	// 613        0x612064
	// 614        0x617265
	// 615        0x617420
	// 616        0x617465
	// 617        0x617520
	// 618        0x636172
	// 619        0x636f6e
	// 620        0x637520
	// 621        0x63e320
	// 622        0x646520
	// 623        0x652061    # 9.287E-39f
	// 624        0x652063
	// 625        0x652064
	// 626        0x652070
	// 627        0x652073
	// 628        0x656120
	// 629        0x656920
	// 630        0x656c65
	// 631        0x656e74
	// 632        0x657374
	// 633        0x692061
	// 634        0x692063
	// 635        0x692064
	// 636        0x692070
	// 637        0x696520
	// 638        0x696920
	// 639        0x696e20
	// 640        0x6c6120
	// 641        0x6c6520
	// 642        0x6c6f72
	// 643        0x6c7569
	// 644        0x6e6520
	// 645        0x6e7472
	// 646        0x6f7220
	// 647        0x70656e
	// 648        0x726520
	// 649        0x726561
	// 650        0x727520
	// 651        0x73e320
	// 652        0x746520
	// 653        0x747275
	// 654        0x74e320
	// 655        0x756920
	// 656        0x756c20
	// 657        0xba6920
	// 658        0xee6e20
	// 659    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_2::CharsetRecog_sbcs_S_CharsetRecog_8859_2()
{
	
	// 667    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs;-><init>()V
	return;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_2::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO-8859-2"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_2::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
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
	cVar1 = android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_2::ngrams_8859_2;
	//    .end local v5    # "lang":Ljava/lang/String;
label_goto_d:
	if ( cVar0 >= cVar1->size() )
		goto label_cond_25;
	ngl = cVar1[cVar0];
	//    .local v7, "ngl":Landroid/icu/text/CharsetRecog_sbcs$NGramsPlusLang;
	confidence = this->match(det, ngl->fNGrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_2::byteMap);
	//    .local v6, "confidence":I
	if ( confidence <= bestConfidenceSoFar )
		goto label_cond_1e;
	bestConfidenceSoFar = confidence;
	ngl->fLang;
label_cond_1e:
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_d;
	// 745    .line 526
	// 746    .end local v3    # "bestConfidenceSoFar":I
	// 747    .end local v4    # "name":Ljava/lang/String;
	// 748    .end local v6    # "confidence":I
	// 749    .end local v7    # "ngl":Landroid/icu/text/CharsetRecog_sbcs$NGramsPlusLang;
label_cond_21:
	//    .restart local v4    # "name":Ljava/lang/String;
	goto label_goto_8;
	// 756    .line 536
	// 757    .restart local v3    # "bestConfidenceSoFar":I
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


