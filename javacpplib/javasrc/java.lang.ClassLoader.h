#ifndef __java_lang_ClassLoader__
#define __java_lang_ClassLoader__
// H L:\smali2cpp20\x64\Release\out\java\lang\ClassLoader.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.Package.h"
#include "java.lang.String.h"
#include "java.lang.Void.h"
#include "java.net.URL.h"
#include "java.nio.ByteBuffer.h"
#include "java.security.ProtectionDomain.h"
#include "java.util.Enumeration.h"
#include "java.util.HashMap.h"
#include "java.util.List.h"
#include "java.util.Map.h"

namespace java::lang{
class ClassLoader : public java::lang::Object {
protected:
	ClassLoader();
	ClassLoader(std::shared_ptr<java::lang::ClassLoader> parent);
	static bool registerAsParallelCapable();
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual defineClass(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::nio::ByteBuffer> b,std::shared_ptr<java::security::ProtectionDomain> protectionDomain);
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual defineClass(std::shared_ptr<java::lang::String> name,std::shared_ptr<unsigned char[]> b,int off,int len);
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual defineClass(std::shared_ptr<java::lang::String> name,std::shared_ptr<unsigned char[]> b,int off,int len,std::shared_ptr<java::security::ProtectionDomain> protectionDomain);
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual defineClass(std::shared_ptr<unsigned char[]> b,int off,int len);
	std::shared_ptr<java::lang::Package> virtual definePackage(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> specTitle,std::shared_ptr<java::lang::String> specVersion,std::shared_ptr<java::lang::String> specVendor,std::shared_ptr<java::lang::String> implTitle,std::shared_ptr<java::lang::String> implVersion,std::shared_ptr<java::lang::String> implVendor,std::shared_ptr<java::net::URL> sealBase);
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual findClass(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::String> virtual findLibrary(std::shared_ptr<java::lang::String> libname);
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual findLoadedClass(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::net::URL> virtual findResource(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::net::URL>> virtual findResources(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual findSystemClass(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::Package> virtual getPackage(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::Package> virtual getPackages();
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual loadClass(std::shared_ptr<java::lang::String> name,bool resolve);
	void virtual resolveClass(std::shared_ptr<java::lang::Class<java::lang::Object>> c);
	void virtual setSigners(std::shared_ptr<java::lang::Class<java::lang::Object>> c,std::shared_ptr<std::vector<java::lang::Object>> signers);
private:
	long long allocator;
	long long classTable;
	std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::Package>> packages;
	std::shared_ptr<java::lang::ClassLoader> parent;
	ClassLoader(std::shared_ptr<java::lang::Void> unused,std::shared_ptr<java::lang::ClassLoader> parent);
	static std::shared_ptr<java::lang::Void> checkCreateClassLoader();
	static std::shared_ptr<java::lang::ClassLoader> createSystemClassLoader();
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual findBootstrapClassOrNull(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<java::net::URL> getBootstrapResource(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<java::util::Enumeration<java::net::URL>> getBootstrapResources(std::shared_ptr<java::lang::String> name);
public:
	std::shared_ptr<java::util::Map<java::util::List<java::lang::Class<java::lang::Object>>,java::lang::Class<java::lang::Object>>> proxyCache;
	static std::shared_ptr<java::lang::ClassLoader> _wrap0();
	static std::shared_ptr<java::lang::ClassLoader> getSystemClassLoader();
	static std::shared_ptr<java::net::URL> getSystemResource(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<java::io::InputStream> getSystemResourceAsStream(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<java::util::Enumeration<java::net::URL>> getSystemResources(std::shared_ptr<java::lang::String> name);
	void virtual clearAssertionStatus();
	std::shared_ptr<java::lang::ClassLoader> virtual getParent();
	std::shared_ptr<java::net::URL> virtual getResource(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::io::InputStream> virtual getResourceAsStream(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::net::URL>> virtual getResources(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual loadClass(std::shared_ptr<java::lang::String> name);
	void virtual setClassAssertionStatus(std::shared_ptr<java::lang::String> className,bool enabled);
	void virtual setDefaultAssertionStatus(bool enabled);
	void virtual setPackageAssertionStatus(std::shared_ptr<java::lang::String> packageName,bool enabled);
public:
	virtual ~ClassLoader(){
	}

}; // class ClassLoader
}; // namespace java::lang

#endif //__java_lang_ClassLoader__

