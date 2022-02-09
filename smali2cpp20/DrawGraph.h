#pragma once

#include <map>
#include <string>
#include <fstream>
#include "stringhelper.h"


class DrawGraph
{
private:
	std::map<std::string, int> str2int;
	std::map<int, std::string> int2str;
	std::string temp_file = "./temp.tp";
	int node_cnt = 0, rela_cnt = 0;

public:
	static const int DiGraph = 1, Graph = 0;
	void Start(int mode = 0, std::string tempFile = "./temp.tp");//开始画图的之前需要选定画图模式，DrawGraph::DiGraph or DrawGraph::Graph
	int Create_Node(std::string node_name, std::string label = "", std::string sharp = "box");//创建一个节点，并且节点名称为node_name
	int Create_Node(int node_name);//创建一个节点，节点名为一个整数数字
	int Find_Node(std::string node_name);//根据节点名称找到节点编号（方便上层开发的时候，不需要存下每个创建过的节点的具体名字，只需要存数字即可）
	std::string Find_Node(int node_id);//通过节点的编号找到节点的名称
	int Create_Relationship(std::string start_name, std::string end_name, int mode = 0, std::string label = "", std::string color = "black");//创建一个边，mode是有向图和无向图两种，label是边上的标签
	int Create_Relationship(int start_id, int end_id, int mode = 0, std::string label = "");//根据节点编号创建边，仍然是方便上层开发
	void End();//表示这个图画完了
	void Print_Dot(std::string file_path);//把.dot文件生成到指定的目录下，方便使用和人工更改。file_path最好是以".dot"结尾。
	void Get_Png(std::string file_path);//画图，file_path以png结尾，表示最后输出的图片目录

	//std::ofstream ifile(temp_file.c_str(), std::ofstream::app);
	//ifile << std::string("}");

	


	DrawGraph& addSubgraph(std::string strName) {
		std::ofstream ifile(temp_file.c_str(), std::ofstream::app);
		ifile << std::string("\tsubgraph ") << strName << std::string(" {\n");
		return *this;
	}
	DrawGraph& addLable(std::string strName) {
		std::ofstream ifile(temp_file.c_str(), std::ofstream::app);
		ifile << std::string("\t\tlabel = \"") << strName << std::string("\";\n");
		return *this;
	}
	DrawGraph& addStyle(std::string strName) {
		std::ofstream ifile(temp_file.c_str(), std::ofstream::app);
		ifile << std::string("\t\tstyle=") << strName << std::string(";\n");
		return *this;
	}
	DrawGraph& addColor(std::string strName) {
		std::ofstream ifile(temp_file.c_str(), std::ofstream::app);
		ifile << std::string("\t\tcolor=") << strName << std::string(";\n");
		return *this;
	}

	DrawGraph& addNode(std::string node_name, std::string label = "", std::string sharp = "box") {
		std::ofstream ifile(temp_file.c_str(), std::ofstream::app);
		if (label != std::string("")) {
			ifile << stringhelper::formatString("\t\t%s [shape=%s, label = \"%s\"];\n", node_name.c_str(), sharp.c_str(), label.c_str());
		}
		else {
			ifile << stringhelper::formatString("\t\t%s [shape=%s];\n", node_name.c_str(), sharp.c_str());
		}
		return *this;
	}

	DrawGraph& addContext(std::string strName) {
		std::ofstream ifile(temp_file.c_str(), std::ofstream::app);
		ifile << strName << "\n";
		return *this;
	}
	void endSubgraph() {
		std::ofstream ifile(temp_file.c_str(), std::ofstream::app);
		ifile << std::string("\t}\n");
	}
};


