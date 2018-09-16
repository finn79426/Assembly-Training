/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0x4	// 可看作程式要求 4 byte 空間，備用
80483f3:mov    DWORD PTR [ebp-0x4],0xa // 可看作在 ESP 現在的位置放入 0xa
80483fa:mov    eax,0x0
80483ff:leave  
8048400:ret    
 */

int main(){
	int num = 0xa;
	return 0;
}
