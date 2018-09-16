/*
080483ed <main>:
 80483ed:       push   ebp
 80483ee:       mov    ebp,esp
 80483f0:       sub    esp,0x8	// 申請 8 byte 
 80483f3:       mov    DWORD PTR [ebp-0x4],0xa 
 80483fa:       cmp    DWORD PTR [ebp-0x4],0x63
 80483fe:       jg     8048409 <main+0x1c>
 8048400:       mov    DWORD PTR [ebp-0x8],0x1
 8048407:       jmp    8048410 <main+0x23>
 8048409:       mov    DWORD PTR [ebp-0x8],0x0
 8048410:       mov    eax,0x0
 8048415:       leave  
 8048416:       ret  
 */

int main(){
	int var = 0xa; // 10
	if(var > 0x63){ // 99
		int var_2 = 0;
		return 0;
	}
	
	int var_2 = 1;
	
	return 0;
}
