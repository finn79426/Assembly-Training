/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0x4	// 申請 4 byte
80483f3:mov    DWORD PTR [ebp-0x4],0xa	// int 
80483fa:cmp    DWORD PTR [ebp-0x4],0x63	// int
80483fe:jg     8048407 <main+0x1a>
8048400:mov    eax,0x0
8048405:jmp    804840c <main+0x1f>
8048407:mov    eax,0x0
804840c:leave  
804840d:ret    
 */

int main(){
	int var = 0xa;	// 10
	if(var > 0x63){	// 99，也就是 var 要大於等於100才會 jg
		return 0;
	}
	return 0;
}	
