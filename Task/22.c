/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0x8	// 申請 8 byte 空間
80483f3:mov    DWORD PTR [ebp-0x4],0x4	// int
80483fa:mov    DWORD PTR [ebp-0x8],0x0	// int
8048401:mov    eax,DWORD PTR [ebp-0x4]
8048404:or     eax,0x1
8048407:mov    DWORD PTR [ebp-0x8],eax
804840a:mov    eax,0x0
804840f:leave  
8048410:ret 
 */

int main(){
	int var1 = 4;
	int var2 = 0;
	
	var2 = var1 | 1;	// 0100 | 0001 = 0101 = 5
	
	return 0;
}
