#include <stdio.h>  //khai bao thu vien. Day la dong "header file"
/* Cac dac ta cua kieu du lieu - Format Specifier for some data types
int = %d
long long = %lld
float = %f
double = %lf
char = %c
*/

int main(){
//====================================lenh in du lieu ra man hinh console====================================//
	printf("Lenh in ra man hinh: C Programming !\n"); //ham printf thuoc thu vien stdio.h
		//them dau cach dang sau %d de tao khoang trang
		//them \n de xuong dong

	int b = 7; //khong gan gia tri ban dau cho bien b
	printf("Kieu du lieu int: b = %d\n",b); //ket qua tra ve se la gia tri rac (so ngau nhien)
		//den %d se goi gia tri cua b ra. tuong tu cho cac lenh printf phia duoi
	
	int testInteger = 1000;
	printf("Kieu du lieu int: Number = %d\n", testInteger);
	
	long long dientich = 76425548455;
    printf("Nhap sai dac ta: Dien tich d = %d\n", dientich); //neu nhap sai dac ta thanh %d thi se bi tran so, khong in dung ket qua da khai bao
	printf("Nhap dung dac ta: Dien tich lld = %lld\n", dientich);
	
	float number1 = 13.56791234;
	printf("Kieu du lieu float: number1 = %f\n", number1); //float luu duoc 6 chu so sau dau phay
	printf("Kieu du lieu float, chi lay 2 chu so sau dau phay: number1 .2f = %.2f\n", number1); //chi dinh hien thi 2 chu so sau dau phay
	
    double number2 = 12.09038556420919;
    printf("Kieu du lieu double: number2 = %lf\n", number2); //double mac dinh luu duoc 6 chu so sau dau phay, toi da 14 chu so
	printf("Kieu du lieu double: number2 = %.10lf\n", number2); //chi dinh hien thi 10 chu so sau dau phay --> diem khac biet giua "float" va "double"
	printf("Kieu du lieu double: number2 = %.14lf\n", number2);
	
    char chr = 'a'; //ky tu nen de trong dau nhay don
	    //noi dung la chuoi ky tu (string) thi de trong dau nhay kep
	    //khong the khai bao la char chr = a;
	    //kieu du lieu char chi luu duoc 1 ky tu. du khai bao nhieu ky tu, may tinh cung chi luu lai ky tu dau tien
	printf("Kieu du lieu char: character = %c\n",chr);
	
	int m = 100, n = 200, o = 300;
	printf("In xuong dong 3 bien:\n");
	printf("m = %d\n",m);
	printf("n = %d\n",n);
	printf("o = %d\n",o);
	printf("In hang ngang 3 bien:\n");
	printf("m = %d, n = %d, o = %d\n", m, n, o); //dung 3 dac ta, in ra 3 bien cung mot kieu du lieu trong cung 1 dong
		//liet ke ten bien theo thu tu minh muon in ra
	
	//dung 3 dac ta, in ra 3 bien khac kieu du lieu trong cung 1 dong
	printf("In hang ngang 2 bien khac kieu du lieu:\n");
	printf("b = %d, number1 = %f, Dien tich lld = %lld\n", b, number1, dientich);

	return 0;     //optional
		//du xoa lenh return 0; nay may tinh van tu tra ve gia tri khong. 
		//vi ham main() duoc khai bao trong kieu du lieu int, la kieu du lieu co tra ve gia tri
}

//0. Save moi sau khi sua code
//1. Complie = Bien dich. Tab "Execute" - "Compile"
//2. Run. Tab "Execute" - "Run"
//3. Noi dung se hien thi tren man hinh console. Moi lan Run la mot man hinh console hien ra.
