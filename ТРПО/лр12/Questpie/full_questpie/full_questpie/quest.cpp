#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


int quest(){
	system("chcp 1251 > nul");
	int count = 0;
	int des;
	int room = 0;
	
	string tag_name ="";
	
	bool tag_trig=false;
	bool tag_closed=true;
	bool text_closed = true;
	ifstream quest_file;
	vector <string> quest_lines;
	vector <int> shortcuts;
	string buff;
	string line_reader;
	

	
	
	cout << "enter path" << endl;
	cin >> buff;
	cout << buff << endl;
	quest_file.open(buff);
	
	if (!quest_file) { cout << "file not exist" << endl; system("pause"); return 0; }

	while (!quest_file.eof() )
	{
		//string buff;
		getline(quest_file, buff);
		quest_lines.push_back(buff);
		if (buff.find("`text") != -1) {
			
			if (text_closed) { shortcuts.push_back(count); }
			text_closed = !text_closed; }count++;
	}
	shortcuts.push_back(count);
	quest_file.close();

	if (shortcuts.size() % 2 > 0) { cout << "tag error"<<endl; system("pause"); return 0; }


	for (int pstr = 0; pstr < quest_lines.size(); pstr++)
	{
		if (quest_lines[pstr].find("`text")!=-1) { text_closed = !text_closed; }
		if (!text_closed&& (quest_lines[pstr].find("`") == -1)) { cout << quest_lines[pstr]<<endl; }
		if (text_closed) { cin >> buff;
		
		try { des = stoi(buff); }
		catch (invalid_argument) { des = 0; }

		if ((pstr+des)>=shortcuts[room+1] || des<=0)
		{
			pstr = shortcuts[room]-1;
		}
		else 
		{
			try{room = (stoi(quest_lines[pstr + des]) - 1); }
			catch(invalid_argument){ cout << "link error at "<<pstr+des+1 << endl; system("pause"); return 0; }
			pstr = shortcuts[room] - 1;
		}
		
		
		system("cls");
		

		}
	}



	
	
	return 0;
}
