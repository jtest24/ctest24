//#include <stdio.h> 
//int main() {
//	int a;
//	float b;
//	double c;
//	char d;
//	printf("Size1 : %d bytes\n", sizeof (int));
//	printf("Size2 : %d bytes\n", sizeof b);
//	printf("Size3 : %d bytes\n", sizeof(a+b));
//	printf("Size4 : %d byte\n", sizeof(short));
//	printf("Size5 : %d byte\n", sizeof(long));
//	printf("Size6 : %d byte\n", sizeof(long long));
//	printf("Size7 : %d byte\n", sizeof(double));
//	printf("Size8 : %d byte\n", sizeof(long double));
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int 3__mm;
//}

// 2
//#include <stdio.h>
//int main(void) {
//	char a[20] = "Korea Tech";
//	printf("TEST = %d %d\n", a[5], a[10]);
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	char a[20] = "You & I";
//	printf("%x %d\n", a[5], a[8]);
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	int a, b, c;
//	float d;
//	a = 10, b = 5, c = 3;
//	d = a / 3 + (b % 3 + c) / 2;
//	printf("%.2f", d);
//}

//#include <stdio.h>
//int main(void) {
//	int a, b, c;
//	float d;
//	a = 1, b = 5, c = 3;
//	d = a / 3 + (b % 3 + c) / 3.0;
//	printf("%.2f", d);
//}

//#include <stdio.h> 
//float foo(int, int, float);// function prototype
//int main(void) {
//	int a, b, c;
//	a = b = 2;  c = 3;
//	printf("%.2f", foo(a, b, c));
//	return 0;
//}
//float foo(int a, int b, float c) {
//	return (a * b / c * b);
//}

//#include <stdio.h> 
//float foo(int, int, float);// function prototype
//int main(void) {
//	int a, b, c;
//	a = b = c = 3;
//	printf("%d, %.2f", a, foo(a, b, c));
//	return 0;
//}
//float foo(int a, int b, float c) {
//	printf("%.1f\n", c);
//	return (a * b % a * c);
//}


//#include <stdio.h> 
//int boo(int a, int b) {
//	return (a / b);
//}
//int bar(int a, int b) {
//	return (a > b);
//}
//int foo(int a, int b) {
//	return (boo(a, b) + bar(a, b));
//}
//int main(void)
//{
//	int a = 3, b = 5;
//	printf("%d, %d, %d\n", foo(a, b), boo(a, b), bar(a, b));
//	return 0;
//}

//#include <stdio.h> 
//float foo(float a, float b) {
//	return (a / b);
//}
//int boo(int a, int b) {
//	return (a > b);
//}
//
//int main(void)
//{
//	float a = 3.0, b = 5;
//	if (foo(a, b))
//		printf("%4.2f, %d\n", foo(a, b), boo(a, b));
//	else
//		printf("done\n");
//	return 0;
//}

 
//#include <stdio.h>
//#include <string.h>
//int main(void) {
//	char a[10];
//	printf("Type any word : ");
//	scanf_s("%s", a, sizeof(a));
//	printf("A = %d (%s)\n", strlen(a), a);
//	for (int i = 0; i < strlen(a); i++) a[i] = 'a';
//	a[strlen(a)+1] = '\0';
//	printf("B = %s %d\n", a, a[4]);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main(void) {
//	char a[20];
//	printf("Input : ");
//	scanf_s("%s", a, sizeof(a));
//	printf("A = %d (%s)\n", strlen(a), a);
//	for (int i = 0; i < strlen(a); i++) a[i] += 1;
//	a[strlen(a)+1] = '\0';
//	printf("B = %s %d\n", a, a[4]);
//	return 0;
//}


// #include <stdio.h> 
//int main(void) {
//	float n1, n2, s;
//	printf("Enter 2 floating numbers : ");
//	scanf_s("%f,%f", &n1, &n2);
//	s = n1 / n2;
//	printf("%4.2f + %4.4f = %4.1f\n", n1, n2, s);
//	return 0;
//}

// #include <stdio.h> 
//int main(void) {
//	int a = 3, b = 4;
//	int s = a * b;
//	printf("%x %% %o\n", s, s);
//	return 0;
//}
 

//#include <stdio.h> 
//int main() {
//	int a, b, c;
//	a = 0b1010; b = 0xab; 	c = 013;
//	printf("%#x\n", a + b + c);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a, b, c;
//	a = 3; b = 4; c = 5;
//	printf("%d\n", (a != b) * (c < b));
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a, b, c;
//	a = 3; b = 4; c = 5;
//	printf("%d\n", (a != b) * (c > b));
//	return 0;
//}

//#include <stdio.h> 
//int main() {
//	int a, b;
//	a = 3; b = 4;
//	printf("%d, ", --b);
//	a += b--;
//	printf("%d, %d\n", a--, b);
//	return 0;
//}

//#include <stdio.h> 
//int main() {
//	int a, b;
//	a = 3; b = 4;
//	printf("%d, ", --a);
//	a += b--;
//	printf("%d, %d\n", a--, b);
//	return 0;
//}

//#include <stdio.h> 
//int main() {
//	int a, b, c;
//	a = 3; b = 4; c = 5;
//	printf("%d\n", (a == b) || (c < b) && (a += b));
//	return 0;
//}

//#include <stdio.h> 
//int main() {
//	int a, b, c;
//	a = 3; b = 4; c = 5;
//	printf("%d\n", (a == b) || (c > b) && (a -= --b));
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	int sel;
//	
//	printf("Your choice : ");
//	scanf_s("%d", &sel);
//	
//	switch (sel) {
//	case 1: 
//		printf("A, "); 
//	case 2:
//		printf("B, "); break;
//	case 3:
//		printf("C, ");
//	default :
//		printf("done \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	int sel;
//	
//	printf("Your choice : ");
//	scanf_s("%d", &sel);
//	
//	switch (sel) {
//	case 1: 
//		printf("A, "); 
//	case 2:
//		printf("B, "); break;
//	case 3:
//		printf("C, ");
//	default :
//		printf("done \n");
//	}
//	return 0;
//}

//#include <stdio.h> 
//#include <string.h>
//int main(void) {
//	int num = 10;
//	int count, sum = 0;
//	char a[] = "Koreatech";
//	if ((strlen(a) > 8) && a[9]) {
//		for (count = 1; count <= num; count++) {
//			sum += (count / 2);
//		}
//		printf("Sum = %d\n", sum);
//	}
//	else {
//		printf("done");
//	}
//		return 0;
//}

//#include <stdio.h> 
//#include <string.h>
//int main(void) {
//	int num = 10;
//	int count, sum = 0;
//	char a[] = "Koreatech";
//	if ((strlen(a) >> 4) && a[0]) {
//		for (count = 1; count <= num; count++) {
//			sum += (count / 2);
//		}
//		printf("Sum = %d\n", sum);
//	}
//	else {
//		printf("done");
//	}
//		return 0;
//}


//#include <stdio.h> 
//int main(void) {
//	int i = 0;
//	while (i < 10) {
//		printf("%d ", i); i++;
//		if (i % 2) {
//			i++;  continue;
//		}
//	}
//	return 0;
//}


//#include <stdio.h> 
//int main(void) {
//	int i = 0;
//	while (i < (17 >> 2)) {
//		printf("%d ", i); i++;
//		if (i % 2) {
//			i++;  continue;
//		}
//	}
//	return 0;
//}


//#include <stdio.h> 
//int main(void) {
//	int n, i;
//	unsigned long fact = 1;
//	printf("Enter an integer: ");
//	scanf_s("%d", &n);
//	if ((n >= 1) && (n <= 7)) {
//		for (i = 1; i <= n; i++) {
//			fact *= i;
//		}
//		printf("Factorial of %d = %lu", n, fact);
//	} else {
//		printf("Error! out of range \n");
//	}	
//	return 0;
//}


//#include <stdio.h>
//int a, b;
//int foo(int a, int b) {
//	static int tmp;
//	b = tmp;
//	tmp++;
//	printf("tmp = %d ", tmp);
//	return a + b;
//}
//int main(void) {
//	a = 3, b = 4;
//	for (int i = 0; i < 3; i++) {
//		printf("%d %d %d ", a, b, foo(a, b));
//	}
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//int a, b;
//int foo(int a, int b) {
//	static int tmp;
//	b = tmp;
//	tmp++;
//	printf("%d : ", tmp);
//	return a + b;
//}
//int main(void) {
//	a = 3, b = 4;
//	for (int i = 0; i < 3; i++) {
//		printf("%d %d %d\n", a, b >> 1, foo(a, b));
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int a, b;
//int foo(int a, int b) {
//	static int tmp;
//	printf("tmp = %d ", tmp);
//	return a + b;
//}
//int main(void) {
//	a = 3, b = 4;
//	for (int i = 0; i < 3; i++) {
//		printf("%d %d %d ", a, b, foo(a, b));
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	char str[100];
//	for (int i = 0; i < 3; i++) {
//		printf("Type a word : ");
//		gets_s(str, sizeof(str));
//		printf("str : %s\n", str);
//		int j = 0;
//		while (1) {
//			if (str[j] == '\0') break;
//			printf("%c ", str[j]);
//			j++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	printf("%d %d", 3, printf("%d ", printf("%s ", "hello")));
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	int *p, *q = NULL;
//	int a;
//
//	p = &a;
//	q = p++;
//	printf("p = %p, %p, %x, %#x", p, q, q, q);
//
//	return 0;
//}

//#include <stdio.h> 
//int main(void) {
//	int num[10];
//	int i, n, sum = 0;
//	float average;
//	printf("Number of Scores : ");
//	scanf_s("%d", &n);
//	for (i = 0; i < n; i++) {
//		printf("Score [%d] : ", i);
//		scanf_s("%d", &num[i]);
//		sum += num[i];
//	}
//	average = (float)sum / n;
//	printf("Average of Scores = %4.2f\n", average);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    // 1. 기본 포인터 사용
//    int number = 42;
//    int* ptr = &number;  // number의 주소를 포인터에 저장
//     
//    printf("number의 값: %d\n", number);
//    printf("number의 주소: %p\n", (void*)&number);
//    printf("ptr이 가리키는 값: %d\n", *ptr);
//    printf("ptr에 저장된 주소: %p\n", (void*)ptr);
//
//    *ptr = 100;  // 포인터를 통해 값 변경
//    printf("변경된 number의 값: %d\n\n", number);
//
//}

//#include <stdio.h>
//
//void swapNumbers(int* a, int* b);
//
//int main(void) {
//
//    int x = 5, y = 10;
//    printf("swap function\n");
//    printf("교환 전: x = %d, y = %d\n", x, y);
//    swapNumbers(&x, &y);
//    printf("교환 후: x = %d, y = %d\n\n", x, y);
//
//}
//
//void swapNumbers(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}

//#include <stdio.h>
//
//void modifyArray(int arr[], int size);
//
//int main(void) {
//    // 4. 배열과 포인터
//    int arr[5] = { 1, 2, 3, 4, 5 };
//    printf("배열 수정 전: ");
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    modifyArray(arr, 5);  // 배열은 자동으로 포인터로 전달됨
//
//    printf("배열 수정 후: ");
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
//
//void modifyArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        arr[i] *= 2;  // arr[i]는 *(arr + i)와 동일
//    }
//}

//#include <stdio.h>
//int main(int argc, char *argv[]) {
//	int i = 0;
//	printf("argc = %d\n", argc);
//	for (i = 0; i < argc; i++) {
//		printf("argv[%d] = %s\n", i, argv[i]);
//	}
//	return 0;
//
//}

//#include <stdio.h>
//#include <string.h>
//
//void printHelp() {
//    printf("사용법: ./program [옵션] [인자]\n");
//    printf("옵션:\n");
//    printf("  -h, --help     도움말을 보여줍니다\n");
//    printf("  -n [숫자]      입력한 숫자만큼 반복합니다\n");
//    printf("  -s [문자열]    입력한 문자열을 출력합니다\n");
//}
//
//int main(int argc, char* argv[]) {
//    // argc: 프로그램 실행 시 전달된 인자의 개수 (프로그램 이름 포함)
//    // argv: 전달된 인자들의 문자열 배열
//
//    // 인자가 없는 경우
//    if (argc == 1) {
//        printf("전달된 인자가 없습니다.\n");
//        printf("도움말을 보려면 -h 또는 --help를 입력하세요.\n");
//        return 0;
//    }
//
//    // 인자 처리
//    for (int i = 1; i < argc; i++) {
//        // 도움말 옵션
//        if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
//            printHelp();
//            return 0;
//        }
//        // 숫자 반복 옵션
//        else if (strcmp(argv[i], "-n") == 0) {
//            if (i + 1 < argc) {
//                int count = atoi(argv[i + 1]);
//                printf("-n 옵션이 선택되었습니다. %d번 반복합니다:\n", count);
//                for (int j = 0; j < count; j++) {
//                    printf("반복 %d\n", j + 1);
//                }
//                i++; // 다음 인자는 이미 처리했으므로 건너뜀
//            }
//            else {
//                printf("에러: -n 옵션에는 숫자가 필요합니다.\n");
//            }
//        }
//        // 문자열 출력 옵션
//        else if (strcmp(argv[i], "-s") == 0) {
//            if (i + 1 < argc) {
//                printf("-s 옵션이 선택되었습니다. 입력한 문자열: %s\n", argv[i + 1]);
//                i++; // 다음 인자는 이미 처리했으므로 건너뜀
//            }
//            else {
//                printf("에러: -s 옵션에는 문자열이 필요합니다.\n");
//            }
//        }
//        // 알 수 없는 옵션
//        else {
//            printf("알 수 없는 옵션 또는 인자입니다: %s\n", argv[i]);
//        }
//    }
//
//    // 모든 인자 출력
//    printf("\n전체 인자 목록:\n");
//    for (int i = 0; i < argc; i++) {
//        printf("argv[%d]: %s\n", i, argv[i]);
//    }
//
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//	int a = 100;
//	int* p = NULL;
//	p = &a;
//	printf("a = %d, a_addr = %p \n", a, &a);
//	printf("%d, %p\n", *p++, p);
//	p = &a;
//	printf("%d, %p\n", (*p)++, p);
//	p = &a;
//	printf("%d, %p\n", *++p, p);
//	p = &a;
//	printf("%d, %p\n", ++*p, p);
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	int *a;
//	short* b;
//	long* c;
//	char* d;
//	int data = 100;
//	a = &data;
//	b = (short*)&data;
//	c = (long*)&data;
//	d = (char*)&data;
//	printf("a_addr = %p, value = %d, size = %d\n", a, *a, sizeof a);
//	printf("a_addr : %p, step : %d, addr++ : %p, value = %d \n", a, sizeof(int), a++, *a);
//	printf("b_addr : %p, step : %d, addr++ : %p \n", b, sizeof(short), b++);
//	printf("c_addr : %p, step : %d, addr++ : %p \n", c, sizeof(long), c++);
//	printf("d_addr : %p, step : %d, addr++ : %p \n", d, sizeof(char), d++);
//
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	int arr[ ] = { 100, 200, 300, 400 };
//	int* p, q;
//	p = arr;
//	q = &arr[0];
//	arr++;
//	printf("p = %p, p = %#x, q = %#X\n", p, p, q);
//	printf("a1 : %#x, a2 : %#x, a3 : %#x\n", p+1, p+2, p+3);
//	printf("v1 : %d, v2 : %d, v3 : %d\n", *(p + 1), *(p + 2), *(p + 3));
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	int a = 100;
//	int* p;
//	int** dp;
//	int*** tp;
//
//	p = &a;
//	dp = &p;
//	tp = &dp;
//
//	printf("a = %d\n", a);
//	printf("p = %#x, *p = %d\n", p, *p);
//	printf("dp = %#x, *dp = %#x, **dp = %d\n", dp, *dp, **dp);
//	printf("tp = %#x, *tp = %#x, **tp = %#x, ***tp = %d\n", tp, *tp, **tp, ***tp);
//
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	int arr[][3] = {{101, 102, 103}, {201, 202, 203}, {301, 302, 303 }};
//	int** p;
//	int *q, *r;
//
//	p = arr;
//	q = arr[0];
//	r = &arr[0][0];
//	
//	printf("p = %#x, q = %#x, r = %#x, size = %d\n", p, q, r, sizeof p);
//	printf("a1 : %#x, a2 : %#x, a3 : %#x\n", arr[0], arr[1], arr[2]);
//	printf("v1 : %d, %d, %d\n", *arr[0], *arr[1], *arr[2]);
//	printf("v2 : %d, %d, %d\n", *(q), *(q + 1), *(q + 2));
//	printf("v3 : %d, %d, %d\n", *(*(arr) + 1), *(*(arr+1) + 1), *(*(arr+2) + 1));
//	printf("p+1 : %d, q+1 : %d, r+1 : %d\n", *(p + 1), *(q + 1), *(r + 1));
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//// RGB 컬러를 표현하는 구조체
//typedef struct {
//    unsigned char red;    // 0-255
//    unsigned char green;  // 0-255
//    unsigned char blue;   // 0-255
//} RGBColor;
//
//// 16진수 컬러 코드를 RGB로 변환
//RGBColor hex_to_rgb(const char* hex_color) {
//    RGBColor color = { 0, 0, 0 };
//
//    // #을 제외하고 시작하는 경우를 처리
//    const char* hex = hex_color;
//    if (hex[0] == '#') hex++;
//
//    // 16진수 문자열을 정수로 변환
//    unsigned int hex_value;
//    scanf_s(hex, "%x", &hex_value);
//
//    color.red = (hex_value >> 16) & 0xFF;
//    color.green = (hex_value >> 8) & 0xFF;
//    color.blue = hex_value & 0xFF;
//
//    return color;
//}
//
//// RGB를 16진수 문자열로 변환
//void rgb_to_hex(RGBColor color, char* hex_out) {
//    sprintf_s(hex_out, 8, "#%02X%02X%02X", color.red, color.green, color.blue);
//}
//
//// RGB 색상 혼합
//RGBColor mix_colors(RGBColor color1, RGBColor color2, float ratio) {
//    RGBColor mixed;
//    ratio = ratio > 1.0f ? 1.0f : ratio < 0.0f ? 0.0f : ratio;
//    float inv_ratio = 1.0f - ratio;
//
//    mixed.red = (unsigned char)(color1.red * ratio + color2.red * inv_ratio);
//    mixed.green = (unsigned char)(color1.green * ratio + color2.green * inv_ratio);
//    mixed.blue = (unsigned char)(color1.blue * ratio + color2.blue * inv_ratio);
//
//    return mixed;
//}
//
//// 색상의 밝기 조절
//RGBColor adjust_brightness(RGBColor color, float factor) {
//    RGBColor adjusted;
//    factor = factor < 0.0f ? 0.0f : factor;
//
//    adjusted.red = (unsigned char)fmin(255, color.red * factor);
//    adjusted.green = (unsigned char)fmin(255, color.green * factor);
//    adjusted.blue = (unsigned char)fmin(255, color.blue * factor);
//
//    return adjusted;
//}
//
//// 보색 생성
//RGBColor get_complementary(RGBColor color) {
//    RGBColor comp;
//    comp.red = 255 - color.red;
//    comp.green = 255 - color.green;
//    comp.blue = 255 - color.blue;
//    return comp;
//}
//
//// 색상 출력 (콘솔)
//void print_color_info(RGBColor color, const char* label) {
//    char hex[8];
//    rgb_to_hex(color, hex);
//    printf("%s: RGB(%d, %d, %d) / %s\n",
//        label, color.red, color.green, color.blue, hex);
//}
//
//// 그라데이션 생성
//void generate_gradient(RGBColor start, RGBColor end, int steps) {
//    printf("\n그라데이션 생성 (%d 단계):\n", steps);
//    for (int i = 0; i < steps; i++) {
//        float ratio = (float)i / (steps - 1);
//        RGBColor gradient_color = mix_colors(start, end, ratio);
//        char hex[8];
//        rgb_to_hex(gradient_color, hex);
//        printf("단계 %d: %s\n", i + 1, hex);
//    }
//}
//
//int main() {
//    // 기본 색상 생성
//    RGBColor red = { 255, 0, 0 };
//    RGBColor blue = { 0, 0, 255 };
//
//    printf("=== RGB 컬러 처리 프로그램 ===\n\n");
//
//    // 16진수 변환 테스트
//    print_color_info(red, "빨간색");
//    print_color_info(blue, "파란색");
//
//    // 색상 혼합
//    RGBColor purple = mix_colors(red, blue, 0.5f);
//    print_color_info(purple, "보라색 (빨강 + 파랑)");
//
//    // 밝기 조절
//    RGBColor bright_purple = adjust_brightness(purple, 1.5f);
//    RGBColor dark_purple = adjust_brightness(purple, 0.5f);
//    print_color_info(bright_purple, "밝은 보라색");
//    print_color_info(dark_purple, "어두운 보라색");
//
//    // 보색 생성
//    RGBColor comp_purple = get_complementary(purple);
//    print_color_info(comp_purple, "보라색의 보색");
//
//    // 16진수 코드로부터 색상 생성
//    RGBColor custom_color = hex_to_rgb("#1ABC9C");
//    print_color_info(custom_color, "터키색 (#1ABC9C)");
//
//    // 그라데이션 생성
//    printf("\n빨간색에서 파란색으로의 그라데이션:");
//    generate_gradient(red, blue, 5);
//
//    return 0;
//}

#include <stdio.h>

void swap_cbv(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap_cbr(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 5, y = 10;

    printf("Before swap_cbv : x = %d, y = %d\n", x, y);
    swap_cbv(x, y);
    printf("After: x = %d, y = %d\n", x, y);

    printf("Before swap_cbr : x = %d, y = %d\n", x, y);
    swap_cbr(&x, &y);
    printf("After: x = %d, y = %d\n", x, y);
}
