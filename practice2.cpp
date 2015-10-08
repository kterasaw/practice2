// practice2.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i,n;
	printf("This is a square calcration program.\n");
	printf("input n->");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d %d\n",i,i*i);
	}
	getchar();
	getchar();
	return 0;
}

