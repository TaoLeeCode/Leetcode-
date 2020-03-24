#include <bits/stdc++.h>

using namespace std;

string findLongestWord(string s, vector<string>& d) {                                   /*从外部获取给定字符串s，字符串数组d*/
	string longestwordnow = "";                                                         /*初始定义迄今匹配最长字符串为空*/
	for (string member : d) {                                                           /*member依次取字符串数组里的每个字符串成员*/
		unsigned int i = 0, j = 0;
		if (longestwordnow.length() < member.length() || (longestwordnow.length() == member.length()) && (longestwordnow.compare(member) > 0)) {                                      /*迄今匹配的最长字符串长度更长，或者长度相同但最长字符串字典序更小*/
			while( i < s.length() && j < member.length()) {
				if (s[i] == member[j]) j++;
				i++;
				}			                                         			                                             	                                                                          
		}
		if (j == member.length()) longestwordnow = member;/*如果能匹配，就将迄今已匹配最长字符串更新为当前member所取的字符串*/
	}
	return longestwordnow;                                                              /*member取完字符串数组的字符串时，longestwordnow中存放的就是匹配的最长字符串*/
}

int main() {                                                                           /*主函数放最后就省去了前面对自定义函数的声明*/
	string s, str;
	printf("Please give a string:\n");
	cin >> s;
	vector <string> vec;
	printf("Please enter the number of strings in the array:\n");
	int n;
	cin >> n;
	printf("Please enter% d strings (separated by spaces):\n", n);
	for (int i = 0; i < n; i++) {
		cin >> str;                                                                     /*键盘获取字符串成员*/
		vec.push_back(str);                                                             /*将获取的字符串压入vector数组*/
	}
	cout << findLongestWord(s, vec);
}
