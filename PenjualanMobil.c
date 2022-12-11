#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pembeli{
	char nama [50];																																																																					
	char alamat [30];																																																					//Nama : Muchammad Syamsu Huda (21081010241)
	char noktp[30];																																																						//       Nashiruddin Ahmad     (21081010202) 
	char nohp[30];																																																						//Kel  : 22
};
struct Pembeli pembeli1; 

//--------------------------------------------------------- PERHITUNGAN TUNAI DAN KREDIT -----------------------------------------------------------------------------
int harga, harga_m, diskon, bayar, kembalian;
int tenor, dp, pijmn;
int ang_pokok, bunga;
int pilih, pilih2;
char nm_mobil[5][15]={"","Avanza","Kijang Innova","Sienta","Calya"};

//source code untuk bayar tunai
int tunai()
{
	printf("\n");
	pilihmobil:
	printf("Masukkan Mobil Pilihan Anda (1-4) : ");	scanf("%d", &pilih);
		switch(pilih)
		{
			case 1:
				{
					harga=296000000;
					printf("\n");
					printf("\t\t\t\t---------------------------------------------------------\n");
					printf("\t\t\t\t  Selamat Anda Mendapatkan Diskon Sebesar 10 Persen !!! \n");
					printf("\t\t\t\t---------------------------------------------------------\n\n");
					diskon=0.1*harga;
					harga=harga-diskon;
					printf("Anda Membeli Mobil %s Dengan Harga Rp%d. \n\n", nm_mobil[1], harga);
					break;
				}
			case 2:
				{
					harga=413000000;
					printf("\n");
					printf("Anda Membeli Mobil %s Dengan Harga Rp%d. \n\n", nm_mobil[2], harga);
					break;
				}
			case 3:
				{
					harga=312000000;
					printf("\n");
					printf("Anda Membeli Mobil %s Dengan Harga Rp%d. \n\n", nm_mobil[3], harga);
					break;
				}
			case 4:
				{
					harga=152000000;
					printf("\n");
					printf("\t\t\t\t--------------------------------------------------------\n");
					printf("\t\t\t\t  Selamat Anda Mendapatkan Diskon Sebesar 8 Persen !!! \n");
					printf("\t\t\t\t--------------------------------------------------------\n\n");
					diskon=0.08*harga;
					harga=harga-diskon;
					printf("Anda Membeli Mobil %s Dengan Harga Rp%d. \n\n", nm_mobil[4], harga);
					break;
				}
			default :
				{
					printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
					goto pilihmobil;
				}
				
		}	
			bayar:
			printf("Masukkan Uang Anda :"); scanf("%d", &bayar);
				if(bayar>=harga){
					kembalian=bayar-harga;
				}
				else{
					printf("\n");
					printf("\t\t----------------------------- \n");
					printf("\t\t!!! UANG ANDA TIDAK CUKUP !!! \n");
					printf("\t\t----------------------------- \n\n");
					goto bayar;
				}
				
			printf("--------------------------------------\n\n");
			struk:	
			printf("Apakah Anda Ingin Melihat Struk (Y/T)?"); scanf("%s", &pilih2);
				if(pilih2=='Y'||pilih2=='y'){
					system("cls");
					printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
					printf("\t\t\t\t\t----------------------------------------\n\n\n");
					
					printf("\t\t\t    |-------------------------------------------------------------|\n");
					printf("\t\t\t    |                     BUKTI PEMBELIAN MOBIL                   |\n"); 	
					printf("\t\t\t    |-------------------------------------------------------------|\n");
					printf("\t\t\t      Atas Nama %s,              \n", pembeli1.nama);	
					printf("\t\t\t      Alamat		: %s                \n", pembeli1.alamat);
					printf("\t\t\t      No. KTP	 	: %s               \n", pembeli1.noktp);
					printf("\t\t\t      No. HP		: %s               \n", pembeli1.nohp);
					printf("\t\t\t     -------------------------------------------------------------\n");
					printf("\t\t\t      Membeli Mobil %s Dengan,                     \n", nm_mobil[pilih] );
					printf("\t\t\t      Bayar     	: Rp%d                               \n", bayar);
					printf("\t\t\t      Harga     	: Rp%d                               \n", harga);
					printf("\t\t\t      Kembalian 	: Rp%d                               \n", kembalian);
					printf("\t\t\t    |-------------------------------------------------------------|\n\n");
					printf("\t\t\t           Terima Kasih Telah Membeli Mobil di Dealer Kami :) \n\n");	
				}
				else if(pilih2=='T'||pilih2=='t'){
					system("cls");
					printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
					printf("\t\t\t\t\t----------------------------------------\n\n\n");
					printf("\n");
					printf("\t\t\t\t   Terima Kasih Telah Membeli Mobil di Dealer Kami :) \n\n");
				}
				else{
					printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
					goto struk;
				}
					system("PAUSE");
					system("cls");
				
} 

// source code untuk perhitungan kredit
int kredit()
{
	printf("\n");
	pilihmobil2:
	printf("Masukkan Mobil Pilihan Anda (1-4) : ");	scanf("%d", &pilih);
		switch(pilih)
		{
			case 1:
				{
					printf("\n");
					tenor1:
					printf("Pilih Tenor (Jangka Waktu Pembayaran)\n");
					printf("1. 2 Tahun\n");
					printf("2. 5 Tahun\n");
					printf("3. 10 Tahun\n\n");
					printf("Pilihan Anda (1-3) ?"); scanf("%d", &tenor);
						switch(tenor)
						{
							case 1:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp);
									printf("-----------------------------------------\n\n");
									tenor=2;
									harga_m=296000000;
									pijmn=296000000-dp;
									ang_pokok=pijmn/24;
									bunga=(pijmn*0.05)/12;
									harga=ang_pokok+bunga;
									break;
								}
							case 2:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp);
									printf("-----------------------------------------\n\n");
									tenor=5;
									harga_m=296000000;
									pijmn=296000000-dp;
									ang_pokok=pijmn/60;
									bunga=(pijmn*0.05)/12;
									harga=ang_pokok+bunga;
									break;	
								}
							case 3:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp);
									printf("-----------------------------------------\n\n");
									tenor=10;
									harga_m=296000000;
									pijmn=296000000-dp;
									ang_pokok=pijmn/120;
									bunga=(pijmn*0.05)/12;
									harga=ang_pokok+bunga;
									break;
								}
							default:
								{
									printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
									goto tenor1;
								}
						}
					break;
				}
			case 2:
				{
					printf("\n");
					tenor2:
					printf("Pilih Tenor (Jangka Waktu Pembayaran)\n");
					printf("1. 2 Tahun\n");
					printf("2. 5 Tahun\n");
					printf("3. 10 Tahun\n\n");
					printf("Pilihan Anda (1-3) ?"); scanf("%d", &tenor);
						switch(tenor)
						{
							case 1:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp);
									printf("-----------------------------------------\n\n");
									tenor=2;
									harga_m=413000000;
									pijmn=413000000-dp;
									ang_pokok=pijmn/24;
									bunga=(pijmn*0.05)/12;
									harga=ang_pokok+bunga;
									break;
								}
							case 2:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp);
									printf("-----------------------------------------\n\n");
									tenor=5;
									harga_m=413000000;
									pijmn=413000000-dp;
									ang_pokok=pijmn/60;
									bunga=(pijmn*0.05)/12;
									harga=ang_pokok+bunga;
									break;	
								}
							case 3:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp);
									printf("-----------------------------------------\n\n");
									tenor=10;
									harga_m=413000000;
									pijmn=413000000-dp;
									ang_pokok=pijmn/120;
									bunga=(pijmn*0.05)/12;
									harga=ang_pokok+bunga;
									break;
								}
							default:
								{
									printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
									goto tenor2;
								}
						}
					break;
				}
			case 3:
				{
					printf("\n");
					tenor3:
					printf("Pilih Tenor (Jangka Waktu Pembayaran)\n");
					printf("1. 2 Tahun\n");
					printf("2. 5 Tahun\n");
					printf("3. 10 Tahun\n\n");
					printf("Pilihan Anda (1-3) ?"); scanf("%d", &tenor);
						switch (tenor)
						{
							case 1:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp);
									printf("-----------------------------------------\n\n");
									tenor=2;
									harga_m=312000000;
									pijmn=312000000-dp;
									ang_pokok=pijmn/24;
									bunga=(pijmn*0.05)/12;
									harga=ang_pokok+bunga;
									break;
								}
							case 2:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp);
									printf("-----------------------------------------\n\n");
									tenor=5;
									harga_m=312000000;
									pijmn=312000000-dp;
									ang_pokok=pijmn/60;
									bunga=(pijmn*0.05)/12;
									harga=ang_pokok+bunga;
									break;	
								}
							case 3:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp);
									printf("-----------------------------------------\n\n");
									tenor=10;
									harga_m=312000000;
									pijmn=312000000-dp;
									ang_pokok=pijmn/120;
									bunga=(pijmn*0.05)/12;
									harga=ang_pokok+bunga;
									break;
								}
							default:
								{
									printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
									goto tenor3;
								}
						}
					break;
				}
			case 4:
				{
					printf("\n");
					tenor4:
					printf("Pilih Tenor (Jangka Waktu Pembayaran)\n");
					printf("1. 2 Tahun\n");
					printf("2. 5 Tahun\n");
					printf("3. 10 Tahun\n\n");
					printf("Pilihan Anda (1-3) ?"); scanf("%d", &tenor);
						switch (tenor)
						{
							case 1:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp);
									printf("-----------------------------------------\n\n");
									tenor=2;
									harga_m=152000000;
									pijmn=152000000-dp;
									ang_pokok=pijmn/24;
									bunga=(pijmn*0.05)/12;
									harga=ang_pokok+bunga;
									break;
								}
							case 2:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp);
									printf("-----------------------------------------\n\n");
									tenor=5;
									harga_m=152000000;
									pijmn=152000000-dp;
									ang_pokok=pijmn/60;
									bunga=(pijmn*0.05)/12;
									harga=ang_pokok+bunga;
									break;	
								}
							case 3:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp);
									printf("-----------------------------------------\n\n");
									tenor=10;
									harga_m=152000000;
									pijmn=152000000-dp;
									ang_pokok=pijmn/120;
									bunga=(pijmn*0.05)/12;
									harga=ang_pokok+bunga;
									break;
								}
							default:
								{
									printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
									goto tenor4;
								}
						}
					break;
				}
			default:
				{
					printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
					goto pilihmobil2;	
				}				
		}
			struk2:
			printf("Apakah Anda Ingin Melihat Struk (Y/T)?"); scanf("%s", &pilih2);
			if(pilih2=='Y'||pilih2=='y'){
				system("cls");
				printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
				printf("\t\t\t\t\t----------------------------------------\n\n\n");
				
				printf("\t\t\t    |-------------------------------------------------------------|\n");
				printf("\t\t\t    |                     BUKTI PEMBELIAN MOBIL                   |\n"); 	
				printf("\t\t\t    |-------------------------------------------------------------|\n");
				printf("\t\t\t      Atas Nama %s,                           \n", pembeli1.nama);	
				printf("\t\t\t      Alamat               : %s               \n", pembeli1.alamat);
				printf("\t\t\t      No. KTP              : %s               \n", pembeli1.noktp);
				printf("\t\t\t      No. HP               : %s               \n", pembeli1.nohp);
				printf("\t\t\t      ------------------------------------------------------------  \n");
				printf("\t\t\t      Membeli Mobil %s Dengan,                     \n", nm_mobil[pilih]);
				printf("\t\t\t      Harga                : Rp%d               \n", harga_m);
				printf("\t\t\t      Tenor                : %d Tahun            \n", tenor);
				printf("\t\t\t      Bayar DP             : Rp%d               \n", dp);
				printf("\t\t\t      Plafon Pinjaman      : Rp%d               \n", pijmn);
				printf("\t\t\t      Angsuran Pokok/bulan : Rp%d               \n", ang_pokok);
				printf("\t\t\t      Angsuran Bunga/bulan : Rp%d               \n", bunga);
				printf("\t\t\t      JUMLAH CICILAN/bulan : Rp%d               \n", harga);
				printf("\t\t\t    |-------------------------------------------------------------|\n\n");
				printf("\t\t\t           Terima Kasih Telah Membeli Mobil di Dealer Kami :) \n\n");	
			}
			else if(pilih2=='T'||pilih2=='t'){
				system("cls");
				printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
				printf("\t\t\t\t\t----------------------------------------\n\n\n");
				printf("\n");
				printf("\t\t\t\t   Terima Kasih Telah Membeli Mobil di Dealer Kami :) \n\n");
			}
			else{
				printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
				goto struk2;
			}
			system("PAUSE");
			system("cls");
		
}

//--------------------------------------------------------- PERHITUNGAN TUNAI DAN KREDIT 2 ----------------------------------------------------------------------------
int harga2, harga_m2, diskon2, bayar2, kembalian2;
int tenor2, dp2, pijmn2;
int ang_pokok2, bunga2;
int pilih3, pilih4;
char nm_mobil2[4][15]={"","Rush","Fortuner","Corolla Cross"};

//source code untuk bayar tunai 2
int tunai2()
{
	printf("\n");
	pilihmobil3:
	printf("Masukkan Mobil Pilihan Anda (1-3) : ");	scanf("%d", &pilih3);
		switch(pilih3)
		{
			case 1:
				{
					harga2=287000000;
					printf("\n");
					printf("Anda Membeli Mobil %s Dengan Harga Rp%d. \n\n", nm_mobil2[1], harga2);
					break;
				}
			case 2:
				{
					harga2=595000000;
					printf("\n");
					printf("\t\t\t\t---------------------------------------------------------\n");
					printf("\t\t\t\t  Selamat Anda Mendapatkan Diskon Sebesar 12 Persen !!! \n");
					printf("\t\t\t\t---------------------------------------------------------\n\n");
					diskon=0.12*harga2;
					harga2=harga2-diskon;
					printf("Anda Membeli Mobil %s Dengan Harga Rp%d. \n\n", nm_mobil2[2], harga2);
					break;
				}
			case 3:
				{
					harga2=519000000;
					printf("\n");
					printf("Anda Membeli Mobil %s Dengan Harga Rp%d. \n\n", nm_mobil2[3], harga2);
					break;
				}
			default :
				{
					printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
					goto pilihmobil3;
				}
				
		}	
			bayar2:
			printf("Masukkan Uang Anda :"); scanf("%d", &bayar2);
				if(bayar2>=harga2){
					kembalian2=bayar2-harga2;
				}
				else{
					printf("\n");
					printf("\t\t----------------------------- \n");
					printf("\t\t!!! UANG ANDA TIDAK CUKUP !!! \n");
					printf("\t\t----------------------------- \n\n");
					goto bayar2;
				}
				
			printf("--------------------------------------\n\n");
			struk3:
			printf("Apakah Anda Ingin Melihat Struk (Y/T)?"); scanf("%s", &pilih4);
				if(pilih4=='Y'||pilih4=='y'){
					system("cls");
					printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
					printf("\t\t\t\t\t----------------------------------------\n\n\n");
					
					printf("\t\t\t    |-------------------------------------------------------------|\n");
					printf("\t\t\t    |                     BUKTI PEMBELIAN MOBIL                   |\n"); 	
					printf("\t\t\t    |-------------------------------------------------------------|\n");
					printf("\t\t\t      Atas Nama %s,              \n", pembeli1.nama);	
					printf("\t\t\t      Alamat		: %s                \n", pembeli1.alamat);
					printf("\t\t\t      No. KTP		: %s               \n", pembeli1.noktp);
					printf("\t\t\t      No. HP		: %s               \n", pembeli1.nohp);
					printf("\t\t\t     -------------------------------------------------------------\n");
					printf("\t\t\t      Membeli Mobil %s Dengan,                     \n", nm_mobil2[pilih3] );
					printf("\t\t\t      Bayar     	: Rp%d                               \n", bayar2);
					printf("\t\t\t      Harga     	: Rp%d                               \n", harga2);
					printf("\t\t\t      Kembalian 	: Rp%d                               \n", kembalian2);
					printf("\t\t\t    |-------------------------------------------------------------|\n\n");
					printf("\t\t\t           Terima Kasih Telah Membeli Mobil di Dealer Kami :) \n\n");	
				}
				else if(pilih4=='T'||pilih4=='t'){
					system("cls");
					printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
					printf("\t\t\t\t\t----------------------------------------\n\n\n");
					printf("\n");
					printf("\t\t\t\t   Terima Kasih Telah Membeli Mobil di Dealer Kami :) \n\n");
				}
				else{
					printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
					goto struk3;
				}
				system("PAUSE");
				system("cls");
		
	
}

// source code untuk perhitungan kredit 2
int kredit2()
{
	printf("\n");
	pilihmobil4:
	printf("Masukkan Mobil Pilihan Anda (1-3) : ");	scanf("%d", &pilih3);
		switch(pilih3)
		{
			case 1:
				{
					printf("\n");
					tenor5:
					printf("Pilih Tenor (Jangka Waktu Pembayaran)\n");
					printf("1. 2 Tahun\n");
					printf("2. 5 Tahun\n");
					printf("3. 10 Tahun\n\n");
					printf("Pilihan Anda (1-3) ?"); scanf("%d", &tenor2);
						switch(tenor2)
						{
							case 1:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp2);
									printf("-----------------------------------------\n\n");
									tenor2=2;
									harga_m2=296000000;
									pijmn2=296000000-dp2;
									ang_pokok2=pijmn2/24;
									bunga2=(pijmn2*0.05)/12;
									harga2=ang_pokok2+bunga2;
									break;
								}
							case 2:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp2);
									printf("-----------------------------------------\n\n");
									tenor2=5;
									harga_m2=296000000;
									pijmn2=296000000-dp2;
									ang_pokok2=pijmn2/60;
									bunga2=(pijmn2*0.05)/12;
									harga2=ang_pokok2+bunga2;
									break;	
								}
							case 3:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp2);
									printf("-----------------------------------------\n\n");
									tenor2=10;
									harga_m2=296000000;
									pijmn2=296000000-dp2;
									ang_pokok2=pijmn2/120;
									bunga2=(pijmn2*0.05)/12;
									harga2=ang_pokok2+bunga2;
									break;
								}
							default:
								{
									printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
									goto tenor5;
								}
						}
					break;
				}
			case 2:
				{
					printf("\n");
					tenor6:
					printf("Pilih Tenor (Jangka Waktu Pembayaran)\n");
					printf("1. 2 Tahun\n");
					printf("2. 5 Tahun\n");
					printf("3. 10 Tahun\n\n");
					printf("Pilihan Anda (1-3) ?"); scanf("%d", &tenor2);
						switch(tenor2)
						{
							case 1:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp2);
									printf("-----------------------------------------\n\n");
									tenor2=2;
									harga_m2=413000000;
									pijmn2=413000000-dp2;
									ang_pokok2=pijmn2/24;
									bunga2=(pijmn2*0.05)/12;
									harga2=ang_pokok2+bunga2;
									break;
								}
							case 2:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp2);
									printf("-----------------------------------------\n\n");
									tenor2=5;
									harga_m2=413000000;
									pijmn2=413000000-dp2;
									ang_pokok2=pijmn2/60;
									bunga2=(pijmn2*0.05)/12;
									harga2=ang_pokok2+bunga2;
									break;	
								}
							case 3:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp2);
									printf("-----------------------------------------\n\n");
									tenor2=10;
									harga_m2=413000000;
									pijmn2=413000000-dp2;
									ang_pokok2=pijmn2/120;
									bunga2=(pijmn2*0.05)/12;
									harga2=ang_pokok2+bunga2;
									break;
								}
							default:
								{
									printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
									goto tenor6;
								}
						}
					break;
				}
			case 3:
				{
					printf("\n");
					tenor7:
					printf("Pilih Tenor (Jangka Waktu Pembayaran)\n");
					printf("1. 2 Tahun\n");
					printf("2. 5 Tahun\n");
					printf("3. 10 Tahun\n\n");
					printf("Pilihan Anda (1-3) ?"); scanf("%d", &tenor2);
						switch (tenor2)
						{
							case 1:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp2);
									printf("-----------------------------------------\n\n");
									tenor2=2;
									harga_m2=287000000;
									pijmn=287000000-dp2;
									ang_pokok2=pijmn2/24;
									bunga2=(pijmn2*0.05)/12;
									harga2=ang_pokok2+bunga2;
									break;
								}
							case 2:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp2);
									printf("-----------------------------------------\n\n");
									tenor2=5;
									harga_m2=595000000;
									pijmn2=595000000-dp;
									ang_pokok2=pijmn2/60;
									bunga2=(pijmn2*0.05)/12;
									harga2=ang_pokok2+bunga2;
									break;	
								}
							case 3:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp2);
									printf("-----------------------------------------\n\n");
									tenor2=10;
									harga_m2=519000000;
									pijmn2=519000000-dp2;
									ang_pokok2=pijmn2/120;
									bunga2=(pijmn2*0.05)/12;
									harga2=ang_pokok2+bunga2;
									break;
								}
							default:
								{
									printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
									goto tenor7;
								}
						}
					break;
					
				}
			default:
				{
					printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
					goto pilihmobil4;	
				}
		}
			struk4:
			printf("Apakah Anda Ingin Melihat Struk (Y/T)?"); scanf("%s", &pilih4);
			if(pilih4=='Y'||pilih4=='y'){
				system("cls");
				printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
				printf("\t\t\t\t\t----------------------------------------\n\n\n");
					
				printf("\t\t\t    |-------------------------------------------------------------|\n");
				printf("\t\t\t    |                     BUKTI PEMBELIAN MOBIL                   |\n"); 	
				printf("\t\t\t    |-------------------------------------------------------------|\n");
				printf("\t\t\t      Atas Nama %s,                           \n", pembeli1.nama);	
				printf("\t\t\t      Alamat               : %s               \n", pembeli1.alamat);
				printf("\t\t\t      No. KTP              : %s               \n", pembeli1.noktp);
				printf("\t\t\t      No. HP               : %s               \n", pembeli1.nohp);
				printf("\t\t\t      ------------------------------------------------------------  \n");
				printf("\t\t\t      Membeli Mobil %s Dengan,                     \n", nm_mobil2[pilih3]);
				printf("\t\t\t      Harga                : Rp%d               \n", harga_m2);
				printf("\t\t\t      Tenor                : %d Tahun            \n", tenor2);
				printf("\t\t\t      Bayar DP             : Rp%d               \n", dp2);
				printf("\t\t\t      Plafon Pinjaman      : Rp%d               \n", pijmn2);
				printf("\t\t\t      Angsuran Pokok/bulan : Rp%d               \n", ang_pokok2);
				printf("\t\t\t      Angsuran Bunga/bulan : Rp%d               \n", bunga2);
				printf("\t\t\t      JUMLAH CICILAN/bulan : Rp%d               \n", harga2);
				printf("\t\t\t    |-------------------------------------------------------------|\n\n");
				printf("\t\t\t           Terima Kasih Telah Membeli Mobil di Dealer Kami :) \n\n");	
			}
			else if(pilih4=='T'||pilih4=='t'){
				system("cls");
				printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
				printf("\t\t\t\t\t----------------------------------------\n\n\n");
				printf("\n");
				printf("\t\t\t\t   Terima Kasih Telah Membeli Mobil di Dealer Kami :) \n\n");
			}
			else{
				printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
				goto struk4;
			}
			system("PAUSE");
			system("cls");
		
	
}

//--------------------------------------------------------- PERHITUNGAN TUNAI DAN KREDIT 3 ----------------------------------------------------------------------------
int harga3, harga_m3, diskon3, bayar3, kembalian3;
int tenor3, dp3, pijmn3;
int ang_pokok3, bunga3;
int pilih5, pilih6;
char nm_mobil3[4][15]={"","Camry","Vios","Corolla Altis"};

//source code untuk bayar tunai 3
int tunai3()
{
	printf("\n");
	pilihmobil5:
	printf("Masukkan Mobil Pilihan Anda (1-3) : ");	scanf("%d", &pilih5);
		switch(pilih5)
		{
			case 1:
				{
					harga3=682000000;
					printf("\n");
					printf("\t\t\t\t---------------------------------------------------------\n");
					printf("\t\t\t\t  Selamat Anda Mendapatkan Diskon Sebesar 50 Persen !!! \n");
					printf("\t\t\t\t---------------------------------------------------------\n\n");
					diskon=0.5*harga3;
					harga3=harga3-diskon;
					printf("Anda Membeli Mobil %s Dengan Harga Rp%d. \n\n", nm_mobil3[1], harga3);
					break;
				}
			case 2:
				{
					harga3=320000000;
					printf("\n");
					printf("Anda Membeli Mobil %s Dengan Harga Rp%d. \n\n", nm_mobil3[2], harga3);
					break;
				}
			case 3:
				{
					harga3=520000000;
					printf("\n");
					printf("Anda Membeli Mobil %s Dengan Harga Rp%d. \n\n", nm_mobil3[3], harga3);
					break;
				}
			default:
				{
					printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
					goto pilihmobil5;
				}
		}
			bayar3:
			printf("Masukkan Uang Anda :"); scanf("%d", &bayar3);
				if(bayar3>=harga3){
					kembalian3=bayar3-harga3;
				}
				else{
					printf("\n");
					printf("\t\t----------------------------- \n");
					printf("\t\t!!! UANG ANDA TIDAK CUKUP !!! \n");
					printf("\t\t----------------------------- \n\n");
					goto bayar3;
				}
				
			printf("--------------------------------------\n\n");
			struk5:
			printf("Apakah Anda Ingin Melihat Struk (Y/T)?"); scanf("%s", &pilih6);
				if(pilih6=='Y'||pilih6=='y'){
					system("cls");
					printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
					printf("\t\t\t\t\t----------------------------------------\n\n\n");
					
					printf("\t\t\t    |-------------------------------------------------------------|\n");
					printf("\t\t\t    |                     BUKTI PEMBELIAN MOBIL                   |\n"); 	
					printf("\t\t\t    |-------------------------------------------------------------|\n");
					printf("\t\t\t      Atas Nama %s,              \n", pembeli1.nama);	
					printf("\t\t\t      Alamat		: %s                \n", pembeli1.alamat);
					printf("\t\t\t      No. KTP		: %s               \n", pembeli1.noktp);
					printf("\t\t\t      No. HP		: %s               \n", pembeli1.nohp);
					printf("\t\t\t     -------------------------------------------------------------\n");
					printf("\t\t\t      Membeli Mobil %s Dengan,                     \n", nm_mobil3[pilih5] );
					printf("\t\t\t      Bayar     	: Rp%d                               \n", bayar3);
					printf("\t\t\t      Harga     	: Rp%d                               \n", harga3);
					printf("\t\t\t      Kembalian 	: Rp%d                               \n", kembalian3);
					printf("\t\t\t    |-------------------------------------------------------------|\n\n");
					printf("\t\t\t           Terima Kasih Telah Membeli Mobil di Dealer Kami :) \n\n");
				}
				else if(pilih6=='T'||pilih6=='t'){
					system("cls");
					printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
					printf("\t\t\t\t\t----------------------------------------\n\n\n");
					printf("\n");
					printf("\t\t\t\t   Terima Kasih Telah Membeli Mobil di Dealer Kami :) \n\n");
				}
				else{
					printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
					goto struk5;
				}
				system("PAUSE");
				system("cls");
				
}

// source code untuk perhitungan kredit 3
int kredit3()
{
	printf("\n");
	pilihmobil6:
	printf("Masukkan Mobil Pilihan Anda (1-3) : ");	scanf("%d", &pilih5);
		switch(pilih5)
		{
			case 1:
				{
					printf("\n");
					tenor8:
					printf("Pilih Tenor (Jangka Waktu Pembayaran)\n");
					printf("1. 2 Tahun\n");
					printf("2. 5 Tahun\n");
					printf("3. 10 Tahun\n\n");
					printf("Pilihan Anda (1-3) ?"); scanf("%d", &tenor3);
						switch(tenor3)
						{
							case 1:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp3);
									printf("-----------------------------------------\n\n");
									tenor3=2;
									harga_m3=682000000;
									pijmn3=682000000-dp3;
									ang_pokok3=pijmn3/24;
									bunga3=(pijmn3*0.05)/12;
									harga3=ang_pokok3+bunga3;
									break;
								}
							case 2:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp3);
									printf("-----------------------------------------\n\n");
									tenor3=5;
									harga_m3=682000000;
									pijmn3=682000000-dp3;
									ang_pokok3=pijmn3/60;
									bunga3=(pijmn3*0.05)/12;
									harga3=ang_pokok3+bunga3;
									break;
								}
							case 3:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp3);
									printf("-----------------------------------------\n\n");
									tenor3=10;
									harga_m3=682000000;
									pijmn3=682000000-dp3;
									ang_pokok3=pijmn3/120;
									bunga3=(pijmn3*0.05)/12;
									harga3=ang_pokok3+bunga3;
									break;
								}
							default:
								{
									printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
									goto tenor8;
								}
						}
					break;	
				}
			case 2:
				{
					printf("\n");
					tenor9:
					printf("Pilih Tenor (Jangka Waktu Pembayaran)\n");
					printf("1. 2 Tahun\n");
					printf("2. 5 Tahun\n");
					printf("3. 10 Tahun\n\n");
					printf("Pilihan Anda (1-3) ?"); scanf("%d", &tenor3);
						switch(tenor3)
						{
							case 1:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp3);
									printf("-----------------------------------------\n\n");
									tenor3=2;
									harga_m3=320000000;
									pijmn3=320000000-dp3;
									ang_pokok3=pijmn3/24;
									bunga3=(pijmn3*0.05)/12;
									harga3=ang_pokok3+bunga3;
									break;
								}
							case 2:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp3);
									printf("-----------------------------------------\n\n");
									tenor3=5;
									harga_m3=320000000;
									pijmn3=320000000-dp3;
									ang_pokok3=pijmn3/60;
									bunga3=(pijmn3*0.05)/12;
									harga3=ang_pokok3+bunga3;
									break;	
								}
							case 3:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp3);
									printf("-----------------------------------------\n\n");
									tenor3=10;
									harga_m3=320000000;
									pijmn3=320000000-dp3;
									ang_pokok3=pijmn3/120;
									bunga3=(pijmn3*0.05)/12;
									harga3=ang_pokok3+bunga3;
									break;
								}
							default:
								{
									printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
									goto tenor9;
								}	
						}
					break;	
				}
			case 3:
				{
					printf("\n");
					tenor10:
					printf("Pilih Tenor (Jangka Waktu Pembayaran)\n");
					printf("1. 2 Tahun\n");
					printf("2. 5 Tahun\n");
					printf("3. 10 Tahun\n\n");
					printf("Pilihan Anda (1-3) ?"); scanf("%d", &tenor3);
						switch(tenor3)
						{
							case 1:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp3);
									printf("-----------------------------------------\n\n");
									tenor3=2;
									harga_m3=520000000;
									pijmn3=520000000-dp3;
									ang_pokok3=pijmn3/24;
									bunga3=(pijmn3*0.05)/12;
									harga3=ang_pokok3+bunga3;
									break;
								}
							case 2:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp3);
									printf("-----------------------------------------\n\n");
									tenor3=5;
									harga_m3=520000000;
									pijmn3=520000000-dp3;
									ang_pokok3=pijmn3/60;
									bunga3=(pijmn3*0.05)/12;
									harga3=ang_pokok3+bunga3;
									break;
								}
							case 3:
								{
									printf("\n");
									printf("Masukkan DP : "); scanf("%d", &dp3);
									printf("-----------------------------------------\n\n");
									tenor3=10;
									harga_m3=520000000;
									pijmn3=520000000-dp3;
									ang_pokok3=pijmn3/120;
									bunga3=(pijmn3*0.05)/12;
									harga3=ang_pokok3+bunga3;
									break;
								}
							default:
								{
									printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
									goto tenor10;
								}
						}
					break;	
				}
			default:
				{
					printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
					goto pilihmobil6;
				}
		}
			struk6:
			printf("Apakah Anda Ingin Melihat Struk (Y/T)?"); scanf("%s", &pilih6);
			if(pilih6=='Y'||pilih6=='y'){
				system("cls");
				printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
				printf("\t\t\t\t\t----------------------------------------\n\n\n");
				
				printf("\t\t\t    |-------------------------------------------------------------|\n");
				printf("\t\t\t    |                     BUKTI PEMBELIAN MOBIL                   |\n"); 	
				printf("\t\t\t    |-------------------------------------------------------------|\n");
				printf("\t\t\t      Atas Nama %s,                           \n", pembeli1.nama);	
				printf("\t\t\t      Alamat               : %s               \n", pembeli1.alamat);
				printf("\t\t\t      No. KTP              : %s               \n", pembeli1.noktp);
				printf("\t\t\t      No. HP               : %s               \n", pembeli1.nohp);
				printf("\t\t\t      ------------------------------------------------------------  \n");
				printf("\t\t\t      Membeli Mobil %s Dengan,                     \n", nm_mobil3[pilih5]);
				printf("\t\t\t      Harga                : Rp%d               \n", harga_m3);
				printf("\t\t\t      Tenor                : %d Tahun            \n", tenor3);
				printf("\t\t\t      Bayar DP             : Rp%d               \n", dp3);
				printf("\t\t\t      Plafon Pinjaman      : Rp%d               \n", pijmn3);
				printf("\t\t\t      Angsuran Pokok/bulan : Rp%d               \n", ang_pokok3);
				printf("\t\t\t      Angsuran Bunga/bulan : Rp%d               \n", bunga3);
				printf("\t\t\t      JUMLAH CICILAN/bulan : Rp%d               \n", harga3);
				printf("\t\t\t    |-------------------------------------------------------------|\n\n");
				printf("\t\t\t           Terima Kasih Telah Membeli Mobil di Dealer Kami :) \n\n");
			}
			else if(pilih6=='T'||pilih6=='t'){
				system("cls");
				printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
				printf("\t\t\t\t\t----------------------------------------\n\n\n");
				printf("\n");
				printf("\t\t\t\t   Terima Kasih Telah Membeli Mobil di Dealer Kami :) \n\n");
			}
			else{
				printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
				goto struk6;
			}
			system("PAUSE");
			system("cls");
			
}

//--------------------------------------------------------------- MAIN PROGRAM ---------------------------------------------------------------------------------
int main()
{
	int jenis_mobil, mobil; 
	char spek_mobil, ulangi, beli_mobil;
	int mobil2; 
	char spek_mobil2, ulangi2, beli_mobil2;
	int mobil3; 
	char spek_mobil3, ulangi3, beli_mobil3;
	char tnk, tnk2, tnk3;
	int n=0;
	char ulang;

	jenis:
	printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
	printf("\t\t\t\t\t----------------------------------------\n");
	printf("\t\t\t\t\t\t     Tipe Jenis Mobil \n");
	printf("\t\t\t\t\t\t     (1) Mobil MPV \n");
	printf("\t\t\t\t\t\t     (2) Mobil SUV \n");
	printf("\t\t\t\t\t\t     (3) Mobil SEDAN \n");
	
	printf("\n\nPilih Jenis Mobil :");
	scanf("%d", &jenis_mobil);
	
	switch(jenis_mobil)
	{
		case 1:
			{
				printf("\t\t\t    ---------------------------------------------------------------\n");
				printf("\t\t\t    !!!!! PROMO DISKON 10 PERSEN UNTUK PEMBELIAN MOBIL AVANZA !!!!!\n");
				printf("\t\t\t    ---------------------------------------------------------------\n\n");
				
				printf("\t\t\t    ---------------------------------------------------------------\n");
				printf("\t\t\t    !!!!!  PROMO DISKON 8 PERSEN UNTUK PEMBELIAN MOBIL CALYA  !!!!!\n");
				printf("\t\t\t    ---------------------------------------------------------------\n\n");
				
				printf("\n\t\t\t\t\t|               Mobil MPV              |\n");
				printf("\t\t\t\t\t|--------------------------------------|\n");
				printf("\t\t\t\t\t|  Daftar Mobil               Harga    |\n");
				printf("\t\t\t\t\t|                                      |\n");
				printf("\t\t\t\t\t|  1. Avanza              Rp296.000.000|\n");
				printf("\t\t\t\t\t|  2. Kijang Innova       Rp413.000.000|\n");
				printf("\t\t\t\t\t|  3. Sienta              Rp312.000.000|\n");
				printf("\t\t\t\t\t|  4. Calya               Rp152.000.000|\n");
				printf("\t\t\t\t\t|--------------------------------------|\n\n");
				
				printf("*promo berlaku untuk jenis pembayaran tunai.\n");
					
					spekmobil:
					printf("\nApakah Anda Ingin Melihat Spesifikasi Mobil?\n");
					printf("Jawab (Y/T): ");
					scanf("%s", &spek_mobil);
					if(spek_mobil=='y'||spek_mobil=='Y'){
						do{
							printf("\n");
							printf("Pilih Mobil (1-4):");
							scanf("%d", &mobil);
							system("cls");
							printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
							printf("\t\t\t\t\t----------------------------------------\n\n");
							switch(mobil)
							{
								case 1:
									{
										printf("\n\t\t\t\t|                    SPESIFIKASI                      |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n");
										printf("\t\t\t\t|                      Avanza                         |\n");
										printf("\t\t\t\t|                                                     |\n");
										printf("\t\t\t\t| Mesin                   : Bensin                    |\n");
										printf("\t\t\t\t| Jenis Transmisi         : Otomatis                  |\n");
										printf("\t\t\t\t| Kapasitas Mesin         : 1496cc                    |\n");
										printf("\t\t\t\t| Tenaga                  : 97 HP                     |\n");
										printf("\t\t\t\t| Kapasitas Tempat Duduk  : 7 Kursi                   |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n\n");
										break;
									}
								case 2:
									{
										printf("\n\t\t\t\t|                    SPESIFIKASI                      |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n");
										printf("\t\t\t\t|                   Kijang Innova                     |\n");
										printf("\t\t\t\t|                                                     |\n");
										printf("\t\t\t\t| Mesin                   : Bensin / Diesel           |\n");
										printf("\t\t\t\t| Jenis Transmisi         : Otomatis                  |\n");
										printf("\t\t\t\t| Kapasitas Mesin         : 1998cc / 2393cc           |\n");
										printf("\t\t\t\t| Tenaga                  : 137 HP / 147 HP           |\n");
										printf("\t\t\t\t| Kapasitas Tempat Duduk  : 7 Kursi                   |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n\n");
										break;
									}
								case 3:
									{
										printf("\n\t\t\t\t|                    SPESIFIKASI                      |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n");
										printf("\t\t\t\t|                      Sienta                         |\n");
										printf("\t\t\t\t|                                                     |\n");
										printf("\t\t\t\t| Mesin                   : Bensin                    |\n");
										printf("\t\t\t\t| Jenis Transmisi         : Manual                    |\n");
										printf("\t\t\t\t| Kapasitas Mesin         : 1497cc                    |\n");
										printf("\t\t\t\t| Tenaga                  : 109 HP                    |\n");
										printf("\t\t\t\t| Kapasitas Tempat Duduk  : 7 Kursi                   |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n\n");
										break;
									}
								case 4:
									{
										printf("\n\t\t\t\t|                    SPESIFIKASI                      |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n");
										printf("\t\t\t\t|                      Calya                          |\n");
										printf("\t\t\t\t|                                                     |\n");
										printf("\t\t\t\t| Mesin                   : Bensin                    |\n");
										printf("\t\t\t\t| Jenis Transmisi         : Otomatis                  |\n");
										printf("\t\t\t\t| Kapasitas Mesin         : 1197cc                    |\n");
										printf("\t\t\t\t| Tenaga                  : 87 HP                     |\n");
										printf("\t\t\t\t| Kapasitas Tempat Duduk  : 7 Kursi                   |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n\n");
										break;
									}
								default:
									{
										printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR ! \n\n");
										goto spekmobil;
									}
							}
							ulangi:
							printf("Apakah Anda Ingin Mengulang Melihat Spesifikasi?\n");
							printf("Jawab (Y/T): ");
							scanf("%s", &ulangi);
								printf("\n\t\t\t\t\t|               Mobil MPV              |\n");
								printf("\t\t\t\t\t|--------------------------------------|\n");
								printf("\t\t\t\t\t|  Daftar Mobil               Harga    |\n");
								printf("\t\t\t\t\t|                                      |\n");
								printf("\t\t\t\t\t|  1. Avanza              Rp296.000.000|\n");
								printf("\t\t\t\t\t|  2. Kijang Innova       Rp413.000.000|\n");
								printf("\t\t\t\t\t|  3. Sienta              Rp312.000.000|\n");
								printf("\t\t\t\t\t|  4. Calya               Rp152.000.000|\n");
								printf("\t\t\t\t\t|--------------------------------------|\n");	
							n++;
						}while(ulangi=='y'||ulangi=='Y');
						
						if(ulangi=='t'||ulangi=='T'){
							belimobil:
							printf("\n");	
							printf("Apakah Anda Ingin Membeli? \n");
							printf("Jawab (Y/T): ");
							scanf("%s", &beli_mobil);
						}
						else if(ulangi!='Y'||ulangi!='y'||ulangi!='T'||ulangi!='t'){
							printf("TIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
							goto ulangi;
						}
						
						if(beli_mobil=='y'||beli_mobil=='Y'){	
							printf("\n");																						// selanjutnya dari sini tempat untuk mengisi bio data pembeli dan menghitung jumlah dan harga mobil
							printf("\t\t\t|=========================== FORM PEMBELIAN ===========================| \n\n");
							gets(pembeli1.nama); 
							printf("\t\t\t   Nama Pembeli   : "); gets(pembeli1.nama);
							printf("\t\t\t   Alamat Pembeli : "); gets(pembeli1.alamat);
							printf("\t\t\t   Nomer KTP      : "); scanf("%s", &pembeli1.noktp);
							printf("\t\t\t   Nomer HP       : "); scanf("%s", &pembeli1.nohp);
							printf("\t\t\t|======================================================================| \n");
								
								do{
									printf("\n");
									printf("Pembayaran Tunai atau Kredit (T/K) ?");
									scanf("%s", &tnk);
									
									if(tnk=='T'||tnk=='t'){
										tunai();
										goto ulang;
									}
									else if(tnk=='K'||tnk=='k'){
										kredit();
										goto ulang;
									}
									n++;
								}while(tnk!='T'||tnk!='t'||tnk!='K'||tnk!='k');
								
								
						}
						else if(beli_mobil=='t'||beli_mobil=='T'){
							system("cls");
							printf("\n");
							goto jenis;
						}
						else if(beli_mobil!=1||beli_mobil!=2||beli_mobil!=3||beli_mobil!=4){
							printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n");
							goto belimobil;
						}								
					}
					else if(spek_mobil=='t'||spek_mobil=='T'){
						system("cls");
						printf("\n");
						goto jenis;
					}
					else if(spek_mobil!='Y'||spek_mobil!='y'||spek_mobil!='T'||spek_mobil!='t'){
						printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR ! \n");
						goto spekmobil;
					}
			break;
			}			
		case 2:	
			{
				printf("\t\t\t    -----------------------------------------------------------------\n");
				printf("\t\t\t    !!!!! PROMO DISKON 12 PERSEN UNTUK PEMBELIAN MOBIL FORTUNER !!!!!\n");
				printf("\t\t\t    -----------------------------------------------------------------\n\n");
				
				printf("\n\t\t\t\t\t|               Mobil SUV                |\n");
				printf("\t\t\t\t\t|----------------------------------------|\n");
				printf("\t\t\t\t\t|  Daftar Mobil               Harga      |\n");
				printf("\t\t\t\t\t|                                        |\n");
				printf("\t\t\t\t\t|  1. Rush                 Rp287.000.000 |\n");
				printf("\t\t\t\t\t|  2. Fortuner             Rp595.000.000 |\n");
				printf("\t\t\t\t\t|  3. Corolla Cross        Rp519.000.000 |\n");
				printf("\t\t\t\t\t|----------------------------------------|\n\n");
				
				printf("*promo berlaku untuk jenis pembayaran tunai.\n");
				
					spekmobil2:
					printf("\nApakah Anda Ingin Melihat Spesifikasi Mobil?\n");
					printf("Jawab (Y/T): ");
					scanf("%s", &spek_mobil2);
					if(spek_mobil2=='y'||spek_mobil2=='Y'){
						do{
							printf("\n");
							printf("Pilih Mobil (1-3):");
							scanf("%d", &mobil2);
							system("cls");
							printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
							printf("\t\t\t\t\t----------------------------------------\n\n");
							switch(mobil2)
							{
								case 1:
									{
										printf("\n\t\t\t\t|                    SPESIFIKASI                      |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n");
										printf("\t\t\t\t|                        Rush                         |\n");
										printf("\t\t\t\t|                                                     |\n");
										printf("\t\t\t\t| Mesin                   : Bensin                    |\n");
										printf("\t\t\t\t| Jenis Transmisi         : Otomatis                  |\n");
										printf("\t\t\t\t| Kapasitas Mesin         : 1496cc                    |\n");
										printf("\t\t\t\t| Tenaga                  : 103 HP                    |\n");
										printf("\t\t\t\t| Kapasitas Tempat Duduk  : 7 Kursi                   |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n\n");
										break;
									}
								case 2:
									{
										printf("\n\t\t\t\t|                    SPESIFIKASI                      |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n");
										printf("\t\t\t\t|                      Fortuner                       |\n");
										printf("\t\t\t\t|                                                     |\n");
										printf("\t\t\t\t| Mesin                   : Bensin / Diesel           |\n");
										printf("\t\t\t\t| Jenis Transmisi         : Otomatis                  |\n");
										printf("\t\t\t\t| Kapasitas Mesin         : 2694cc / 2755cc           |\n");
										printf("\t\t\t\t| Tenaga                  : 161 HP / 200 HP           |\n");
										printf("\t\t\t\t| Kapasitas Tempat Duduk  : 7 Kursi                   |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n\n");
										break;
									}
								case 3:
									{
										printf("\n\t\t\t\t|                    SPESIFIKASI                      |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n");
										printf("\t\t\t\t|                     Corolla Cross                   |\n");
										printf("\t\t\t\t|                                                     |\n");
										printf("\t\t\t\t| Mesin                   : Bensin                    |\n");
										printf("\t\t\t\t| Jenis Transmisi         : CVT                       |\n");
										printf("\t\t\t\t| Kapasitas Mesin         : 1798cc                    |\n");
										printf("\t\t\t\t| Tenaga                  : 97 HP                     |\n");
										printf("\t\t\t\t| Kapasitas Tempat Duduk  : 5 Kursi                   |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n\n");
										break;
									}
								default:
									{
										printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR ! \n\n");
										goto spekmobil2;
									}
							}
							ulangi2:
							printf("Apakah Anda Ingin Mengulang Melihat Spesifikasi?\n");
							printf("Jawab (Y/T): ");
							scanf("%s", &ulangi2);
								printf("\n\t\t\t\t\t|               Mobil SUV                |\n");
								printf("\t\t\t\t\t|----------------------------------------|\n");
								printf("\t\t\t\t\t|  Daftar Mobil               Harga      |\n");
								printf("\t\t\t\t\t|                                        |\n");
								printf("\t\t\t\t\t|  1. Rush                 Rp287.000.000 |\n");
								printf("\t\t\t\t\t|  2. Fortuner             Rp595.000.000 |\n");
								printf("\t\t\t\t\t|  3. Corolla Cross        Rp519.000.000 |\n");
								printf("\t\t\t\t\t|----------------------------------------|\n");
							n++;
						}while(ulangi2=='y'||ulangi2=='Y');
						
						if(ulangi2=='t'||ulangi2=='T'){
							belimobil2:
							printf("\n");
							printf("Apakah Anda Ingin Membeli? \n");
							printf("Jawab (Y/T): ");
							scanf("%s", &beli_mobil2);
						}
						else if(ulangi2!='Y'||ulangi2!='y'||ulangi2!='T'||ulangi2!='t'){
							printf("TIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
							goto ulangi2;
						}
						
						if(beli_mobil2=='y'||beli_mobil2=='Y'){	
							printf("\n");																										// selanjutnya dari sini tempat untuk mengisi bio data pembeli dan menghitung jumlah dan harga mobil
							printf("\t\t\t|=========================== FORM PEMBELIAN ===========================| \n\n");
							gets(pembeli1.nama); 
							printf("\t\t\t   Nama Pembeli   : "); gets(pembeli1.nama);
							printf("\t\t\t   Alamat Pembeli : "); gets(pembeli1.alamat);
							printf("\t\t\t   Nomer KTP      : "); scanf("%s", &pembeli1.noktp);
							printf("\t\t\t   Nomer HP       : "); scanf("%s", &pembeli1.nohp);
							printf("\t\t\t|======================================================================| \n");
								
								do{
									printf("\n");
									printf("Pembayaran Tunai atau Kredit (T/K) ?");
									scanf("%s", &tnk2);
									
									if(tnk2=='T'||tnk2=='t'){
										tunai2();
										goto ulang;
									}
									else if(tnk2=='K'||tnk2=='k'){
										kredit2();
										goto ulang;
									}
									n++;
								}while(tnk2!='T'||tnk2!='t'||tnk2!='K'||tnk2!='k');
								
						}
						else if(beli_mobil2=='t'||beli_mobil2=='T'){
							system("cls");
							printf("\n");
							goto jenis;
						}
						else if(beli_mobil2!=1||beli_mobil2!=2||beli_mobil2!=3||beli_mobil2!=4){
							printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n");
							goto belimobil2;
						}	
					}
					else if(spek_mobil2=='t'||spek_mobil2=='T'){
						system("cls");
						printf("\n");
						goto jenis;
					}	
					else if(spek_mobil2!='Y'||spek_mobil2!='y'||spek_mobil2!='T'||spek_mobil2!='t'){
						printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR ! \n");
						goto spekmobil2;
					}
			break;		
			}
		case 3:
			{
				printf("\t\t\t     --------------------------------------------------------------\n");
				printf("\t\t\t     !!!!! PROMO DISKON 50 PERSEN UNTUK PEMBELIAN MOBIL CAMRY !!!!!\n");
				printf("\t\t\t     --------------------------------------------------------------\n\n");
				
				printf("\n\t\t\t\t\t|               Mobil SEDAN              |\n");
				printf("\t\t\t\t\t|----------------------------------------|\n");
				printf("\t\t\t\t\t|  Daftar Mobil               Harga      |\n");
				printf("\t\t\t\t\t|                                        |\n");
				printf("\t\t\t\t\t|  1. Camry                Rp682.000.000 |\n");
				printf("\t\t\t\t\t|  2. Vios                 Rp320.000.000 |\n");
				printf("\t\t\t\t\t|  3. Corolla Altis        Rp520.000.000 |\n");
				printf("\t\t\t\t\t|----------------------------------------|\n\n");	
				
				printf("*promo berlaku untuk jenis pembayaran tunai.\n");
				
					spekmobil3:
					printf("\nApakah Anda Ingin Melihat Spesifikasi Mobil?\n");
					printf("Jawab (Y/T): ");
					scanf("%s", &spek_mobil3);
					if(spek_mobil3=='y'||spek_mobil3=='Y'){
						do{
							printf("\n");
							printf("Pilih Mobil (1-3):");
							scanf("%d", &mobil3);
							system("cls");
							printf("\t\t\t\t\t <<<<<<< DEALER TOYOTA SURABAYA >>>>>>>\n");
							printf("\t\t\t\t\t----------------------------------------\n\n");
							switch(mobil3)
							{
								case 1:
									{
										printf("\n\t\t\t\t|                    SPESIFIKASI                      |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n");
										printf("\t\t\t\t|                       Camry                         |\n");
										printf("\t\t\t\t|                                                     |\n");
										printf("\t\t\t\t| Mesin                   : Bensin                    |\n");
										printf("\t\t\t\t| Jenis Transmisi         : Otomatis                  |\n");
										printf("\t\t\t\t| Kapasitas Mesin         : 2494cc                    |\n");
										printf("\t\t\t\t| Tenaga                  : 180 HP                    |\n");
										printf("\t\t\t\t| Kapasitas Tempat Duduk  : 5 Kursi                   |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n\n");
										break;
									}
								case 2:
									{
										printf("\n\t\t\t\t|                    SPESIFIKASI                      |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n");
										printf("\t\t\t\t|                       Vios                          |\n");
										printf("\t\t\t\t|                                                     |\n");
										printf("\t\t\t\t| Mesin                   : Bensin                    |\n");
										printf("\t\t\t\t| Jenis Transmisi         : Manual                    |\n");
										printf("\t\t\t\t| Kapasitas Mesin         : 1496cc                    |\n");
										printf("\t\t\t\t| Tenaga                  : 106 HP                    |\n");
										printf("\t\t\t\t| Kapasitas Tempat Duduk  : 5 Kursi                   |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n\n");
										break;
									}
								case 3:
									{
										printf("\n\t\t\t\t|                    SPESIFIKASI                      |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n");
										printf("\t\t\t\t|                     Corolla Altis                   |\n");
										printf("\t\t\t\t|                                                     |\n");
										printf("\t\t\t\t| Mesin                   : Bensin                    |\n");
										printf("\t\t\t\t| Jenis Transmisi         : CVT                       |\n");
										printf("\t\t\t\t| Kapasitas Mesin         : 1798cc                    |\n");
										printf("\t\t\t\t| Tenaga                  : 94 HP                     |\n");
										printf("\t\t\t\t| Kapasitas Tempat Duduk  : 5 Kursi                   |\n");
										printf("\t\t\t\t|-----------------------------------------------------|\n\n");
										break;
									}
								default:
									{
										printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR ! \n\n");
										goto spekmobil3;
									}
							}
							ulangi3:
							printf("Apakah Anda Ingin Mengulang Melihat Spesifikasi?\n");
							printf("Jawab (Y/T): ");
							scanf("%s", &ulangi3);
									printf("\n\t\t\t\t\t|               Mobil SEDAN              |\n");
									printf("\t\t\t\t\t|----------------------------------------|\n");
									printf("\t\t\t\t\t|  Daftar Mobil               Harga      |\n");
									printf("\t\t\t\t\t|                                        |\n");
									printf("\t\t\t\t\t|  1. Camry                Rp682.000.000 |\n");
									printf("\t\t\t\t\t|  2. Vios                 Rp320.000.000 |\n");
									printf("\t\t\t\t\t|  3. Corolla Altis        Rp520.000.000 |\n");
									printf("\t\t\t\t\t|----------------------------------------|\n");	
							n++;	
						}while(ulangi3=='y'||ulangi3=='Y');
						
						if(ulangi3=='t'||ulangi3=='T'){
							belimobil3:
							printf("\n");
							printf("Apakah Anda Ingin Membeli? \n");
							printf("Jawab (Y/T): ");
							scanf("%s", &beli_mobil3);	
						}
						else if(ulangi3!='Y'||ulangi3!='y'||ulangi3!='T'||ulangi3!='t'){
							printf("TIDAK VALID, MASUKKAN KODE YANG BENAR !\n\n");
							goto ulangi3;
						}
						
						if(beli_mobil3=='y'||beli_mobil3=='Y'){
							printf("\n");
							printf("\t\t\t|=========================== FORM PEMBELIAN ===========================| \n\n");
							gets(pembeli1.nama); 
							printf("\t\t\t   Nama Pembeli   : "); gets(pembeli1.nama);
							printf("\t\t\t   Alamat Pembeli : "); gets(pembeli1.alamat);
							printf("\t\t\t   Nomer KTP      : "); scanf("%s", &pembeli1.noktp);
							printf("\t\t\t   Nomer HP       : "); scanf("%s", &pembeli1.nohp);
							printf("\t\t\t|======================================================================| \n");
							
								do{
									printf("\n");
									printf("Pembayaran Tunai atau Kredit (T/K) ?");
									scanf("%s", &tnk3);
									
									if(tnk3=='T'||tnk3=='t'){
										tunai3();
										goto ulang;
									}
									else if(tnk3=='K'||tnk3=='k'){
										kredit3();
										goto ulang;
									}
									n++;
								}while(tnk3!='T'||tnk3!='t'||tnk3!='K'||tnk3!='k');
								
						}
						else if(beli_mobil3=='t'||beli_mobil3=='T'){
							system("cls");
							printf("\n");
							goto jenis;
						}
						else if(beli_mobil3!=1||beli_mobil3!=2||beli_mobil3!=3||beli_mobil3!=4){
							printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR !\n");
							goto belimobil3;
						}		
					}
					else if(spek_mobil3=='t'||spek_mobil3=='T'){
						system("cls");
						printf("\n");
						goto jenis;
					}
					else if(spek_mobil3!='Y'||spek_mobil3!='y'||spek_mobil3!='T'||spek_mobil3!='t'){
						printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR ! \n");
						goto spekmobil3;
					}
			break;	
			}
		default:
			{
				printf("\nTIDAK VALID, MASUKKAN KODE YANG BENAR ! \n\n");
				system("cls");
				goto jenis;
			}	
	}
	
	ulang:
	printf("Apakah Anda Ingin Membeli Lagi (Y/T) ? ");
	scanf("%s", &ulang);
	
		if(ulang=='y'|| ulang=='Y'){
			system("cls");
			goto jenis;
		}
		else if(ulang=='t'||ulang=='T'){
			exit(0);
		}
	
	return 0;
}


/*Nama : Nashiruddin Ahmad (21081010202)
		Muchammad Syamsu Huda (21081010241)
  Kel : 22	*/		
