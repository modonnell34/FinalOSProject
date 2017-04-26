#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <vector>
#include <iostream>

using namespace std;

struct File {
   string name;
   string mode;
   int size;
   struct File * next;
};

class Directory {

	public:

		Directory();
		Directory(string name);
		~Directory();

		string getName() const;
		int getSize() const;
		int getnumBlocks();
		
		void setSize(int s);
		void setName(string name);
		void setnumBlocks(int n);

		int increaseSize(int num);
		int decreaseSize(int num);


		vector<string> getFiles(File * head)const;
 		File * createFile(int,string);	
		void AddFile (File * & head, string num, int size);
		void InsertBeforeValue (File * & head, string name, string beforeValue);
		bool DeleteFile (File * & firstPtr, string name);
	

		File * Search (File * firstNodePtr, string name);
		File * Search (File * firstNodePtr, string name,
                File * & prevNode);
	private:
		int dsize;
		int numBlocks;
		string  dname;


};

#endif
