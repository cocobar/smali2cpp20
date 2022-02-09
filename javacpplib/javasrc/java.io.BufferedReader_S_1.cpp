// CPP L:\smali2cpp20\x64\Release\out\java\io\BufferedReader$1.smali
#include "java2ctype.h"
#include "java.io.BufferedReader_S_1.h"
#include "java.io.BufferedReader.h"
#include "java.io.IOException.h"
#include "java.io.UncheckedIOException.h"
#include "java.lang.String.h"
#include "java.util.NoSuchElementException.h"

// .method constructor <init>(Ljava/io/BufferedReader;)V
java::io::BufferedReader_S_1::BufferedReader_S_1(std::shared_ptr<java::io::BufferedReader> this_S_0)
{
	
	//    .param p1, "this$0"    # Ljava/io/BufferedReader;
	this->this_S_0 = this_S_0;
	// 046    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->nextLine = 0x0;
	return;

}
// .method public hasNext()Z
bool java::io::BufferedReader_S_1::hasNext()
{
	
	bool cVar0;
	std::shared_ptr<java::io::UncheckedIOException> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x1;
	if ( !(this->nextLine) )  
		goto label_cond_6;
	return cVar0;
	// 073    .line 582
label_cond_6:
	try {
	//label_try_start_6:
	this->nextLine = this->this_S_0->readLine();
	//label_try_end_10:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_15;
	}
	//    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_10} :catch_15
	if ( !(this->nextLine) )  
		goto label_cond_13;
label_goto_12:
	return cVar0;
label_cond_13:
	cVar0 = 0x0;
	goto label_goto_12;
	// 099    .line 584
label_catch_15:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<java::io::UncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method public next()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::BufferedReader_S_1::next()
{
	
	std::shared_ptr<java::util::NoSuchElementException> cVar0;
	
	if ( this->nextLine )     
		goto label_cond_b;
	if ( !(this->hasNext()) )  
		goto label_cond_10;
label_cond_b:
	//    .local v0, "line":Ljava/lang/String;
	this->nextLine = 0x0;
	return this->nextLine;
	// 152    .line 597
	// 153    .end local v0    # "line":Ljava/lang/String;
label_cond_10:
	cVar0 = std::make_shared<java::util::NoSuchElementException>();
	// throw
	throw cVar0;

}


