    #include <iostream>  
    #include <cmath>  
    #include <vector>
    using namespace std;  

    int main() {  
       // KOMIK  
       int a = 35000;  // ONE PIECE  
       int b = 35000;  // NARUTO  
       int c = 38000;  // DETECTIVE CONAN  
       int d = 40000;  // ATTACK ON TITAN  
       int e = 42000;  // DEMON SLAYER  

       // NOVEL  
       int f = 85000;   // LASKAR PELANGI  
       int g = 90000;   // BUMI  
       int h = 88000;   // AYAT-AYAT CINTA  
       int i= 75000;   // DILAN 1990  
       int j = 100000;  // LAUT BERCERITA  

       // BUKU PELAJARAN  
       int k = 120000;  // MATEMATIKA WAJIB  
       int l = 110000;  // BAHASA INDONESIA  
       int m = 125000;  // BIOLOGI SMA  
       int n = 130000;  // FISIKA SMA  
       int o = 95000;   // SEJARAH INDONESIA  

       // BUKU KONSPIRASI  
       int p = 105000;  // THE DA VINCI CODE  
       int q = 95000;   // ILLUMINATI  
       int r = 110000;  // ECONOMIC HITMAN  
       int s = 100000;  // 1984  
       int t = 115000;  // BEHOLD A PALE HORSE  

       // OUTPUT SEMUA DATA  
       cout << "==== Daftar Buku Lengkap ====\n\n";  

       // KOMIK  
       cout << "One Piece | Komik | Rp " << a << " (a)\n";  
       cout << "Naruto | Komik | Rp " << b << " (b)\n";  
       cout << "Detective Conan | Komik | Rp " << c << " (c)\n";  
       cout << "Attack on Titan | Komik | Rp " << d << " (d)\n";  
       cout << "Demon Slayer | Komik | Rp " << e << " (e)\n\n";  

       // NOVEL  
       cout << "Laskar Pelangi | Novel | Rp " << f << " (f)\n";  
       cout << "Bumi | Novel | Rp " << g << " (g)\n";  
       cout << "Ayat-Ayat Cinta | Novel | Rp " << h << " (h)\n";  
       cout << "Dilan 1990 | Novel | Rp " << i << " (i)\n";  
       cout << "Laut Bercerita | Novel | Rp " << j << " (j)\n\n";  

       // BUKU PELAJARAN  
       cout << "Matematika Wajib | Pelajaran | Rp " << k << " (k)\n";  
       cout << "Bahasa Indonesia | Pelajaran | Rp " << l << " (l)\n";  
       cout << "Biologi SMA | Pelajaran | Rp " << m << " (m)\n";  
       cout << "Fisika SMA | Pelajaran | Rp " << n << " (n)\n";  
       cout << "Sejarah Indonesia | Pelajaran | Rp " << o << " (o)\n\n";  

       // BUKU KONSPIRASI  
       cout << "The Da Vinci Code | Konspirasi | Rp " << p << " (p)\n";  
       cout << "Illuminati | Konspirasi | Rp " << q << " (q)\n";  
       cout << "Economic Hitman | Konspirasi | Rp " << r << " (r)\n";  
       cout << "1984 | Konspirasi | Rp " << s << " (s)\n";  
       cout << "Behold a Pale Horse | Konspirasi | Rp " << t << " (t)\n\n\n";  


       //  PERHITUNGAN KASIR
       cout << "=== KASIR ARIEF ===" << endl;  
       int pilih = 1;
       int total = 0;
       char alpha;
       vector<char> daftar_buku;


       cout << "Masukkan jumlah buku yang ingin dibeli: ";  
       cin >> pilih;  

       for (int x = 1; x <= pilih; x++) { 
           cout << "Masukkan Alphabet Buku ke -" << x << ":" << endl;
           cin >> alpha;  
           daftar_buku.push_back(alpha);

           switch (alpha) {
           case 'a': total += a; break;
           case 'b': total += b; break;
           case 'c': total += c; break;
           case 'd': total += d; break;
           case 'e': total += e; break;
           case 'f': total += f; break;
           case 'g': total += g; break;
           case 'h': total += h; break;
           case 'i': total += i; break;
           case 'j': total += j; break;
           case 'k': total += k; break;
           case 'l': total += l; break;
           case 'm': total += m; break;
           case 'n': total += n; break;
           case 'o': total += o; break;
           case 'p': total += p; break;
           case 'q': total += q; break;
           case 'r': total += r; break;
           case 's': total += s; break;
           case 't': total += t; break;
           } 
       }  

       if (pilih <= 5) {
           cout << "TOTAL HARGA YANG HARUS DI BAYAR : " << total << endl;
           char struk;
           cout << "Apakah anda menginginkan struk belanja ?" << endl;
           cout << "Ketik 1 jika ingin dan ketik 0 untuk tidak [1/0] : ";
           cin >> struk;
           if (struk == '1') {
               cout << "\n=========== STRUK BELANJA ===========" << endl;
               for (char book : daftar_buku) {
                   switch (book) {
                   case 'a': cout << "One Piece - Rp " << a << endl; break;
                   case 'b': cout << "Naruto - Rp " << b << endl; break;
                   case 'c': cout << "Detective Conan - Rp " << c << endl; break;
                   case 'd': cout << "Attack on Titan - Rp " << d << endl; break;
                   case 'e': cout << "Demon Slayer - Rp " << e << endl; break;
                   case 'f': cout << "Laskar Pelangi - Rp " << f << endl; break;
                   case 'g': cout << "Bumi - Rp " << g << endl; break;
                   case 'h': cout << "Ayat-Ayat Cinta - Rp " << h << endl; break;
                   case 'i': cout << "Dilan 1990 - Rp " << i << endl; break;
                   case 'j': cout << "Laut Bercerita - Rp " << j << endl; break;
                   case 'k': cout << "Matematika Wajib - Rp " << k << endl; break;
                   case 'l': cout << "Bahasa Indonesia - Rp " << l << endl; break;
                   case 'm': cout << "Biologi SMA - Rp " << m << endl; break;
                   case 'n': cout << "Fisika SMA - Rp " << n << endl; break;
                   case 'o': cout << "Sejarah Indonesia - Rp " << o << endl; break;
                   case 'p': cout << "The Da Vinci Code - Rp " << p << endl; break;
                   case 'q': cout << "Illuminati - Rp " << q << endl; break;
                   case 'r': cout << "Economic Hitman - Rp " << r << endl; break;
                   case 's': cout << "1984 - Rp " << s << endl; break;
                   case 't': cout << "Behold a Pale Horse - Rp " << t << endl; break;
                   default: cout << "Kode tidak diketahui\n"; break;
                   }
               }
               cout << "--------------------------------------" << endl;
               cout << "TOTAL BAYAR: Rp " << total << endl;
               cout << "======================================" << endl;
           }
       }
       else
       {
           int diskon = total * 30 / 100;
           int hasil = total - diskon;
           cout << "=== SELAMAT ANDA MENDAPATKAN DISKON 30 PERSEN === " << endl;
           cout << "TOTAL HARGA ASLI SEBELUM DISKON : " << total << endl;
           cout << "TOTAL HARGA YANG HARUS DI BAYAR : " << hasil << endl;
           char struk;
           cout << "Apakah anda menginginkan struk belanja ?" << endl;
           cout << "Ketik 1 jika ingin dan ketik 0 untuk tidak [1/0] : ";
           cin >> struk;
           if (struk == '1') {
               cout << "\n=========== STRUK BELANJA ===========" << endl;
               for (char book : daftar_buku) {
                   switch (book) {
                   case 'a': cout << "One Piece - Rp " << a << endl; break;
                   case 'b': cout << "Naruto - Rp " << b << endl; break;
                   case 'c': cout << "Detective Conan - Rp " << c << endl; break;
                   case 'd': cout << "Attack on Titan - Rp " << d << endl; break;
                   case 'e': cout << "Demon Slayer - Rp " << e << endl; break;
                   case 'f': cout << "Laskar Pelangi - Rp " << f << endl; break;
                   case 'g': cout << "Bumi - Rp " << g << endl; break;
                   case 'h': cout << "Ayat-Ayat Cinta - Rp " << h << endl; break;
                   case 'i': cout << "Dilan 1990 - Rp " << i << endl; break;
                   case 'j': cout << "Laut Bercerita - Rp " << j << endl; break;
                   case 'k': cout << "Matematika Wajib - Rp " << k << endl; break;
                   case 'l': cout << "Bahasa Indonesia - Rp " << l << endl; break;
                   case 'm': cout << "Biologi SMA - Rp " << m << endl; break;
                   case 'n': cout << "Fisika SMA - Rp " << n << endl; break;
                   case 'o': cout << "Sejarah Indonesia - Rp " << o << endl; break;
                   case 'p': cout << "The Da Vinci Code - Rp " << p << endl; break;
                   case 'q': cout << "Illuminati - Rp " << q << endl; break;
                   case 'r': cout << "Economic Hitman - Rp " << r << endl; break;
                   case 's': cout << "1984 - Rp " << s << endl; break;
                   case 't': cout << "Behold a Pale Horse - Rp " << t << endl; break;
                   default: cout << "Kode tidak diketahui\n"; break;
                   }
               }
               cout << "--------------------------------------" << endl;
               cout << "TOTAL BAYAR: Rp " << total << "" <<" - 30% = " << "" << hasil << endl;
               cout << "======================================" << endl;
           }
       }

       return 0;
    }
