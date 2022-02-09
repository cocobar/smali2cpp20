// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BidiLine.smali
#include "java2ctype.h"
#include "android.icu.text.Bidi_S_InsertPoints.h"
#include "android.icu.text.Bidi_S_Point.h"
#include "android.icu.text.Bidi.h"
#include "android.icu.text.BidiLine.h"
#include "android.icu.text.BidiRun.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.Arrays.h"

// .method constructor <init>()V
android::icu::text::BidiLine::BidiLine()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static getLevelAt(Landroid/icu/text/Bidi;I)B
unsigned char android::icu::text::BidiLine::getLevelAt(std::shared_ptr<android::icu::text::Bidi> bidi,int charIndex)
{
	
	//    .param p0, "bidi"    # Landroid/icu/text/Bidi;
	//    .param p1, "charIndex"    # I
	if ( bidi->direction != 0x2 )
		goto label_cond_9;
	if ( charIndex <  bidi->trailingWSStart )
		goto label_cond_e;
label_cond_9:
	return bidi->GetParaLevelAt(charIndex);
	// 042    .line 246
label_cond_e:
	return bidi->levels[charIndex];

}
// .method static getLevels(Landroid/icu/text/Bidi;)[B
unsigned char android::icu::text::BidiLine::getLevels(std::shared_ptr<android::icu::text::Bidi> bidi)
{
	
	int cVar0;
	int start;
	int length;
	std::shared<std::vector<unsigned char[]>> levels;
	
	//    .param p0, "bidi"    # Landroid/icu/text/Bidi;
	cVar0 = 0x0;
	start = bidi->trailingWSStart;
	//    .local v2, "start":I
	length = bidi->length;
	//    .local v0, "length":I
	if ( start == length )
		goto label_cond_10;
	java::util::Arrays::fill(bidi->levels, start, length, bidi->paraLevel);
	bidi->trailingWSStart = length;
label_cond_10:
	if ( length >= bidi->levels->size() )
		goto label_cond_1d;
	levels = std::make_shared<std::vector<unsigned char[]>>(length);
	//    .local v1, "levels":[B
	java::lang::System::arraycopy(bidi->levels, cVar0, levels, cVar0, length);
	return levels;
	// 099    .line 276
	// 100    .end local v1    # "levels":[B
label_cond_1d:
	return bidi->levels;

}
// .method static getLogicalIndex(Landroid/icu/text/Bidi;I)I
int android::icu::text::BidiLine::getLogicalIndex(std::shared_ptr<android::icu::text::Bidi> bidi,int cVar3)
{
	
	std::shared_ptr<std::vector<android::icu::text::BidiRun>> runs;
	int runCount;
	int markFound;
	int visualStart;
	int i;
	int length;
	int insertRemove;
	int cVar3;
	int start;
	int begin;
	int limit;
	int controlFound;
	int logicalStart;
	int j;
	
	//    .param p0, "bidi"    # Landroid/icu/text/Bidi;
	//    .param p1, "visualIndex"    # I
	runs = bidi->runs;
	//    .local v15, "runs":[Landroid/icu/text/BidiRun;
	runCount = bidi->runCount;
	//    .local v14, "runCount":I
	if ( bidi->insertPoints->size <= 0 )
		goto label_cond_7d;
	markFound = 0x0;
	//    .local v13, "markFound":I
	visualStart = 0x0;
	//    .local v18, "visualStart":I
	i = 0x0;
	//    .local v5, "i":I
label_goto_1a:
	length = (runs[i]->limit - visualStart);
	//    .local v9, "length":I
	insertRemove = runs[i]->insertRemove;
	//    .local v6, "insertRemove":I
	if ( ( insertRemove & 0x5) <= 0 )
		goto label_cond_3b;
	if ( cVar3 >  (visualStart + markFound) )
		goto label_cond_39;
	return -0x1;
	// 192    .line 930
label_cond_39:
	markFound = ( markFound + 0x1);
label_cond_3b:
	if ( cVar3 >= (runs[i]->limit + markFound) )
		goto label_cond_65;
	cVar3 = (cVar3 - markFound);
	//    .end local v5    # "i":I
	//    .end local v6    # "insertRemove":I
	//    .end local v9    # "length":I
	//    .end local v13    # "markFound":I
	//    .end local v18    # "visualStart":I
label_cond_4d:
label_goto_4d:
	if ( runCount >  0xa )
		goto label_cond_f1;
	i = 0x0;
	//    .restart local v5    # "i":I
label_goto_54:
	if ( cVar3 <  runs[i]->limit )
		goto label_cond_11a;
	i = ( i + 0x1);
	goto label_goto_54;
	// 254    .line 937
	// 255    .restart local v6    # "insertRemove":I
	// 256    .restart local v9    # "length":I
	// 257    .restart local v13    # "markFound":I
	// 258    .restart local v18    # "visualStart":I
label_cond_65:
	if ( ( insertRemove & 0xa) <= 0 )
		goto label_cond_78;
	if ( cVar3 != ((visualStart + length) + markFound) )
		goto label_cond_76;
	return -0x1;
	// 280    .line 941
label_cond_76:
	markFound = ( markFound + 0x1);
label_cond_78:
	i = ( i + 0x1);
	visualStart = (visualStart + length);
	goto label_goto_1a;
	// 292    .line 945
	// 293    .end local v5    # "i":I
	// 294    .end local v6    # "insertRemove":I
	// 295    .end local v9    # "length":I
	// 296    .end local v13    # "markFound":I
	// 297    .end local v18    # "visualStart":I
label_cond_7d:
	if ( bidi->controlCount <= 0 )
		goto label_cond_4d;
	controlFound = 0x0;
	//    .local v3, "controlFound":I
	visualStart = 0x0;
	//    .restart local v18    # "visualStart":I
	i = 0x0;
	//    .restart local v5    # "i":I
label_goto_89:
	length = (runs[i]->limit - visualStart);
	//    .restart local v9    # "length":I
	insertRemove = runs[i]->insertRemove;
	//    .restart local v6    # "insertRemove":I
	if ( cVar3 <  ((runs[i]->limit - controlFound) + insertRemove) )
		goto label_cond_b1;
	controlFound = (controlFound -  insertRemove);
	i = ( i + 0x1);
	visualStart = (visualStart + length);
	goto label_goto_89;
	// 369    .line 961
label_cond_b1:
	if ( insertRemove )     
		goto label_cond_b6;
	cVar3 = (cVar3 + controlFound);
	goto label_goto_4d;
	// 379    .line 966
label_cond_b6:
	logicalStart = runs[i]->start;
	//    .local v12, "logicalStart":I
	//    .local v4, "evenRun":Z
	//    .local v11, "logicalEnd":I
	j = 0x0;
	//    .local v7, "j":I
label_goto_c7:
	if ( j >= length )
		goto label_cond_e7;
	if ( !(runs[i]->isEvenRun()) )  
		goto label_cond_eb;
	//    .local v8, "k":I
label_goto_cd:
	//    .local v17, "uchar":C
	if ( !(android::icu::text::Bidi::IsBidiControlChar(bidi->text[k])) )  
		goto label_cond_dd;
	controlFound = ( controlFound + 0x1);
label_cond_dd:
	if ( (cVar3 + controlFound) != (visualStart + j) )
		goto label_cond_ee;
	//    .end local v8    # "k":I
	//    .end local v17    # "uchar":C
label_cond_e7:
	cVar3 = (cVar3 + controlFound);
	goto label_goto_4d;
	// 457    .line 970
label_cond_eb:
	//    .restart local v8    # "k":I
	goto label_goto_cd;
	// 464    .line 969
	// 465    .restart local v17    # "uchar":C
label_cond_ee:
	j = ( j + 0x1);
	goto label_goto_c7;
	// 471    .line 989
	// 472    .end local v3    # "controlFound":I
	// 473    .end local v4    # "evenRun":Z
	// 474    .end local v5    # "i":I
	// 475    .end local v6    # "insertRemove":I
	// 476    .end local v7    # "j":I
	// 477    .end local v8    # "k":I
	// 478    .end local v9    # "length":I
	// 479    .end local v11    # "logicalEnd":I
	// 480    .end local v12    # "logicalStart":I
	// 481    .end local v17    # "uchar":C
	// 482    .end local v18    # "visualStart":I
label_cond_f1:
	begin = 0x0;
	//    .local v2, "begin":I
	limit = runCount;
	//    .local v10, "limit":I
label_goto_f3:
	i = _ushri((begin + limit),0x1);
	//    .restart local v5    # "i":I
	if ( cVar3 <  runs[i]->limit )
		goto label_cond_108;
	begin = ( i + 0x1);
	goto label_goto_f3;
	// 517    .line 996
label_cond_108:
	if ( !(i) )  
		goto label_cond_11a;
	if ( cVar3 <  runs[( i + -0x1)]->limit )
		goto label_cond_13b;
	//    .end local v2    # "begin":I
	//    .end local v10    # "limit":I
label_cond_11a:
	start = runs[i]->start;
	//    .local v16, "start":I
	if ( !(runs[i]->isEvenRun()) )  
		goto label_cond_13d;
	if ( i <= 0 )
		goto label_cond_138;
	cVar3 = (cVar3 - runs[( i + -0x1)]->limit);
label_cond_138:
	return (start + cVar3);
	// 581    .line 999
	// 582    .end local v16    # "start":I
	// 583    .restart local v2    # "begin":I
	// 584    .restart local v10    # "limit":I
label_cond_13b:
	limit = i;
	goto label_goto_f3;
	// 590    .line 1014
	// 591    .end local v2    # "begin":I
	// 592    .end local v10    # "limit":I
	// 593    .restart local v16    # "start":I
label_cond_13d:
	return ( ((runs[i]->limit + start) - cVar3) + -0x1);

}
// .method static getLogicalMap(Landroid/icu/text/Bidi;)[I
int android::icu::text::BidiLine::getLogicalMap(std::shared_ptr<android::icu::text::Bidi> bidi)
{
	
	std::shared_ptr<std::vector<android::icu::text::BidiRun>> runs;
	std::shared<std::vector<int[]>> indexMap;
	int visualStart;
	int j;
	int logicalStart;
	int visualLimit;
	int markFound;
	int i;
	int length;
	int insertRemove;
	int controlFound;
	int logicalLimit;
	int k;
	
	//    .param p0, "bidi"    # Landroid/icu/text/Bidi;
	runs = bidi->runs;
	//    .local v15, "runs":[Landroid/icu/text/BidiRun;
	indexMap = std::make_shared<std::vector<int[]>>(bidi->length);
	//    .local v5, "indexMap":[I
	if ( bidi->length <= bidi->resultLength )
		goto label_cond_27;
	java::util::Arrays::fill(indexMap, -0x1);
label_cond_27:
	visualStart = 0x0;
	//    .local v18, "visualStart":I
	j = 0x0;
	//    .local v7, "j":I
label_goto_2a:
	if ( j >= bidi->runCount )
		goto label_cond_72;
	logicalStart = runs[j]->start;
	//    .local v11, "logicalStart":I
	visualLimit = runs[j]->limit;
	//    .local v17, "visualLimit":I
	if ( !(runs[j]->isEvenRun()) )  
		goto label_cond_5a;
label_goto_4a:
	logicalStart = ( logicalStart + 0x1);
	//    .end local v11    # "logicalStart":I
	//    .local v12, "logicalStart":I
	visualStart = ( visualStart + 0x1);
	//    .end local v18    # "visualStart":I
	//    .local v19, "visualStart":I
	indexMap[logicalStart] = visualStart;
	if ( visualStart >= visualLimit )
		goto label_cond_13b;
	logicalStart = logicalStart;
	//    .end local v12    # "logicalStart":I
	//    .restart local v11    # "logicalStart":I
	visualStart = visualStart;
	//    .end local v19    # "visualStart":I
	//    .restart local v18    # "visualStart":I
	goto label_goto_4a;
	// 737    .line 1037
label_cond_5a:
label_goto_5e:
	logicalStart = ( logicalStart + -0x1);
	visualStart = ( visualStart + 0x1);
	//    .end local v18    # "visualStart":I
	//    .restart local v19    # "visualStart":I
	indexMap[logicalStart] = visualStart;
	if ( visualStart >= visualLimit )
		goto label_cond_6d;
	visualStart = visualStart;
	//    .end local v19    # "visualStart":I
	//    .restart local v18    # "visualStart":I
	goto label_goto_5e;
	// 766    .end local v18    # "visualStart":I
	// 767    .restart local v19    # "visualStart":I
label_cond_6d:
	visualStart = visualStart;
	//    .end local v19    # "visualStart":I
	//    .restart local v18    # "visualStart":I
label_goto_6f:
	j = ( j + 0x1);
	goto label_goto_2a;
	// 779    .line 1045
	// 780    .end local v11    # "logicalStart":I
	// 781    .end local v17    # "visualLimit":I
label_cond_72:
	if ( bidi->insertPoints->size <= 0 )
		goto label_cond_c5;
	markFound = 0x0;
	//    .local v13, "markFound":I
	//    .local v14, "runCount":I
	runs = bidi->runs;
	visualStart = 0x0;
	i = 0x0;
	//    .local v4, "i":I
label_goto_8c:
	if ( i >= bidi->runCount )
		goto label_cond_13a;
	length = (runs[i]->limit - visualStart);
	//    .local v9, "length":I
	insertRemove = runs[i]->insertRemove;
	//    .local v6, "insertRemove":I
	if ( ( insertRemove & 0x5) <= 0 )
		goto label_cond_a4;
	markFound = ( markFound + 0x1);
label_cond_a4:
	if ( markFound <= 0 )
		goto label_cond_ba;
	logicalStart = runs[i]->start;
	//    .restart local v11    # "logicalStart":I
	//    .local v10, "logicalLimit":I
	j = logicalStart;
label_goto_af:
	if ( j >= (logicalStart + length) )
		goto label_cond_ba;
	indexMap[j] = (indexMap[j] + markFound);
	j = ( j + 0x1);
	goto label_goto_af;
	// 883    .line 1064
	// 884    .end local v10    # "logicalLimit":I
	// 885    .end local v11    # "logicalStart":I
label_cond_ba:
	if ( ( insertRemove & 0xa) <= 0 )
		goto label_cond_c0;
	markFound = ( markFound + 0x1);
label_cond_c0:
	i = ( i + 0x1);
	visualStart = (visualStart + length);
	goto label_goto_8c;
	// 902    .line 1069
	// 903    .end local v4    # "i":I
	// 904    .end local v6    # "insertRemove":I
	// 905    .end local v9    # "length":I
	// 906    .end local v13    # "markFound":I
	// 907    .end local v14    # "runCount":I
label_cond_c5:
	if ( bidi->controlCount <= 0 )
		goto label_cond_13a;
	controlFound = 0x0;
	//    .local v2, "controlFound":I
	//    .restart local v14    # "runCount":I
	runs = bidi->runs;
	visualStart = 0x0;
	i = 0x0;
	//    .restart local v4    # "i":I
label_goto_d9:
	if ( i >= bidi->runCount )
		goto label_cond_13a;
	length = (runs[i]->limit - visualStart);
	//    .restart local v9    # "length":I
	insertRemove = runs[i]->insertRemove;
	//    .restart local v6    # "insertRemove":I
	if ( (controlFound - insertRemove) )     
		goto label_cond_f4;
label_cond_ef:
	i = ( i + 0x1);
	visualStart = (visualStart + length);
	goto label_goto_d9;
	// 974    .line 1084
label_cond_f4:
	logicalStart = runs[i]->start;
	//    .restart local v11    # "logicalStart":I
	//    .local v3, "evenRun":Z
	logicalLimit = (logicalStart + length);
	//    .restart local v10    # "logicalLimit":I
	if ( insertRemove )     
		goto label_cond_110;
	j = logicalStart;
label_goto_105:
	if ( j >= logicalLimit )
		goto label_cond_ef;
	indexMap[j] = (indexMap[j] - controlFound);
	j = ( j + 0x1);
	goto label_goto_105;
	// 1016    .line 1094
label_cond_110:
	j = 0x0;
label_goto_111:
	if ( j >= length )
		goto label_cond_ef;
	if ( !(runs[i]->isEvenRun()) )  
		goto label_cond_12e;
	k = (logicalStart + j);
	//    .local v8, "k":I
label_goto_117:
	//    .local v16, "uchar":C
	if ( !(android::icu::text::Bidi::IsBidiControlChar(bidi->text[k])) )  
		goto label_cond_133;
	controlFound = ( controlFound + 0x1);
	indexMap[k] = -0x1;
label_goto_12b:
	j = ( j + 0x1);
	goto label_goto_111;
	// 1061    .line 1095
	// 1062    .end local v8    # "k":I
	// 1063    .end local v16    # "uchar":C
label_cond_12e:
	k = ( (logicalLimit - j) + -0x1);
	//    .restart local v8    # "k":I
	goto label_goto_117;
	// 1072    .line 1102
	// 1073    .restart local v16    # "uchar":C
label_cond_133:
	indexMap[k] = (indexMap[k] - controlFound);
	goto label_goto_12b;
	// 1083    .line 1106
	// 1084    .end local v2    # "controlFound":I
	// 1085    .end local v3    # "evenRun":Z
	// 1086    .end local v4    # "i":I
	// 1087    .end local v6    # "insertRemove":I
	// 1088    .end local v8    # "k":I
	// 1089    .end local v9    # "length":I
	// 1090    .end local v10    # "logicalLimit":I
	// 1091    .end local v11    # "logicalStart":I
	// 1092    .end local v14    # "runCount":I
	// 1093    .end local v16    # "uchar":C
label_cond_13a:
	return indexMap;
	// 1097    .end local v18    # "visualStart":I
	// 1098    .restart local v12    # "logicalStart":I
	// 1099    .restart local v17    # "visualLimit":I
	// 1100    .restart local v19    # "visualStart":I
label_cond_13b:
	logicalStart;
	//    .end local v12    # "logicalStart":I
	//    .restart local v11    # "logicalStart":I
	visualStart = visualStart;
	//    .end local v19    # "visualStart":I
	//    .restart local v18    # "visualStart":I
	goto label_goto_6f;

}
// .method static getLogicalRun(Landroid/icu/text/Bidi;I)Landroid/icu/text/BidiRun;
std::shared_ptr<android::icu::text::BidiRun> android::icu::text::BidiLine::getLogicalRun(std::shared_ptr<android::icu::text::Bidi> bidi,int logicalPosition)
{
	
	std::shared_ptr<android::icu::text::BidiRun> newRun;
	int visualStart;
	int iRun;
	int i;
	int logicalLimit;
	
	//    .param p0, "bidi"    # Landroid/icu/text/Bidi;
	//    .param p1, "logicalPosition"    # I
	newRun = std::make_shared<android::icu::text::BidiRun>();
	//    .local v3, "newRun":Landroid/icu/text/BidiRun;
	android::icu::text::BidiLine::getRuns(bidi);
	//    .local v4, "runCount":I
	visualStart = 0x0;
	//    .local v5, "visualStart":I
	//    .local v2, "logicalLimit":I
	iRun = bidi->runs[0x0];
	//    .local v1, "iRun":Landroid/icu/text/BidiRun;
	i = 0x0;
	//    .local v0, "i":I
label_goto_12:
	if ( i >= bidi->runCount )
		goto label_cond_25;
	iRun = bidi->runs[i];
	logicalLimit = ((iRun->start +  iRun->limit) - visualStart);
	if ( logicalPosition <  iRun->start )
		goto label_cond_30;
	if ( logicalPosition >= logicalLimit )
		goto label_cond_30;
label_cond_25:
	newRun->start = iRun->start;
	newRun->limit = 0x0;
	newRun->level = iRun->level;
	return newRun;
	// 1193    .line 297
label_cond_30:
	visualStart = iRun->limit;
	i = ( i + 0x1);
	goto label_goto_12;

}
// .method static getRunFromLogicalIndex(Landroid/icu/text/Bidi;I)I
int android::icu::text::BidiLine::getRunFromLogicalIndex(std::shared_ptr<android::icu::text::Bidi> bidi,int logicalIndex)
{
	
	std::shared_ptr<std::vector<android::icu::text::BidiRun>> runs;
	int visualStart;
	int i;
	int length;
	int logicalStart;
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .param p0, "bidi"    # Landroid/icu/text/Bidi;
	//    .param p1, "logicalIndex"    # I
	runs = bidi->runs;
	//    .local v4, "runs":[Landroid/icu/text/BidiRun;
	//    .local v3, "runCount":I
	visualStart = 0x0;
	//    .local v5, "visualStart":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= bidi->runCount )
		goto label_cond_1d;
	length = (runs[i]->limit - visualStart);
	//    .local v1, "length":I
	logicalStart = runs[i]->start;
	//    .local v2, "logicalStart":I
	if ( logicalIndex <  logicalStart )
		goto label_cond_19;
	if ( logicalIndex >= (logicalStart + length) )
		goto label_cond_19;
	return i;
	// 1251    .line 460
label_cond_19:
	visualStart = (visualStart +  length);
	i = ( i + 0x1);
	goto label_goto_6;
	// 1260    .line 464
	// 1261    .end local v1    # "length":I
	// 1262    .end local v2    # "logicalStart":I
label_cond_1d:
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal ICU error in getRunFromLogicalIndex")));
	// throw
	throw cVar0;

}
// .method static getRuns(Landroid/icu/text/Bidi;)V
void android::icu::text::BidiLine::getRuns(std::shared_ptr<android::icu::text::Bidi> bidi)
{
	
	int ip;
	int point;
	std::shared_ptr<java::lang::Object> cVar0;
	int ic;
	std::shared_ptr<java::lang::Object> cVar4;
	int length;
	std::shared_ptr<unsigned char[]> levels;
	int level;
	int limit;
	int runCount;
	int i;
	unsigned char level;
	auto runs;
	int runIndex;
	int start;
	unsigned char minLevel;
	unsigned char maxLevel;
	std::shared_ptr<android::icu::text::BidiRun> cVar1;
	std::shared_ptr<android::icu::text::BidiRun> cVar2;
	std::shared_ptr<java::lang::Object> cVar3;
	
	//    .param p0, "bidi"    # Landroid/icu/text/Bidi;
	if ( bidi->runCount < 0 ) 
		goto label_cond_9;
	return;
	// 1290    .line 487
label_cond_9:
	if ( bidi->direction == 0x2 )
		goto label_cond_7a;
	android::icu::text::BidiLine::getSingleRun(bidi, bidi->paraLevel);
label_cond_24:
label_goto_24:
	if ( bidi->insertPoints->size <= 0 )
		goto label_cond_164;
	ip = 0x0;
	//    .local v6, "ip":I
label_goto_33:
	if ( ip >= bidi->insertPoints->size )
		goto label_cond_164;
	point = bidi->insertPoints->points[ip];
	//    .local v13, "point":Landroid/icu/text/Bidi$Point;
	//    .local v15, "runIndex":I
	cVar0 = bidi->runs[android::icu::text::BidiLine::getRunFromLogicalIndex(bidi, point->pos)];
	cVar0->insertRemove = (cVar0->insertRemove | point->flag);
	ip = ( ip + 0x1);
	goto label_goto_33;
	// 1419    .line 493
	// 1420    .end local v6    # "ip":I
	// 1421    .end local v13    # "point":Landroid/icu/text/Bidi$Point;
	// 1422    .end local v15    # "runIndex":I
label_cond_7a:
	length = bidi->length;
	//    .local v7, "length":I
	levels = bidi->levels;
	//    .local v9, "levels":[B
	level = -0x1;
	//    .local v8, "level":B
	limit = bidi->trailingWSStart;
	//    .local v10, "limit":I
	runCount = 0x0;
	//    .local v14, "runCount":I
	i = 0x0;
	//    .end local v8    # "level":B
	//    .local v4, "i":I
label_goto_89:
	if ( i >= limit )
		goto label_cond_98;
	if ( levels[i] == level )
		goto label_cond_95;
	runCount = ( runCount + 0x1);
	level = levels[i];
label_cond_95:
	i = ( i + 0x1);
	goto label_goto_89;
	// 1476    .line 523
label_cond_98:
	if ( runCount != 0x1 )
		goto label_cond_ad;
	if ( limit != length )
		goto label_cond_ad;
	android::icu::text::BidiLine::getSingleRun(bidi, levels[0x0]);
	goto label_goto_24;
	// 1499    .line 530
label_cond_ad:
	//    .local v12, "minLevel":B
	//    .local v11, "maxLevel":B
	if ( limit >= length )
		goto label_cond_b4;
	runCount = ( runCount + 0x1);
label_cond_b4:
	bidi->getRunsMemory(runCount);
	runs = bidi->runsMemory;
	//    .local v16, "runs":[Landroid/icu/text/BidiRun;
	runIndex = 0x0;
	//    .restart local v15    # "runIndex":I
	i = 0x0;
	//    .end local v11    # "maxLevel":B
	//    .end local v12    # "minLevel":B
label_cond_c1:
	start = i;
	//    .local v17, "start":I
	level = levels[i];
	//    .local v8, "level":B
	if ( level >= minLevel )
		goto label_cond_c8;
	minLevel = level;
label_cond_c8:
	if ( level <= maxLevel )
		goto label_cond_cb;
	maxLevel = level;
label_cond_cb:
	i = ( i + 0x1);
	if ( i >= limit )
		goto label_cond_d5;
	if ( levels[i] == level )
		goto label_cond_cb;
label_cond_d5:
	var96 = cVar1(start, (i - start), level);
	runs[runIndex] = cVar1;
	runIndex = ( runIndex + 0x1);
	if ( i <  limit )
		goto label_cond_c1;
	if ( limit >= length )
		goto label_cond_10d;
	var106 = cVar2(limit, (length - limit), bidi->paraLevel);
	runs[runIndex] = cVar2;
	if ( bidi->paraLevel >= minLevel )
		goto label_cond_10d;
label_cond_10d:
	bidi->runs = runs;
	bidi->runCount = runCount;
	android::icu::text::BidiLine::reorderLine(bidi, minLevel, maxLevel);
	i = 0x0;
label_goto_11e:
	if ( i >= runCount )
		goto label_cond_143;
	runs[i]->level = levels[runs[i]->start];
	cVar3 = runs[i];
	limit = (limit + cVar3->limit);
	cVar3->limit = limit;
	i = ( i + 0x1);
	goto label_goto_11e;
	// 1699    .line 599
label_cond_143:
	if ( runIndex >= runCount )
		goto label_cond_24;
	if ( !(( bidi->paraLevel & 0x1)) )  
		goto label_cond_161;
	//    .local v18, "trailingRun":I
label_goto_151:
	runs[trailingRun]->level = bidi->paraLevel;
	goto label_goto_24;
	// 1735    .line 600
	// 1736    .end local v18    # "trailingRun":I
label_cond_161:
	//    .restart local v18    # "trailingRun":I
	goto label_goto_151;
	// 1743    .line 618
	// 1744    .end local v4    # "i":I
	// 1745    .end local v7    # "length":I
	// 1746    .end local v8    # "level":B
	// 1747    .end local v9    # "levels":[B
	// 1748    .end local v10    # "limit":I
	// 1749    .end local v14    # "runCount":I
	// 1750    .end local v15    # "runIndex":I
	// 1751    .end local v16    # "runs":[Landroid/icu/text/BidiRun;
	// 1752    .end local v17    # "start":I
	// 1753    .end local v18    # "trailingRun":I
label_cond_164:
	if ( bidi->controlCount <= 0 )
		goto label_cond_1a4;
	ic = 0x0;
	//    .local v5, "ic":I
label_goto_16d:
	if ( ic >= bidi->length )
		goto label_cond_1a4;
	//    .local v3, "c":C
	if ( !(android::icu::text::Bidi::IsBidiControlChar(bidi->text[ic])) )  
		goto label_cond_1a1;
	//    .restart local v15    # "runIndex":I
	cVar4 = bidi->runs[android::icu::text::BidiLine::getRunFromLogicalIndex(bidi, ic)];
	cVar4->insertRemove = ( cVar4->insertRemove + -0x1);
	//    .end local v15    # "runIndex":I
label_cond_1a1:
	ic = ( ic + 0x1);
	goto label_goto_16d;
	// 1833    .line 629
	// 1834    .end local v3    # "c":C
	// 1835    .end local v5    # "ic":I
label_cond_1a4:
	return;

}
// .method static getSingleRun(Landroid/icu/text/Bidi;B)V
void android::icu::text::BidiLine::getSingleRun(std::shared_ptr<android::icu::text::Bidi> bidi,unsigned char level)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::BidiRun> cVar1;
	
	//    .param p0, "bidi"    # Landroid/icu/text/Bidi;
	//    .param p1, "level"    # B
	cVar0 = 0x0;
	bidi->runs = bidi->simpleRuns;
	bidi->runCount = 0x1;
	cVar1 = std::make_shared<android::icu::text::BidiRun>(cVar0, bidi->length, level);
	bidi->runs[cVar0] = cVar1;
	return;

}
// .method static getVisualIndex(Landroid/icu/text/Bidi;I)I
int android::icu::text::BidiLine::getVisualIndex(std::shared_ptr<android::icu::text::Bidi> bidi,int logicalIndex)
{
	
	int visualIndex;
	std::shared_ptr<std::vector<android::icu::text::BidiRun>> runs;
	int visualStart;
	int i;
	int length;
	int offset;
	int markFound;
	int insertRemove;
	int controlFound;
	int j;
	
	//    .param p0, "bidi"    # Landroid/icu/text/Bidi;
	//    .param p1, "logicalIndex"    # I
	visualIndex = -0x1;
	//    .local v11, "visualIndex":I
	// switch
	{
	auto item = ( bidi->direction );
	if (item == 0) goto label_pswitch_31;
	if (item == 1) goto label_pswitch_56;
	}
	android::icu::text::BidiLine::getRuns(bidi);
	runs = bidi->runs;
	//    .local v8, "runs":[Landroid/icu/text/BidiRun;
	visualStart = 0x0;
	//    .local v12, "visualStart":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_d:
	if ( i >= bidi->runCount )
		goto label_cond_2b;
	length = (runs[i]->limit - visualStart);
	//    .local v4, "length":I
	offset = (logicalIndex - runs[i]->start);
	//    .local v7, "offset":I
	if ( offset < 0 ) 
		goto label_cond_62;
	if ( offset >= length )
		goto label_cond_62;
	if ( !(runs[i]->isEvenRun()) )  
		goto label_cond_5c;
	visualIndex = (visualStart + offset);
	//    .end local v4    # "length":I
	//    .end local v7    # "offset":I
label_cond_2b:
label_goto_2b:
	if ( i <  bidi->runCount )
		goto label_cond_32;
	return -0x1;
	// 1955    .line 815
	// 1956    .end local v1    # "i":I
	// 1957    .end local v8    # "runs":[Landroid/icu/text/BidiRun;
	// 1958    .end local v12    # "visualStart":I
label_pswitch_31:
	visualIndex = logicalIndex;
label_cond_32:
label_goto_32:
	if ( bidi->insertPoints->size <= 0 )
		goto label_cond_70;
	runs = bidi->runs;
	//    .restart local v8    # "runs":[Landroid/icu/text/BidiRun;
	visualStart = 0x0;
	//    .restart local v12    # "visualStart":I
	markFound = 0x0;
	//    .local v6, "markFound":I
	i = 0x0;
	//    .restart local v1    # "i":I
label_goto_3d:
	//    .restart local v4    # "length":I
	insertRemove = runs[i]->insertRemove;
	//    .local v2, "insertRemove":I
	if ( ( insertRemove & 0x5) <= 0 )
		goto label_cond_4d;
	markFound = ( markFound + 0x1);
label_cond_4d:
	if ( visualIndex >= runs[i]->limit )
		goto label_cond_66;
	return (visualIndex + markFound);
	// 2022    .line 818
	// 2023    .end local v1    # "i":I
	// 2024    .end local v2    # "insertRemove":I
	// 2025    .end local v4    # "length":I
	// 2026    .end local v6    # "markFound":I
	// 2027    .end local v8    # "runs":[Landroid/icu/text/BidiRun;
	// 2028    .end local v12    # "visualStart":I
label_pswitch_56:
	visualIndex = ( (bidi->length -  logicalIndex) + -0x1);
	goto label_goto_32;
	// 2039    .line 835
	// 2040    .restart local v1    # "i":I
	// 2041    .restart local v4    # "length":I
	// 2042    .restart local v7    # "offset":I
	// 2043    .restart local v8    # "runs":[Landroid/icu/text/BidiRun;
	// 2044    .restart local v12    # "visualStart":I
label_cond_5c:
	visualIndex = ( ((visualStart + length) -  offset) + -0x1);
	goto label_goto_2b;
	// 2054    .line 839
label_cond_62:
	visualStart = (visualStart +  length);
	i = ( i + 0x1);
	goto label_goto_d;
	// 2063    .line 861
	// 2064    .end local v7    # "offset":I
	// 2065    .restart local v2    # "insertRemove":I
	// 2066    .restart local v6    # "markFound":I
label_cond_66:
	if ( ( insertRemove & 0xa) <= 0 )
		goto label_cond_6c;
	markFound = ( markFound + 0x1);
label_cond_6c:
	i = ( i + 0x1);
	visualStart = (visualStart +  (runs[i]->limit - visualStart));
	goto label_goto_3d;
	// 2083    .line 866
	// 2084    .end local v1    # "i":I
	// 2085    .end local v2    # "insertRemove":I
	// 2086    .end local v4    # "length":I
	// 2087    .end local v6    # "markFound":I
	// 2088    .end local v8    # "runs":[Landroid/icu/text/BidiRun;
	// 2089    .end local v12    # "visualStart":I
label_cond_70:
	if ( bidi->controlCount <= 0 )
		goto label_cond_ca;
	runs = bidi->runs;
	//    .restart local v8    # "runs":[Landroid/icu/text/BidiRun;
	visualStart = 0x0;
	//    .restart local v12    # "visualStart":I
	controlFound = 0x0;
	//    .local v0, "controlFound":I
	//    .local v10, "uchar":C
	if ( !(android::icu::text::Bidi::IsBidiControlChar(bidi->text[logicalIndex])) )  
		goto label_cond_84;
	return -0x1;
	// 2124    .line 877
label_cond_84:
	i = 0x0;
	//    .restart local v1    # "i":I
label_goto_85:
	length = (runs[i]->limit - visualStart);
	//    .restart local v4    # "length":I
	insertRemove = runs[i]->insertRemove;
	//    .restart local v2    # "insertRemove":I
	if ( visualIndex <  runs[i]->limit )
		goto label_cond_9a;
	controlFound = (controlFound -  insertRemove);
	i = ( i + 0x1);
	visualStart = (visualStart +  length);
	goto label_goto_85;
	// 2161    .line 886
label_cond_9a:
	if ( insertRemove )     
		goto label_cond_9f;
	return (visualIndex - controlFound);
	// 2170    .line 889
label_cond_9f:
	if ( !(runs[i]->isEvenRun()) )  
		goto label_cond_be;
	//    .local v9, "start":I
	//    .local v5, "limit":I
label_goto_ac:
	j = start;
	//    .local v3, "j":I
label_goto_ad:
	if ( j >= limit )
		goto label_cond_c7;
	if ( !(android::icu::text::Bidi::IsBidiControlChar(bidi->text[j])) )  
		goto label_cond_bb;
	controlFound = ( controlFound + 0x1);
label_cond_bb:
	j = ( j + 0x1);
	goto label_goto_ad;
	// 2219    .line 895
	// 2220    .end local v3    # "j":I
	// 2221    .end local v5    # "limit":I
	// 2222    .end local v9    # "start":I
label_cond_be:
	//    .restart local v9    # "start":I
	//    .restart local v5    # "limit":I
	goto label_goto_ac;
	// 2237    .line 904
	// 2238    .restart local v3    # "j":I
label_cond_c7:
	return (visualIndex - controlFound);
	// 2244    .line 908
	// 2245    .end local v0    # "controlFound":I
	// 2246    .end local v1    # "i":I
	// 2247    .end local v2    # "insertRemove":I
	// 2248    .end local v3    # "j":I
	// 2249    .end local v4    # "length":I
	// 2250    .end local v5    # "limit":I
	// 2251    .end local v8    # "runs":[Landroid/icu/text/BidiRun;
	// 2252    .end local v9    # "start":I
	// 2253    .end local v10    # "uchar":C
	// 2254    .end local v12    # "visualStart":I
label_cond_ca:
	return visualIndex;
	// 2258    .line 813
	// 2259    nop
	// 2261    :pswitch_data_cc
	// 2262    .packed-switch 0x0
	// 2263        :pswitch_31
	// 2264        :pswitch_56
	// 2265    .end packed-switch

}
// .method static getVisualMap(Landroid/icu/text/Bidi;)[I
int android::icu::text::BidiLine::getVisualMap(std::shared_ptr<android::icu::text::Bidi> bidi)
{
	
	auto runs;
	int allocLength;
	std::shared<std::vector<int[]>> indexMap;
	int visualStart;
	int idx;
	int j;
	int logicalStart;
	int visualLimit;
	int markFound;
	int runCount;
	int i;
	int insertRemove;
	int k;
	std::shared_ptr<int[]> newMap;
	int length;
	int m;
	
	//    .param p0, "bidi"    # Landroid/icu/text/Bidi;
	runs = bidi->runs;
	//    .local v22, "runs":[Landroid/icu/text/BidiRun;
	if ( bidi->length <= bidi->resultLength )
		goto label_cond_56;
	allocLength = bidi->length;
	//    .local v4, "allocLength":I
label_goto_1c:
	indexMap = std::make_shared<std::vector<int[]>>(allocLength);
	//    .local v9, "indexMap":[I
	visualStart = 0x0;
	//    .local v25, "visualStart":I
	idx = 0x0;
	//    .local v7, "idx":I
	j = 0x0;
	//    .local v11, "j":I
label_goto_22:
	if ( j >= bidi->runCount )
		goto label_cond_73;
	logicalStart = runs[j]->start;
	//    .local v16, "logicalStart":I
	visualLimit = runs[j]->limit;
	//    .local v24, "visualLimit":I
	if ( !(runs[j]->isEvenRun()) )  
		goto label_cond_5b;
label_goto_44:
	idx = ( idx + 0x1);
	//    .end local v7    # "idx":I
	//    .local v8, "idx":I
	logicalStart = ( logicalStart + 0x1);
	//    .end local v16    # "logicalStart":I
	//    .local v17, "logicalStart":I
	indexMap[idx] = logicalStart;
	visualStart = ( visualStart + 0x1);
	if ( visualStart >= visualLimit )
		goto label_cond_1b6;
	logicalStart = logicalStart;
	//    .end local v17    # "logicalStart":I
	//    .restart local v16    # "logicalStart":I
	idx = idx;
	//    .end local v8    # "idx":I
	//    .restart local v7    # "idx":I
	goto label_goto_44;
	// 2393    .line 1115
	// 2394    .end local v4    # "allocLength":I
	// 2395    .end local v7    # "idx":I
	// 2396    .end local v9    # "indexMap":[I
	// 2397    .end local v11    # "j":I
	// 2398    .end local v16    # "logicalStart":I
	// 2399    .end local v24    # "visualLimit":I
	// 2400    .end local v25    # "visualStart":I
label_cond_56:
	allocLength = bidi->resultLength;
	//    .restart local v4    # "allocLength":I
	goto label_goto_1c;
	// 2409    .line 1128
	// 2410    .restart local v7    # "idx":I
	// 2411    .restart local v9    # "indexMap":[I
	// 2412    .restart local v11    # "j":I
	// 2413    .restart local v16    # "logicalStart":I
	// 2414    .restart local v24    # "visualLimit":I
	// 2415    .restart local v25    # "visualStart":I
label_cond_5b:
label_goto_5f:
	idx = ( idx + 0x1);
	//    .end local v7    # "idx":I
	//    .restart local v8    # "idx":I
	logicalStart = ( logicalStart + -0x1);
	indexMap[idx] = logicalStart;
	visualStart = ( visualStart + 0x1);
	if ( visualStart >= visualLimit )
		goto label_cond_6f;
	idx = idx;
	//    .end local v8    # "idx":I
	//    .restart local v7    # "idx":I
	goto label_goto_5f;
	// 2446    .end local v7    # "idx":I
	// 2447    .restart local v8    # "idx":I
label_cond_6f:
	idx = idx;
	//    .end local v8    # "idx":I
	//    .restart local v7    # "idx":I
label_goto_70:
	j = ( j + 0x1);
	goto label_goto_22;
	// 2459    .line 1136
	// 2460    .end local v16    # "logicalStart":I
	// 2461    .end local v24    # "visualLimit":I
label_cond_73:
	if ( bidi->insertPoints->size <= 0 )
		goto label_cond_fc;
	markFound = 0x0;
	//    .local v19, "markFound":I
	runCount = bidi->runCount;
	//    .local v21, "runCount":I
	runs = bidi->runs;
	i = 0x0;
	//    .local v6, "i":I
label_goto_90:
	if ( i >= runCount )
		goto label_cond_a9;
	insertRemove = runs[i]->insertRemove;
	//    .local v10, "insertRemove":I
	if ( ( insertRemove & 0x5) <= 0 )
		goto label_cond_a0;
	markFound = ( markFound + 0x1);
label_cond_a0:
	if ( ( insertRemove & 0xa) <= 0 )
		goto label_cond_a6;
	markFound = ( markFound + 0x1);
label_cond_a6:
	i = ( i + 0x1);
	goto label_goto_90;
	// 2535    .line 1151
	// 2536    .end local v10    # "insertRemove":I
label_cond_a9:
	k = bidi->resultLength;
	//    .local v12, "k":I
	i = ( runCount + -0x1);
label_goto_af:
	if ( i < 0 ) 
		goto label_cond_184;
	if ( markFound <= 0 )
		goto label_cond_184;
	insertRemove = runs[i]->insertRemove;
	//    .restart local v10    # "insertRemove":I
	if ( ( insertRemove & 0xa) <= 0 )
		goto label_cond_c5;
	k = ( k + -0x1);
	indexMap[k] = -0x1;
	markFound = ( markFound + -0x1);
label_cond_c5:
	if ( i <= 0 )
		goto label_cond_ea;
	visualStart = runs[( i + -0x1)]->limit;
label_goto_d1:
	j = ( runs[i]->limit + -0x1);
label_goto_db:
	if ( j <  visualStart )
		goto label_cond_ed;
	if ( markFound <= 0 )
		goto label_cond_ed;
	k = ( k + -0x1);
	indexMap[k] = indexMap[j];
	j = ( j + -0x1);
	goto label_goto_db;
	// 2619    .line 1158
label_cond_ea:
	visualStart = 0x0;
	goto label_goto_d1;
	// 2625    .line 1162
label_cond_ed:
	if ( ( insertRemove & 0x5) <= 0 )
		goto label_cond_f9;
	k = ( k + -0x1);
	indexMap[k] = -0x1;
	markFound = ( markFound + -0x1);
label_cond_f9:
	i = ( i + -0x1);
	goto label_goto_af;
	// 2647    .line 1168
	// 2648    .end local v6    # "i":I
	// 2649    .end local v10    # "insertRemove":I
	// 2650    .end local v12    # "k":I
	// 2651    .end local v19    # "markFound":I
	// 2652    .end local v21    # "runCount":I
label_cond_fc:
	if ( bidi->controlCount <= 0 )
		goto label_cond_184;
	//    .restart local v21    # "runCount":I
	runs = bidi->runs;
	visualStart = 0x0;
	k = 0x0;
	//    .restart local v12    # "k":I
	i = 0x0;
	//    .restart local v6    # "i":I
label_goto_114:
	if ( i >= bidi->runCount )
		goto label_cond_184;
	length = (runs[i]->limit - visualStart);
	//    .local v14, "length":I
	insertRemove = runs[i]->insertRemove;
	//    .restart local v10    # "insertRemove":I
	if ( insertRemove )     
		goto label_cond_134;
	if ( k != visualStart )
		goto label_cond_134;
	k = (k +  length);
label_goto_12f:
	i = ( i + 0x1);
	visualStart = (visualStart + length);
	goto label_goto_114;
	// 2731    .line 1186
label_cond_134:
	if ( insertRemove )     
		goto label_cond_151;
	//    .restart local v24    # "visualLimit":I
	j = visualStart;
	k = k;
	//    .end local v12    # "k":I
	//    .local v13, "k":I
label_goto_141:
	if ( j >= runs[i]->limit )
		goto label_cond_14f;
	k = ( k + 0x1);
	//    .end local v13    # "k":I
	//    .restart local v12    # "k":I
	indexMap[k] = indexMap[j];
	j = ( j + 0x1);
	k = k;
	//    .end local v12    # "k":I
	//    .restart local v13    # "k":I
	goto label_goto_141;
label_cond_14f:
	k = k;
	//    .end local v13    # "k":I
	//    .restart local v12    # "k":I
	goto label_goto_12f;
	// 2783    .line 1193
	// 2784    .end local v24    # "visualLimit":I
label_cond_151:
	logicalStart = runs[i]->start;
	//    .restart local v16    # "logicalStart":I
	//    .local v5, "evenRun":Z
	//    .local v15, "logicalEnd":I
	j = 0x0;
	k = k;
	//    .end local v12    # "k":I
	//    .restart local v13    # "k":I
label_goto_165:
	if ( j >= length )
		goto label_cond_1b3;
	if ( !(runs[i]->isEvenRun()) )  
		goto label_cond_181;
	m = (logicalStart + j);
	//    .local v18, "m":I
label_goto_16b:
	//    .local v23, "uchar":C
	if ( android::icu::text::Bidi::IsBidiControlChar(bidi->text[m]) )     
		goto label_cond_1b1;
	k = ( k + 0x1);
	//    .end local v13    # "k":I
	//    .restart local v12    # "k":I
	indexMap[k] = m;
label_goto_17d:
	j = ( j + 0x1);
	k = k;
	//    .end local v12    # "k":I
	//    .restart local v13    # "k":I
	goto label_goto_165;
	// 2860    .line 1197
	// 2861    .end local v18    # "m":I
	// 2862    .end local v23    # "uchar":C
label_cond_181:
	//    .restart local v18    # "m":I
	goto label_goto_16b;
	// 2869    .line 1205
	// 2870    .end local v5    # "evenRun":Z
	// 2871    .end local v6    # "i":I
	// 2872    .end local v10    # "insertRemove":I
	// 2873    .end local v13    # "k":I
	// 2874    .end local v14    # "length":I
	// 2875    .end local v15    # "logicalEnd":I
	// 2876    .end local v16    # "logicalStart":I
	// 2877    .end local v18    # "m":I
	// 2878    .end local v21    # "runCount":I
label_cond_184:
	if ( allocLength != bidi->resultLength )
		goto label_cond_18f;
	return indexMap;
	// 2893    .line 1208
label_cond_18f:
	newMap = std::make_shared<std::vector<int[]>>(bidi->resultLength);
	//    .local v20, "newMap":[I
	java::lang::System::arraycopy(indexMap, 0x0, newMap, 0x0, bidi->resultLength);
	return newMap;
	// 2932    .end local v20    # "newMap":[I
	// 2933    .restart local v5    # "evenRun":Z
	// 2934    .restart local v6    # "i":I
	// 2935    .restart local v10    # "insertRemove":I
	// 2936    .restart local v13    # "k":I
	// 2937    .restart local v14    # "length":I
	// 2938    .restart local v15    # "logicalEnd":I
	// 2939    .restart local v16    # "logicalStart":I
	// 2940    .restart local v18    # "m":I
	// 2941    .restart local v21    # "runCount":I
	// 2942    .restart local v23    # "uchar":C
label_cond_1b1:
	k = k;
	//    .end local v13    # "k":I
	//    .restart local v12    # "k":I
	goto label_goto_17d;
	// 2950    .end local v12    # "k":I
	// 2951    .end local v18    # "m":I
	// 2952    .end local v23    # "uchar":C
	// 2953    .restart local v13    # "k":I
label_cond_1b3:
	k = k;
	//    .end local v13    # "k":I
	//    .restart local v12    # "k":I
	goto label_goto_12f;
	// 2961    .end local v5    # "evenRun":Z
	// 2962    .end local v6    # "i":I
	// 2963    .end local v7    # "idx":I
	// 2964    .end local v10    # "insertRemove":I
	// 2965    .end local v12    # "k":I
	// 2966    .end local v14    # "length":I
	// 2967    .end local v15    # "logicalEnd":I
	// 2968    .end local v16    # "logicalStart":I
	// 2969    .end local v21    # "runCount":I
	// 2970    .restart local v8    # "idx":I
	// 2971    .restart local v17    # "logicalStart":I
	// 2972    .restart local v24    # "visualLimit":I
label_cond_1b6:
	logicalStart;
	//    .end local v17    # "logicalStart":I
	//    .restart local v16    # "logicalStart":I
	idx = idx;
	//    .end local v8    # "idx":I
	//    .restart local v7    # "idx":I
	goto label_goto_70;

}
// .method static getVisualRun(Landroid/icu/text/Bidi;I)Landroid/icu/text/BidiRun;
std::shared_ptr<android::icu::text::BidiRun> android::icu::text::BidiLine::getVisualRun(std::shared_ptr<android::icu::text::Bidi> bidi,int runIndex)
{
	
	int start;
	std::shared_ptr<android::icu::text::BidiRun> cVar0;
	
	//    .param p0, "bidi"    # Landroid/icu/text/Bidi;
	//    .param p1, "runIndex"    # I
	start = bidi->runs[runIndex]->start;
	//    .local v2, "start":I
	//    .local v0, "level":B
	if ( runIndex <= 0 )
		goto label_cond_26;
	//    .local v1, "limit":I
label_goto_20:
	cVar0 = std::make_shared<android::icu::text::BidiRun>(start, limit, bidi->runs[runIndex]->level);
	return cVar0;
	// 3043    .line 316
	// 3044    .end local v1    # "limit":I
label_cond_26:
	//    .restart local v1    # "limit":I
	goto label_goto_20;

}
// .method static invertMap([I)[I
int android::icu::text::BidiLine::invertMap(std::shared_ptr<int[]> srcMap)
{
	
	int srcLength;
	int destLength;
	int count;
	int i;
	int srcEntry;
	std::shared<std::vector<int[]>> destMap;
	
	//    .param p0, "srcMap"    # [I
	srcLength = srcMap->size();
	//    .local v5, "srcLength":I
	destLength = -0x1;
	//    .local v1, "destLength":I
	count = 0x0;
	//    .local v0, "count":I
	i = 0x0;
	//    .local v3, "i":I
label_goto_4:
	if ( i >= srcLength )
		goto label_cond_12;
	srcEntry = srcMap[i];
	//    .local v4, "srcEntry":I
	if ( srcEntry <= destLength )
		goto label_cond_b;
	destLength = srcEntry;
label_cond_b:
	if ( srcEntry < 0 ) 
		goto label_cond_f;
	count = ( count + 0x1);
label_cond_f:
	i = ( i + 0x1);
	goto label_goto_4;
	// 3104    .line 1228
	// 3105    .end local v4    # "srcEntry":I
label_cond_12:
	destLength = ( destLength + 0x1);
	destMap = std::make_shared<std::vector<int[]>>(destLength);
	//    .local v2, "destMap":[I
	if ( count >= destLength )
		goto label_cond_1c;
	java::util::Arrays::fill(destMap, -0x1);
label_cond_1c:
	i = 0x0;
label_goto_1d:
	if ( i >= srcLength )
		goto label_cond_28;
	srcEntry = srcMap[i];
	//    .restart local v4    # "srcEntry":I
	if ( srcEntry < 0 ) 
		goto label_cond_25;
	destMap[srcEntry] = i;
label_cond_25:
	i = ( i + 0x1);
	goto label_goto_1d;
	// 3144    .line 1240
	// 3145    .end local v4    # "srcEntry":I
label_cond_28:
	return destMap;

}
// .method static prepareReorder([B[B[B)[I
int android::icu::text::BidiLine::prepareReorder(std::shared_ptr<unsigned char[]> levels,std::shared_ptr<unsigned char[]> pMinLevel,std::shared_ptr<unsigned char[]> pMaxLevel)
{
	
	std::shared_ptr<int[]> cVar0;
	int cVar1;
	int minLevel;
	int maxLevel;
	int start;
	unsigned char level;
	std::shared<std::vector<int[]>> indexMap;
	
	//    .param p0, "levels"    # [B
	//    .param p1, "pMinLevel"    # [B
	//    .param p2, "pMaxLevel"    # [B
	cVar0 = 0x0;
	cVar1 = 0x0;
	if ( !(levels) )  
		goto label_cond_7;
	if ( levels->size() > 0 ) 
		goto label_cond_8;
label_cond_7:
	return cVar0;
	// 3172    .line 641
label_cond_8:
	minLevel = 0x7e;
	//    .local v3, "minLevel":B
	maxLevel = 0x0;
	//    .local v2, "maxLevel":B
	start = levels->size();
	//    .end local v2    # "maxLevel":B
	//    .end local v3    # "minLevel":B
	//    .local v4, "start":I
label_cond_c:
label_goto_c:
	if ( start <= 0 )
		goto label_cond_21;
	start = ( start + -0x1);
	level = levels[start];
	//    .local v1, "level":B
	if ( level >= 0 )
		goto label_cond_15;
	return cVar0;
	// 3203    .line 648
label_cond_15:
	if ( level <= 0x7e )
		goto label_cond_1a;
	return cVar0;
	// 3212    .line 651
label_cond_1a:
	if ( level >= minLevel )
		goto label_cond_1d;
	minLevel = level;
label_cond_1d:
	if ( level <= maxLevel )
		goto label_cond_c;
	//    .local v2, "maxLevel":B
	goto label_goto_c;
	// 3229    .line 658
	// 3230    .end local v1    # "level":B
	// 3231    .end local v2    # "maxLevel":B
label_cond_21:
	pMinLevel[cVar1] = minLevel;
	pMaxLevel[cVar1] = maxLevel;
	indexMap = std::make_shared<std::vector<int[]>>(levels->size());
	//    .local v0, "indexMap":[I
	start = levels->size();
label_goto_29:
	if ( start <= 0 )
		goto label_cond_30;
	start = ( start + -0x1);
	indexMap[start] = start;
	goto label_goto_29;
	// 3258    .line 668
label_cond_30:
	return indexMap;

}
// .method private static reorderLine(Landroid/icu/text/Bidi;BB)V
void android::icu::text::BidiLine::reorderLine(std::shared_ptr<android::icu::text::Bidi> bidi,unsigned char minLevel,unsigned char maxLevel)
{
	
	int cVar0;
	std::shared_ptr<std::vector<android::icu::text::BidiRun>> runs;
	std::shared_ptr<unsigned char[]> levels;
	int runCount;
	int maxLevel;
	int firstRun;
	int limitRun;
	int endRun;
	
	//    .param p0, "bidi"    # Landroid/icu/text/Bidi;
	//    .param p1, "minLevel"    # B
	//    .param p2, "maxLevel"    # B
	if ( maxLevel >  ( minLevel | 0x1) )
		goto label_cond_5;
	return;
	// 3278    .line 381
label_cond_5:
	cVar0 = (unsigned char)(( minLevel + 0x1));
	runs = bidi->runs;
	//    .local v5, "runs":[Landroid/icu/text/BidiRun;
	levels = bidi->levels;
	//    .local v2, "levels":[B
	runCount = bidi->runCount;
	//    .local v4, "runCount":I
	if ( bidi->trailingWSStart >= bidi->length )
		goto label_cond_16;
	runCount = ( runCount + -0x1);
label_cond_16:
	maxLevel = (unsigned char)(( maxLevel + -0x1));
	if ( maxLevel <  cVar0 )
		goto label_cond_4e;
	firstRun = 0x0;
	//    .local v1, "firstRun":I
label_goto_1c:
	if ( firstRun >= runCount )
		goto label_cond_29;
	if ( levels[runs[firstRun]->start] >= maxLevel )
		goto label_cond_29;
	firstRun = ( firstRun + 0x1);
	goto label_goto_1c;
	// 3335    .line 402
label_cond_29:
	if ( firstRun >= runCount )
		goto label_cond_16;
	//    .local v3, "limitRun":I
label_cond_2c:
	limitRun = ( limitRun + 0x1);
	if ( limitRun >= runCount )
		goto label_cond_38;
	if ( levels[runs[limitRun]->start] >= maxLevel )
		goto label_cond_2c;
label_cond_38:
	endRun = ( limitRun + -0x1);
	//    .local v0, "endRun":I
label_goto_3a:
	if ( firstRun >= endRun )
		goto label_cond_49;
	//    .local v6, "tempRun":Landroid/icu/text/BidiRun;
	runs[firstRun] = runs[endRun];
	runs[endRun] = runs[firstRun];
	firstRun = ( firstRun + 0x1);
	endRun = ( endRun + -0x1);
	goto label_goto_3a;
	// 3386    .line 420
	// 3387    .end local v6    # "tempRun":Landroid/icu/text/BidiRun;
label_cond_49:
	if ( limitRun == runCount )
		goto label_cond_16;
	firstRun = ( limitRun + 0x1);
	goto label_goto_1c;
	// 3396    .line 429
	// 3397    .end local v0    # "endRun":I
	// 3398    .end local v1    # "firstRun":I
	// 3399    .end local v3    # "limitRun":I
label_cond_4e:
	if ( ( cVar0 & 0x1) )     
		goto label_cond_6a;
	firstRun = 0x0;
	//    .restart local v1    # "firstRun":I
	if ( bidi->trailingWSStart != bidi->length )
		goto label_cond_5b;
	runCount = ( runCount + -0x1);
label_cond_5b:
label_goto_5b:
	if ( firstRun >= runCount )
		goto label_cond_6a;
	//    .restart local v6    # "tempRun":Landroid/icu/text/BidiRun;
	runs[firstRun] = runs[runCount];
	runs[runCount] = runs[firstRun];
	firstRun = ( firstRun + 0x1);
	runCount = ( runCount + -0x1);
	goto label_goto_5b;
	// 3444    .line 446
	// 3445    .end local v1    # "firstRun":I
	// 3446    .end local v6    # "tempRun":Landroid/icu/text/BidiRun;
label_cond_6a:
	return;

}
// .method static reorderLogical([B)[I
int android::icu::text::BidiLine::reorderLogical(std::shared_ptr<unsigned char[]> levels)
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<unsigned char[]>> aMinLevel;
	std::shared<std::vector<unsigned char[]>> aMaxLevel;
	std::shared_ptr<int[]> indexMap;
	unsigned char minLevel;
	unsigned char maxLevel;
	int start;
	int limit;
	
	//    .param p0, "levels"    # [B
	cVar0 = 0x1;
	cVar1 = 0x0;
	aMinLevel = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	//    .local v1, "aMinLevel":[B
	aMaxLevel = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	//    .local v0, "aMaxLevel":[B
	indexMap = android::icu::text::BidiLine::prepareReorder(levels, aMinLevel, aMaxLevel);
	//    .local v2, "indexMap":[I
	if ( indexMap )     
		goto label_cond_e;
	return 0x0;
	// 3482    .line 682
label_cond_e:
	minLevel = aMinLevel[cVar1];
	//    .local v5, "minLevel":B
	maxLevel = aMaxLevel[cVar1];
	//    .local v4, "maxLevel":B
	if ( minLevel != maxLevel )
		goto label_cond_19;
	if ( ( minLevel & 0x1) )     
		goto label_cond_19;
	return indexMap;
	// 3501    .line 691
label_cond_19:
label_cond_1c:
	start = 0x0;
	//    .local v6, "start":I
label_goto_1d:
	if ( start >= levels->size() )
		goto label_cond_27;
	if ( levels[start] >= maxLevel )
		goto label_cond_27;
	start = ( start + 0x1);
	goto label_goto_1d;
	// 3527    .line 704
label_cond_27:
	if ( start <  levels->size() )
		goto label_cond_30;
label_cond_2a:
	maxLevel = (unsigned char)(( maxLevel + -0x1));
	if ( maxLevel >= (unsigned char)(( minLevel | 0x1)) )
		goto label_cond_1c;
	return indexMap;
	// 3544    .line 709
label_cond_30:
	//    .local v3, "limit":I
label_cond_31:
	limit = ( limit + 0x1);
	if ( limit >= levels->size() )
		goto label_cond_3a;
	if ( levels[limit] >= maxLevel )
		goto label_cond_31;
label_cond_3a:
	//    .local v7, "sumOfSosEos":I
label_cond_3e:
	indexMap[start] = (( (start + limit) + -0x1) - indexMap[start]);
	start = ( start + 0x1);
	if ( start <  limit )
		goto label_cond_3e;
	if ( limit == levels->size() )
		goto label_cond_2a;
	start = ( limit + 0x1);
	goto label_goto_1d;

}
// .method static reorderVisual([B)[I
int android::icu::text::BidiLine::reorderVisual(std::shared_ptr<unsigned char[]> levels)
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<unsigned char[]>> aMinLevel;
	std::shared<std::vector<unsigned char[]>> aMaxLevel;
	std::shared_ptr<int[]> indexMap;
	unsigned char minLevel;
	unsigned char maxLevel;
	int start;
	int limit;
	int end;
	
	//    .param p0, "levels"    # [B
	cVar0 = 0x1;
	cVar1 = 0x0;
	aMinLevel = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	//    .local v1, "aMinLevel":[B
	aMaxLevel = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	//    .local v0, "aMaxLevel":[B
	indexMap = android::icu::text::BidiLine::prepareReorder(levels, aMinLevel, aMaxLevel);
	//    .local v3, "indexMap":[I
	if ( indexMap )     
		goto label_cond_e;
	return 0x0;
	// 3622    .line 752
label_cond_e:
	minLevel = aMinLevel[cVar1];
	//    .local v6, "minLevel":B
	maxLevel = aMaxLevel[cVar1];
	//    .local v5, "maxLevel":B
	if ( minLevel != maxLevel )
		goto label_cond_19;
	if ( ( minLevel & 0x1) )     
		goto label_cond_19;
	return indexMap;
	// 3641    .line 761
label_cond_19:
label_cond_1c:
	start = 0x0;
	//    .local v7, "start":I
label_goto_1d:
	if ( start >= levels->size() )
		goto label_cond_27;
	if ( levels[start] >= maxLevel )
		goto label_cond_27;
	start = ( start + 0x1);
	goto label_goto_1d;
	// 3667    .line 774
label_cond_27:
	if ( start <  levels->size() )
		goto label_cond_30;
label_cond_2a:
	maxLevel = (unsigned char)(( maxLevel + -0x1));
	if ( maxLevel >= (unsigned char)(( minLevel | 0x1)) )
		goto label_cond_1c;
	return indexMap;
	// 3684    .line 779
label_cond_30:
	//    .local v4, "limit":I
label_cond_31:
	limit = ( limit + 0x1);
	if ( limit >= levels->size() )
		goto label_cond_3a;
	if ( levels[limit] >= maxLevel )
		goto label_cond_31;
label_cond_3a:
	end = ( limit + -0x1);
	//    .local v2, "end":I
label_goto_3c:
	if ( start >= end )
		goto label_cond_4b;
	//    .local v8, "temp":I
	indexMap[start] = indexMap[end];
	indexMap[end] = indexMap[start];
	start = ( start + 0x1);
	end = ( end + -0x1);
	goto label_goto_3c;
	// 3729    .line 797
	// 3730    .end local v8    # "temp":I
label_cond_4b:
	if ( limit == levels->size() )
		goto label_cond_2a;
	start = ( limit + 0x1);
	goto label_goto_1d;

}
// .method static setLine(Landroid/icu/text/Bidi;II)Landroid/icu/text/Bidi;
std::shared_ptr<android::icu::text::Bidi> android::icu::text::BidiLine::setLine(std::shared_ptr<android::icu::text::Bidi> paraBidi,int start,int limit)
{
	
	unsigned char cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::Bidi> lineBidi;
	int length;
	int j;
	std::shared_ptr<unsigned char[]> levels;
	int trailingWSStart;
	unsigned char level;
	int i;
	
	//    .param p0, "paraBidi"    # Landroid/icu/text/Bidi;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	cVar0 = 0x2;
	cVar1 = 0x0;
	lineBidi = std::make_shared<android::icu::text::Bidi>();
	//    .local v5, "lineBidi":Landroid/icu/text/Bidi;
	length = (limit - start);
	lineBidi->resultLength = length;
	lineBidi->originalLength = length;
	lineBidi->length = length;
	//    .local v2, "length":I
	lineBidi->text = std::make_shared<std::vector<char[]>>(length);
	java::lang::System::arraycopy(paraBidi->text, start, lineBidi->text, cVar1, length);
	lineBidi->paraLevel = paraBidi->GetParaLevelAt(start);
	lineBidi->paraCount = paraBidi->paraCount;
	lineBidi->runs = std::make_shared<std::vector<std::vector<android::icu::text::BidiRun>>>(cVar1);
	lineBidi->reorderingMode = paraBidi->reorderingMode;
	lineBidi->reorderingOptions = paraBidi->reorderingOptions;
	if ( paraBidi->controlCount <= 0 )
		goto label_cond_51;
	j = start;
	//    .local v1, "j":I
label_goto_35:
	if ( j >= limit )
		goto label_cond_4a;
	if ( !(android::icu::text::Bidi::IsBidiControlChar(paraBidi->text[j])) )  
		goto label_cond_47;
	lineBidi->controlCount = ( lineBidi->controlCount + 0x1);
label_cond_47:
	j = ( j + 0x1);
	goto label_goto_35;
	// 3845    .line 145
label_cond_4a:
	lineBidi->resultLength = (lineBidi->resultLength -  lineBidi->controlCount);
	//    .end local v1    # "j":I
label_cond_51:
	lineBidi->getDirPropsMemory(length);
	lineBidi->dirProps = lineBidi->dirPropsMemory;
	java::lang::System::arraycopy(paraBidi->dirProps, start, lineBidi->dirProps, cVar1, length);
	lineBidi->getLevelsMemory(length);
	lineBidi->levels = lineBidi->levelsMemory;
	java::lang::System::arraycopy(paraBidi->levels, start, lineBidi->levels, cVar1, length);
	lineBidi->runCount = -0x1;
	if ( paraBidi->direction == cVar0 )
		goto label_cond_8e;
	lineBidi->direction = paraBidi->direction;
	if ( paraBidi->trailingWSStart >  start )
		goto label_cond_81;
	lineBidi->trailingWSStart = cVar1;
label_goto_7e:
	lineBidi->paraBidi = paraBidi;
	return lineBidi;
	// 3917    .line 170
label_cond_81:
	if ( paraBidi->trailingWSStart >= limit )
		goto label_cond_8b;
	lineBidi->trailingWSStart = (paraBidi->trailingWSStart -  start);
	goto label_goto_7e;
	// 3932    .line 173
label_cond_8b:
	lineBidi->trailingWSStart = length;
	goto label_goto_7e;
	// 3938    .line 176
label_cond_8e:
	levels = lineBidi->levels;
	//    .local v4, "levels":[B
	android::icu::text::BidiLine::setTrailingWSStart(lineBidi);
	trailingWSStart = lineBidi->trailingWSStart;
	//    .local v6, "trailingWSStart":I
	if ( trailingWSStart )     
		goto label_cond_b0;
	lineBidi->direction = (unsigned char)(( lineBidi->paraLevel & 0x1));
label_goto_9e:
	// switch
	{
	auto item = ( lineBidi->direction );
	if (item == 0) goto label_pswitch_a4;
	if (item == 1) goto label_pswitch_d2;
	}
	goto label_goto_7e;
	// 3970    .line 218
label_pswitch_a4:
	lineBidi->paraLevel = (unsigned char)(( ( lineBidi->paraLevel + 0x1) & -0x2));
	lineBidi->trailingWSStart = cVar1;
	goto label_goto_7e;
	// 3988    .line 189
label_cond_b0:
	level = (unsigned char)(( levels[cVar1] & 0x1));
	//    .local v3, "level":B
	if ( trailingWSStart >= length )
		goto label_cond_c0;
	if ( ( lineBidi->paraLevel & 0x1) == level )
		goto label_cond_c0;
	lineBidi->direction = cVar0;
	goto label_goto_9e;
	// 4012    .line 201
label_cond_c0:
	i = 0x1;
	//    .local v0, "i":I
label_goto_c1:
	if ( i != trailingWSStart )
		goto label_cond_c6;
	lineBidi->direction = level;
	goto label_goto_9e;
	// 4026    .line 206
label_cond_c6:
	if ( ( levels[i] & 0x1) == level )
		goto label_cond_cf;
	lineBidi->direction = cVar0;
	goto label_goto_9e;
	// 4039    .line 201
label_cond_cf:
	i = ( i + 0x1);
	goto label_goto_c1;
	// 4045    .line 226
	// 4046    .end local v0    # "i":I
	// 4047    .end local v3    # "level":B
label_pswitch_d2:
	lineBidi->paraLevel = (unsigned char)(( lineBidi->paraLevel | 0x1));
	lineBidi->trailingWSStart = cVar1;
	goto label_goto_7e;
	// 4062    .line 214
	// 4063    :pswitch_data_dc
	// 4064    .packed-switch 0x0
	// 4065        :pswitch_a4
	// 4066        :pswitch_d2
	// 4067    .end packed-switch

}
// .method static setTrailingWSStart(Landroid/icu/text/Bidi;)V
void android::icu::text::BidiLine::setTrailingWSStart(std::shared_ptr<android::icu::text::Bidi> bidi)
{
	
	std::shared_ptr<unsigned char[]> dirProps;
	int start;
	
	//    .param p0, "bidi"    # Landroid/icu/text/Bidi;
	dirProps = bidi->dirProps;
	//    .local v0, "dirProps":[B
	//    .local v1, "levels":[B
	start = bidi->length;
	//    .local v3, "start":I
	//    .local v2, "paraLevel":B
	if ( dirProps[( start + -0x1)] != 0x7 )
		goto label_cond_12;
	bidi->trailingWSStart = start;
	return;
	// 4106    .line 104
label_cond_12:
label_goto_12:
	if ( start <= 0 )
		goto label_cond_24;
	if ( !((android::icu::text::Bidi::DirPropFlag(dirProps[( start + -0x1)]) &  android::icu::text::Bidi::MASK_WS)) )  
		goto label_cond_24;
	start = ( start + -0x1);
	goto label_goto_12;
	// 4131    .line 110
label_cond_24:
label_goto_24:
	if ( start <= 0 )
		goto label_cond_2f;
	if ( bidi->levels[( start + -0x1)] != bidi->paraLevel )
		goto label_cond_2f;
	start = ( start + -0x1);
	goto label_goto_24;
	// 4147    .line 114
label_cond_2f:
	bidi->trailingWSStart = start;
	return;

}


