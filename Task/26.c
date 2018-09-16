/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0x4
80483f3:mov    DWORD PTR [ebp-0x4],0xa
80483fa:shl    DWORD PTR [ebp-0x4],1
80483fd:mov    eax,0x0
8048402:leave  
8048403:ret
 */

int main(){
	int var = 0xa;
	
	var = var << 1;	//	00001010 >> 1 = 00010100 = 20
	
	return 0;
}

// shl 運算元左移
