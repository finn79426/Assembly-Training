/*
  80483ed:push   ebp
  80483ee:mov    ebp,esp
  80483f0:sub    esp,0xc	// 申請 12 byte 空間	
  80483f3:mov    DWORD PTR [ebp-0x4],0x5	// int
  80483fa:mov    DWORD PTR [ebp-0x8],0x5	// int
  8048401:mov    DWORD PTR [ebp-0xc],0x0	// int
  8048408:mov    eax,DWORD PTR [ebp-0x8]
  804840b:mov    edx,DWORD PTR [ebp-0x4]
  804840e:sub    edx,eax
  8048410:mov    eax,edx
  8048412:mov    DWORD PTR [ebp-0xc],eax
  8048415:mov    eax,0x0
  804841a:leave  
  804841b:ret    
 */

int main(){
	int var1 = 5;	// edx
	int var2 = 5;	// eax
	int var3 = 0;
	
	var3 = var1 - var2;
	
	return 0;	
}
