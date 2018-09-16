/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0xc	// 申請 12 byte 空間
80483f3:mov    DWORD PTR [ebp-0x4],0x5	// int
80483fa:mov    DWORD PTR [ebp-0x8],0x5	// int
8048401:mov    DWORD PTR [ebp-0xc],0x0	// int
8048408:mov    eax,DWORD PTR [ebp-0x4]
804840b:cdq    
804840c:idiv   DWORD PTR [ebp-0x8]
804840f:mov    DWORD PTR [ebp-0xc],eax
8048412:mov    eax,0x0
8048417:leave  
8048418:ret 
 */

int main(){
	int var1 = 5; // eax
	int var2 = 5;
	int var3 = 0;

	var3 = var1 / var2;
	
	return 0;
}
	// cdq 解釋：
	// x86 規定若除數是 32 bit，則被除數被要求一定要是 64 bit。
	// 通過 cdq 可以將 32 bit 的 eax 跟 edx 擴展，變成 64 bit 來用
	// 擴展時，edx 代表 eax 的高位，也就是說長這樣 = EDX:EAX
	// 執行 cdq 的時候，當 eax > 0x7fffffff 時(>= 0x80000000)，則 edx = 0xffffffff
	// 當 eax <= 0x7fffffff 時，則 edx = 0x00000000 (0x0)
	// 提醒： -1 表示為 0xffffffff, -2 表示為 0xfffffffe, 以此類推
	
	// after cdq -> EDX:EAX = 0x00000000:0x000000005
	// idiv 	 -> CPU 運算結果: 商數放 eax, 餘數放 edx
	
	// 提醒2：上面的例子我們可以知道若 cdq 之前 eax 是大於 0x7fffffff，則這個除法的被除數就是負數啦XD
	// 之所以要用 cdq 擴展就是因為避免出現 -10 / 2 != -5 的尷尬狀況，我們來實作不擴展的狀況看看：
	// 0x00000000:0xfffffff6 / 0x00000002 = 0x00000000:0x7ffffffb
	// 若不使用 cdq 擴展的話，此時 edx 就不是 0xffffffff，程式也不會知道 -10 是負數，而是會把 -10 看作 4294967286！
