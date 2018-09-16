/*
080483ed <main>:
 80483ed:       push   ebp
 80483ee:       mov    ebp,esp
 80483f0:       sub    esp,0xc // 申請 12 byte 空間
 80483f3:       mov    DWORD PTR [ebp-0xc],0x0	// int
 80483fa:       mov    DWORD PTR [ebp-0x4],0x0	// int
 8048401:       jmp    8048424 <main+0x37>
 8048403:       mov    DWORD PTR [ebp-0x8],0x0
 804840a:       jmp    8048410 <main+0x23>
 804840c:       add    DWORD PTR [ebp-0x8],0x1
 8048410:       cmp    DWORD PTR [ebp-0x8],0x9
 8048414:       jle    804840c <main+0x1f>
 8048416:       mov    eax,DWORD PTR [ebp-0x4]
 8048419:       imul   eax,DWORD PTR [ebp-0x8]
 804841d:       mov    DWORD PTR [ebp-0xc],eax
 8048420:       add    DWORD PTR [ebp-0x4],0x1
 8048424:       cmp    DWORD PTR [ebp-0x4],0x9
 8048428:       jle    8048403 <main+0x16>
 804842a:       mov    eax,0x0
 804842f:       leave  
 8048430:       ret    
 */

/*
int main(){
	int var1 = 0; // [ebp-0xc]
	int var2 = 0; // [ebp-0x4]
	
	if (var2 <= 0x9){
		int var3 = 0;	// [ebp-0x8]
		if(var3 <= 0x9){
			var3 += 1;
		} // repeat this cmp until var3 == 0x9...
		int eax = var2;
		eax *= var3;
		var1 = eax;
		var2 += 1;
	} // repeat this cmp until var2 == 0x9
	
	return 0;
}
*/

/*
int main(){
	int var1 = 0; // [ebp-0xc]
	int var2 = 0; // [ebp-0x4]
	
	for(var2; var2<=0x9; var2++){
		int var3 = 0;	// [ebp-0x8]
		for(var3; var3<=0x9; var3++){} // Do nothing...
		var1 = var2 * var3;
	}
	
	return 0;
}
*/

int main(){
	int var = 0;	// [ebp-0xc]
	int i;			// [ebp-0x4]
	int j;			// [ebp-0x8]
	
	for(i=0; i<=0x9; i++){
		for(j=0; j<=0x9; j++){}
		var = i * j;
	}
	
	return 0;
}
