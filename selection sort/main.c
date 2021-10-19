#include <stdio.h>
#include <windows.h>

int i,j,t,min;
int n = 6;
int A[6] = {32, 75, 69, 58, 21, 40};

void garis(int x) {
	int a;
	for(a = 0; a < x; a++) {
		printf("=");
	}
	printf("\n");
}

void header(char nama[50], char npm[50],
			char kelas[10], char matkul[50], char dosen[50])
{
	garis(55);
	int a;
	printf("\t\tPROGRAM SELECTION SORT\n");
	garis(55);
	printf("Nama\t\t: %s\n", nama);
	printf("NPM\t\t: %s\n", npm);
	printf("Kelas\t\t: %s\n", kelas);
	printf("Matkul\t\t: %s\n", matkul);
	printf("Dosen Pengampu\t: %s\n", dosen);
	garis(55);
}

void tampilarray() {
	printf("\nElemen Array nya adalah : ");
    for(i=0; i<n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");
    garis(55);
}

void selectionsort_ascending() {
	for(i=0; i<=n-1; i++) {
		min = i;
        for(j=i+1 ;j<n; j++) {
            if(A[min] > A[j]) {
                min = j;
            }
        }
        t = A[min];
        A[min] = A[i];
        A[i] = t;
    }
}

void selectionsort_descending() {
	for(i=0; i<=n-1; i++) {
		min = i;
        for(j=i+1 ;j<n; j++) {
            if(A[min] < A[j]) {
                min = j;
            }
            t = A[min];
	        A[min] = A[i];
	        A[i] = t;
        }
    }
}

void tampildata() {
	printf("\nUrutan Ascendingnya adalah : ");
	selectionsort_ascending();
    for(i=0; i<n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("\nUrutan Descendingnya adalah : ");
	selectionsort_descending();
    for(i=0; i<n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");
    garis(55);
}

int main() {
	system("color 70");
	header("Muhammad Alviriza Ramadhan", "20081010143",
				"D081", "Pemrograman Lanjut", "Fawwaz Ali Akbar, S.Kom, M.Kom");
	tampilarray();
	tampildata();
	return 0;
}
