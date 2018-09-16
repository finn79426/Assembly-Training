/*
080483ed <main>:
 80483ed:       push   ebp
 80483ee:       mov    ebp,esp
 80483f0:       sub    esp,0x4	// 申請 4 byte
 80483f3:       mov    DWORD PTR [ebp-0x4],0xa	// int
 80483fa:       cmp    DWORD PTR [ebp-0x4],0x63
 80483fe:       jg     804840d <main+0x20>
 8048400:       cmp    DWORD PTR [ebp-0x4],0x32
 8048404:       jle    804840d <main+0x20>
 8048406:       mov    eax,0x0
 804840b:       jmp    8048412 <main+0x25>
 804840d:       mov    eax,0x0
 8048412:       leave  
 8048413:       ret    
 */


// 這題有很多種解法，可以挑戰解出來的 C code 越少越好
// 不過我這邊只挑我覺得容易讀的 (´・ω・`)


int main(){
	int var = 0xa; // 10
	if(var > 0x63){
		return 0;
	}
	
	if(var < 0x32){ // 也可以用 else if，因為被比較數都是 var
		return 0;
	}
	
	return 0;
}
