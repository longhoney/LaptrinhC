#include <stdio.h>  //khai bao thu vien. Day la dong "header file"
/* Cac dac ta cua kieu du lieu - Format Specifier for some data types
int = %d
long long = %lld
float = %f
double = %lf
char = %c
*/

int main(){
	//====================================lenh doc du lieu nhap tu ban phim====================================//    
	/*
	int e, f, g;
    printf("Nhap gia tri cua bien e, f, g tai day: \n"); //phai nhap xong gia tri thi moi lam viec khac duoc (bien dich va chay code moi)
    	//luc nhap gia tri cho tung bien, toi co the bam enter xuong dong roi nhap tiep neu muon
    	//lam sao de nhap gia tri bien e, xong xuong dong, nhap tiep gia tri bien f ...?
	//printf("Nhap gia tri cua bien f tai day: ");
	//printf("Nhap gia tri cua bien g tai day: ");
	scanf("%d %d %d", &e, &f, &g); //ham scanf thuoc thu vien stdio.h
		//dau & goi la toan tu dia chi. diem khac biet voi ham printf la ham scanf can su dung dau &
		//dau & truoc bien e co y nghia: sau khi nhap gia tri tu ban phim, may tinh tro toi dia chi cua bien e va luu lai du lieu
		//dang sau %d cuoi cung co dau khoang cach thi code se khong chay nhu y muon	
	printf("Gia tri cua bien e, f, g vua nhap: %d %d %d\n", e, f, g); //--> It works!
	//printf("Gia tri cua bien e vua nhap: %d\n", e);
	//printf("Gia tri cua bien e vua nhap: %d\n", e);
	
	char chr1;
	printf("Nhap ky tu muon in tai day: ");
	scanf("%c", &chr1);
	printf("Ky tu ban vua nhap la: %c\n", chr1);
	*/

	int e, f, g;
	char chr1;
	printf("Nhap gia tri cua bien e, f, g va ky tu muon in tai day: ");
	scanf("%d %d %d %c", &e, &f, &g, &chr1); //ham scanf thuoc thu vien stdio.h
	printf("Gia tri cua bien e, f, g vua nhap: %d %d %d\n", e, f, g); //--> It works!
	printf("Ky tu ban vua nhap la: %c\n", chr1);
	
	return 1;
}
