// CPP L:\smali2cpp20\x64\Release\out\java\awt\font\NumericShaper$1.smali
#include "java2ctype.h"
#include "java.awt.font.NumericShaper_S_1.h"
#include "java.awt.font.NumericShaper_S_Range.h"
#include "java.awt.font.NumericShaper.h"

// .method constructor <init>(Ljava/awt/font/NumericShaper;)V
java::awt::font::NumericShaper_S_1::NumericShaper_S_1(std::shared_ptr<java::awt::font::NumericShaper> this_S_0)
{
	
	//    .param p1, "this$0"    # Ljava/awt/font/NumericShaper;
	this->this_S_0 = this_S_0;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public compare(Ljava/awt/font/NumericShaper$Range;Ljava/awt/font/NumericShaper$Range;)I
int java::awt::font::NumericShaper_S_1::compare(std::shared_ptr<java::awt::font::NumericShaper_S_Range> s1,std::shared_ptr<java::awt::font::NumericShaper_S_Range> s2)
{
	
	int cVar0;
	
	//    .param p1, "s1"    # Ljava/awt/font/NumericShaper$Range;
	//    .param p2, "s2"    # Ljava/awt/font/NumericShaper$Range;
	if ( java::awt::font::NumericShaper_S_Range::-get0(s1) <= java::awt::font::NumericShaper_S_Range::-get0(s2) )
		goto label_cond_c;
	cVar0 = 0x1;
label_goto_b:
	return cVar0;
label_cond_c:
	if ( java::awt::font::NumericShaper_S_Range::-get0(s1) != java::awt::font::NumericShaper_S_Range::-get0(s2) )
		goto label_cond_18;
	cVar0 = 0x0;
	goto label_goto_b;
label_cond_18:
	cVar0 = -0x1;
	goto label_goto_b;

}


