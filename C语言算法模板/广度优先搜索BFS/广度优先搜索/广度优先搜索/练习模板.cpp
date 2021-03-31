//// 2021Äê3.31Á·Ï°
//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//#include<cstdio>
//#include<queue>
//using namespace std;
//int maze[5][5],vis[5][5];
//int dir[4][2] = { {0,1},{0,-1},{-1,0},{1,0} };
//struct node {
//	int x, y;
//};
//node pre[5][5];
//
//void BFS() {
//	queue<node>que;
//	node head;
//	head.x = head.y = 0;
//	que.push(head);
//	vis[head.x][head.y] = 1;
//	while (!que.empty()) {
//		node now = que.front();
//		que.pop();
//		if (now.x == 4 && now.y == 4) {
//			return;
//		}
//		for (int i = 0; i < 4; i++) {
//			node next;
//			next.x = now.x + dir[i][0];
//			next.y = now.y + dir[i][1];
//			if (next.x >= 0 && next.x < 5 && next.y >= 0 && next.y < 5 && !maze[next.x][next.y] && !vis[next.x][next.y])
//			{
//				vis[next.x][next.y] = vis[now.x][now.y]+1;
//				que.push(next);
//				pre[next.x][next.y] = now;
//			}
//		}
//	}
//}
//void print(node cur) {
//	if (cur.x == 0 && cur.y == 0)
//	{
//		printf("(0, 0)\n");
//		return;
//	}
//	print(pre[cur.x][cur.y]);
//	printf("(%d, %d)\n", cur.x, cur.y);
//}
//
//int main() {
//	for (int i = 0; i < 5; i++)
//		for (int j = 0; j < 5; j++)
//			scanf("%d", &maze[i][j]);
//	BFS();
//	node ed;
//	ed.x = ed.y = 4;
//	print(ed);
//	return 0;
//}