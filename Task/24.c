/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0x8	// 申請 8 byte 空間
80483f3:mov    DWORD PTR [ebp-0x4],0x4	// int
80483fa:mov    DWORD PTR [ebp-0x8],0x0	// int
8048401:mov    eax,DWORD PTR [ebp-0x4]
8048404:not    eax
8048406:mov    DWORD PTR [ebp-0x8],eax
8048409:mov    eax,0x0
804840e:leave  
804840f:ret  
 */

int main(){
	int var1 = 4;
	int var2 = 0;
	
	var2 = ~var1;	// NOT 4 = -5
	
	return 0;
}
