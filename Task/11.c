/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0x8	// 申請 8 byte 空間
80483f3:mov    DWORD PTR [ebp-0x4],0x0	// int
80483fa:mov    DWORD PTR [ebp-0x8],0x0	// int
8048401:jmp    804840d <main+0x20>
8048403:mov    eax,DWORD PTR [ebp-0x4]
8048406:add    DWORD PTR [ebp-0x8],eax
8048409:add    DWORD PTR [ebp-0x4],0x1
804840d:cmp    DWORD PTR [ebp-0x4],0x63
8048411:jle    8048403 <main+0x16>
8048413:mov    eax,0x0
8048418:leave  
8048419:ret 
 */

/*
int main(){
	int var1 = 0;
	int var2 = 0;
	
	if (var1 <= 0x63){
		var2 += var1;
		var1 += 1
	} // repeat until var1 == 0x63 ...
}
*/

/*
int main(){
	int var1 = 0;
	int var2 = 0;
	
	for (int i=var1; i <= 0x63; i++){
		var2 += var1;
	}
}
*/

// 其實跟上一題一模一樣，只是是用 while 去達成迴圈這件事...

int main(){
	int var1 = 0;
	int var2 = 0;
	while(var1 <= 0x63){
		var2 += var1;
		var2++
	}
	return 0;
}
