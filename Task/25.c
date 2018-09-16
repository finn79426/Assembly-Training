/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0x4	// 申請 4 byte 空間
80483f3:mov    DWORD PTR [ebp-0x4],0xa	// int
80483fa:sar    DWORD PTR [ebp-0x4],1
80483fd:mov    eax,0x0
8048402:leave  
8048403:ret  
 */

int main(){
	int var = 0xa;
	
	var = var >> 1;	//	1010 >> 1 = 0101 = 5
	
	return 0;
}

// sar 運算元右移
