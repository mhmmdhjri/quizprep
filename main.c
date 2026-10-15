#include <stdio.h>

int main() {
    int n, k;
    // Membaca jumlah gerbong (N) dan jumlah instruksi (K)
    scanf("%d %d", &n, &k);
    
    // Menggunakan long long agar aman menampung nilai peti yang besar (hingga 1.000.000.000)
    long long c[1005]; 
    
    // Membaca jumlah muatan peti untuk setiap gerbong
    for (int x = 0; x < n; x++) {
        scanf("%lld", &c[x]);
    }
    
    // Melakukan K instruksi pemindahan/swap
    for (int step = 0; step < k; step++) {
        int i, j;
        scanf("%d %d", &i, &j);
        
        // Sesuaikan dengan indeks array (0-indexed), kurangi 1
        int idx1 = i - 1;
        int idx2 = j - 1;
        
        // Proses penukaran (swap) muatan peti
        long long temp = c[idx1];
        c[idx1] = c[idx2];
        c[idx2] = temp;
    }
    
    // Menampilkan hasil akhir susunan muatan peti
    for (int x = 0; x < n; x++) {
        printf("%lld", c[x]);
        if (x < n - 1) {
            printf(" "); 
        }
    }
    printf("\n");
    
    return 0;
}
