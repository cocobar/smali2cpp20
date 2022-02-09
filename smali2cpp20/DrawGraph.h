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
	void Start(int mode = 0, std::string tempFile = "./temp.tp");//��ʼ��ͼ��֮ǰ��Ҫѡ����ͼģʽ��DrawGraph::DiGraph or DrawGraph::Graph
	int Create_Node(std::string node_name, std::string label = "", std::string sharp = "box");//����һ���ڵ㣬���ҽڵ�����Ϊnode_name
	int Create_Node(int node_name);//����һ���ڵ㣬�ڵ���Ϊһ����������
	int Find_Node(std::string node_name);//���ݽڵ������ҵ��ڵ��ţ������ϲ㿪����ʱ�򣬲���Ҫ����ÿ���������Ľڵ�ľ������֣�ֻ��Ҫ�����ּ��ɣ�
	std::string Find_Node(int node_id);//ͨ���ڵ�ı���ҵ��ڵ������
	int Create_Relationship(std::string start_name, std::string end_name, int mode = 0, std::string label = "", std::string color = "black");//����һ���ߣ�mode������ͼ������ͼ���֣�label�Ǳ��ϵı�ǩ
	int Create_Relationship(int start_id, int end_id, int mode = 0, std::string label = "");//���ݽڵ��Ŵ����ߣ���Ȼ�Ƿ����ϲ㿪��
	void End();//��ʾ���ͼ������
	void Print_Dot(std::string file_path);//��.dot�ļ����ɵ�ָ����Ŀ¼�£�����ʹ�ú��˹����ġ�file_path�������".dot"��β��
	void Get_Png(std::string file_path);//��ͼ��file_path��png��β����ʾ��������ͼƬĿ¼

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


