#ifndef __android_icu_impl_PropsVectors__
#define __android_icu_impl_PropsVectors__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\PropsVectors.smali
#include "java2ctype.h"
#include "android.icu.impl.IntTrie.h"
#include "android.icu.impl.PropsVectors_S_CompactHandler.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class PropsVectors : public java::lang::Object {
protected:
private:
	int columns;
	bool isCompacted;
	int maxRows;
	int prevRow;
	int rows;
	std::shared_ptr<int[]> v;
	bool virtual areElementsSame(int index1,std::shared_ptr<int[]> target,int index2,int length);
	int virtual findRow(int rangeStart);
public:
	static int ERROR_VALUE_CP;
	static int FIRST_SPECIAL_CP;
	static int INITIAL_ROWS;
	static int INITIAL_VALUE_CP;
	static int MAX_CP;
	static int MAX_ROWS;
	static int MEDIUM_ROWS;
	static int _get0(std::shared_ptr<android::icu::impl::PropsVectors> _this);
	static int _get1(std::shared_ptr<android::icu::impl::PropsVectors> _this);
	PropsVectors(int numOfColumns);
	void virtual compact(std::shared_ptr<android::icu::impl::PropsVectors_S_CompactHandler> compactor);
	std::shared_ptr<android::icu::impl::IntTrie> virtual compactToTrieWithRowIndexes();
	int virtual getCompactedArray();
	int virtual getCompactedColumns();
	int virtual getCompactedRows();
	int virtual getRow(int rowIndex);
	int virtual getRowEnd(int rowIndex);
	int virtual getRowStart(int rowIndex);
	int virtual getValue(int c,int column);
	void virtual setValue(int start,int end,int column,int value,int mask);
public:
	virtual ~PropsVectors(){
	}

}; // class PropsVectors
}; // namespace android::icu::impl

#endif //__android_icu_impl_PropsVectors__

