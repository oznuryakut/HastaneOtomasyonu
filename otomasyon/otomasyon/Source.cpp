#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct sekreter {
	string kullaniciadi = "sekreter";
	int parola = 1234;
}s1;
struct doktor {
	string kullanicidok = "doktor";
	int parola_dok = 2852;

}d1;
string g;
char n;
int secim5;
string ilac, bolum;
string saat;
int input;
int TC;
string sgrt;
string ad, tarih;
string soyad;
int Tc;
string Tel;
int yas;
string cinsiyet;
string doktoradi;
string Teshis;
double tutar;
string a, b;
int c;
int d;
int giris;
string answer;

int main() {
	do {
		setlocale(LC_ALL, "Turkish");

		system("color A");
		cout << "\t \t \t Kim giriþ yapacak? (sekreter/doktor)" << endl << endl;
		cin >> answer;
		if (answer == "sekreter") {
			cout << "***************** SEKRETER GÝRÝÞÝ ******************" << endl;
			while (a != s1.kullaniciadi || c != s1.parola) {
				cout << "Kullanýcý adýnýzý giriniz." << endl << endl;
				cin >> a;
				cout << "Parolayý giriniz." << endl;
				cin >> c;
				if (a != s1.kullaniciadi || c != s1.parola) {
					cout << "Kullanýcý adý veya parola hatalý girildi" << endl << endl;


				}
				else {
					cout << "///////////////////////  SEKRETER SÝSTEME GÝRÝÞ YAPTI  /////////////////////////" << endl << endl;


					do
					{
						cout << "\t \t \t  Ne yapmak istiyorsunuz ?" << endl << endl;
						cout << " \t 1) Hasta kayýt ekleme " << endl << endl;
						cout << " \t 2) Randevu kayýt(HASTA KAYDI ÖNCEDEN YAPILMALI)  " << endl << endl;
						cout << " \t 3) Kayýtlý hastalarý görüntüle" << endl << endl;
						cout << " \t 4) Randevu listesi" << endl << endl;




						cin >> giris;
					} while (giris != 1 && giris != 2 && giris != 3 && giris != 4);

					if (giris == 1)
					{
						ofstream dosyayaz;
						dosyayaz.open("hastaListe.txt", ios::app);


						cout << "Hasta TC : " << endl;
						cin >> Tc;
						cout << "\nHasta Adý : ";
						cin >> ad;
						cout << "\nHasta Soyadý : ";
						cin >> soyad;
						cout << "\nHasta Yaþý : ";
						cin >> yas;
						cout << "\nHasta Tel : ";
						cin >> Tel;
						cout << "\nHasta Cinsiyet(k / e) : ";
						cin >> cinsiyet;

						cout << "Sigorta durumu ?(var/yok,,var ise  10 kayýt daha alýnacak)" << endl;
						string sgrt;
						cin >> sgrt;


						dosyayaz << Tc << "  " << ad << "  " << soyad << "  " << yas << "  " << Tel << "  " << cinsiyet << "  " << sgrt << " \n";
						if (sgrt == "var") {
							for (int i = 0; i < 10; i++) {
								ofstream dosyayazz;
								dosyayazz.open("hastaListe.txt");
								cout << "Hasta TC : " << endl;
								cin >> Tc;
								cout << "Hasta Adý : " << endl;
								cin >> ad;
								cout << "Hasta Soyadý : " << endl;
								cin >> soyad;
								cout << "Hasta Yaþý : " << endl;
								cin >> yas;
								cout << "Hasta Tel : " << endl;
								cin >> Tel;

								cout << "Hasta Cinsiyet (k / e) : " << endl;
								cin >> cinsiyet;


								cout << "Sigorta durumu ? (var/yok)" << endl;
								cin >> sgrt;
								if (sgrt == "var") {

									tutar = 0;
								}
								if (sgrt == "yok") {
									tutar = 150;
								}
								dosyayazz << Tc << "  " << ad << "  " << soyad << "  " << yas << "  " << Tel << "  " << cinsiyet << "  " << sgrt << " \n";
							}
							dosyayaz << Tc << "  " << ad << "  " << soyad << "  " << yas << "  " << Tel << "  " << cinsiyet << "  " << sgrt << " \n";
						}
					}

					if (giris == 2) {

						cout << "Randevu alma" << endl;

						cout << " Hasta TC :";
						cin >> TC;

						ifstream DosyaOku("hastaListe.txt");
						while (!DosyaOku.eof())
						{
							DosyaOku >> Tc >> ad >> soyad >> yas >> Tel >> cinsiyet >> sgrt;
							cout << endl << endl;
							if (TC == Tc)
							{
								cout << "\n Hasta Bilgileri \n";
								cout << "TC no : " << Tc << endl;
								cout << "Adý : " << ad << endl;
								cout << "Soyadý : " << soyad << endl;
								cout << "Yasý :" << yas << endl;
								cout << "Telefonu : " << Tel << endl;
								cout << "Cinsiyeti: " << cinsiyet << endl;
								cout << "Sigorta durumu : " << sgrt << endl;
								cout << "Randevu istiyor musunuz? (evet/hayýr)" << endl;
								cin >> g;

								if (g == "evet")
								{
									DosyaOku.close();
									ofstream DosyaYaz;
									DosyaYaz.open("randevuListe.txt", ios::app);

									cout << "\n Randevu Bilgileri \n";
									cout << "\n Tarih :";
									cin >> tarih;
									cout << "\n Saat : ";
									cin >> saat;
									cout << "Hangi polikinlik?" << endl;
									cout << "1)Göz" << endl;
									cout << "2)Dahiliye" << endl;
									cout << "3)KBB" << endl;
									cout << "4)Cildiye" << endl;
									cout << "5)Ortopedi" << endl;
									cout << "6)Çocuk_Hastalýklarý" << endl;
									cin >> secim5;
									if (secim5 == 1) {
										bolum = "Göz";
									}
									else if (secim5 == 2) {
										bolum = "Dahiliye";
									}
									else if (secim5 == 3) {
										bolum = "KBB";
									}
									else if (secim5 == 4) {
										bolum = "Cildiye";
									}
									else if (secim5 == 5) {
										bolum = "Ortopedi";
									}
									else if (secim5 == 6) {
										bolum = "Çocuk hastalýklarý";
									}
									else {
										cout << "yanlýþ girdiniz..." << endl;
									}
									cout << "Doktor Adý :";

									cin >> doktoradi;
									cout << "Sigorta durumu  : " << sgrt << endl;
									if (sgrt == "var") {
										cout << "Ödeme alýnmayacak." << endl;
										tutar = 0;
									}
									if (sgrt == "yok") {
										cout << "Ödenecek tutar 150 tl " << endl;
										cout << "Tutarý gir : ";
										cin >> tutar;
									}

									cout << "Randevu alýndý...";

									DosyaYaz << Tc << " " << tarih << " " << saat << ' ' << bolum << " " << doktoradi << " " << sgrt << ' ' << tutar << "\n";
									DosyaYaz.close();
								}
								else {

									break;
								}
							}

						}



					}
					if (giris == 3) {

						cout << " Kayýtlý hastalar liste " << endl;
						ifstream dosya_oku;

						dosya_oku.open("hastaListe.txt", ios::in);


						while (!dosya_oku.eof()) {
							dosya_oku >> TC >> ad >> soyad >> yas >> Tel >> cinsiyet >> sgrt;



							cout << TC << " \t " << ad << " \t " << soyad << " \t " << yas << "\t" << Tel << "\t" << cinsiyet << "\t" << sgrt << endl;



						}

						dosya_oku.close();

						system("pause");
					}

					if (giris == 4) {

						cout << "Randevu LÝstesi" << endl;

						ifstream oku;
						oku.open("randevuListe.txt", ios::in);

						while (!oku.eof())
						{
							oku >> Tc >> tarih >> saat >> bolum >> doktoradi >> sgrt >> tutar;
							cout << endl << endl;


							cout << "TC: " << Tc << endl;
							cout << "Tarih : " << tarih << endl;
							cout << "Saat : " << saat << endl;
							cout << "Polikinlik : " << bolum << endl;
							cout << "Doktor adý : " << doktoradi << endl;
							cout << "Sigorta durumu : " << sgrt << endl;
							cout << "Ödenecek Ücret : " << tutar << endl;



						}
						oku.close();
					}

				}


			}
		}
		else if (answer == "doktor") {


			while (b != d1.kullanicidok || d != d1.parola_dok) {
				cout << "Kullanýcý adýnýzý giriniz." << endl << endl;
				cout << "**************** Doktor Giriþi ***************" << endl << endl;
				cin >> b;
				cout << "Parolayý giriniz." << endl;
				cin >> d;
				if (b != d1.kullanicidok || d != d1.parola_dok) {
					cout << "Kullanýcý adý veya parola hatalý girildi. Tekrar deneyiniz." << endl;
				}
				else {

					cout << "/////////////////////  DOKTOR GÝRÝÞ YAPTI  /////////////////// " << endl << endl;

					cout << "  \t 1)Reçete yazma (ve hastanýn tüm bilgileri) " << endl << endl;
					cout << "  \t 2)Tc ile reçete sorgu" << endl << endl;
					cout << "  \t 3)Reçete listesi" << endl;
					cout << "  \t 4)Hastanýn randevu bilgileri" << endl << endl;
					cin >> input;

					switch (input) {
					case 1: {
						cout << "-----------------Reçete yazma--------------" << endl << endl;

						cout << "hasta tc no : " << endl;
						cin >> TC;
						ifstream oku_dosya("hastaListe.txt", ios::in);

						while (!oku_dosya.eof()) {


							oku_dosya >> Tc >> ad >> soyad >> yas >> Tel >> cinsiyet >> sgrt;
							if (TC == Tc)
							{
								cout << "------------Hasta Bilgileri---------" << endl << endl;
								cout << "TC no :" << TC << endl;
								cout << "Ad :" << ad << endl;
								cout << "Soyad :" << soyad << endl;
								cout << "Yaþ : " << yas << endl;
								cout << "Tel :" << Tel << endl;
								cout << "Hasta Cinsiyet : " << cinsiyet << endl;
								cout << "Sigorta Durumu :" << sgrt << endl << endl;
								ifstream d_oku;

								d_oku.open("randevuListe.txt", ios::app);
								while (!d_oku.eof()) {
									cout << "------------Randevu Bilgiileri------------" << endl;
									d_oku >> Tc >> tarih >> saat >> bolum >> doktoradi >> sgrt >> tutar;
									if (TC == Tc) {

										cout << "TC: " << Tc << endl;
										cout << "Tarih : " << tarih << endl;
										cout << "Saat : " << saat << endl;
										cout << "Polikinlik : " << bolum << endl;
										cout << "Doktor adý : " << doktoradi << endl;
										cout << "Sigorta durumu : " << sgrt << endl;
										cout << "Ödenecek Ücret : " << tutar << endl;

									}

								}
								d_oku.close();
								//break;


								ofstream yazdosya;
								yazdosya.open("receteListe.txt", ios::app);
								cout << "-------------Reçete bilgileri------------" << endl << endl;
								cout << "Hasta ad : " << ad << endl;
								cout << "Hasta Soyad : " << soyad << endl;
								cout << "\nilaç : ";
								cin >> ilac;
								cout << "\nTeþhis : ";
								cin >> Teshis;
								cout << "\nSigorta Durumu : " << sgrt << endl;
								yazdosya << TC << "\t" << ad << " \t" << soyad << "\t" << ilac << "\t" << Teshis << "\t" << sgrt << endl;
								yazdosya.close();

							}
							else {

							}



						}

						oku_dosya.close();
						break;
					}


					case 2: {


						cout << "-------------Tc ile reçete sorgu----------" << endl << endl;

						cout << "Hasta Tc no : " << endl;
						cin >> TC;
						ifstream recete_oku;
						recete_oku.open("receteListe.txt");
						while (!recete_oku.eof()) {
							recete_oku >> Tc >> ad >> soyad >> ilac >> Teshis >> sgrt;
							if (TC == Tc) {
								cout << "Hasta Tc no : " << Tc << endl;
								cout << "Hasta adý : " << ad << endl;
								cout << "Hasta soyad : " << soyad << endl;
								cout << "Ýlaç : " << ilac << endl;
								cout << "Teþhis :" << Teshis << endl;
								cout << "Sigorta durumu : " << sgrt << endl << endl;


							}



						}
						recete_oku.close();
						break;
					}
					case 3: {
						cout << "-------------Reçete Listesi-----------" << endl << endl;
						ifstream file;
						file.open("receteListe.txt");
						while (!file.eof()) {
							file >> Tc >> ad >> soyad >> ilac >> Teshis >> sgrt;
							cout << "Hasta Tc no : " << Tc << endl;
							cout << "Hasta adý : " << ad << endl;
							cout << "Hasta soyad : " << soyad << endl;
							cout << "Ýlaç : " << ilac << endl;
							cout << "Teþhis : " << Teshis << endl;
							cout << "Sigorta durumu : " << sgrt << endl << endl;

						}



						break;
					}
					case 4: {


						cout << "hasta tc no : ";
						cin >> TC;

						ifstream d_oku;
						d_oku.open("hastaListe.txt");


						while (!d_oku.eof()) {


							d_oku >> Tc >> ad >> soyad >> yas >> Tel >> cinsiyet >> sgrt;
							if (TC == Tc)
							{
								cout << "------------Hasta Bilgileri---------" << endl << endl;
								cout << "TC no :" << TC << endl;
								cout << "Ad :" << ad << endl;
								cout << "Soyad :" << soyad << endl;
								cout << "Tel :" << Tel << endl;
								cout << "Hasta Cinsiyet : " << cinsiyet << endl;
								cout << "Sigorta Durumu :" << sgrt << endl << endl;
								ifstream oku_dosya;
								oku_dosya.open("randevuListe.txt", ios::in);
								while (!oku_dosya.eof()) {
									cout << "------------Randevu Bilgiileri------------" << endl;
									d_oku >> Tc >> tarih >> saat >> bolum >> doktoradi >> sgrt >> tutar;
									if (TC == Tc) {

										cout << "TC: " << Tc << endl;
										cout << "Tarih : " << tarih << endl;
										cout << "Saat : " << saat << endl;
										cout << "Polikinlik : " << bolum << endl;
										cout << "Doktor adý : " << doktoradi << endl;
										cout << "Sigorta durumu : " << sgrt << endl;

										break;
									}
									else {

									}

								}
								break;
								oku_dosya.close();
							}


						}
						d_oku.close();
						break;
					}

					}


				}
			}


		}


	} while (answer != "sekreter" && answer != "doktor");
	system("pause");
	return 0;
}