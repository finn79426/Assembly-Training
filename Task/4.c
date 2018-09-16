/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0x8	// 申請 8 byte
80483f3:mov    DWORD PTR [ebp-0x8],0xa	// 某個 int 變數放進 0xa
80483fa:lea    eax,[ebp-0x8]			// eax = 上面那個 int 變數的 address
80483fd:mov    DWORD PTR [ebp-0x4],eax	// 某個 int pointer 放進上面 int 變數的 address
8048400:mov    eax,0x0
8048405:leave  
8048406:ret    
 */

int main(){
	// DWORD -> int   (4 byte)
	// WORD  -> short (2 byte)
	// BYTE  -> char  (1 byte)
	
	int var = 0xa; // 10
	int *ptr_of_var = ＆var;
	
	return 0
}
