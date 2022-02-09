// CPP L:\smali2cpp20\x64\Release\out\java\io\DeleteOnExitHook.smali
#include "java2ctype.h"
#include "java.io.DeleteOnExitHook_S_1.h"
#include "java.io.DeleteOnExitHook.h"
#include "java.io.File.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Object.h"
#include "java.lang.Runtime.h"
#include "java.lang.String.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashSet.h"

static java::io::DeleteOnExitHook::files;
// .method static constructor <clinit>()V
void java::io::DeleteOnExitHook::static_cinit()
{
	
	std::shared_ptr<java::util::LinkedHashSet> cVar0;
	std::shared_ptr<java::io::DeleteOnExitHook_S_1> cVar1;
	
	cVar0 = std::make_shared<java::util::LinkedHashSet>();
	java::io::DeleteOnExitHook::files = cVar0;
	cVar1 = std::make_shared<java::io::DeleteOnExitHook_S_1>();
	java::lang::Runtime::getRuntime({const[class].FS-Param})->addShutdownHook(cVar1);
	return;

}
// .method private constructor <init>()V
java::io::DeleteOnExitHook::DeleteOnExitHook()
{
	
	// 059    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static declared-synchronized add(Ljava/lang/String;)V
void java::io::DeleteOnExitHook::add(std::shared_ptr<java::lang::String> file)
{
	
	std::shared_ptr<java::io::DeleteOnExitHook> cVar0;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	
	//    .param p0, "file"    # Ljava/lang/String;
	cVar0 = java::io::DeleteOnExitHook();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	if ( java::io::DeleteOnExitHook::files )     
		goto label_cond_13;
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Shutdown in progress")));
	// throw
	throw cVar1;
	// 087    :try_end_10
	// 088    .catchall {:try_start_3 .. :try_end_10} :catchall_10
label_catchall_10:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 097    .line 56
label_cond_13:
	try {
	//label_try_start_13:
	java::io::DeleteOnExitHook::files->add(file);
	//label_try_end_18:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_13 .. :try_end_18} :catchall_10
	cVar0->monitor_exit();
	return;

}
// .method static runHooks()V
void java::io::DeleteOnExitHook::runHooks()
{
	
	std::shared_ptr<java::io::DeleteOnExitHook> cVar0;
	std::shared_ptr<java::util::ArrayList> toBeDeleted;
	std::shared_ptr<java::util::Iterator> filename_S_iterator;
	std::shared_ptr<java::lang::String> filename;
	std::shared_ptr<java::io::File> cVar1;
	
	cVar0 = java::io::DeleteOnExitHook();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//    .local v2, "theFiles":Ljava/util/LinkedHashSet;, "Ljava/util/LinkedHashSet<Ljava/lang/String;>;"
	java::io::DeleteOnExitHook::files = 0x0;
	//label_try_end_8:
	}
	catch (...){
		goto label_catchall_2a;
	}
	//    .catchall {:try_start_3 .. :try_end_8} :catchall_2a
	cVar0->monitor_exit();
	toBeDeleted = std::make_shared<java::util::ArrayList>(java::io::DeleteOnExitHook::files);
	//    .local v3, "toBeDeleted":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
	java::util::Collections::reverse(toBeDeleted);
	filename_S_iterator = toBeDeleted->iterator();
	//    .local v1, "filename$iterator":Ljava/util/Iterator;
label_goto_15:
	if ( !(filename_S_iterator->hasNext()) )  
		goto label_cond_2d;
	filename = filename_S_iterator->next();
	filename->checkCast("java::lang::String");
	//    .local v0, "filename":Ljava/lang/String;
	cVar1 = std::make_shared<java::io::File>(filename);
	cVar1->delete();
	goto label_goto_15;
	// 173    .line 62
	// 174    .end local v0    # "filename":Ljava/lang/String;
	// 175    .end local v1    # "filename$iterator":Ljava/util/Iterator;
	// 176    .end local v3    # "toBeDeleted":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
label_catchall_2a:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 184    .line 75
	// 185    .restart local v1    # "filename$iterator":Ljava/util/Iterator;
	// 186    .restart local v3    # "toBeDeleted":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
label_cond_2d:
	return;

}


