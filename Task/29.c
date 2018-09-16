/*
080483ed <myfunc>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:mov    eax,DWORD PTR [ebp+0xc]			// arg1
80483f3:mov    edx,DWORD PTR [ebp+0x8]			// arg2
80483f6:add    eax,edx
80483f8:pop    ebp		// ebp = old_ebp_addr
80483f9:ret

080483fa <main>:
80483fa:push   ebp
80483fb:mov    ebp,esp
80483fd:sub    esp,0x10	// 16 byte
8048400:mov    DWORD PTR [ebp-0x4],0x80483ed	// myfunc_addr
8048407:mov    DWORD PTR [esp+0x4],0x5			// arg1
804840f:mov    DWORD PTR [esp],0x5				// arg2
8048416:mov    eax,DWORD PTR [ebp-0x4]			// eax = myfunc_addr
8048419:call   eax								// push 0x804841b ; jmp eax
804841b:mov    DWORD PTR [ebp-0x8],eax
804841e:mov    eax,0x0
8048423:leave  
8048424:ret  
 */

int myfunc(int var1, int var2){
	return var1+var2
}

int main(){
	int result;
	int (*pfunc)(int, int);
	result = (*pfunc)(0x5, 0x5);
	
	return 0;
}
