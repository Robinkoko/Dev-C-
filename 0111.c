#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Coordi {
	int x;
	int y;
};
int main() {
	struct Coordi p1;
	struct Coordi p2 = {5,9};
	struct Coordi p3;
	struct Coordi p4;
	p1.x = 2;
	p1.y =3;
	printf("p1�� ��ǥ(%d, %d )\n",p1.x,p1.y);
	printf("p2�� ��ǥ(%d, %d )\n",p2.x,p2.y);
	return 0;
}
//--------------------------------------------------------------------------------------------
struct circle {
	int x;
	int y;
	double r;
};
int main()
{
	struct circle c1,c3,c4;
	c1.x = 2;
	c1.y = 0;
	c1.r = 3.0;
	struct circle c2 = {6,7,5.0};
	c3 =c1;
	c4.x = c2.y;
	c4.y = c2.x;
	c4.r = 2.0;
	printf("c1�� ��ǥ(%d, %d) , c1�� ������: %.1lf\n",c1.x,c1.y,c1.r);
	printf("c2�� ��ǥ(%d, %d) , c2�� ������: %.1lf\n",c2.x,c2.y,c2.r);
	printf("c3�� ��ǥ(%d, %d) , c3�� ������: %.1lf\n",c3.x,c3.y,c3.r);
	printf("c4�� ��ǥ(%d, %d) , c4�� ������: %.1lf\n",c4.x,c4.y,c4.r);
	return 0;
}
//--------------------------------------------------------------------------------------------
struct person {
	char name[10];
	int age;
	double height;
};
int main()
{
	struct person m1;
	struct person m2 = {"�㳭����",13,159.9};
	strcpy(m1.name, "���");
	m1.age = 19;
	m1.height = 168.34;
	struct person m3;
	scanf("%s %d %lf",&m3.name, &m3.age,&m3.height);
	struct person m4;
	m4.name = "������";
	m4.age =13;
	m4.height = 173.0; 
	printf("m1 �̸�: %s, ����:%d , Ű:%.2lf\n",m1.name, m1.age,m1.height);
	printf("m2 �̸�: %s, ����:%d , Ű:%.2lf\n",m2.name, m2.age,m2.height);
	printf("m3 �̸�: %s, ����:%d , Ű:%.2lf\n",m3.name, m3.age,m3.height);
	printf("m4 �̸�: %s, ����:%d , Ű:%.2lf",m4.name, m4.age,m4.height);
	return 0;
}
//--------------------------------------------------------------------------------------------
struct Address {
	char name[10];
	char phon[20];
	char home[30];
};
int main()
{
	struct Address man1;
	strcpy(man1.name,"ȫ�浿");
	strcpy(man1.phon , "010-4312-2341");
	strcpy(man1.home, "00�� 00�� 00�� 000�� 12-345");
	struct Address man2 = {"���ö","010-9876-5432","@@�� @@�� @@�� 1234-56"};
	struct Address man3;
	scanf("%s %s",&man3.name,&man3.phon);
	gets(man3.home);
	printf("man1 �̸�: %s, ��ȣ:%s , �ּ�:%s\n",man1.name, man1.phon,man1.home);
	printf("man2 �̸�: %s, ��ȣ:%s , �ּ�:%s\n",man2.name, man2.phon,man2.home);
	printf("man3 �̸�: %s, ��ȣ:%s , �ּ�:%s\n",man3.name, man3.phon,man3.home);
	return 0;
}
//--------------------------------------------------------------------------------------------
struct circle {
	int x;
	int y;
	double r;
	int S;
	int a;
};
int main()
{
	struct circle c;
	c.x = 2;
	c.y = 0;
	c.r = 3.0;
	c.S = c.r*c.r;
	c.a = 2*c.r;
	printf("c�� ��ǥ(%d, %d) , c4�� ������: %.1lf, c�� ����%d�� , c�� �ѷ� %d��\n",c.x,c.y,c.r,c.S,c.a);
	return 0;
}
