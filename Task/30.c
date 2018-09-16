/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0x8	// 8 byte
80483f3:mov    WORD PTR [ebp-0x2],0x1	// short
80483f9:movsx  eax,WORD PTR [ebp-0x2]	// 因 eax = 4byte, short = 2byte, 所以需要 movsx 來 padding 0
80483fd:mov    DWORD PTR [ebp-0x8],eax	// int
8048400:mov    eax,0x0
8048405:leave  
8048406:ret 
*/

/*
 以數字 135 (0x0087)，做範例
 signed 使用 movsx 做有號判斷，若數字為負，則 padding 結果為 0xffff0087；若數字為正，則結果為 0x0000000087
 unsigned 使用 movzx 直接 padding 0，結果為 0x00000087。因為 unsigned 不會有負數
*/

int main(){
	short int var1 = 0x1;
	int var2 = int(var1);
	
	return 0;
}
