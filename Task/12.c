/*
080483ed <main>:
 80483ed:       push   ebp
 80483ee:       mov    ebp,esp
 80483f0:       sub    esp,0x4 // 申請 4 byte 空間
 80483f3:       mov    DWORD PTR [ebp-0x4],0x0 // int
 80483fa:       add    DWORD PTR [ebp-0x4],0x1
 80483fe:       cmp    DWORD PTR [ebp-0x4],0x63
 8048402:       jle    80483fa <main+0xd>
 8048404:       mov    eax,0x0
 8048409:       leave  
 804840a:       ret 
 */

/*
int main(){
	int var = 0;
	var += 1; // var++
	if(var <= 0x63){
		var += 1;
	} // repeat until var == 0x63...
	
}
*/


int main(){
	int var = 0;
	do{
		var += 1; // var++
	}while(var <= 0x63);
	
	return 0;
}
