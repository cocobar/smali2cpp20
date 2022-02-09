// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIRuleBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.Assert.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.ICUDebug.h"
#include "android.icu.text.RBBINode.h"
#include "android.icu.text.RBBIRuleBuilder.h"
#include "android.icu.text.RBBIRuleScanner.h"
#include "android.icu.text.RBBISetBuilder.h"
#include "android.icu.text.RBBITableBuilder.h"
#include "java.io.DataOutputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.ArrayList.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"

static android::icu::text::RBBIRuleBuilder::U_BRK_ASSIGN_ERROR = 0x10206;
static android::icu::text::RBBIRuleBuilder::U_BRK_ERROR_LIMIT = 0x10210;
static android::icu::text::RBBIRuleBuilder::U_BRK_ERROR_START = 0x10200;
static android::icu::text::RBBIRuleBuilder::U_BRK_HEX_DIGITS_EXPECTED = 0x10202;
static android::icu::text::RBBIRuleBuilder::U_BRK_INIT_ERROR = 0x1020b;
static android::icu::text::RBBIRuleBuilder::U_BRK_INTERNAL_ERROR = 0x10201;
static android::icu::text::RBBIRuleBuilder::U_BRK_MALFORMED_RULE_TAG = 0x1020e;
static android::icu::text::RBBIRuleBuilder::U_BRK_MALFORMED_SET = 0x1020f;
static android::icu::text::RBBIRuleBuilder::U_BRK_MISMATCHED_PAREN = 0x10208;
static android::icu::text::RBBIRuleBuilder::U_BRK_NEW_LINE_IN_QUOTED_STRING = 0x10209;
static android::icu::text::RBBIRuleBuilder::U_BRK_RULE_EMPTY_SET = 0x1020c;
static android::icu::text::RBBIRuleBuilder::U_BRK_RULE_SYNTAX = 0x10204;
static android::icu::text::RBBIRuleBuilder::U_BRK_SEMICOLON_EXPECTED = 0x10203;
static android::icu::text::RBBIRuleBuilder::U_BRK_UNCLOSED_SET = 0x10205;
static android::icu::text::RBBIRuleBuilder::U_BRK_UNDEFINED_VARIABLE = 0x1020a;
static android::icu::text::RBBIRuleBuilder::U_BRK_UNRECOGNIZED_OPTION = 0x1020d;
static android::icu::text::RBBIRuleBuilder::U_BRK_VARIABLE_REDFINITION = 0x10207;
static android::icu::text::RBBIRuleBuilder::fForwardTree = 0x0;
static android::icu::text::RBBIRuleBuilder::fReverseTree = 0x1;
static android::icu::text::RBBIRuleBuilder::fSafeFwdTree = 0x2;
static android::icu::text::RBBIRuleBuilder::fSafeRevTree = 0x3;
// .method constructor <init>(Ljava/lang/String;)V
android::icu::text::RBBIRuleBuilder::RBBIRuleBuilder(std::shared_ptr<java::lang::String> rules)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::util::ArrayList> cVar2;
	std::shared_ptr<java::util::ArrayList> cVar3;
	std::shared_ptr<android::icu::text::RBBIRuleScanner> cVar4;
	std::shared_ptr<android::icu::text::RBBISetBuilder> cVar5;
	
	//    .param p1, "rules"    # Ljava/lang/String;
	// 122    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fTreeRoots = std::make_shared<std::vector<std::vector<android::icu::text::RBBINode>>>(0x4);
	this->fDefaultTree = 0x0;
	cVar0 = std::make_shared<java::util::HashMap>();
	this->fStatusSets = cVar0;
	if ( !(android::icu::impl::ICUDebug::enabled(std::make_shared<java::lang::String>(std::make_shared<char[]>("rbbi")))) )  
		goto label_cond_43;
	cVar1 = android::icu::impl::ICUDebug::value(std::make_shared<java::lang::String>(std::make_shared<char[]>("rbbi")));
label_goto_22:
	this->fDebugEnv = cVar1;
	this->fRules = rules;
	cVar2 = std::make_shared<java::util::ArrayList>();
	this->fUSetNodes = cVar2;
	cVar3 = std::make_shared<java::util::ArrayList>();
	this->fRuleStatusVals = cVar3;
	cVar4 = std::make_shared<android::icu::text::RBBIRuleScanner>(this);
	this->fScanner = cVar4;
	cVar5 = std::make_shared<android::icu::text::RBBISetBuilder>(this);
	this->fSetBuilder = cVar5;
	return;
	// 197    .line 144
label_cond_43:
	cVar1 = 0x0;
	goto label_goto_22;

}
// .method static final align8(I)I
int android::icu::text::RBBIRuleBuilder::align8(int i)
{
	
	//    .param p0, "i"    # I
	return ( ( i + 0x7) & -0x8);

}
// .method static compileRules(Ljava/lang/String;Ljava/io/OutputStream;)V
void android::icu::text::RBBIRuleBuilder::compileRules(std::shared_ptr<java::lang::String> rules,std::shared_ptr<java::io::OutputStream> os)
{
	
	std::shared_ptr<android::icu::text::RBBIRuleBuilder> builder;
	std::shared_ptr<android::icu::text::RBBITableBuilder> cVar0;
	std::shared_ptr<android::icu::text::RBBITableBuilder> cVar1;
	std::shared_ptr<android::icu::text::RBBITableBuilder> cVar2;
	std::shared_ptr<android::icu::text::RBBITableBuilder> cVar3;
	
	//    .param p0, "rules"    # Ljava/lang/String;
	//    .param p1, "os"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 222        value = {
	// 223            Ljava/io/IOException;
	// 224        }
	// 225    .end annotation
	builder = std::make_shared<android::icu::text::RBBIRuleBuilder>(rules);
	//    .local v0, "builder":Landroid/icu/text/RBBIRuleBuilder;
	builder->fScanner->parse();
	builder->fSetBuilder->build();
	cVar0 = std::make_shared<android::icu::text::RBBITableBuilder>(builder, 0x0);
	builder->fForwardTables = cVar0;
	cVar1 = std::make_shared<android::icu::text::RBBITableBuilder>(builder, 0x1);
	builder->fReverseTables = cVar1;
	cVar2 = std::make_shared<android::icu::text::RBBITableBuilder>(builder, 0x2);
	builder->fSafeFwdTables = cVar2;
	cVar3 = std::make_shared<android::icu::text::RBBITableBuilder>(builder, 0x3);
	builder->fSafeRevTables = cVar3;
	builder->fForwardTables->build();
	builder->fReverseTables->build();
	builder->fSafeFwdTables->build();
	builder->fSafeRevTables->build();
	if ( !(builder->fDebugEnv) )  
		goto label_cond_57;
	if ( builder->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("states"))) < 0 ) 
		goto label_cond_57;
	builder->fForwardTables->printRuleStatusTable();
label_cond_57:
	builder->flattenData(os);
	return;

}
// .method flattenData(Ljava/io/OutputStream;)V
void android::icu::text::RBBIRuleBuilder::flattenData(std::shared_ptr<java::io::OutputStream> os)
{
	
	std::shared_ptr<java::io::DataOutputStream> dos;
	std::shared_ptr<java::lang::String> strippedRules;
	int forwardTableSize;
	int reverseTableSize;
	int safeFwdTableSize;
	int safeRevTableSize;
	int statusTableSize;
	int outputPos;
	std::shared<std::vector<int[]>> header;
	int i;
	auto tableData;
	bool cVar0;
	bool cVar2;
	bool cVar4;
	bool cVar6;
	bool cVar8;
	bool cVar10;
	std::shared_ptr<java::util::Iterator> val_S_iterator;
	std::shared_ptr<java::lang::Integer> val;
	bool cVar12;
	
	//    .param p1, "os"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 335        value = {
	// 336            Ljava/io/IOException;
	// 337        }
	// 338    .end annotation
	dos = std::make_shared<java::io::DataOutputStream>(os);
	//    .local v3, "dos":Ljava/io/DataOutputStream;
	strippedRules = android::icu::text::RBBIRuleScanner::stripRules(this->fRules);
	//    .local v14, "strippedRules":Ljava/lang/String;
	0x60;
	//    .local v6, "headerSize":I
	forwardTableSize = android::icu::text::RBBIRuleBuilder::align8(this->fForwardTables->getTableSize());
	//    .local v4, "forwardTableSize":I
	reverseTableSize = android::icu::text::RBBIRuleBuilder::align8(this->fReverseTables->getTableSize());
	//    .local v9, "reverseTableSize":I
	safeFwdTableSize = android::icu::text::RBBIRuleBuilder::align8(this->fSafeFwdTables->getTableSize());
	//    .local v11, "safeFwdTableSize":I
	safeRevTableSize = android::icu::text::RBBIRuleBuilder::align8(this->fSafeRevTables->getTableSize());
	//    .local v12, "safeRevTableSize":I
	//    .local v17, "trieSize":I
	statusTableSize = android::icu::text::RBBIRuleBuilder::align8(( this->fRuleStatusVals->size() * 0x4));
	//    .local v13, "statusTableSize":I
	//    .local v10, "rulesSize":I
	//    .local v16, "totalSize":I
	outputPos = 0x0;
	//    .local v8, "outputPos":I
	android::icu::impl::ICUBinary::writeHeader(0x42726b20, 0x3010000, 0x0, dos);
	header = std::make_shared<std::vector<int[]>>(0x18);
	//    .local v5, "header":[I
	header[0x0] = 0xb1a0;
	header[0x1] = 0x3010000;
	header[0x2] = ((((((( forwardTableSize + 0x60) + reverseTableSize) + safeFwdTableSize) + safeRevTableSize) + statusTableSize) + android::icu::text::RBBIRuleBuilder::align8(this->fSetBuilder->getTrieSize())) + android::icu::text::RBBIRuleBuilder::align8(( strippedRules->length() * 0x2)));
	header[0x3] = this->fSetBuilder->getNumCharCategories();
	header[0x4] = 0x60;
	header[0x5] = forwardTableSize;
	header[0x6] = (header[0x4] + forwardTableSize);
	header[0x7] = reverseTableSize;
	header[0x8] = (header[0x6] + reverseTableSize);
	header[0x9] = safeFwdTableSize;
	header[0xa] = (header[0x8] + safeFwdTableSize);
	header[0xb] = safeRevTableSize;
	header[0xc] = (header[0xa] + safeRevTableSize);
	header[0xd] = this->fSetBuilder->getTrieSize();
	header[0x10] = (header[0xc] + header[0xd]);
	header[0x11] = statusTableSize;
	header[0xe] = (header[0x10] + statusTableSize);
	header[0xf] = ( strippedRules->length() * 0x2);
	i = 0x0;
	//    .local v7, "i":I
label_goto_12a:
	if ( i >= header->size() )
		goto label_cond_13d;
	dos->writeInt(header[i]);
	outputPos = ( outputPos + 0x4);
	i = ( i + 0x1);
	goto label_goto_12a;
	// 711    .line 229
label_cond_13d:
	tableData = this->fForwardTables->exportTable();
	//    .local v15, "tableData":[S
	if ( outputPos != header[0x4] )
		goto label_cond_168;
	cVar0 = 0x1;
label_goto_151:
	android::icu::impl::Assert::assrt(cVar0);
	i = 0x0;
label_goto_155:
	if ( i >= tableData->size() )
		goto label_cond_16b;
	dos->writeShort(tableData[i]);
	outputPos = ( outputPos + 0x2);
	i = ( i + 0x1);
	goto label_goto_155;
	// 765    .line 230
label_cond_168:
	cVar0 = 0x0;
	goto label_goto_151;
	// 771    .line 236
label_cond_16b:
	tableData = this->fReverseTables->exportTable();
	if ( outputPos != header[0x6] )
		goto label_cond_196;
	cVar2 = 0x1;
label_goto_17f:
	android::icu::impl::Assert::assrt(cVar2);
	i = 0x0;
label_goto_183:
	if ( i >= tableData->size() )
		goto label_cond_199;
	dos->writeShort(tableData[i]);
	outputPos = ( outputPos + 0x2);
	i = ( i + 0x1);
	goto label_goto_183;
	// 824    .line 237
label_cond_196:
	cVar2 = 0x0;
	goto label_goto_17f;
	// 830    .line 243
label_cond_199:
	if ( outputPos != header[0x8] )
		goto label_cond_1c4;
	cVar4 = 0x1;
label_goto_1a3:
	android::icu::impl::Assert::assrt(cVar4);
	tableData = this->fSafeFwdTables->exportTable();
	i = 0x0;
label_goto_1b1:
	if ( i >= tableData->size() )
		goto label_cond_1c7;
	dos->writeShort(tableData[i]);
	outputPos = ( outputPos + 0x2);
	i = ( i + 0x1);
	goto label_goto_1b1;
	// 883    .line 243
label_cond_1c4:
	cVar4 = 0x0;
	goto label_goto_1a3;
	// 889    .line 250
label_cond_1c7:
	if ( outputPos != header[0xa] )
		goto label_cond_1f2;
	cVar6 = 0x1;
label_goto_1d1:
	android::icu::impl::Assert::assrt(cVar6);
	tableData = this->fSafeRevTables->exportTable();
	i = 0x0;
label_goto_1df:
	if ( i >= tableData->size() )
		goto label_cond_1f5;
	dos->writeShort(tableData[i]);
	outputPos = ( outputPos + 0x2);
	i = ( i + 0x1);
	goto label_goto_1df;
	// 942    .line 250
label_cond_1f2:
	cVar6 = 0x0;
	goto label_goto_1d1;
	// 948    .line 258
label_cond_1f5:
	if ( outputPos != header[0xc] )
		goto label_cond_223;
	cVar8 = 0x1;
label_goto_1ff:
	android::icu::impl::Assert::assrt(cVar8);
	this->fSetBuilder->serializeTrie(os);
	outputPos = (outputPos + header[0xd]);
label_goto_215:
	if ( !(( outputPos % 0x8)) )  
		goto label_cond_226;
	dos->write(0x0);
	outputPos = ( outputPos + 0x1);
	goto label_goto_215;
	// 1001    .line 258
label_cond_223:
	cVar8 = 0x0;
	goto label_goto_1ff;
	// 1007    .line 267
label_cond_226:
	if ( outputPos != header[0x10] )
		goto label_cond_255;
	cVar10 = 0x1;
label_goto_230:
	android::icu::impl::Assert::assrt(cVar10);
	val_S_iterator = this->fRuleStatusVals->iterator();
	//    .local v19, "val$iterator":Ljava/util/Iterator;
label_goto_23d:
	if ( !(val_S_iterator->hasNext()) )  
		goto label_cond_258;
	val = val_S_iterator->next();
	val->checkCast("java::lang::Integer");
	//    .local v18, "val":Ljava/lang/Integer;
	dos->writeInt(val->intValue());
	outputPos = ( outputPos + 0x4);
	goto label_goto_23d;
	// 1062    .line 267
	// 1063    .end local v18    # "val":Ljava/lang/Integer;
	// 1064    .end local v19    # "val$iterator":Ljava/util/Iterator;
label_cond_255:
	cVar10 = 0x0;
	goto label_goto_230;
	// 1070    .line 273
	// 1071    .restart local v19    # "val$iterator":Ljava/util/Iterator;
label_cond_258:
label_goto_258:
	if ( !(( outputPos % 0x8)) )  
		goto label_cond_266;
	dos->write(0x0);
	outputPos = ( outputPos + 0x1);
	goto label_goto_258;
	// 1090    .line 280
label_cond_266:
	if ( outputPos != header[0xe] )
		goto label_cond_28c;
	cVar12 = 0x1;
label_goto_270:
	android::icu::impl::Assert::assrt(cVar12);
	dos->writeChars(strippedRules);
	outputPos = (outputPos + ( strippedRules->length() * 0x2));
label_goto_27e:
	if ( !(( outputPos % 0x8)) )  
		goto label_cond_28f;
	dos->write(0x0);
	outputPos = ( outputPos + 0x1);
	goto label_goto_27e;
	// 1135    .line 280
label_cond_28c:
	cVar12 = 0x0;
	goto label_goto_270;
	// 1141    .line 287
label_cond_28f:
	return;

}


