/*
080483ed <main>:
 80483ed:       push   ebp
 80483ee:       mov    ebp,esp
 80483f0:       sub    esp,0x4 // 申請 4 byte
 80483f3:       mov    DWORD PTR [ebp-0x4],0x0 // int
 80483fa:       mov    eax,ds:0x804a01c // 進 GDB 去看 0x804a01c，發現在 .data (已初始化的全域變數)，資料是 0x64
 80483ff:       mov    DWORD PTR [ebp-0x4],eax
 8048402:       mov    eax,0x0
 8048407:       leave  
 8048408:       ret    
*/

int global_var = 0x64; // 100

int main(){
	int var = 0;
	var = global_var;
	
	return 0;
}

