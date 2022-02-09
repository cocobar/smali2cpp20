#ifndef __android_icu_text_SCSU__
#define __android_icu_text_SCSU__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SCSU.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class SCSU : public java::lang::Object {
protected:
private:
public:
	static int ARMENIANINDEX;
	static int COMPRESSIONOFFSET;
	static int GREEKINDEX;
	static int HALFWIDTHKATAKANAINDEX;
	static int HIRAGANAINDEX;
	static int INVALIDCHAR;
	static int INVALIDWINDOW;
	static int IPAEXTENSIONINDEX;
	static int KATAKANAINDEX;
	static int LATININDEX;
	static int MAXINDEX;
	static int NUMSTATICWINDOWS;
	static int NUMWINDOWS;
	static int RESERVEDINDEX;
	static int SCHANGE0;
	static int SCHANGE1;
	static int SCHANGE2;
	static int SCHANGE3;
	static int SCHANGE4;
	static int SCHANGE5;
	static int SCHANGE6;
	static int SCHANGE7;
	static int SCHANGEU;
	static int SDEFINE0;
	static int SDEFINE1;
	static int SDEFINE2;
	static int SDEFINE3;
	static int SDEFINE4;
	static int SDEFINE5;
	static int SDEFINE6;
	static int SDEFINE7;
	static int SDEFINEX;
	static int SINGLEBYTEMODE;
	static int SQUOTE0;
	static int SQUOTE1;
	static int SQUOTE2;
	static int SQUOTE3;
	static int SQUOTE4;
	static int SQUOTE5;
	static int SQUOTE6;
	static int SQUOTE7;
	static int SQUOTEU;
	static int SRESERVED;
	static int UCHANGE0;
	static int UCHANGE1;
	static int UCHANGE2;
	static int UCHANGE3;
	static int UCHANGE4;
	static int UCHANGE5;
	static int UCHANGE6;
	static int UCHANGE7;
	static int UDEFINE0;
	static int UDEFINE1;
	static int UDEFINE2;
	static int UDEFINE3;
	static int UDEFINE4;
	static int UDEFINE5;
	static int UDEFINE6;
	static int UDEFINE7;
	static int UDEFINEX;
	static int UNICODEMODE;
	static int UQUOTEU;
	static int URESERVED;
	static std::shared_ptr<int[]> sOffsetTable;
	static std::shared_ptr<int[]> sOffsets;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::SCSU::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
	SCSU(){ };
	virtual ~SCSU(){ };

}; // class SCSU
}; // namespace android::icu::text

#endif //__android_icu_text_SCSU__

