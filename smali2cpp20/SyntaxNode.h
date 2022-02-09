#ifndef __SyntaxNode_H__
#define __SyntaxNode_H__

#include "BaseObject.h"
#include <vector>
#include <memory>
#include <map>
#include "SmaliCodeline.h"
#include "DrawGraph.h"
#include <regex>

struct tryCatchRecordItem {
	std::string strCatch;
	std::string strCatchType;
	std::string strStartTag;
	std::string strEndTag;
	std::string strGotoTag;
};

class CSyntaxNode : public CBaseObject {

public:
	enum class eNextType {
		NEXT_NULL = 0,
		NEXT_LINEAR = 1,	// 只有一个出口
		NEXT_BRANCH_IFELSE,	// IF ELSE 分支
		NEXT_BRANCH_SWITCH,	// SWITCH 分支
		NEXT_END,
		NEXT_THROW,
		NEXT_FINISHED,
	};

	enum eNextType nextType;
	std::vector<int> listInstIndex;

public:

	CSyntaxNode(std::map<int, std::shared_ptr<CSmaliCodeline>>* mapCode) {
		listInstIndex.clear();
		startTag.clear();
		this->nextType = eNextType::NEXT_NULL;
		nextIfElse = { 0 };
		nextLinearNext = { 0 };
		nextSwitchCase = { 0 };
		nextTryCatch.ptrEnd = nullptr;
		nextTryCatch.ptrNext = nullptr;
		nextTryCatch.bLoopBack = 0;
		pMapCode = mapCode;
		bTryEnd = false;
		bTryBlockStart = false;
		strTryEndLabel.clear();
		strTryStartLabel.clear();
		strTryBlockStartLabel.clear();
	}

	int bTryEnd;
	std::string strTryEndLabel;
	int bTryBlockStart;
	std::string strTryBlockStartLabel;

	std::string strTryStartLabel;

	std::vector<std::string> startTag;		// 开始标签名,可能有好几个

	std::map<int, std::shared_ptr<CSmaliCodeline>>* pMapCode;

	std::string strAnnotationSignature;

	struct ifElse {
		int nBranchCodeIndex;	// 代码索引
		std::shared_ptr<CSyntaxNode> ptrIf;
		std::shared_ptr<CSyntaxNode> ptrElse;
	};

	struct linearNext {
		std::shared_ptr<CSyntaxNode> ptrNext;
	};

	struct caseItem {
		std::string strCase;
		std::string strTag;
		std::shared_ptr<CSyntaxNode> ptrCase;
	};

	struct switchCase {
		int nBranchCodeIndex;
		std::vector<struct caseItem> listCase;
		std::shared_ptr<CSyntaxNode> ptrNext;
	};

	// catch 条目 catchall
	struct catchItem {
		int bLoopBack;

		std::string strCatchLine;
		std::string strCatchType;

		std::string strStartTag;
		std::string strEndTag;
		std::string strGotoTag;

		std::shared_ptr<CSyntaxNode> ptrStart;
		std::shared_ptr<CSyntaxNode> ptrEnd;
		std::shared_ptr<CSyntaxNode> ptrGoto;
		std::shared_ptr<CSyntaxNode> ptrNext;
	};

	struct ifElse nextIfElse;
	struct linearNext nextLinearNext;
	struct switchCase nextSwitchCase;
	struct catchItem nextTryCatch;

	int getInDegree();
	int getOutDegree();
	std::vector<std::string> getListCatchTag();
	std::string getNodeName();
	std::string getNodeNameContext();

	std::vector<struct tryCatchRecordItem> listTryCatchRecord;
	std::vector<std::string> listTryCatchTag;

	std::vector<std::shared_ptr<CSyntaxNode>> listAllSyntaxNode;
	std::shared_ptr<CSyntaxNode> pRoot;

	std::vector<std::string> listTryCatchTmp;

	std::vector<std::shared_ptr<CSyntaxNode>> pListCatchRoot;

	std::shared_ptr<CSyntaxNode> findSyntaxNode(std::map<int, std::shared_ptr<CSmaliCodeline>>& mapCode, std::shared_ptr<CSyntaxNode> root, int nIndex);
	std::shared_ptr<CSyntaxNode> findSyntaxNode(std::map<int, std::shared_ptr<CSmaliCodeline>>& mapCode, std::shared_ptr<CSyntaxNode> root, std::string& strTag);
	std::shared_ptr<CSyntaxNode> findSyntaxNode_inner(std::map<CSyntaxNode*, std::shared_ptr<CSyntaxNode>>& listSearched, std::shared_ptr<CSyntaxNode> root, int nIndex);
	std::shared_ptr<CSyntaxNode> findSyntaxNode_inner2(std::map<CSyntaxNode*, std::shared_ptr<CSyntaxNode>>& listSearched, std::shared_ptr<CSyntaxNode> root, int nIndex);

	// 下一层的输出
	bool nextSyntaxNode(std::shared_ptr<CSyntaxNode>& super, std::map<int, std::shared_ptr<CSmaliCodeline>>& mapCode, std::map<int, std::shared_ptr<CSmaliCodeline>>::iterator itStart);

	// 创建一个语法图，并且返回根节点
	std::vector<std::shared_ptr<CSyntaxNode>> createSyntaxNodeRoot(std::map<int, std::shared_ptr<CSmaliCodeline>>& mapCode);

	// 分析一条的运行过程
	bool runOneThread(
		std::vector<int> runCodeList, std::map<CSyntaxNode*, int>& listCodeCover,
		std::map<CSyntaxNode*, int> listSearched, std::map<int, std::shared_ptr<CSmaliCodeline>>& mapCode,
		std::shared_ptr<CSyntaxNode> root,
		std::vector<std::vector<std::shared_ptr<CSyntaxNode>>>& listAll, std::vector<std::shared_ptr<CSyntaxNode>> listThread);

	// 遍历所有的语句执行逻辑
	std::vector<std::vector<std::shared_ptr<CSyntaxNode>>> runAllThread(
		std::map<int, std::shared_ptr<CSmaliCodeline>>& mapCode,
		std::vector<std::shared_ptr<CSyntaxNode>> listNode);

	static int hex_to_int(const std::string& input) {
		std::regex r("^\\s*([-+])?(0[xX])([0-9A-Fa-f]+)\\s*$");
		std::smatch m;
		bool bNeg = false;
		bool found = std::regex_search(input, m, r);

		if (found && m.size() == 4) {
			if (m[1] == "-") {
				bNeg = true;
			}
			std::string strHex = m[2];
			strHex.append(m[3]);
			int decimal = (int)std::strtoll(strHex.c_str(), nullptr, 16);

			std::string strDec;
			if (bNeg) {
				return (0 - decimal);
			}
			return decimal;
		}
		BaseAssert(0);
		return 0;
	}
};

#endif

