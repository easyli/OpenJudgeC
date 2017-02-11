#include<string>
#include<iostream>
using namespace std;
inline void Flip(string &s, int i) //翻转
{
	s[i-1] = (s[i-1] == '1') ? '0' : '1';
	s[i] = (s[i] == '1') ? '0' : '1';
	s[i+1] = (s[i+1] == '1') ? '0' : '1';
}
int main()
{
	string a, b;
	cin >> a >> b;
	
	int len = a.size();
	int count1 = 0, count2 = 0;
	int flag = 0;
	
	string tmp = a;
	
	int i;
	for(i = 1; i < len - 1; i++)   //第一个按钮没有改变
	{
		if(tmp[i-1] != b[i-1])
		{
			Flip(tmp, i);
			count1++;
		}
	}
	if(tmp[i-1] != b[i-1])    //单独考虑最后一个按钮，减少判断
	{
		tmp[i-1] = (tmp[i-1] == '1') ? '0' : '1';
		tmp[i] = (tmp[i] == '1') ? '0' : '1';
		count1++;
	}
	if(tmp == b)
	{
		flag = 1;
	}
	
	tmp = a;
	
	tmp[0] = (tmp[0] == '1')? '0' : '1';   //第一个按钮状态改变
	tmp[1] = (tmp[1] == '1')? '0' : '1';
	count2++;
    for(i = 1; i < len-1; i++)
    {
    	if(tmp[i-1] != b[i-1])
    	{
    		Flip(tmp, i);
    		count2++;
		}
	}
	if(tmp[i-1] != b[i-1])
	{
		tmp[i-1] = (tmp[i-1] == '1') ? '0' : '1';
		tmp[i] = (tmp[i] == '1') ? '0' : '1';
		count2++;
	}
	if(tmp == b)
	{
		flag = 1;
	}
	
	if(flag)
	{
		cout << min(count1, count2) << endl; 
	}
	else
	{
		cout << "impossible" << endl; 
	}
	return 0;
}