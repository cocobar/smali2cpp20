// CPP L:\smali2cpp20\x64\Release\out\android\icu\lang\UScript$ScriptMetadata.smali
#include "java2ctype.h"
#include "android.icu.lang.UScript_S_ScriptMetadata.h"

static android::icu::lang::UScript_S_ScriptMetadata::ASPIRATIONAL = 0x800000;
static android::icu::lang::UScript_S_ScriptMetadata::CASED = 0x4000000;
static android::icu::lang::UScript_S_ScriptMetadata::EXCLUSION = 0x400000;
static android::icu::lang::UScript_S_ScriptMetadata::LB_LETTERS = 0x2000000;
static android::icu::lang::UScript_S_ScriptMetadata::LIMITED_USE = 0x600000;
static android::icu::lang::UScript_S_ScriptMetadata::RECOMMENDED = 0xa00000;
static android::icu::lang::UScript_S_ScriptMetadata::RTL = 0x1000000;
static android::icu::lang::UScript_S_ScriptMetadata::SCRIPT_PROPS;
static android::icu::lang::UScript_S_ScriptMetadata::UNKNOWN = 0x200000;
// .method static synthetic -wrap0(I)I
int android::icu::lang::UScript_S_ScriptMetadata::_wrap0(int script)
{
	
	//    .param p0, "script"    # I
	return android::icu::lang::UScript_S_ScriptMetadata::getScriptProps(script);

}
// .method static constructor <clinit>()V
void android::icu::lang::UScript_S_ScriptMetadata::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0xaf);
	?;
	android::icu::lang::UScript_S_ScriptMetadata::SCRIPT_PROPS = cVar0;
	return;
	// 066    .line 1093
	// 067    :array_a
	// 068    .array-data 4
	// 069        0xa00040
	// 070        0xa00308
	// 071        0x1a00628
	// 072        0x4a00531
	// 073        0xa00995
	// 074        0x2a03105
	// 075        0x46013c4
	// 076        0x44003e2
	// 077        0x4a0042f
	// 078        0x4410414
	// 079        0xa00905
	// 080        0xa012a0
	// 081        0xa010d3
	// 082        0x410330
	// 083        0x4a003a9
	// 084        0xa00a95
	// 085        0xa00a15
	// 086        0x2a05b57
	// 087        0xa0ac00
	// 088        0x1a005d0
	// 089        0x2a0304b
	// 090        0xa00c95
	// 091        0x2a030ab
	// 092        0x2a01780
	// 093        0x2a00ea5
	// 094        0x4a0004c
	// 095        0xa00d15
	// 096        0x801826
	// 097        0x2a01000
	// 098        0x40168f
	// 099        0x410300
	// 100        0xa00b15
	// 101        0x4016a0
	// 102        0xa00d85
	// 103        0x1600710
	// 104        0xa00b95
	// 105        0xa00c15
	// 106        0x1a0078c
	// 107        0x2a00e17
	// 108        0xa00f40
	// 109        0x8014c0
	// 110        0x280a288
	// 111        0x401703
	// 112        0x401723
	// 113        0x401743
	// 114        0x401763
	// 115        0x20280e
	// 116        0x1410800
	// 117        0x601900
	// 118        0x410000
	// 119        0x410480
	// 120        0x410450
	// 121        0x2601950
	// 122        0x410380
	// 123        0x0
	// 124        0x401a00
	// 125        0x4402c00
	// 126        0x1410a00
	// 127        0x60a800
	// 128        0x2601980
	// 129        0x802d30
	// 130        0x4103a0
	// 131        0x601b05
	// 132        0x601bc0
	// 133        0x0
	// 134        0x411005
	// 135        0x60aa00
	// 136        0x0
	// 137        0x0
	// 138        0x0
	// 139        0x0
	// 140        0x413153
	// 141        0x0
	// 142        0x2a05b57
	// 143        0x2a05b57
	// 144        0x416b1c
	// 145        0x5410ca1
	// 146        0x0
	// 147        0x60a984
	// 148        0x60a90a
	// 149        0x0
	// 150        0x0
	// 151        0x601c00
	// 152        0x410647
	// 153        0x1600840
	// 154        0x0
	// 155        0x1410980
	// 156        0x16007ca
	// 157        0x1410c00
	// 158        0x41036b
	// 159        0x40a840
	// 160        0x1410900
	// 161        0x816f00
	// 162        0x0
	// 163        0x0
	// 164        0x0
	// 165        0x0
	// 166        0x0
	// 167        0x0
	// 168        0x60a549
	// 169        0x0
	// 170        0x412000
	// 171        0x0
	// 172        0x20fdd0
	// 173        0x4102a0
	// 174        0x2a0304b
	// 175        0x2601a20
	// 176        0x410280
	// 177        0x1410920
	// 178        0x601c5a
	// 179        0x40a930
	// 180        0x60a882
	// 181        0x41d850
	// 182        0x601b83
	// 183        0x0
	// 184        0x60abc0
	// 185        0x1410840
	// 186        0x1410b00
	// 187        0x611103
	// 188        0xa0ac00
	// 189        0x411083
	// 190        0x1410ad8
	// 191        0x1410b60
	// 192        0x1410b8f
	// 193        0x0
	// 194        0x1410b40
	// 195        0x1400800
	// 196        0x260aa80
	// 197        0x0
	// 198        0x0
	// 199        0x60a6a0
	// 200        0x60a4d0
	// 201        0x0
	// 202        0x1410a60
	// 203        0x416ae6
	// 204        0x41bc20
	// 205        0x410500
	// 206        0x411315
	// 207        0x0
	// 208        0x0
	// 209        0x141e802
	// 210        0x14109a0
	// 211        0x1410a95
	// 212        0x1410896
	// 213        0x1410873
	// 214        0x4112be
	// 215        0x44118b4
	// 216        0x0
	// 217        0x0
	// 218        0x416a4f
	// 219        0x0
	// 220        0x411183
	// 221        0x4110d0
	// 222        0x411680
	// 223        0x2418229
	// 224        0x0
	// 225        0x414400
	// 226        0x411208
	// 227        0x411484
	// 228        0x410537
	// 229        0x411152
	// 230        0x2411717
	// 231        0x14108f4
	// 232        0x41160e
	// 233        0x41128f
	// 234        0x411ac0
	// 235        0x41158e
	// 236        0x561e909
	// 237        0x411c0e
	// 238        0x411c72
	// 239        0x611412
	// 240        0x46104b5
	// 241        0x2a05b57
	// 242        0xa01112
	// 243        0x0
	// 244    .end array-data

}
// .method private constructor <init>()V
android::icu::lang::UScript_S_ScriptMetadata::UScript_S_ScriptMetadata()
{
	
	// 252    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static final getScriptProps(I)I
int android::icu::lang::UScript_S_ScriptMetadata::getScriptProps(int script)
{
	
	//    .param p0, "script"    # I
	if ( script < 0 ) 
		goto label_cond_d;
	if ( script >= android::icu::lang::UScript_S_ScriptMetadata::SCRIPT_PROPS->size() )
		goto label_cond_d;
	return android::icu::lang::UScript_S_ScriptMetadata::SCRIPT_PROPS[script];
	// 280    .line 1279
label_cond_d:
	return 0x0;

}


