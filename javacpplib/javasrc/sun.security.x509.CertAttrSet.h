#ifndef __sun_security_x509_CertAttrSet__
#define __sun_security_x509_CertAttrSet__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertAttrSet.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"

namespace sun::security::x509{
template <typename T>
class CertAttrSet : public java::lang::Object {
protected:
private:
public:
	void _delete_(std::shared_ptr<java::lang::String> var0);
	void encode(std::shared_ptr<java::io::OutputStream> var0);
	std::shared_ptr<java::lang::Object> get(std::shared_ptr<java::lang::String> var0);
	std::shared_ptr<java::util::Enumeration<T>> getElements();
	std::shared_ptr<java::lang::String> getName() = 0;
	void set(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::Object> var1);
	std::shared_ptr<java::lang::String> toString() = 0;
	CertAttrSet(){ };
	virtual ~CertAttrSet(){ };

}; // class CertAttrSet
}; // namespace sun::security::x509
// .method public abstract delete(Ljava/lang/String;)V
template <typename T>
void sun::security::x509::CertAttrSet<T>::_delete_(std::shared_ptr<java::lang::String> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 020        value = {
	// 021            Ljava/security/cert/CertificateException;,
	// 022            Ljava/io/IOException;
	// 023        }
	// 024    .end annotation

}
// .method public abstract encode(Ljava/io/OutputStream;)V
template <typename T>
void sun::security::x509::CertAttrSet<T>::encode(std::shared_ptr<java::io::OutputStream> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 029        value = {
	// 030            Ljava/security/cert/CertificateException;,
	// 031            Ljava/io/IOException;
	// 032        }
	// 033    .end annotation

}
// .method public abstract get(Ljava/lang/String;)Ljava/lang/Object;
template <typename T>
std::shared_ptr<java::lang::Object> sun::security::x509::CertAttrSet<T>::get(std::shared_ptr<java::lang::String> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 038        value = {
	// 039            Ljava/security/cert/CertificateException;,
	// 040            Ljava/io/IOException;
	// 041        }
	// 042    .end annotation

}
// .method public abstract getElements()Ljava/util/Enumeration;
template <typename T>
std::shared_ptr<java::util::Enumeration<T>> sun::security::x509::CertAttrSet<T>::getElements()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 047        value = {
	// 048            "()",
	// 049            "Ljava/util/Enumeration",
	// 050            "<TT;>;"
	// 051        }
	// 052    .end annotation

}
// .method public abstract set(Ljava/lang/String;Ljava/lang/Object;)V
template <typename T>
void sun::security::x509::CertAttrSet<T>::set(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::Object> var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 060        value = {
	// 061            Ljava/security/cert/CertificateException;,
	// 062            Ljava/io/IOException;
	// 063        }
	// 064    .end annotation

}

#endif //__sun_security_x509_CertAttrSet__

