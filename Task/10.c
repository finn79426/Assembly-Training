/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0x8	// 申請 8 byte 空間
80483f3:mov    DWORD PTR [ebp-0x8],0x0	// int var1
80483fa:mov    DWORD PTR [ebp-0x4],0x0	// int var2
8048401:jmp    804840d <main+0x20>
8048403:mov    eax,DWORD PTR [ebp-0x4]
8048406:add    DWORD PTR [ebp-0x8],eax
8048409:add    DWORD PTR [ebp-0x4],0x1
804840d:cmp    DWORD PTR [ebp-0x4],0x9
8048411:jle    8048403 <main+0x16>
8048413:mov    eax,0x0
8048418:leave  
8048419:ret   
 */

/*	直接解讀版	*/
/**************************

int main(){
	int var1 = 0;	// [ebp-0x8]
	int var2 = 0;	// [ebp-0x4]
	
	if(var2 <= 9){		// 雖然是 jle，但也可看作 var < 10，看自己方便
		var1 += var2;	// var2 跟 eax 一樣，所以直接拿 var2
		var2 += 1
	} // repeat until [var = 9] ...
	
	return 0;
}

***************************/

/*	迴圈整理版	*/
int main(){
	int var1 = 0;
	int var2 = 0;
	
	for(var2; var2 <= 9; var2++){
		var1 += var2;
	}
	
	return 0;
}


