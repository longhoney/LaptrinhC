#include <stdio.h>  //khai bao thu vien. Day la dong "header file"
/* Cac dac ta cua kieu du lieu - Format Specifier for some data types
int = %d
long long = %lld
float = %f
double = %lf
char = %c
*/

int main(){
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

//lenh doc du lieu nhap tu ban phim//    
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
//Tam bo qua de thuc hien bai toan khac//
	/*
	int e, f, g;
	char chr1;
	printf("Nhap gia tri cua bien e, f, g va ky tu muon in tai day: ");
	scanf("%d %d %d %c", &e, &f, &g, &chr1); //ham scanf thuoc thu vien stdio.h
	printf("Gia tri cua bien e, f, g vua nhap: %d %d %d\n", e, f, g); //--> It works!
	printf("Ky tu ban vua nhap la: %c\n", chr1);
	*/
//====================================================================================//
	//Toan tu = Operator. Toan tu toan hoc = Arithemetic Operator: +, -, *, /, %(chia co so du)
		//Toan tu nay con duoc goi la toan tu 2 ngoi, la 2 so can thuc hien phep tinh
		//Toan tu dac biet ma ta da su dung ngay tu dau bai: dau "=", toan tu gan = assignment operator
			//Vd: a = b. Khong phai so sanh a va b bang nhau, ma la may tinh se lay gia tri cua bien b gan cho bien a
	
	int h = 300, i = 200;
	int tong = h + i;
	int hieu = h - i;
	int tich = h * i;
	int thuong = h / i; //phan so nguyen, khong phai so du (int = integer la kieu du lieu cua so nguyen)
	int thuong_du = h % i; //lay so du
	//doi kieu du lieu de lay luon ket qua co so du: float hoac double
	float thuong_1 = h / i; //may tinh van tra ve ket qua la 1.00 thay vi la 1.50 nhu ta mong muon
	float thuong_2 = h % i; //du thu qua phep chia co so du, may tinh van tra ve 100.00	
		//ly do la vi ta chua khai bao 2 bien theo kieu so thuc 300.000, ta dang khai bao kieu so nguyen 300
		//de khai bao nhanh 2 bien theo kieu so thuc, ta dang thuc hien ep' kieu?, thuc hien ngay trong phep tinh.
	float thuong_3 = (float)h / i; //ep' kieu? #1, ket qua tra ve la 1.50
	float thuong_4 = 1.0 * h / i; //ep' kieu? #2, ket qua tra ve la 1.50
		//1.0 >< 1, may tinh thuc hien phep toan tu trai sang phai, trong ngoac truoc.
	printf("Thuc hien cac phep tinh co ban:\n");
	printf("Tong = %d, Hieu = %d, Tich = %d, Thuong = %d, So du cua thuong = %d\n", tong, hieu, tich, thuong, thuong_du);
	printf("Thuong lay so du 1 = %.2f\n", thuong_1);
	printf("Thuong lay so du 2 = %.2f, Thuong lay so du 3 = %.2f, Thuong lay so du 4 = %.2f\n", thuong_2, thuong_3, thuong_4);
	
	//Mot luu y khac cho viec thuc hien ep' kieu?//
	int j = 100000000; //10^8
	int k = 1000000; //10^6
	int tich_1 = j * k; //ket qua mong muon la 10^14
	long long tich_2 = j * k; //bi tran so --> doi kieu du lieu long long
	printf("Tich = %d, ", tich_1); //ket qua tra ve sai
	printf("Tich = %lld, ", tich_2); //ket qua tra ve sai
		//kieu int chi luu duoc so 2 ty, con ket qua thuc te den 10^14 --> bi tran so
		//du doi kieu du lieu du ket qua phep tich, nhung do ta khai bao la 2 bien int tich voi nhau
			//nen ngay tu luc thuc hien phep tich, no da bi tran (chua kip chuyen doi sang long long) tai khau gan vao ket tich_2
		//tiep tuc su dung ep' kieu?
	long long tich_3 = (long long)j * k; //ep' kieu? #1
	long long tich_4 = 1ll * j * k;//ep' kieu? #2, mot lo lo nhan j nhan k
	printf("Tich = %lld, ", tich_3);
	printf("Tich = %lld, ", tich_4);
	
	
	
	
	
	
	
	
	
	//return 0;     //optional
		//du xoa lenh return 0; nay may tinh van tu tra ve gia tri khong. 
		//vi ham main() duoc khai bao trong kieu du lieu int, la kieu du lieu co tra ve gia tri
}

//0. Save moi sau khi sua code
//1. Complie = Bien dich. Tab "Execute" - "Compile"
//2. Run. Tab "Execute" - "Run"
//3. Noi dung se hien thi tren man hinh console. Moi lan Run la mot man hinh console hien ra.
