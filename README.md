## nama : April dwi amalia 
## nim : 241091900379
## kelas : 02SKMM003

# Insertion Sort adalah algoritma pengurutan (sorting) yang bekerja seperti saat kita mengurutkan kartu remi di tangan. Kita mulai dari kartu kedua, dan membandingkannya dengan kartu di sebelah kirinya, lalu menyisipkan (insert) kartu itu ke tempat yang tepat. Begitu seterusnya hingga semua kartu terurut.

# Langkah-langkah Insertion Sort:
Misalnya kita punya array:
[8, 4, 1, 5, 2]

# 1. Mulai dari elemen ke-2 (indeks 1):
Bandingkan 4 dengan 8 → karena 4 < 8, maka geser 8 ke kanan.
Masukkan 4 ke tempat sebelumnya → [4, 8, 1, 5, 2]

# 2. Elemen ke-3 (indeks 2):

Bandingkan 1 dengan 8 → geser 8
Bandingkan 1 dengan 4 → geser 4
Masukkan 1 ke tempat yang kosong → [1, 4, 8, 5, 2]

# 3. Elemen ke-4 (indeks 3):

Bandingkan 5 dengan 8 → geser 8
Bandingkan 5 dengan 4 → tidak perlu geser
Masukkan 5 → [1, 4, 5, 8, 2]

# 4. Elemen ke-5 (indeks 4):

Bandingkan 2 dengan 8 → geser 8
Bandingkan 2 dengan 5 → geser 5
Bandingkan 2 dengan 4 → geser 4
Masukkan 2 → [1, 2, 4, 5, 8]
