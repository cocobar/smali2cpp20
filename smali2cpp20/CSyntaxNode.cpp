#include "CSyntaxNode.h"

#include "CSmaliCodeline.h"
#include <vector>
#include <map>
#include "instructionhelper.h"
//#include "DrawGraph.h"
#include "CBaseAssert.h"


std::shared_ptr<CSyntaxNode> CSyntaxNode::findSyntaxNode_inner2(std::map<CSyntaxNode*, std::shared_ptr<CSyntaxNode>>& listSearched,
	std::shared_ptr<CSyntaxNode> root, int nIndex) {
	std::shared_ptr<CSyntaxNode> ptr = findSyntaxNode_inner(listSearched, root, nIndex);

#if 1
	if (!ptr) {
		for (auto a = pListCatchRoot.begin(); a != pListCatchRoot.end(); a++) {
			ptr = findSyntaxNode_inner(listSearched, *a, nIndex);
			if (ptr) {
				return ptr;
			}
		}
	}
#endif

	return ptr;
}

std::shared_ptr<CSyntaxNode> CSyntaxNode::findSyntaxNode_inner(std::map<CSyntaxNode*, std::shared_ptr<CSyntaxNode>>& listSearched,
	std::shared_ptr<CSyntaxNode> root, int nIndex)
{
	std::shared_ptr<CSyntaxNode> p1(nullptr);

	if (!root) {
		return p1;
	}
	if (listSearched.find(root.get()) != listSearched.end()) {
		return p1;
	}

	for (auto a = listAllSyntaxNode.begin(); a != listAllSyntaxNode.end(); a++) {
		for (auto b = (*a)->listInstIndex.begin(); b != (*a)->listInstIndex.end(); b++) {
			if ((*b) == nIndex) {
				return (*a);
			}
		}
	}

	return p1;
}

// 根据代码行号查找
std::shared_ptr<CSyntaxNode> CSyntaxNode::findSyntaxNode(std::map<int, std::shared_ptr<CSmaliCodeline>>& mapCode, std::shared_ptr<CSyntaxNode> root, int nIndex) {
	std::map<CSyntaxNode*, std::shared_ptr<CSyntaxNode>> listSearched;
	return findSyntaxNode_inner2(listSearched, root, nIndex);
}

// 根据代码标签查找
std::shared_ptr<CSyntaxNode> CSyntaxNode::findSyntaxNode(std::map<int, std::shared_ptr<CSmaliCodeline>>& mapCode, std::shared_ptr<CSyntaxNode> root, std::string& strTag) {

	for (auto a = mapCode.begin(); a != mapCode.end(); a++) {
		if (a->second->symbols.size() == 1) {
			if (a->second->symbols[0] == strTag) {
				std::map<CSyntaxNode*, std::shared_ptr<CSyntaxNode>> listSearched;
				return findSyntaxNode_inner2(listSearched, root, a->first);
			}
		}
	}

#if 1
	if (strTag == ":return") {
		auto end = mapCode.rbegin();
		// end++;	// 直接上最后一行吧
		std::map<CSyntaxNode*, std::shared_ptr<CSyntaxNode>> listSearched;
		return findSyntaxNode_inner2(listSearched, root, end->first);
	}

	if (strTag == ":throw") {
		auto end = mapCode.rbegin();
		std::map<CSyntaxNode*, std::shared_ptr<CSyntaxNode>> listSearched;
		return findSyntaxNode_inner2(listSearched, root, end->first);
	}
#endif

	std::shared_ptr<CSyntaxNode> p2(nullptr);
	return p2;
}

// 给节点取个名字,用于 dot 语法标准
std::string CSyntaxNode::getNodeName() {
	std::string strName;
	for (auto a = this->listInstIndex.begin(); a != this->listInstIndex.end(); a++) {
		auto it = this->pMapCode->find(*a);
		if (it != this->pMapCode->end()) {
			strName.append(stringhelper::trim(it->second->symbols[0]));
			stringhelper::replace(strName, ".", "d_");
			stringhelper::replace(strName, ":", "l_");
			stringhelper::replace(strName, "-", "_");
			stringhelper::replace(strName, "/", "_");
			strName.append(stringhelper::formatString("_%d", it->first));
			return strName;
		}
		else {
			CBaseAssert(0);
		}
	}
	return strName;
}

// 给节点赋予内容,符合 dot 语法规则
std::string CSyntaxNode::getNodeNameContext() {
	std::string strName;

	std::vector<std::string> listCatchTag = this->getListCatchTag();

	std::string strCatch = "";
	for (auto b = listCatchTag.begin(); b != listCatchTag.end(); b++) {
		strCatch.append(*b).append(";");
	}
	strName.append(strCatch);
	strName.append("\\l");

	for (auto a = this->listInstIndex.begin(); a != this->listInstIndex.end(); a++) {
		auto it = this->pMapCode->find(*a);
		if (it != this->pMapCode->end()) {


			std::string strLine = stringhelper::formatString("%03d  ", it->first);
			std::string strCode = strLine + stringhelper::trim(it->second->strCode) + "{" + it->second->dumpAllRegs() + "}";
			stringhelper::replace(strCode, "\"", "\\\"");
			stringhelper::replace(strCode, "-", "_");
			stringhelper::replace(strCode, ":", "_");

			strName.append(strCode);
			strName.append("\\l");
		}
		else {
			CBaseAssert(0);
		}
	}
	return strName;
}

std::vector<std::string> CSyntaxNode::getListCatchTag(void) {
	std::string strName;
	int nInited = 0;
	std::vector<std::string> listCatchTag;

	for (auto a = this->listInstIndex.begin(); a != this->listInstIndex.end(); a++) {
		auto it = this->pMapCode->find(*a);
		if (it != this->pMapCode->end()) {
			std::string strCatch = "";
			for (auto b = it->second->listCatchTag.begin(); b != it->second->listCatchTag.end(); b++) {
				strCatch.append(*b).append(";");
			}
			if (nInited == 0) {
				strName = strCatch;
				listCatchTag = it->second->listCatchTag;
			}
			else {
				if (strName != strCatch) {
					CBaseAssert(0);
				}
			}
		}
		else {
			CBaseAssert(0);
		}
	}

	return listCatchTag;
}

// 创建一个语法图，并且返回根节点
// dot -Tpng "L:\smali2cpp\smali2cpp\checkAndPrint(I)Z.png.dot" -o sample.png 测试错误
std::vector<std::shared_ptr<CSyntaxNode>> CSyntaxNode::createSyntaxNodeRoot(std::map<int, std::shared_ptr<CSmaliCodeline>>& mapCode) {
	std::vector<std::shared_ptr<CSyntaxNode>> listRoot;
	std::shared_ptr<CSyntaxNode> root = std::make_shared<CSyntaxNode>(&mapCode);

	pRoot = root;

	// 这里开始处理异常捕获代码
	// 把所有的 catch 数据记录到 listTryCatchRecord 中
	listTryCatchRecord.clear();
	for (auto line = mapCode.begin(); line != mapCode.end(); line++) {
		if ((line->second->symbols[0] == ".catch") || (line->second->symbols[0] == ".catchall")) {
			struct tryCatchRecordItem tryItem;
			/*
	.catch Ljava/lang/Exception; {:try_start_61 .. :try_end_85} :catch_34
	.catch Ljava/lang/Exception; {:try_start_61 .. :try_end_85} :catch_34
	.catchall {:try_start_61 .. :try_end_85} :catchall_58
			*/
			tryItem.strCatch = line->second->symbols[0];
			if (line->second->symbols[0] == ".catch") {
				tryItem.strGotoTag = line->second->symbols[5];
				tryItem.strCatchType = line->second->symbols[1];
				tryItem.strStartTag = line->second->symbols[2].substr(1, line->second->symbols[2].size() - 1);
				tryItem.strEndTag = line->second->symbols[4].substr(0, line->second->symbols[4].size() - 1);
			}
			else if (line->second->symbols[0] == ".catchall") {
				tryItem.strGotoTag = line->second->symbols[4];
				tryItem.strCatchType = "";
				tryItem.strStartTag = line->second->symbols[1].substr(1, line->second->symbols[1].size() - 1);
				tryItem.strEndTag = line->second->symbols[3].substr(0, line->second->symbols[3].size() - 1);
			}
			else {
				CBaseAssert(0);
			}
			listTryCatchRecord.push_back(tryItem);
		}
	}

	// 把所有的 Catch 标签文本放入 listTryCatchTag 中 
	listTryCatchTag.clear();
	for (auto a = listTryCatchRecord.begin(); a != listTryCatchRecord.end(); a++) {
		int nFind = 0;
		for (auto b = listTryCatchTag.begin(); b != listTryCatchTag.end(); b++) {
			if (*b == a->strGotoTag) {
				nFind = 1;
				break;
			}
		}
		if (nFind == 0) {
			listTryCatchTag.push_back(a->strGotoTag);
		}
	}

	// 对所有的指令进行打标签
	listTryCatchTmp.clear();
	for (auto line = mapCode.begin(); line != mapCode.end(); line++) {
		if (line->second->symbols[0][0] == ':') {
			int nFindCatch = 0;
			int nFindCatchStart = 0;
			int nFindCatchEnd = 0;
			for (auto a = listTryCatchRecord.begin(); a != listTryCatchRecord.end(); a++) {
				if (a->strStartTag == line->second->symbols[0]) {
					if (a->strCatch == ".catch") {
						listTryCatchTmp.push_back(std::string("catch").append(a->strGotoTag));
					}
					else {
						listTryCatchTmp.push_back(std::string("catchall").append(a->strGotoTag));
					}
					nFindCatch += 1;
					nFindCatchStart += 1;
				}
			}
			if (nFindCatchStart > 0) {
				line->second->listCatchTag = listTryCatchTmp;
			}

			for (auto a = listTryCatchRecord.begin(); a != listTryCatchRecord.end(); a++) {
				if (a->strEndTag == line->second->symbols[0]) {
					nFindCatchEnd += 1;
				}
			}
			if (nFindCatchEnd > 0) {
				line->second->listCatchTag = listTryCatchTmp;
			}
			for (auto a = listTryCatchRecord.begin(); a != listTryCatchRecord.end(); a++) {
				if (a->strEndTag == line->second->symbols[0]) {
					nFindCatch += 1;

					std::string strTag = "";
					if (a->strCatch == ".catch") {
						strTag = std::string("catch").append(a->strGotoTag);
					}
					else {
						strTag = std::string("catchall").append(a->strGotoTag);
					}
					int nbErase = 0;
					for (auto c = listTryCatchTmp.begin(); c != listTryCatchTmp.end(); c++) {
						if (*c == strTag) {
							listTryCatchTmp.erase(c);
							nbErase = 1;
							break;
						}
					}
					CBaseAssert(nbErase == 1);
				}
			}

			if (nFindCatch == 0) {
				line->second->listCatchTag = listTryCatchTmp;
			}
		}
		else {
			line->second->listCatchTag = listTryCatchTmp;
		}
	}

	listAllSyntaxNode.clear();
	pListCatchRoot.clear();

	// 这里开始处理主逻辑
	CBaseAssert(mapCode.begin()->second->symbols[0] == ".method");
	root->listInstIndex.push_back(mapCode.begin()->first);
	root->nextType = eNextType::NEXT_LINEAR;
	listAllSyntaxNode.push_back(root);
	nextSyntaxNode(root->nextLinearNext.ptrNext, mapCode, ++mapCode.begin());

	// 开始处理 try Catch 的代码逻辑
	for (auto a = listTryCatchTag.begin(); a != listTryCatchTag.end(); a++) {
		std::string strCatchTag = *a;
		for (auto line = mapCode.begin(); line != mapCode.end(); line++) {
			if (line->second->symbols[0] == strCatchTag) {
				std::shared_ptr<CSyntaxNode> tryRoot = std::make_shared<CSyntaxNode>(&mapCode);
				tryRoot->strTryStartLabel = line->second->symbols[0];
				tryRoot->startTag.push_back(line->second->symbols[0]);
				tryRoot->listInstIndex.push_back(line->first);
				tryRoot->nextType = eNextType::NEXT_LINEAR;
				listAllSyntaxNode.push_back(tryRoot);
				nextSyntaxNode(tryRoot->nextLinearNext.ptrNext, mapCode, ++line);
				pListCatchRoot.push_back(tryRoot);
				break;
			}
		}
	}

	// 下面只是绘图
	listRoot.push_back(root);
	for (int i = 0; i < pListCatchRoot.size(); i++) {
		listRoot.push_back(pListCatchRoot[i]);
	}

	return listRoot;
}

// 下一层的输出
bool CSyntaxNode::nextSyntaxNode(std::shared_ptr<CSyntaxNode>& super, std::map<int, std::shared_ptr<CSmaliCodeline>>& mapCode, std::map<int, std::shared_ptr<CSmaliCodeline>>::iterator itStart) {
	std::shared_ptr<CSyntaxNode> root = std::make_shared<CSyntaxNode>(&mapCode);

	// 如果是出现循环,直接获得循环就返回
	std::shared_ptr<CSyntaxNode> pNextNode = findSyntaxNode(mapCode, pRoot, itStart->first);
	if (pNextNode) {
		super = pNextNode;
		return true;
	}

	//printf("SSSS %d\n", itStart->first);

	for (auto line = itStart; line != mapCode.end(); line++) {
		if (line->second->symbols.size() > 0) {
			if (line->second->symbols[0] == ".method") {
				CBaseAssert(0);
			}
			else if ((line->second->symbols[0] == ".end") && (line->second->symbols[1] == "method")) {
				root->listInstIndex.push_back(line->first);
				root->nextType = eNextType::NEXT_FINISHED;
			}
			else if ((line->second->symbols[0] == ".catch") || (line->second->symbols[0] == ".catchall")) {
				// .catch Ljava/lang/Exception; {:try_start_63 .. :try_end_6b} :catch_52
				root->listInstIndex.push_back(line->first);
			}
			else if (line->second->symbols[0] == ".line") {
				root->listInstIndex.push_back(line->first);
			}
			else if (line->second->symbols[0] == ".registers") {
				root->listInstIndex.push_back(line->first);
			}
			else if (line->second->symbols[0] == ".prologue") {
				root->listInstIndex.push_back(line->first);
			}
			else if (line->second->symbols[0] == ".param") {
				root->listInstIndex.push_back(line->first);
			}
			else if (line->second->symbols[0] == ".local") {
				root->listInstIndex.push_back(line->first);
			}
			else if (line->second->symbols[0] == ".restart") {
				// strCode = "    .restart local v0    # \"i\":I"
				root->listInstIndex.push_back(line->first);
			}
			else if (line->second->symbols[0] == ".end") {
				//strCode = "    .end local v0    # \"i\":I"
				root->listInstIndex.push_back(line->first);
			}
			else if (line->second->symbols[0][0] == '#') {
				//#unknown opcode : 0xfa
				root->listInstIndex.push_back(line->first);
			}
			else if (line->second->symbols[0] == ".annotation") {
				std::vector<std::string> listAnno;
				root->listInstIndex.push_back(line->first);
				listAnno.push_back(line->second->strCode);
				line++;
				for (auto ss = line; ss != mapCode.end(); ss++) {
					std::vector<std::string> listSymbol = ss->second->symbols;
					listAnno.push_back(ss->second->strCode);
					if ((listSymbol.size() >= 2) && ((listSymbol[0] == ".end") && (listSymbol[1] == "annotation"))) {
						line = ss;
						break;
					}
				}

				/*
					.annotation system Ldalvik/annotation/Signature;
						value = {
						"(TK;TD;)TV;"
					}
					.end annotation
				*/
				// [0] = "    .annotation system Ldalvik/annotation/Signature;"
				std::regex annotationStart("^\\s*(.annotation)\\s+(system|runtime|build)\\s+(L[\\w/$.-]+;)\\s*$");
				std::smatch m;
				bool found = std::regex_search(listAnno[0], m, annotationStart);
				if (found && (m.size() == 4)) {
					/*
	[00]:    .annotation system Ldalvik/annotation/Signature;
	[01]:.annotation
	[02]:system
	[03]:Ldalvik/annotation/Signature;

					*/

					if (m[3] == "Ldalvik/annotation/Signature;") {
						std::string strAnnotation;
						for (int i = 1; i < listAnno.size(); i++) {
							if ((i + 1) < listAnno.size()) {
								strAnnotation.append(stringhelper::trim(listAnno[i]));
							}
						}
						stringhelper::replace(strAnnotation, "\",\"", "");
						// strAnnotation = "value = {\"(TK;TD;)TV;\"}"
						// strAnnotation = "value = {\"<V:Ljava/lang/Object;>(TV;)Landroid/icu/impl/CacheValue<TV;>;\"}"
						std::regex getValue("^\\s*value\\s*=\\s*\\{\\s*\"([^\"]*)\"\\s*\\}\\s*$");	    // value = { } 切割出中间的
						found = std::regex_search(strAnnotation, m, getValue);
						if (found && (m.size() == 2)) {
							// [1] = "(TK;TD;)TV;"
							strAnnotationSignature = m[1];
						}
						else {
							CBaseAssert(0);
						}

					}
					else {
						//CBaseAssert(0);
					}
				}
				else {
					CBaseAssert(0);
				}

			}
			else if (line->second->symbols[0][0] == ':') {
				//strCode = "    .annotation system Ldalvik/annotation/Throws;"
				// 标记 catch 和 catch all
				// 查找是不是  catch 结束后

				//if (line->second->symbols[0] == ":goto_a4") {
				//	printf(":goto_a4");
				//}

				int nCatchEnd = 0;
				std::string strEndTag;
				int nCatchStart = 0;
				std::string strStartTag;
				for (auto a = listTryCatchRecord.begin(); a != listTryCatchRecord.end(); a++) {
					if (a->strStartTag == line->second->symbols[0]) {
						nCatchStart = 1;
						strStartTag = a->strStartTag;
						break;
					}
					if (a->strEndTag == line->second->symbols[0]) {
						nCatchEnd = 1;
						strEndTag = a->strEndTag;
						break;
					}
				}

				if (root->listInstIndex.size() > 0) {
					// 之前有数据的部分, 刚遇到 标签符号
					root->nextType = eNextType::NEXT_LINEAR;

					// 如果是catch结束标签,要属于上一个数据块
					if (nCatchEnd) {
						root->listInstIndex.push_back(line->first);
						root->bTryEnd = true;
						root->strTryEndLabel = strEndTag;

						super = root;
						listAllSyntaxNode.push_back(root);

						auto line_next = line;
						line_next++;
						std::shared_ptr<CSyntaxNode> pNext = findSyntaxNode(mapCode, pRoot, line_next->first);
						if (pNext) {
							root->nextLinearNext.ptrNext = pNext;
						}
						else {
							nextSyntaxNode(root->nextLinearNext.ptrNext, mapCode, line_next);
						}
					}
					else {
						super = root;
						listAllSyntaxNode.push_back(root);

						std::shared_ptr<CSyntaxNode> pNext = findSyntaxNode(mapCode, pRoot, line->second->symbols[0]);
						if (pNext) {
							root->nextLinearNext.ptrNext = pNext;	// 找到循环的
						}
						else {
							nextSyntaxNode(root->nextLinearNext.ptrNext, mapCode, line);
						}
					}

					return true;
				}
				else {
					// 全新的 Node 
					root->startTag.push_back(line->second->symbols[0]);
					root->listInstIndex.push_back(line->first);

					// 如果是开始,那么就记录开始
					if (nCatchStart) {
						root->bTryBlockStart = true;
						root->strTryBlockStartLabel = strStartTag;
					}

					// 如果是结束就保留全新的结束
					if (nCatchEnd) {
						root->nextType = eNextType::NEXT_LINEAR;
						root->bTryEnd = true;
						root->strTryEndLabel = strEndTag;

						super = root;
						listAllSyntaxNode.push_back(root);
						auto line_next = line;
						line_next++;
						nextSyntaxNode(root->nextLinearNext.ptrNext, mapCode, line_next);
						return true;
					}
				}
			}
			else {
				if (line->second->info) {
					if (line->second->info->instFlags & kUnconditional) {				// goto
						if ((int)line->second->symbols[0].find("goto") >= 0) {
							root->listInstIndex.push_back(line->first);
							root->nextType = eNextType::NEXT_LINEAR;
							super = root;
							listAllSyntaxNode.push_back(root);

							//if (line->first == 1847) {
							//	printf("here");
							//}

							std::shared_ptr<CSyntaxNode> pNext = findSyntaxNode(mapCode, pRoot, line->second->symbols[1]);
							if (pNext) { // 找到了标签一样的
								root->nextLinearNext.ptrNext = pNext;
								return true;
							}
							else {
								int nFindTag = 0;
								std::map<int, std::shared_ptr<CSmaliCodeline>>::iterator itTagStart = mapCode.begin();
								for (auto it_next = mapCode.begin(); it_next != mapCode.end(); it_next++) {
									if (it_next->second->symbols[0][0] == ':') {
										if (nFindTag == 0) {
											nFindTag = 1;
											itTagStart = it_next;
										}
									}
									else {
										nFindTag = 0;
									}
									if (line->second->symbols[1] == it_next->second->symbols[0]) {
										nextSyntaxNode(root->nextLinearNext.ptrNext, mapCode, itTagStart);
										return true;
									}
								}
							}

							CBaseAssert(0);
						}
						else {
							CBaseAssert(0);
						}
					}
					else if (line->second->info->instFlags == kReturn) {					// 程序中断 return
#if 0
						root->listInstIndex.push_back(line->first);
						root->nextType = eNextType::NEXT_END;
						super = root;
						listAllSyntaxNode.push_back(root);
#else
						root->listInstIndex.push_back(line->first);
						root->nextType = eNextType::NEXT_LINEAR;
						//root->nextType = eNextType::NEXT_END;
						super = root;
						listAllSyntaxNode.push_back(root);

#if 1
						std::string returnSymbol = std::string(":return");
						std::shared_ptr<CSyntaxNode> pNext = findSyntaxNode(mapCode, pRoot, returnSymbol);
						if (pNext) { // 找到了标签一样的
							root->nextLinearNext.ptrNext = pNext;
						}
						else
						{
							std::shared_ptr<CSyntaxNode> returnEnd = std::make_shared<CSyntaxNode>(&mapCode);
							returnEnd->startTag.push_back(returnSymbol);
							auto end = mapCode.rbegin();
							//end++;		// 最后一行不一定就是结束行，包含   throw v0		.end method
							returnEnd->listInstIndex.push_back(end->first);
							returnEnd->nextType = eNextType::NEXT_END;
							root->nextLinearNext.ptrNext = returnEnd;
						}
#endif

#endif
						return true;
					}
					else if (line->second->info->instFlags == kThrow) {					// 异常终止
#if 0
						root->listInstIndex.push_back(line->first);
						root->nextType = eNextType::NEXT_THROW;
						super = root;
#else
						root->listInstIndex.push_back(line->first);
						root->nextType = eNextType::NEXT_LINEAR;
						//root->nextType = eNextType::NEXT_END;
						super = root;
						listAllSyntaxNode.push_back(root);

#if 1
						// throw 不显示
						std::string returnSymbol = std::string(":throw");
						std::shared_ptr<CSyntaxNode> pNext = findSyntaxNode(mapCode, pRoot, returnSymbol);
						if (pNext) { // 找到了标签一样的
							root->nextLinearNext.ptrNext = pNext;
						}
						else
						{
							std::shared_ptr<CSyntaxNode> returnEnd = std::make_shared<CSyntaxNode>(&mapCode);
							returnEnd->startTag.push_back(returnSymbol);
							returnEnd->listInstIndex.push_back(mapCode.rbegin()->first);
							returnEnd->nextType = eNextType::NEXT_THROW;
							root->nextLinearNext.ptrNext = returnEnd;
						}
#endif
#endif
						return true;
					}
					else if (line->second->info->instFlags == (kContinue | kBranch)) {		// 条件分支 if
						if ((int)line->second->symbols[0].find("if-") >= 0) {

							// if 切到下一个节点上去
							if (root->listInstIndex.size() > 0) {
								root->nextType = eNextType::NEXT_LINEAR;
								super = root;
								listAllSyntaxNode.push_back(root);
								nextSyntaxNode(root->nextLinearNext.ptrNext, mapCode, line);
								return true;
							}

							std::string ifGotoLabel;
							if (line->second->info->instFormat == k21t) {		// op vAA, +BBBB
								ifGotoLabel = line->second->symbols[2];
							}
							else if (line->second->info->instFormat == k22t) {	// op vA, vB, +CCCC
								ifGotoLabel = line->second->symbols[3];
							}
							else {
								CBaseAssert(0);
							}
							root->listInstIndex.push_back(line->first);
							root->nextType = eNextType::NEXT_BRANCH_IFELSE;
							super = root;
							listAllSyntaxNode.push_back(root);
							std::shared_ptr<CSyntaxNode> pNext = findSyntaxNode(mapCode, pRoot, ifGotoLabel);
							if (pNext) { // 找到了标签一样的
								root->nextIfElse.ptrElse = pNext;
							}
							else {
								int nFindTag = 0;
								std::map<int, std::shared_ptr<CSmaliCodeline>>::iterator itTagStart = mapCode.begin();
								for (auto it_next = mapCode.begin(); it_next != mapCode.end(); it_next++) {
									if (it_next->second->symbols[0][0] == ':') {
										if (nFindTag == 0) {
											nFindTag = 1;
											itTagStart = it_next;
										}
									}
									else {
										nFindTag = 0;
									}
									if (ifGotoLabel == it_next->second->symbols[0]) {
										nextSyntaxNode(root->nextIfElse.ptrElse, mapCode, itTagStart);
										break;
									}
								}
							}
							auto line_next = line;
							line_next++;
							std::shared_ptr<CSyntaxNode> pNext2 = findSyntaxNode(mapCode, pRoot, line_next->first);
							if (pNext2) { // 找到了标签一样的
								root->nextIfElse.ptrIf = pNext2;
							}
							else {
								auto line_next = line;
								line_next++;
								nextSyntaxNode(root->nextIfElse.ptrIf, mapCode, line_next);
							}
							return true;
						}
						else {
							CBaseAssert(0);
						}
					}
					else if (line->second->info->instFlags == (kContinue | kSwitch)) {
						if ((int)line->second->symbols[0].find("-switch") > 0) {
							// switch 切到下一个节点上去
							if (root->listInstIndex.size() > 0) {
								root->nextType = eNextType::NEXT_LINEAR;
								super = root;
								listAllSyntaxNode.push_back(root);
								std::shared_ptr<CSyntaxNode> pNext = findSyntaxNode(mapCode, pRoot, line->first);
								if (pNext) {
									root->nextLinearNext.ptrNext = pNext;
								}
								else {
									nextSyntaxNode(root->nextLinearNext.ptrNext, mapCode, line);
								}
								return true;
							}

							std::string ifSwitchLabel;
							// packed-switch v1, :pswitch_data_98
							if (line->second->info->instFormat == k31t) {		// op vAA, +BBBB
								ifSwitchLabel = line->second->symbols[2];
							}
							else {
								CBaseAssert(0);
							}

							root->listInstIndex.push_back(line->first);
							root->nextType = eNextType::NEXT_BRANCH_SWITCH;
							super = root;
							listAllSyntaxNode.push_back(root);
							/*
								 :pswitch_data_98
								.packed-switch 0x1
									:pswitch_20
									:pswitch_44
									:pswitch_55
									:pswitch_5d
								.end packed-switch

								:sswitch_data_4e
								.sparse-switch
									0x1 -> :sswitch_25
									0x2 -> :sswitch_31
									0x4 -> :sswitch_2b
									0x8 -> :sswitch_3d
									0x10 -> :sswitch_37
								.end sparse-switch
							*/
							int nFindTag = 0;
							std::map<int, std::shared_ptr<CSmaliCodeline>>::iterator itTagStart = mapCode.begin();
							for (auto it_next = mapCode.begin(); it_next != mapCode.end(); it_next++) {
								if (it_next->second->symbols[0][0] == ':') {
									if (nFindTag == 0) {
										nFindTag = 1;
										itTagStart = it_next;
									}
								}
								else {
									nFindTag = 0;
								}
								if (ifSwitchLabel == it_next->second->symbols[0]) {
									int nCaseStartIndex = 0;
									int bPackedOrSparse = 0;
									for (auto it_switch = ++it_next; it_switch != mapCode.end(); it_switch++) {
										if (it_switch->second->symbols[0] == ".packed-switch") {
											nCaseStartIndex = hex_to_int(it_switch->second->symbols[1].c_str());
											bPackedOrSparse = 0;
											continue;
										}
										else if (it_switch->second->symbols[0] == ".sparse-switch") {
											bPackedOrSparse = 1;
											continue;
										}
										else if (it_switch->second->symbols[0] == ".end") {
											break;
										}
										else if (it_switch->second->symbols[0][0] == ':') {
											if (bPackedOrSparse == 0) {
												struct caseItem casei;
												casei.strCase = stringhelper::formatString("%d", nCaseStartIndex++);
												casei.strTag = it_switch->second->symbols[0];
												casei.ptrCase = nullptr;
												root->nextSwitchCase.listCase.push_back(casei);
											}
											else {
												CBaseAssert(0);
											}
										}
										else if (((int)it_switch->second->strCode.find("->")) > 0) {
											if (bPackedOrSparse == 1) {
												struct caseItem casei;

												CBaseAssert(it_switch->second->symbols.size() == 3);

												casei.strCase = it_switch->second->symbols[0];
												casei.strTag = it_switch->second->symbols[2];
												casei.ptrCase = nullptr;
												root->nextSwitchCase.listCase.push_back(casei);
											}
											else {
												CBaseAssert(0);
											}
										}
										else {
											CBaseAssert(0);
										}
									}
									break;
								}
							}

							if (root->nextSwitchCase.listCase.size() > 0) {
								for (auto casei = root->nextSwitchCase.listCase.begin(); casei != root->nextSwitchCase.listCase.end(); casei++) {
									std::shared_ptr<CSyntaxNode> pNext = findSyntaxNode(mapCode, pRoot, casei->strTag);
									if (pNext) { // 找到了标签一样的
										casei->ptrCase = pNext;
									}
									else {
										int nFindTag = 0;
										std::map<int, std::shared_ptr<CSmaliCodeline>>::iterator itTagStart = mapCode.begin();
										for (auto it_next = mapCode.begin(); it_next != mapCode.end(); it_next++) {
											if (it_next->second->symbols[0][0] == ':') {
												if (nFindTag == 0) {
													nFindTag = 1;
													itTagStart = it_next;
												}
											}
											else {
												nFindTag = 0;
											}
											if (casei->strTag == it_next->second->symbols[0]) {
												nextSyntaxNode(casei->ptrCase, mapCode, itTagStart);
												break;
											}
										}
									}
								}
							}

							std::shared_ptr<CSyntaxNode> pNext2 = findSyntaxNode(mapCode, pRoot, line->first + 1);
							if (pNext2) { // 找到了标签一样的
								root->nextSwitchCase.ptrNext = pNext2;
							}
							else {
								auto line_next = line;
								line_next++;
								nextSyntaxNode(root->nextSwitchCase.ptrNext, mapCode, line_next);
							}
							return true;

						}
						else {
							CBaseAssert(0);
						}
					}
					else if ((line->second->info->instFlags & kContinue)) {					// 继续往下执行
						root->listInstIndex.push_back(line->first);
					}
					else {
						CBaseAssert(0);
					}
				}
				else {
					CBaseAssert(0);
				}
			}
		}
	}

	super = root;
	listAllSyntaxNode.push_back(root);
	return true;
}

// 计算入度
int CSyntaxNode::getInDegree() {
	int nInDegree = 0;
	for (auto a = listAllSyntaxNode.begin(); a != listAllSyntaxNode.end(); a++) {
		switch (a->get()->nextType) {
		case eNextType::NEXT_LINEAR:// = 1,	// 只有一个出口
		{
			if (a->get()->nextLinearNext.ptrNext.get() == this) {
				nInDegree++;
			}
		}
		break;
		case eNextType::NEXT_BRANCH_IFELSE://,	// IF ELSE 分支
		{
			if (a->get()->nextIfElse.ptrElse.get() == this) {
				nInDegree++;
			}
			if (a->get()->nextIfElse.ptrIf.get() == this) {
				nInDegree++;
			}
		}
		break;
		case eNextType::NEXT_BRANCH_SWITCH://,	// SWITCH 分支
		{
			if (a->get()->nextSwitchCase.listCase.size() > 0) {
				for (auto casei = a->get()->nextSwitchCase.listCase.begin(); casei != a->get()->nextSwitchCase.listCase.end(); casei++) {
					if (casei->ptrCase.get() == this) {
						nInDegree++;
					}
				}
			}
			if (a->get()->nextSwitchCase.ptrNext.get() == this) {
				nInDegree++;
			}
		}
		break;
		case eNextType::NEXT_END://,
		{

		}
		break;
		case eNextType::NEXT_THROW:
		{

		}
		break;
		default:
			CBaseAssert(0);
		}
	}

	return nInDegree;
}

// 计算出度
int CSyntaxNode::getOutDegree() {
	switch (this->nextType) {
	case eNextType::NEXT_LINEAR:// = 1,	// 只有一个出口
	{
		if (this->nextLinearNext.ptrNext) {
			return 1;
		}
		return 0;
	}
	break;
	case eNextType::NEXT_BRANCH_IFELSE://,	// IF ELSE 分支
	{
		int i = 0;
		if (this->nextIfElse.ptrElse) {
			i++;
		}
		if (this->nextIfElse.ptrIf) {
			i++;
		}
		return i;
	}
	break;
	case eNextType::NEXT_BRANCH_SWITCH://,	// SWITCH 分支
	{
		int i = 0;
		if (this->nextSwitchCase.listCase.size() > 0) {
			for (auto casei = this->nextSwitchCase.listCase.begin(); casei != this->nextSwitchCase.listCase.end(); casei++) {
				if (casei->ptrCase) {
					i++;
				}
			}
		}
		if (this->nextSwitchCase.ptrNext) {
			i++;
		}

		return i;
	}
	break;
	case eNextType::NEXT_END://,
	{
		return 0;
	}
	break;
	case eNextType::NEXT_THROW:
	{
		return 0;
	}
	break;
	default:
		CBaseAssert(0);
	}
	return 0;
}

// 運行單個綫程
bool CSyntaxNode::runOneThread(
	std::vector<int> runCodeList, std::map<CSyntaxNode*, int>& listCodeCover,
	std::map<CSyntaxNode*, int> listSearched, std::map<int, std::shared_ptr<CSmaliCodeline>>& mapCode,
	std::shared_ptr<CSyntaxNode> root,
	std::vector<std::vector<std::shared_ptr<CSyntaxNode>>>& listAll, std::vector<std::shared_ptr<CSyntaxNode>> listThread) {

	if (!root) {
		return false;
	}

	// 插入覆盖率, listCodeCover 是全局的
	if (listCodeCover.find(root.get()) != listCodeCover.end()) {
		auto a = listCodeCover.find(root.get());
		a->second++;
	}
	else {
		listCodeCover.insert(std::make_pair(root.get(), 0));
	}

	// 当前线程的,当前线程搜索是否重复了
	for (auto a = listThread.begin(); a != listThread.end(); a++) {
		if (a->get() == root.get()) {
			std::vector<std::shared_ptr<CSyntaxNode>> listRepeatThread;
			for (auto b = a; b != listThread.end(); b++) {
				listRepeatThread.push_back(*b);
			}
			listThread.insert(listThread.end(), listRepeatThread.begin(), listRepeatThread.end());
			listAll.push_back(listThread);
			return true;
		}
	}

	// 从开始的位置并行线程
	// catch 使用的 try 之前的变量, try 内部的变量没有访问权限
	// 分支没有走过,那么就要走一遍,已经走过了就不用走了
	if (root->bTryBlockStart) {
		for (auto a = listTryCatchRecord.begin(); a != listTryCatchRecord.end(); a++) {
			if (a->strStartTag == root->strTryBlockStartLabel) {
				bool bFindTry = false;
				for (int i = 1; i < listAllSyntaxNode.size(); i++) {
					if (a->strGotoTag == listAllSyntaxNode[i]->strTryStartLabel) {
						if (listCodeCover.find(listAllSyntaxNode[i].get()) == listCodeCover.end()) {
							runOneThread(runCodeList, listCodeCover, listSearched, mapCode, listAllSyntaxNode[i], listAll, listThread);
						}
						bFindTry = true;
					}
				}
				CBaseAssert(bFindTry);
			}
		}
	}

	switch (root->nextType) {
	case eNextType::NEXT_LINEAR:// = 1,	// 只有一个出口
	{
		listThread.push_back(root);
		runOneThread(runCodeList, listCodeCover, listSearched, mapCode, root->nextLinearNext.ptrNext, listAll, listThread);
	}
	break;
	case eNextType::NEXT_BRANCH_IFELSE://,	// IF ELSE 分支
	{
		listThread.push_back(root);
		if (listCodeCover.find(root->nextIfElse.ptrIf.get()) == listCodeCover.end()) {
			runOneThread(runCodeList, listCodeCover, listSearched, mapCode, root->nextIfElse.ptrIf, listAll, listThread);
		}
		runOneThread(runCodeList, listCodeCover, listSearched, mapCode, root->nextIfElse.ptrElse, listAll, listThread);
	}
	break;
	case eNextType::NEXT_BRANCH_SWITCH://,	// SWITCH 分支
	{
		listThread.push_back(root);
		runOneThread(runCodeList, listCodeCover, listSearched, mapCode, root->nextSwitchCase.ptrNext, listAll, listThread);

		for (auto casei = root->nextSwitchCase.listCase.begin(); casei != root->nextSwitchCase.listCase.end(); casei++) {
			if (casei->ptrCase) {
				if (listCodeCover.find(casei->ptrCase.get()) == listCodeCover.end()) {
					runOneThread(runCodeList, listCodeCover, listSearched, mapCode, casei->ptrCase, listAll, listThread);
				}
			}
			else {
				CBaseAssert(0);
			}
		}
	}
	break;
	case eNextType::NEXT_END:
	{
		listThread.push_back(root);
		listAll.push_back(listThread);
		return true;
	}
	break;
	case eNextType::NEXT_THROW:
	{
		listThread.push_back(root);
		listAll.push_back(listThread);
		return true;
	}
	break;
	case eNextType::NEXT_FINISHED:
	{
		listThread.push_back(root);
		listAll.push_back(listThread);
		return true;
	}
	break;
	default:
		CBaseAssert(0);
	}

	return false;
}

// 遍历出所有的执行逻辑
// 只运行 listNode[0]
std::vector<std::vector<std::shared_ptr<CSyntaxNode>>> CSyntaxNode::runAllThread(
	std::map<int, std::shared_ptr<CSmaliCodeline>>& mapCode,
	std::vector<std::shared_ptr<CSyntaxNode>> listNode) {
	listAllSyntaxNode = listNode;
	std::vector<int> runCodeList;		// 调试用的
	std::map<CSyntaxNode*, int> listSearched;
	std::map<CSyntaxNode*, int> listCover;
	std::vector<std::vector<std::shared_ptr<CSyntaxNode>>> listAll;
	std::vector<std::shared_ptr<CSyntaxNode>> listItem;
	runOneThread(runCodeList, listCover, listSearched, mapCode, listNode[0], listAll, listItem);
	return listAll;
}

int CSyntaxNode::hex_to_int(const std::string& input) {
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
	CBaseAssert(0);
	return 0;
}