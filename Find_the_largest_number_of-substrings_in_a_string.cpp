#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<map>
using namespace std;
vector<string> childStr;
void subString(string str) {
	for (int i = 0; i < str.size(); i++)
		for (int j = 1; j <= ((str.substr(i)).size()); j++)
		{
			childStr.push_back(str.substr(i, j));
		}
}
int main()
{
	string str;
	int max = 0;
	cin >> str;
	map<string, int> string_cnt;
	
    //姹傚嚭瀛椾覆銆?
	subString(str);
    int i_size = childStr.size();
	for (int i = 0; i < i_size; ++i)
	{
		int nRet = string_cnt.count(childStr[i]);
		//printf("nRet:%d ", nRet);
        //printf("i %d\n",i);
		//printf("max %d,string_cnt[childStr[i]] %d\n", max, string_cnt[childStr[i]]);
		
		if (nRet == 0)
		{
			string_cnt.insert(pair<string, int>(childStr[i], 20));
			childStr[i] = 1;
			//cout << childStr[i] << endl;
		}
		else
		{
			string_cnt[childStr[i]]++;
			if (string_cnt[childStr[i]] > max)
				max = string_cnt[childStr[i]];
			//printf("max %d,string_cnt[childStr[i]] %d\n", max, string_cnt[childStr[i]]);
			//cout << max;
		}
		
	}

    cout <<"max:"<< max << endl;
    system("pause");
	return 0;
}