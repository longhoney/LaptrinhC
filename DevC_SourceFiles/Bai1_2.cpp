#include <stdio.h>  //khai bao thu vien. Day la dong "header file"
/* Cac dac ta cua kieu du lieu - Format Specifier for some data types
int = %d
long long = %lld
float = %f
double = %lf
char = %c
*/

int main(){
//====================================Toan tu = Operator================================================//
	/*Toan tu toan hoc = Arithemetic Operator: +, -, *, /, %(chia co so du)
	//Toan tu nay con duoc goi la toan tu 2 ngoi, la 2 so can thuc hien phep tinh (a+b)
	//Toan tu dac biet ma ta da su dung ngay tu dau bai: dau "=", toan tu gan = assignment operator
		//Vd: a = b. Khong phai so sanh a va b bang nhau, ma la may tinh se lay gia tri cua bien b gan cho bien a
	*/
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
	long long tich_4 = 1ll * j * k;//ep' kieu? #2, chu thich: mot lo lo nhan j nhan k
	printf("Tich = %lld, ", tich_3);
	printf("Tich = %lld, \n", tich_4);
	
	//Theo cac ly thuyet toan hoc, khong the lay mot so chia cho khong
	int p = 0;
	float thuong_5 = (float)k / p;
	printf("Thuong = %2.f\n", thuong_5);
			//====================================//
	
	//Toan tu tang va giam = Increment (++) and Decrement (--) Operators
	//Toan tu nay con goi la toan tu mot ngoi: chi ap dung voi mot bien. Vi du: bien a tang dan
	
	int q = 100, r = 100;
	//tang bien q len mot don vi
	q++; //tang sau (dat toan tu tang o phia sau bien), co nghia la tinh toan xong roi moi thuc hien phep tinh
	--r; //giam truoc (tuong tu), giam truoc co nghia la giam gia tri cua bien roi moi thuc hien phep tinh
	printf("q da tang len 1 don vi: %d\n", q);
	printf("r da giam xuong 1 don vi: %d\n", r);
	
	int a = 100;
	int b = a++; //lieu b co = 101? --> b = 100
		//may tinh se gan b = a = 100 truoc. Sau do moi tang gia tri cua bien a thanh 101, tu luu vao bien a. 
		//Day goi la tang sau.
	printf("Gia tri cua bien a: %d, ", a);
	printf("Gia tri cua bien b = %d, ", b);
	int tong_1 = a + b;
	printf("a + b = %d\n", tong_1); //Thu phep tinh a + b
	
	int c = ++a; //may tinh se tang bien a len 102 roi moi gan vao bien c
	printf("Gia tri cua bien c: %d\n", c);
			//====================================//
			
	//Toan tu gan = Assignment Operators. Cong dung cua toan tu nay la cho phep go tat phep tinh trong cac bai toan phuc tap
		//a = a + b == a+=b
		//a = a - b == a-=b
		//a = a * b == a*=b //a sao bang b duoc =))
		//a = a / b == a/=b
		//a = a % b == a%=b
			//====================================//
	
	//Toan tu quan he = Relational Operators. Cong dung la mo ta phep so sanh trong toan hoc. 
		//Day cung la toan tu hai ngoi (a < b). No chi tra ve gia tri: True/ False
			//Trong ngon ngu lap trinh C, khong co kieu du lieu luan ly = boolean (phai them thu vien ben ngoai vao)
			//Trong ngon ngu lap trinh C, dung luon kieu du lieu integer de xac dinh tinh dung sai
			//Trong ngon ngu lap trinh C, 0 la sai, TAT CA so khac 0 la dung. Thuong nguoi muon dung so 1 de bieu dien trang thai dung.
			
		// >: lon hon, <: nho hon, >=: lon hon hoac bang, <=: nho hon hoac bang
		//"==" day la so sanh bang. "=" day la toan tu gan
		//"!=" day la so sanh khong bang (so sanh khac). "!" bieu hien cho su doi lap
		
		//https://www.programiz.com/c-programming/c-operators#:~:text=C%20Relational%20Operators
	int kq = a < b;
	printf("Kiem tra a < b: %d\n", kq);
	
	int s = 200, t = 200;
	int kq_1 = s <= t; //lieu s co <= t khong?
	printf("Kiem tra s <= t: %d, ", kq_1); //dung mot truong hop thu hai, dau bang
	int kq_2 = s != t; //lieu s co khac t khong?
	printf("Kiem tra s khac t: %d, ", kq_2);
	
	return 2;
}
