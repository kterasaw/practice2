// practice2.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i,n;
	printf("input n->");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d\n",i);
	}
	getchar();
	getchar();
	return 0;
}

