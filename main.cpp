#include <iostream>
#include <math.h>
#include <string>
#include <GL/glut.h>
#include <cmath>

using namespace std;

void BangunDatar() {
    int pilihan2;
    double A, B, SMS, s, p, l, a, t, r, aj, tj, smj, at1, at2, tt, SMT, d1, d2, s1, s2, phi = 3.14;
    cout << "==========================================================" << endl;
    cout << "                  JENIS BANGUN DATAR                      " << endl;
    cout << "==========================================================" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Lingkaran" << endl;
    cout << "5. Jajar Genjang" << endl;
    cout << "6. Trapesium" << endl;
    cout << "7. Layang-layang" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "Masukkan Pilihan: ";
    cin >> pilihan2;
    cout << endl;
    switch (pilihan2) {
        case 1:
            cout << "-------------------------PERSEGI--------------------------" << endl;
            cout << "Masukkan Panjang Sisi: ";
            cin >> s;
            cout << endl;
            cout << "Hasil:" << endl;
            A = s * s;
            cout << "Luas        = " << A << endl;
            B = s * 4;
            cout << "Keliling    = " << B << endl;
            cout << endl;
            break;
        case 2:
            cout << "---------------------PERSEGI PANJANG----------------------" << endl;
            cout << "Masukkan Panjang: ";
            cin >> p;
            cout << "Masukkan Lebar: ";
            cin >> l;
            cout << endl;
            cout << "Hasil:" << endl;
            A = p * l;
            cout << "Luas        = " << A << endl;
            B = p * 2 + l * 2;
            cout << "Keliling    = " << B << endl;
            cout << endl;
            break;
        case 3:
            cout << "-------------------------SEGITIGA-------------------------" << endl;
            cout << "Masukkan Panjang Alas: ";
            cin >> a;
            cout << "Masukkan Tinggi: ";
            cin >> t;
            cout << endl;
            cout << "Hasil:" << endl;
            SMS = sqrt((a * a) + (t * t));
            cout << "Sisi Miring = " << SMS << endl;
            A = a * t / 2;
            cout << "Luas        = " << A << endl;
            B = SMS * 2 + a;
            cout << "Keliling    = " << B << endl;
            cout << endl;
            break;
        case 4:
            cout << "-------------------------LINGKARAN------------------------" << endl;
            cout << "Masukkan Jari-Jari Lingkaran: ";
            cin >> r;
            cout << endl;
            cout << "Hasil:" << endl;
            A = phi * r * r;
            cout << "Luas        = " << A << endl;
            B = 2 * phi * r;
            cout << "Keliling    = " << B << endl;
            cout << endl;
            break;
        case 5:
            cout << "----------------------JAJAR GENJANG-----------------------" << endl;
            cout << "Masukkan Panjang Alas: ";
            cin >> aj;
            cout << "Masukkan Tinggi: ";
            cin >> tj;
            cout << "Masukkan Sisi Miring: ";
            cin >> smj;
            cout << endl;
            cout << "Hasil:" << endl;
            A = aj * tj;
            cout << "Luas        = " << A << endl;
            B = (2 * aj) + (2 * smj);
            cout << "Keliling    = " << B << endl;
            cout << endl;
            break;
        case 6:
            cout << "-------------------------TRAPESIUM------------------------" << endl;
            cout << "Masukkan Panjang Alas 1: ";
            cin >> at1;
            cout << "Masukkan Panjang Alas 2: ";
            cin >> at2;
            cout << "Masukkan Tinggi: ";
            cin >> tt;
            cout << endl;
            if (at1 > at2) {
                cout << "Hasil:" << endl;
                SMT = sqrt(((at1 - at2) * (at1 - at2)) + (tt * tt));
                cout << "Sisi Miring = " << SMT << endl;
                A = 4 * (at1 + at2) / 2;
                cout << "Luas        = " << A << endl;
                B = at1 + at2 + tt + SMT;
                cout << "Keliling    = " << B << endl;
                cout << endl;
            } else {
                cout << "Hasil:" << endl;
                SMT = sqrt(((at2 - at1) * (at2 - at1)) + (tt * tt));
                cout << "Sisi Miring = " << SMT << endl;
                A = 4 * (at1 + at2) / 2;
                cout << "Luas        = " << A << endl;
                B = at1 + at2 + tt + SMT;
                cout << "Keliling    = " << B << endl;
                cout << endl;
            }
            break;
        case 7:
            cout << "----------------------LAYANG-LAYANG-----------------------" << endl;
            cout << "Masukkan Panjang Diagonal 1: ";
            cin >> d1;
            cout << "Masukkan Panjang Diagonal 2: ";
            cin >> d2;
            cout << "Masukkan Panjang Sisi 1: ";
            cin >> s1;
            cout << "Masukkan Panjang Sisi 2: ";
            cin >> s2;
            cout << endl;
            cout << "Hasil:" << endl;
            A = d1 * d2 / 2;
            cout << "Luas        = " << A << endl;
            B = (2 * s1) + (2 * s2);
            cout << "Keliling    = " << B << endl;
            cout << endl;
            break;
        default:
            cout << "Maaf Pilihan Tidak Ada!" << endl;
            cout << endl;
    }
}

// Fungsi untuk menggambar segitiga merah
void drawTriangle() {
    glColor3f(1.0, 0.0, 0.0); // Warna merah
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.5, -0.5);
        glVertex2f(0.0, 0.5);
        glVertex2f(0.5, -0.5);
    glEnd();
}

// Fungsi untuk menggambar trapesium biru
void drawTrapezoid() {
    glColor3f(0.0, 0.0, 1.0); // Warna biru
    glBegin(GL_QUADS);
        glVertex2f(-0.4, -0.4);
        glVertex2f(0.4, -0.4);
        glVertex2f(0.3, 0.2);
        glVertex2f(-0.3, 0.2);
    glEnd();
}

// Fungsi untuk menggambar lingkaran hijau
void drawCircle() {
    glColor3f(0.0, 1.0, 0.0); // Warna hijau
    glBegin(GL_POLYGON);
    for(int i = 0; i < 360; i++) {
        float theta = i * 3.14159 / 180;
        glVertex2f(0.5 * cos(theta), 0.5 * sin(theta));
    }
    glEnd();
}

void drawPentagon() {
    glColor3f(1.0, 1.0, 0.0); // Warna kuning
    glBegin(GL_POLYGON);
    float angle;
    for (int i = 0; i < 5; i++) {
        angle = i * 2.0f * M_PI / 5 + M_PI / 10; 
        glVertex2f(0.5 * cos(angle), 0.5 * sin(angle));
    }
    glEnd();
}

void drawTriangle(float x1, float y1, float x2, float y2, float x3, float y3) {
    glBegin(GL_TRIANGLES);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glVertex2f(x3, y3);
    glEnd();
}

void drawHexagon() {
    glBegin(GL_POLYGON);
    glColor3f(0.2f, 0.2f, 0.5f); // Warna biru lebih gelap
    glVertex2f(-0.5f, -0.25f);
    glVertex2f(-0.5f, 0.25f);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(0.5f, 0.25f);
    glVertex2f(0.5f, -0.25f);
    glVertex2f(0.0f, -0.5f);
    glEnd();
}

void drawTrapezoid1() {
    // Atur warna hijau zaitun
    glColor3f(0.5f, 0.5f, 0.0f);

    // Gambar poligon (4 titik) menyerupai trapezoid
    glBegin(GL_POLYGON);
        // Koordinat berikut hanya contoh perkiraan;
        // ubah sesuai kebutuhan agar lebih mirip gambar.
        glVertex2f(-0.6f, 0.5f); // Kiri atas
        glVertex2f( 0.6f, 0.5f); // Kanan atas (sedikit lebih rendah agar atasnya miring)
        glVertex2f( 0.3f, 0.0f); // Kanan bawah
        glVertex2f(-0.4f, 0.0f); // Kiri bawah
    glEnd();
}

void drawTrapezoid2() {
    // Warna hijau zaitun
    glColor3f(0.5f, 0.5f, 0.0f);

    // Gambar poligon (4 titik) dengan sisi-sisi miring
    // Silakan ubah-ubah koordinatnya jika bentuknya masih kurang sesuai
    glBegin(GL_POLYGON);
        // Koordinat di bawah ini hanya perkiraan contoh.
        // Top (kiri -> kanan)
        glVertex2f(-0.6f,  0.4f);  // Titik kiri atas
        glVertex2f( 0.6f,  0.5f);  // Titik kanan atas (sedikit lebih rendah)

        // Bottom (kanan -> kiri)
        glVertex2f( 0.5f, -0.5f);  // Titik kanan bawah
        glVertex2f(-0.5f, -0.4f);  // Titik kiri bawah (sedikit lebih rendah lagi)
    glEnd();
}

void drawTrapezoid3() {
    // Warna hijau zaitun
    glColor3f(0.5f, 0.5f, 0.0f);

    // Poligon (4 titik)
    // Koordinat berikut hanya perkiraan contoh untuk mendapatkan bentuk miring.
    // Sesuaikan agar lebih mirip gambar.
    glBegin(GL_POLYGON);
        glVertex2f(-0.7f,  -0.4f);  // Kiri atas
        glVertex2f( 0.3f,  -0.3f);  // Kanan atas (sedikit lebih rendah)
        glVertex2f( 0.1f, 0.2f);  // Kanan bawah
        glVertex2f(-0.9f, 0.4f);  // Kiri bawah
    glEnd();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

void display1(){
			glClear(GL_COLOR_BUFFER_BIT);
            glPushMatrix();
            glTranslatef(0.0, 0.0, 0.0);
            drawTriangle();
            glPopMatrix();	
            glFlush();
}

void display2(){
			glClear(GL_COLOR_BUFFER_BIT);
            glPushMatrix();
            glTranslatef(0.0, 0.0, 0.0);
            drawTrapezoid();
            glPopMatrix();
            glFlush();
}

void display3(){
			glClear(GL_COLOR_BUFFER_BIT);
            glPushMatrix();
            glTranslatef(0.0, 0.0, 0.0);
            drawPentagon();
            glPopMatrix();
            glFlush();
}

void display4(){
			glClear(GL_COLOR_BUFFER_BIT);
            glPushMatrix();
            glTranslatef(0.0, 0.0, 0.0);
            drawCircle();
            glPopMatrix();
            glFlush();
}

void display5() {
    		glClear(GL_COLOR_BUFFER_BIT);
			glColor3f(1.0f, 0.0f, 0.0f);
			// Segitiga atas (menghadap ke bawah)
			drawTriangle(-0.5f, 0.5f, 0.5f, 0.5f, 0.0f, 0.0f);
			// Segitiga bawah (menghadap ke atas)
			drawTriangle(-0.5f, -0.5f, 0.5f, -0.5f, 0.0f, 0.0f);
			glFlush(); // Render objek
}

void display6() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawHexagon();
    glFlush();
}

void display7() {
     glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    	glTranslatef(0.02f, 0.15f, 0.0f);
    	glScalef(0.5f, 0.5f, 1.0f);
    	glRotatef(5.0f, 0.0f, 0.0f, 1.0f);
       drawTrapezoid1();
    glPopMatrix();

    glPushMatrix();
    	glTranslatef(0.0f, 0.0f, 0.0f);
    	glScalef(0.3f, 0.3f, 1.0f);
        drawTrapezoid2();
    glPopMatrix();

    glPushMatrix();
    	glTranslatef(0.12f, -0.23f, 0.0f);
    	glScalef(0.3f, 0.3f, 1.0f);
    	glRotatef(5.0f, 0.0f, 0.0f, 1.0f);
        drawTrapezoid3();
    glPopMatrix();


    glFlush();
}

void visualisasi() {
    int pilihan4;
    cout << "==========================================================" << endl;
    cout << "                  VISUALISASI BIDANG                      " << endl;
    cout << "==========================================================" << endl;
    cout << "1. Segitiga Merah" << endl;
    cout << "2. Trapesium Biru" << endl;
    cout << "3. Logo UPN Kuning" << endl;
    cout << "4. Lingkaran Hijau" << endl;
    cout << "5. Jam Pasir Merah" << endl;
    cout << "6. Segienam Biru" << endl;
    cout << "7. Tiga Trapesium" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "Masukkan Pilihan: ";
    cin >> pilihan4;
    switch (pilihan4) {
        case 1:
    	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    	glutInitWindowSize(500, 500);
    	glutCreateWindow("OpenGL Shapes");
    	init();
    	glutDisplayFunc(display1);
    	glutMainLoop();
            break;
        case 2:
    	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    	glutInitWindowSize(500, 500);
    	glutCreateWindow("OpenGL Shapes");
    	init();
    	glutDisplayFunc(display2);
    	glutMainLoop();
            break;
        case 3:
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    	glutInitWindowSize(500, 500);
    	glutCreateWindow("OpenGL Shapes");
    	init();
    	glutDisplayFunc(display3);
    	glutMainLoop();
            break;
        case 4:
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    	glutInitWindowSize(500, 500);
    	glutCreateWindow("OpenGL Shapes");
    	init();
    	glutDisplayFunc(display4);
    	glutMainLoop();
            break;
        case 5:
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    	glutInitWindowSize(500, 500);
    	glutCreateWindow("OpenGL Shapes");
    	init();
    	glutDisplayFunc(display5);
    	glutMainLoop();
            break;
        case 6:
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    	glutInitWindowSize(500, 500);
    	glutCreateWindow("OpenGL Shapes");
    	init();
    	glutDisplayFunc(display6);
    	glutMainLoop();
            break;
        case 7:
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    	glutInitWindowSize(500, 500);
    	glutCreateWindow("OpenGL Shapes");
    	init();
    	glutDisplayFunc(display7);
    	glutMainLoop();
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }
}

int main(int argc, char** argv) {
    int pilihan;
//    char quit;
//	quit='y';	
//	
//  do{
//	system("cls");
    cout << "==========================================================" << endl;
    cout << "                   PILIH MENU UTAMA                      " << endl;
    cout << "==========================================================" << endl;
    cout << "1. Bangun Datar" << endl;
    cout << "2. Visualisasi Bidang" << endl;
    cout << "Masukkan Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            BangunDatar();
            cout<<"Kembali Ke Menu (y/t): ";
//            cin>>quit;
            break;
        case 2:
        	glutInit(&argc, argv);
            visualisasi();
            cout<<"Kembali Ke Menu (y/t): ";
//            cin>>quit;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }
//	} while (quit == 'y');
}