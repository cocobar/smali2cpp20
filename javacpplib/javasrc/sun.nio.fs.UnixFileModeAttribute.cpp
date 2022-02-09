// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileModeAttribute.smali
#include "java2ctype.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.nio.file.attribute.FileAttribute.h"
#include "java.nio.file.attribute.PosixFilePermission.h"
#include "java.util.Iterator.h"
#include "java.util.Set.h"
#include "sun.nio.fs.UnixConstants.h"
#include "sun.nio.fs.UnixFileModeAttribute.h"

static sun::nio::fs::UnixFileModeAttribute::_java_nio_file_attribute_PosixFilePermissionSwitchesValues;
static sun::nio::fs::UnixFileModeAttribute::ALL_PERMISSIONS;
static sun::nio::fs::UnixFileModeAttribute::ALL_READWRITE;
static sun::nio::fs::UnixFileModeAttribute::TEMPFILE_PERMISSIONS;
// .method private static synthetic -getjava-nio-file-attribute-PosixFilePermissionSwitchesValues()[I
int sun::nio::fs::UnixFileModeAttribute::_getjava_nio_file_attribute_PosixFilePermissionSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(sun::nio::fs::UnixFileModeAttribute::_java_nio_file_attribute_PosixFilePermissionSwitchesValues) )  
		goto label_cond_7;
	return sun::nio::fs::UnixFileModeAttribute::_java_nio_file_attribute_PosixFilePermissionSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(java::nio::file::attribute::PosixFilePermission::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[java::nio::file::attribute::PosixFilePermission::GROUP_EXECUTE->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_74;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_74
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[java::nio::file::attribute::PosixFilePermission::GROUP_READ->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_72;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_72
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[java::nio::file::attribute::PosixFilePermission::GROUP_WRITE->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_70;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_70
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[java::nio::file::attribute::PosixFilePermission::OTHERS_EXECUTE->ordinal()] = 0x4;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6e;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_6e
label_goto_32:
	try {
	//label_try_start_32:
	cVar0[java::nio::file::attribute::PosixFilePermission::OTHERS_READ->ordinal()] = 0x5;
	//label_try_end_3b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_32 .. :try_end_3b} :catch_6c
label_goto_3b:
	try {
	//label_try_start_3b:
	cVar0[java::nio::file::attribute::PosixFilePermission::OTHERS_WRITE->ordinal()] = 0x6;
	//label_try_end_44:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6a;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3b .. :try_end_44} :catch_6a
label_goto_44:
	try {
	//label_try_start_44:
	cVar0[java::nio::file::attribute::PosixFilePermission::OWNER_EXECUTE->ordinal()] = 0x7;
	//label_try_end_4d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_68;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_44 .. :try_end_4d} :catch_68
label_goto_4d:
	try {
	//label_try_start_4d:
	cVar0[java::nio::file::attribute::PosixFilePermission::OWNER_READ->ordinal()] = 0x8;
	//label_try_end_57:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_66;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_4d .. :try_end_57} :catch_66
label_goto_57:
	try {
	//label_try_start_57:
	cVar0[java::nio::file::attribute::PosixFilePermission::OWNER_WRITE->ordinal()] = 0x9;
	//label_try_end_61:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_64;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_57 .. :try_end_61} :catch_64
label_goto_61:
	sun::nio::fs::UnixFileModeAttribute::_java_nio_file_attribute_PosixFilePermissionSwitchesValues = cVar0;
	return cVar0;
label_catch_64:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_61;
label_catch_66:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_57;
label_catch_68:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_4d;
label_catch_6a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_44;
label_catch_6c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3b;
label_catch_6e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_70:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_72:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_74:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static constructor <clinit>()V
void sun::nio::fs::UnixFileModeAttribute::static_cinit()
{
	
	sun::nio::fs::UnixFileModeAttribute::ALL_PERMISSIONS = ((((((((sun::nio::fs::UnixConstants::S_IRUSR |  sun::nio::fs::UnixConstants::S_IWUSR) |  sun::nio::fs::UnixConstants::S_IXUSR) |  sun::nio::fs::UnixConstants::S_IRGRP) |  sun::nio::fs::UnixConstants::S_IWGRP) |  sun::nio::fs::UnixConstants::S_IXGRP) |  sun::nio::fs::UnixConstants::S_IROTH) |  sun::nio::fs::UnixConstants::S_IWOTH) |  sun::nio::fs::UnixConstants::S_IXOTH);
	sun::nio::fs::UnixFileModeAttribute::ALL_READWRITE = (((((sun::nio::fs::UnixConstants::S_IRUSR |  sun::nio::fs::UnixConstants::S_IWUSR) |  sun::nio::fs::UnixConstants::S_IRGRP) |  sun::nio::fs::UnixConstants::S_IWGRP) |  sun::nio::fs::UnixConstants::S_IROTH) |  sun::nio::fs::UnixConstants::S_IWOTH);
	sun::nio::fs::UnixFileModeAttribute::TEMPFILE_PERMISSIONS = ((sun::nio::fs::UnixConstants::S_IRUSR |  sun::nio::fs::UnixConstants::S_IWUSR) |  sun::nio::fs::UnixConstants::S_IXUSR);
	return;

}
// .method private constructor <init>()V
sun::nio::fs::UnixFileModeAttribute::UnixFileModeAttribute()
{
	
	// 324    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static varargs toUnixMode(I[Ljava/nio/file/attribute/FileAttribute;)I
int sun::nio::fs::UnixFileModeAttribute::toUnixMode(int defaultMode,std::shared_ptr<std::vector<java::nio::file::attribute::FileAttribute<java::lang::Object>>> attrs)
{
	
	int cVar0;
	std::shared_ptr<java::nio::file::attribute::FileAttribute> attr;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::util::Set> cVar3;
	
	//    .param p0, "defaultMode"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 334        value = {
	// 335            "(I[",
	// 336            "Ljava/nio/file/attribute/FileAttribute",
	// 337            "<*>;)I"
	// 338        }
	// 339    .end annotation
	//    .local p1, "attrs":[Ljava/nio/file/attribute/FileAttribute;, "[Ljava/nio/file/attribute/FileAttribute<*>;"
	//    .local v1, "mode":I
	cVar0 = 0x0;
label_goto_4:
	if ( cVar0 >= attrs->size() )
		goto label_cond_53;
	attr = attrs[cVar0];
	//    .local v0, "attr":Ljava/nio/file/attribute/FileAttribute;, "Ljava/nio/file/attribute/FileAttribute<*>;"
	name = attr->name();
	//    .local v2, "name":Ljava/lang/String;
	if ( name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("posix:permissions"))) )     
		goto label_cond_45;
	if ( !(( name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("unix:permissions"))) ^ 0x1)) )  
		goto label_cond_45;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->append(attr->name())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' not supported as initial attribute")))->toString());
	// throw
	throw cVar1;
	// 422    .line 77
label_cond_45:
	cVar3 = attr->value();
	cVar3->checkCast("java::util::Set");
	sun::nio::fs::UnixFileModeAttribute::toUnixMode(cVar3);
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_4;
	// 441    .line 79
	// 442    .end local v0    # "attr":Ljava/nio/file/attribute/FileAttribute;, "Ljava/nio/file/attribute/FileAttribute<*>;"
	// 443    .end local v2    # "name":Ljava/lang/String;
label_cond_53:
	return defaultMode;

}
// .method static toUnixMode(Ljava/util/Set;)I
int sun::nio::fs::UnixFileModeAttribute::toUnixMode(std::shared_ptr<java::util::Set<java::nio::file::attribute::PosixFilePermission>> perms)
{
	
	int mode;
	std::shared_ptr<java::util::Iterator> perm_S_iterator;
	std::shared_ptr<java::nio::file::attribute::PosixFilePermission> perm;
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 451        value = {
	// 452            "(",
	// 453            "Ljava/util/Set",
	// 454            "<",
	// 455            "Ljava/nio/file/attribute/PosixFilePermission;",
	// 456            ">;)I"
	// 457        }
	// 458    .end annotation
	//    .local p0, "perms":Ljava/util/Set;, "Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;"
	mode = 0x0;
	//    .local v0, "mode":I
	perm_S_iterator = perms->iterator();
	//    .local v2, "perm$iterator":Ljava/util/Iterator;
label_goto_5:
	if ( !(perm_S_iterator->hasNext()) )  
		goto label_cond_4b;
	perm = perm_S_iterator->next();
	perm->checkCast("java::nio::file::attribute::PosixFilePermission");
	//    .local v1, "perm":Ljava/nio/file/attribute/PosixFilePermission;
	if ( perm )     
		goto label_cond_19;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 496    .line 53
label_cond_19:
	// switch
	{
	auto item = ( sun::nio::fs::UnixFileModeAttribute::-getjava-nio-file-attribute-PosixFilePermissionSwitchesValues({const[class].FS-Param})[perm->ordinal()] );
	if (item == 1) goto label_pswitch_27;
	if (item == 2) goto label_pswitch_37;
	if (item == 3) goto label_pswitch_3b;
	if (item == 4) goto label_pswitch_47;
	if (item == 5) goto label_pswitch_3f;
	if (item == 6) goto label_pswitch_43;
	if (item == 7) goto label_pswitch_33;
	if (item == 8) goto label_pswitch_2b;
	if (item == 9) goto label_pswitch_2f;
	}
	goto label_goto_5;
	// 512    .line 59
label_pswitch_27:
	mode = (mode |  sun::nio::fs::UnixConstants::S_IXGRP);
	goto label_goto_5;
	// 520    .line 54
label_pswitch_2b:
	mode = (mode |  sun::nio::fs::UnixConstants::S_IRUSR);
	goto label_goto_5;
	// 528    .line 55
label_pswitch_2f:
	mode = (mode |  sun::nio::fs::UnixConstants::S_IWUSR);
	goto label_goto_5;
	// 536    .line 56
label_pswitch_33:
	mode = (mode |  sun::nio::fs::UnixConstants::S_IXUSR);
	goto label_goto_5;
	// 544    .line 57
label_pswitch_37:
	mode = (mode |  sun::nio::fs::UnixConstants::S_IRGRP);
	goto label_goto_5;
	// 552    .line 58
label_pswitch_3b:
	mode = (mode |  sun::nio::fs::UnixConstants::S_IWGRP);
	goto label_goto_5;
	// 560    .line 60
label_pswitch_3f:
	mode = (mode |  sun::nio::fs::UnixConstants::S_IROTH);
	goto label_goto_5;
	// 568    .line 61
label_pswitch_43:
	mode = (mode |  sun::nio::fs::UnixConstants::S_IWOTH);
	goto label_goto_5;
	// 576    .line 62
label_pswitch_47:
	mode = (mode |  sun::nio::fs::UnixConstants::S_IXOTH);
	goto label_goto_5;
	// 584    .line 65
	// 585    .end local v1    # "perm":Ljava/nio/file/attribute/PosixFilePermission;
label_cond_4b:
	return mode;
	// 589    .line 53
	// 590    :pswitch_data_4c
	// 591    .packed-switch 0x1
	// 592        :pswitch_27
	// 593        :pswitch_37
	// 594        :pswitch_3b
	// 595        :pswitch_47
	// 596        :pswitch_3f
	// 597        :pswitch_43
	// 598        :pswitch_33
	// 599        :pswitch_2b
	// 600        :pswitch_2f
	// 601    .end packed-switch

}


